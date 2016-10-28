#include "main.h"

//!Dichiarazioni Speciali
extern "C" __declspec(dllexport) void __stdcall InfoSistema();
extern "C" __declspec(dllexport) void __stdcall CreateDb();
extern "C" __declspec(dllexport) void __stdcall CreateTable();

//!Definizioni per tipo
typedef ofstream Database;


//!Info della libreria
void MyLDC::InfoSistema()
{

    MessageBoxA(0,"Welcome to MyLDC", "DLL Message", MB_OK | MB_ICONINFORMATION);
}



//!Creazione di un Database
void MyLDC::CreateDb()
{


 ofstream db ("database.bin", ios::out | ios::app | ios::binary);
  db << "First_Database";
  db.close();


}


void MyLDC::CreateTable(string tablename,string primaryKey)
{
    ofstream tb ("table.bin", ios::out | ios::app | ios::binary);
    tb << tablename << "|" << primaryKey;
    tb.close();
}



