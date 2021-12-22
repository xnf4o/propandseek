/*
 * xnf4o | p5ych0p4th1c#0458
 */
#pragma once
#include "../SDK.h"
using namespace CG;

class Globals
{
public:
	ULocalPlayer* local_player;
	UFont* NamesFont;
	UKismetTextLibrary* UKismetTextLibrary;
	APlayerController* LocalPlayerController;
	HINSTANCE base;
};

extern Globals* globals;

