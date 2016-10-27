#include "main.h"

extern "C" __declspec(dllexport) void __stdcall InfoSistema();

void Info::InfoSistema()
{

    MessageBoxA(0,"Ciao Daemond", "DLL Message", MB_OK | MB_ICONINFORMATION);
}
