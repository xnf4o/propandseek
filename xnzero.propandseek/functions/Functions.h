/*
 * xnf4o | p5ych0p4th1c#0458
 */
#pragma once
#include "../SDK.h"

using namespace CG;

class Functions
{
public:
	static UWorld* GetWorld();
	static TArray<ULevel*> GetLevels();
	static ULevel* GetPersistentLevel();
	static UGameInstance* GetGameInstance();
	static ULocalPlayer* GetLocalPlayer();
	static APlayerController* GetLocalPlayerController();
	static APawn* GetLocalPlayerPawn();
	static ACharacter* GetLocalCharacter();
	static USceneComponent* GetLocalRootComponent();
	static FVector GetLocalPosition();
	static inline UFont* NamesFont;
};
