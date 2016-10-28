#include "main.h"

/***********************************************
 *   MyLDC - PUBLIC MIT LICENCE
 *   By Thejuster and Daemond
 ************************************************/




//!Special Declaration
extern "C" __declspec(dllexport) void __stdcall InfoSistema();
extern "C" __declspec(dllexport) void __stdcall CreateDb();
extern "C" __declspec(dllexport) void __stdcall CreateTable();


//Structure

//!Type definition
typedef ofstream Database;
typedef MyLDC::RowType Type;
typedef MyLDC::Index Indices;


//!Structure
typedef struct Rows
{
    string name;
    bool primaryKey;
    Type type;
    int lenght;
    string defined;
    MyLDC::Attributes attrib;
    bool Nullable;
    Indices index;
    bool AutoIncrement;
    string comment;

};
Rows rw;
Rows* row = &rw;



//!Library Info
void MyLDC::InfoSistema()
{

    MessageBoxA(0,"MyLDC Created by Thejuster and Daemond", "DLL Message", MB_OK | MB_ICONINFORMATION);
}



//!Database Creation
void MyLDC::CreateDb()
{


 ofstream db ("database.bin", ios::out | ios::app | ios::binary);
  db << "First_Database";
  db.close();


}



void MyLDC::CreateTable(string tablename,string primaryKey)
{


    //Simple Row Implementation
    row->name = "Example Row";
    row->AutoIncrement = true;
    row->primaryKey = true;
    row->comment = "Example Row";
    row->attrib = _UNSIGNED;
    row->type = INT;



    ofstream tb ("table.bin", ios::out | ios::app | ios::binary);
    tb << tablename << "|" << primaryKey;
    tb.close();



}



