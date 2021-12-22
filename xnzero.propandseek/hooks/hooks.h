/*
 * xnf4o | p5ych0p4th1c#0458
 */
#pragma once
#include "../SDK.h"

using namespace CG;

class Hooks
{
	static void ProcessEventHook(UObject* caller, UFunction* func, void* params);
	static void PostRenderHook(UGameViewportClient* viewport, UCanvas* canvas);
public:
	static bool init();
};
