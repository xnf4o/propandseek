/*
 * xnf4o | p5ych0p4th1c#0458
 */
#include "../include.h"
#include "hooks.h"
#include "../logger/Logger.h"
#include "../entity.h"

#include "../minhook/MinHook.h"
#pragma comment(lib, "./minhook/MinHook.lib")

using fn_pr = void(__thiscall*)(UGameViewportClient*, UCanvas*);
fn_pr post_render_original = nullptr;

using fn_pe = void(__thiscall*)(UObject* caller, UFunction* func, void* params);
fn_pe process_event_original = nullptr;

bool Hooks::init()
{
	MH_Initialize();
	const auto original_ProcessEvent = static_cast<fn_pe>(static_cast<void**>(UObject::StaticClass()->VfTable)[64]);
	if (MH_CreateHook(original_ProcessEvent, ProcessEventHook, reinterpret_cast<void**>(&process_event_original)) !=
		MH_OK)
	{
		Logger::Log("[ERROR] process event !\n");
		return false;
	}
	Logger::Log("[hooks] process event hooked!\n");

	const auto original_PostRender = static_cast<fn_pr>(static_cast<void**>(UGameViewportClient::StaticClass()->
	                                                                        CreateDefaultObject()->VfTable)[92]);
	if (MH_CreateHook(original_PostRender, PostRenderHook, reinterpret_cast<void**>(&post_render_original)) != MH_OK)
	{
		Logger::Log("[ERROR] post render !\n");
		return false;
	}
	Logger::Log("[hooks] post render created and hooked!\n");

	MH_EnableHook(nullptr);

	return true;
}

void Hooks::ProcessEventHook(UObject* caller, UFunction* func, void* params)
{
	auto name = func->GetFullName();
	if (caller->Name.GetName().find("Password") != std::string::npos)
	{
		if (caller->IsA(UEnterPassword_C::StaticClass()) && func->Name.GetName() == "OnMouseMove")
		{
			if (const auto obj = static_cast<UEnterPassword_C*>(caller))
			{
				obj->Password = obj->RealPassword;
			}
		}
	}

	return process_event_original(caller, func, params);
}

void Hooks::PostRenderHook(UGameViewportClient* viewport, UCanvas* canvas)
{
	drawing->release(canvas);
	Entity::loop();

	return post_render_original(viewport, canvas);
}
