/*
 * xnf4o | p5ych0p4th1c#0458
 */
#include "../include.h"
#include "Functions.h"

UWorld* Functions::GetWorld()
{
	return *reinterpret_cast<UWorld**>(reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr)) + offsets->u_world);
}

TArray<class ULevel*> Functions::GetLevels()
{
	return GetWorld()->Levels;
}

ULevel* Functions::GetPersistentLevel()
{
	return GetWorld()->PersistentLevel;
}

UGameInstance* Functions::GetGameInstance()
{
	return GetWorld()->OwningGameInstance;
}

ULocalPlayer* Functions::GetLocalPlayer()
{
	return GetGameInstance()->LocalPlayers[0];
}

APlayerController* Functions::GetLocalPlayerController()
{
	return GetLocalPlayer()->PlayerController;
}

APawn* Functions::GetLocalPlayerPawn()
{
	return GetLocalPlayerController()->AcknowledgedPawn;
}

ACharacter* Functions::GetLocalCharacter()
{
	return GetLocalPlayerController()->Character;
}

USceneComponent* Functions::GetLocalRootComponent()
{
	return GetLocalCharacter()->RootComponent;
}

FVector Functions::GetLocalPosition()
{
	return GetLocalCharacter()->K2_GetActorLocation();
}
