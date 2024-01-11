#include <iostream>
#include <Windows.h>
#include "hack.h"

BOOL WINAPI DllMain(HINSTANCE hModule, DWORD fdwReason, LPVOID lpvReserved) {
    if(fdwReason == DLL_PROCESS_ATTACH) {
        HANDLE handle = CreateThread(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(hack::run), hModule, 0, nullptr);
        CloseHandle(handle);
    }

    return true;
}
