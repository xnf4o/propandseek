/*
 * xnf4o | p5ych0p4th1c#0458
 */
#include "include.h"
#include "entity.h"

#include "globals/globals.hpp"
#include "drawing/drawing.hpp"
#include "functions/Functions.h"
#include "hooks/hooks.h"
using namespace CG;

bool auto_heal;
bool outline;
bool rapid_fire;

void Entity::functions() {
	const auto lc = Functions::GetLocalCharacter();
	if (!lc) return;
	if (lc->IsA(AProp_C::StaticClass()))
	{
		const auto l_prop = static_cast<AProp_C*>(lc);

		drawing->text("[PROP BUTTONS]", { 10, 25 });
		drawing->text("[CAPS] Jump", { 10, 45 });
		drawing->text("[F3] Disable collision", { 10, 65 });
		drawing->text("[SHIFT] Speedhack", { 10, 85 });
		l_prop->CapsuleComponent->SetCollisionResponseToAllChannels(
			GetAsyncKeyState(VK_F3) & 0x8000
			? Engine_ECollisionResponse::ECR_Ignore
			: Engine_ECollisionResponse::ECR_Block);
		if (GetAsyncKeyState(VK_CAPITAL) & 0x8000)
		{
			l_prop->JumpMaxCount = 256;
			l_prop->JumpCount = 0;
			l_prop->JumpCurrentCount = 0;
			l_prop->Jump_Server();
			l_prop->Jump();
		}
		if (GetAsyncKeyState(VK_SHIFT) & 0x8000)
		{
			l_prop->DefaultWalkSpeed = 1500;
			l_prop->CharacterMovement->MaxWalkSpeed = 1500;
		}
		else
		{
			l_prop->DefaultWalkSpeed = 500;
			l_prop->CharacterMovement->MaxWalkSpeed = 500;
		}
	}
	else if (lc->IsA(AFPS_Character2_C::StaticClass()))
	{
		drawing->text("[HUNTER BUTTONS]", { 10, 25 });
		drawing->text("[CAPS] Jump", { 10, 45 });
		drawing->text("[F3] Disable collision", { 10, 65 });
		drawing->text("[F4] Auto heal", { 10, 85 });
		drawing->text("[F5] Rapid Fire", { 10, 105 });
		drawing->text("[F6] Toggle outline props", { 10, 125 });
		drawing->text("[ALT] Jet Pack", { 10, 145 });

		if (GetAsyncKeyState(VK_F4) & 1)
		{
			auto_heal = !auto_heal;
		}
		if (GetAsyncKeyState(VK_F6) & 1)
		{
			outline = !outline;
		}
		if (GetAsyncKeyState(VK_F5) & 1)
		{
			rapid_fire = !rapid_fire;
		}

		const auto local_fps = static_cast<AFPS_Character2_C*>(lc);
		if (auto_heal) local_fps->AddHealthToSelf(100);
		local_fps->CapsuleComponent->SetCollisionResponseToAllChannels(
			GetAsyncKeyState(VK_F3) & 0x8000
			? Engine_ECollisionResponse::ECR_Ignore
			: Engine_ECollisionResponse::ECR_Block);
		if (GetAsyncKeyState(VK_MENU) & 0x1)
		{
			local_fps->Jetpack_Server();
		}
		if (rapid_fire && (GetAsyncKeyState(VK_LBUTTON) & 0x8000))
		{
			local_fps->FPP_Shoot();
		}
		if (GetAsyncKeyState(VK_CAPITAL) & 0x8000)
		{
			local_fps->Jump_Server();
		}
	}
}

void Entity::loop()
{
	try
	{
		do
		{
			auto a_actors = *reinterpret_cast<TArray<AActor*>*>(reinterpret_cast<uintptr_t>(
				Functions::GetPersistentLevel()) + 0x98);
			for (int i = 0; i >= a_actors.Num(); i++)
			{
				if (!a_actors.IsValidIndex(i))
					continue;

				const auto a_actor = a_actors[i];
				if (!a_actor) continue;

				if (a_actor->IsA(AProp_C::StaticClass()))
				{
					const auto prop = static_cast<AProp_C*>(a_actor);
					if (outline)
					{
						prop->OutlineEffects(EOutlineEffects_EOutlineEffects::EOutlineEffects__NewEnumerator2);
					}
					else
					{
						prop->OutlineEffects(EOutlineEffects_EOutlineEffects::EOutlineEffects__NewEnumerator0);
					}
					
				}
				
			}
			functions();
		}
		while (false);
	}
	catch (...)
	{
	}
}

UFont* find_font(const std::string& name)
{
	const auto& objs = UObject::GetGlobalObjects();
	for (int i = 0; i < objs.Num(); i++)
	{
		if (const auto item = objs.GetByIndex(i))
		{
			if (item->IsA(UFont::StaticClass()) && item->GetName() == name)
				return reinterpret_cast<UFont*>(item);
		}
	}
	return nullptr;
}

bool Entity::init()
{
	[[maybe_unused]] auto offsets = new Offsets();

	if (!Logger::Init())
	{
		Logger::Log(_xor_("[err] failed to initialize logger\n").c_str());
	}
	if (!InitSdk())
	{
		Logger::Log(_xor_("[err] failed to initialize sdk\n").c_str());
		return false;
	}
	globals->NamesFont = find_font("F_Barlow_Condensed");
	globals->UKismetTextLibrary = reinterpret_cast<UKismetTextLibrary*>(UKismetTextLibrary::StaticClass());
	if (!Hooks::init())
	{
		Logger::Log(_xor_("[err] failed to initialize hooks\n").c_str());
		return false;
	}

	return true;
}
