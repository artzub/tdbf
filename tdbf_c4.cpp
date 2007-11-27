//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
USERES("tdbf_c4.res");
USEPACKAGE("vcl40.bpi");
USEPACKAGE("vcldb40.bpi");
USEUNIT("dbf_wtil.pas");
USEUNIT("dbf.pas");
USERES("dbf.dcr");
USEUNIT("dbf_avl.pas");
USEUNIT("dbf_collate.pas");
USEUNIT("dbf_common.pas");
USEUNIT("dbf_cursor.pas");
USEUNIT("dbf_dbffile.pas");
USEUNIT("dbf_fields.pas");
USEUNIT("dbf_idxcur.pas");
USEUNIT("dbf_idxfile.pas");
USEUNIT("dbf_lang.pas");
USEUNIT("dbf_memo.pas");
USEUNIT("dbf_parser.pas");
USEUNIT("dbf_pgcfile.pas");
USEUNIT("dbf_pgfile.pas");
USEUNIT("dbf_prscore.pas");
USEUNIT("dbf_prsdef.pas");
USEUNIT("dbf_prssupp.pas");
USEUNIT("dbf_reg.pas");
USEUNIT("dbf_str.pas");
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------
//   Package source.
//---------------------------------------------------------------------------
int WINAPI DllEntryPoint(HINSTANCE hinst, unsigned long reason, void*)
{
    return 1;
}
//---------------------------------------------------------------------------
