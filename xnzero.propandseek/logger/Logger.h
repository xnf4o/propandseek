/*
 * xnf4o | p5ych0p4th1c#0458
 */
#pragma once
#include <d3d11.h>

class Logger
{
private:
	static inline HANDLE file = nullptr;
public:
	static bool Init();
	static bool Remove();
	static void Log(const char* format, ...);
};
