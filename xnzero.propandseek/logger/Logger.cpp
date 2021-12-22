/*
 * xnf4o | p5ych0p4th1c#0458
 */
#include "Logger.h"
#include <filesystem>
namespace fs = std::filesystem;
#define print(c, b, ...) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c); printf(b); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);  printf(__VA_ARGS__)

bool Logger::Init()
{
	fs::path log;
	wchar_t buf[MAX_PATH];
	//if (!GetModuleFileNameW(hinstDLL, buf, MAX_PATH)) return false;
	log = fs::path(buf).remove_filename() / "log.txt";
	file = CreateFileW(log.wstring().c_str(), GENERIC_WRITE, FILE_SHARE_READ, nullptr, CREATE_ALWAYS,
	                   FILE_ATTRIBUTE_NORMAL, nullptr);
	return file != INVALID_HANDLE_VALUE;
}

bool Logger::Remove()
{
	if (!file) return true;
	return CloseHandle(file);
}

void Logger::Log(const char* format, ...)
{
	SYSTEMTIME rawtime;
	GetSystemTime(&rawtime);
	char buf[MAX_PATH];
	auto size = GetTimeFormatA(LOCALE_CUSTOM_DEFAULT, 0, &rawtime, "[HH':'mm':'ss] ", buf, MAX_PATH) - 1;
	size += snprintf(buf + size, sizeof buf - size, "[TID: 0x%X] ", GetCurrentThreadId());
	va_list argptr;
	va_start(argptr, format);
	size += vsnprintf(buf + size, sizeof buf - size, format, argptr);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf(buf);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	WriteFile(file, buf, size, nullptr, nullptr);
	va_end(argptr);
}
