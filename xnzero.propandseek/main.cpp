/*
 * xnf4o | p5ych0p4th1c#0458
 */
#include "entity.h"
#include <cstdio>
#include <string>

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:
		{
			auto RandomTitle = [](int iterations)
			{
				std::string Title;
				for (int i = 0; i < iterations; i++)
					Title += rand() % 255 + 1;
				return Title;
			};
			AllocConsole();
			SetConsoleTitleA(RandomTitle(rand() % 8 + 4).c_str());
			freopen("CONIN$", "r", stdin);
			freopen("CONOUT$", "w", stdout);

			DisableThreadLibraryCalls(hinstDLL);
			
			if (!Entity::init())
			{
				return FALSE;
			}

			break;
		}
	}

	return TRUE;
}
