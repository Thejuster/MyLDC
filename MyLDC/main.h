
#include <windows.h>
#include <stdio.h>
#include <sstream>
#include <iostream>
#include <fstream>


using namespace std;

class MyLDC
{



public:
   void InfoSistema();
   void CreateDb();
   void CreateTable(string tablename,string primaryKey);


    //!Enumeration
    enum RowType
    {

     //Int Type
     SMALL_INT = 0x02,
     MEDIUM_INT = 0x03,
     INT = 0x04,
     BIG_INT = 0x05,

     DECIMAL = 0x06,
     FLOAT = 0x07,
     DOUBLE = 0x08,
     REAL = 0x09,

     BIT = 0x10,
     BOOLEAN = 0x11,
     SERIAL = 0x012,

     DATE = 0x13,
     DATETIME = 0x14,
     TIMESTAMP = 0x15,
     TIME = 0x16,
     YEAR = 0x17,

     CHAR = 0x18,
     VARCHAR = 0x19,

     TINYTEXT = 0x20,
     TEXT = 0x21,
     MEDIUMTEXT = 0x22,
     LONGTEXT = 0x23,

     BINARY = 0x24,
     VARBINARY = 0x25,

    };

    //!Attributes
    enum Attributes
    {
        _BINARY = 0x26,
        _UNSIGNED = 0x27
    };

    //!Indices
    enum Index
    {
        PRIMARY = 0x28,
        UNIQUE = 0x09,
        INDEX = 0x30,
        FULLTEXT = 0x31
    };



};
