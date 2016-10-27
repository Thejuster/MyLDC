#include "main.h"

extern "C" __declspec(dllexport) void __stdcall InfoSistema();
extern "C" __declspec(dllexport) std::string __stdcall Serializza(std::string valore);

void Info::InfoSistema()
{

    MessageBoxA(0,"Ciao Daemond", "DLL Message", MB_OK | MB_ICONINFORMATION);
}


std::string Info::Serializza(std::string valore)
{

    char* test = new char[20];
	memset(test,0x0,20);
	int i = 5;
	memcpy (test, &i, sizeof(int));
	std::ostringstream sout (std::ios_base::binary);
	sout.write(test, 20);
        int ipos = sout.tellp();

	// testout points to the start of some garbage....
	const char* testout = sout.str().data();


	return sout.str();
}
