#include "OOC/SymbolTable/Predef.d"
#include "__oo2c.h"

static OOC_SymbolTable__Name OOC_SymbolTable_Predef__GetName(const OOC_CHAR8 name__ref[], OOC_LEN name_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)
  OOC_SymbolTable__Name n;
  OOC_Scanner_InputBuffer__CharArray str;

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Name.baseTypes[0]);
  n = (OOC_SymbolTable__Name)i0;
  i1 = Strings__Length((void*)(OOC_INT32)name, name_0d);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i1+1));
  str = (OOC_Scanner_InputBuffer__CharArray)i1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 5598)), 0);
  _copy_8((OOC_INT32)name,(_check_pointer(i1, 5598)),i2);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i0, (OOC_Scanner_InputBuffer__CharArray)i1, 0, 1, 0);
  return (OOC_SymbolTable__Name)i0;
  ;
}

static OOC_SymbolTable__PredefType OOC_SymbolTable_Predef__PredefType(OOC_SymbolTable_Builder__Builder stb, OOC_SymbolTable__Module module, OOC_INT16 id, const OOC_CHAR8 name__ref[], OOC_LEN name_0d, OOC_INT32 size, OOC_INT16 align, Language__Value minValue, Language__Value maxValue) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)
  OOC_SymbolTable__PredefType ptype;

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)stb;
  i1 = (OOC_INT32)module;
  i2 = id;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6046)))), OOC_SymbolTable_Builder__BuilderDesc_NewPredefType)),OOC_SymbolTable_Builder__BuilderDesc_NewPredefType)((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Item)i1, i2);
  ptype = (OOC_SymbolTable__PredefType)i3;
  i4 = size;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 6085)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i3, i4, i4);
  i4 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i4 = _check_pointer(i4, 6139);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT16, 6139))*4) = i3;
  i4 = (OOC_INT32)minValue;
  *(OOC_INT32*)((OOC_INT32)OOC_SymbolTable_Predef__minConst+(_check_index(i2, 16, OOC_UINT16, 6166))*4) = i4;
  i4 = (OOC_INT32)maxValue;
  *(OOC_INT32*)((OOC_INT32)OOC_SymbolTable_Predef__maxConst+(_check_index(i2, 16, OOC_UINT16, 6196))*4) = i4;
  i2 = (
  _cmp8((const void*)(OOC_INT32)name,(const void*)""))!=0;
  if (!i2) goto l4;
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetName((void*)(OOC_INT32)name, name_0d);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6256)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, 0, 1, (OOC_Doc__Document)(OOC_INT32)0, (OOC_SymbolTable__Type)i3);
l4:
  return (OOC_SymbolTable__PredefType)i3;
  ;
}

static void OOC_SymbolTable_Predef__TypeAlias(OOC_SymbolTable_Builder__Builder stb, OOC_SymbolTable__Module module, const OOC_CHAR8 name__ref[], OOC_LEN name_0d, OOC_SymbolTable__PredefType baseType) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)stb;
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetName((void*)(OOC_INT32)name, name_0d);
  i2 = (OOC_INT32)module;
  i3 = (OOC_INT32)baseType;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6614)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i1, 0, 1, (OOC_Doc__Document)(OOC_INT32)0, (OOC_SymbolTable__Type)i3);
  return;
  ;
}

static void OOC_SymbolTable_Predef__PredefProc(OOC_SymbolTable_Builder__Builder stb, OOC_SymbolTable__Module module, OOC_INT16 id, const OOC_CHAR8 name__ref[], OOC_LEN name_0d, OOC_INT16 minArgs, OOC_INT16 maxArgs) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)stb;
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetName((void*)(OOC_INT32)name, name_0d);
  i2 = (OOC_INT32)module;
  i3 = id;
  i4 = minArgs;
  i5 = maxArgs;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6971)))), OOC_SymbolTable_Builder__BuilderDesc_NewPredefProc)),OOC_SymbolTable_Builder__BuilderDesc_NewPredefProc)((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i1, i3, i4, i5);
  return;
  ;
}

OOC_SymbolTable__Module OOC_SymbolTable_Predef__CreatePredef(OOC_SymbolTable_Builder__Builder stb) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Module module;
  OOC_SymbolTable__PredefType ptype;
  OOC_SymbolTable__Redirect redir;
  auto void OOC_SymbolTable_Predef__CreatePredef_PredefConst(const OOC_CHAR8 name__ref[], OOC_LEN name_0d, Language__Value value, OOC_SymbolTable__PredefType type);
    
    void OOC_SymbolTable_Predef__CreatePredef_PredefConst(const OOC_CHAR8 name__ref[], OOC_LEN name_0d, Language__Value value, OOC_SymbolTable__PredefType type) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)

      OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
      i0 = (OOC_INT32)stb;
      i1 = (OOC_INT32)module;
      i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetName((void*)(OOC_INT32)name, name_0d);
      i3 = (OOC_INT32)value;
      i4 = (OOC_INT32)type;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7735)))), OOC_SymbolTable_Builder__BuilderDesc_NewConstDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewConstDecl)((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, 0, 1, (OOC_Doc__Document)(OOC_INT32)0, (Language__Value)i3, (OOC_SymbolTable__PredefType)i4, (OOC_AST__Node)(OOC_INT32)0);
      return;
      ;
    }


  i0 = (OOC_INT32)stb;
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetName("#predef", 8);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7902)))), OOC_SymbolTable_Builder__BuilderDesc_NewModule)),OOC_SymbolTable_Builder__BuilderDesc_NewModule)((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Name)i1, (OOC_Doc__Document)(OOC_INT32)0, 1, 1, (OOC_AST__Node)(OOC_INT32)0);
  module = (OOC_SymbolTable__Module)i1;
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Module)i1, 0, "BOOLEAN", 8, 1, 1, (Language__Value)(OOC_INT32)0, (Language__Value)(OOC_INT32)0);
  ptype = (OOC_SymbolTable__PredefType)i0;
  i1 = (OOC_INT32)Language_Boolean__New(OOC_FALSE);
  OOC_SymbolTable_Predef__CreatePredef_PredefConst("FALSE", 6, (Language__Value)i1, (OOC_SymbolTable__PredefType)i0);
  i0 = (OOC_INT32)Language_Boolean__New(OOC_TRUE);
  i1 = (OOC_INT32)ptype;
  OOC_SymbolTable_Predef__CreatePredef_PredefConst("TRUE", 5, (Language__Value)i0, (OOC_SymbolTable__PredefType)i1);
  i0 = (OOC_INT32)Language_String8__NewChar((OOC_CHAR8)'\000');
  i1 = (OOC_INT32)Language_String8__NewChar((OOC_CHAR8)'\377');
  i2 = (OOC_INT32)stb;
  i3 = (OOC_INT32)module;
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 1, "CHAR", 5, 1, 1, (Language__Value)i0, (Language__Value)i1);
  i0 = (OOC_INT32)Language_String16__NewChar((OOC_CHAR16)0);
  i1 = (OOC_INT32)Language_String16__NewChar((OOC_CHAR16)65535);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 2, "LONGCHAR", 9, 2, 2, (Language__Value)i0, (Language__Value)i1);
  i0 = (OOC_INT32)Language_Integer__New(-128);
  i1 = (OOC_INT32)Language_Integer__New(127);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 3, "SHORTINT", 9, 1, 1, (Language__Value)i0, (Language__Value)i1);
  i0 = (OOC_INT32)Language_Integer__New(-32768);
  i1 = (OOC_INT32)Language_Integer__New(32767);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 4, "INTEGER", 8, 2, 2, (Language__Value)i0, (Language__Value)i1);
  i0 = (OOC_INT32)Language_Integer__New((-2147483647-1));
  i1 = (OOC_INT32)Language_Integer__New(2147483647);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 5, "LONGINT", 8, 4, 4, (Language__Value)i0, (Language__Value)i1);
  i0 = (OOC_INT32)Language_Integer__NewString("-9223372036854775808", 21);
  i1 = (OOC_INT32)Language_Integer__NewString("9223372036854775807", 20);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 6, "HUGEINT", 8, 8, 8, (Language__Value)i0, (Language__Value)i1);
  i0 = (OOC_INT32)Language_Real__New(-3.4028234663852886E+38);
  i1 = (OOC_INT32)Language_Real__New(3.4028234663852886E+38);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 7, "REAL", 5, 4, 4, (Language__Value)i0, (Language__Value)i1);
  i0 = (OOC_INT32)Language_Real__New(-1.7976931348623157E+308);
  i1 = (OOC_INT32)Language_Real__New(1.7976931348623157E+308);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 8, "LONGREAL", 9, 8, 8, (Language__Value)i0, (Language__Value)i1);
  i0 = (OOC_INT32)Language_Integer__New(0);
  i1 = (OOC_INT32)Language_Integer__New(31);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 9, "SET", 4, 4, 4, (Language__Value)i0, (Language__Value)i1);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 12, "", 1, -1, 1, (Language__Value)(OOC_INT32)0, (Language__Value)(OOC_INT32)0);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 13, "", 1, -1, 2, (Language__Value)(OOC_INT32)0, (Language__Value)(OOC_INT32)0);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 14, "", 1, 4, 4, (Language__Value)(OOC_INT32)0, (Language__Value)(OOC_INT32)0);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 15, "", 1, 0, 1, (Language__Value)(OOC_INT32)0, (Language__Value)(OOC_INT32)0);
  ptype = (OOC_SymbolTable__PredefType)i0;
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetName("STRING", 7);
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__nameStringModule;
  i4 = (OOC_INT32)OOC_SymbolTable_Predef__nameStringType;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10246)))), OOC_SymbolTable_Builder__BuilderDesc_NewRedirect)),OOC_SymbolTable_Builder__BuilderDesc_NewRedirect)((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Name)i0, (OOC_SymbolTable__Name)i1, (OOC_SymbolTable__Name)i4);
  redir = (OOC_SymbolTable__Redirect)i0;
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 0, "ASSERT", 7, 1, 2);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 1, "HALT", 5, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 2, "LEN", 4, 1, 2);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 3, "SIZE", 5, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 4, "INC", 4, 1, 2);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 5, "DEC", 4, 1, 2);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 6, "INCL", 5, 2, 2);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 7, "EXCL", 5, 2, 2);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 8, "ABS", 4, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 9, "ASH", 4, 2, 2);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 10, "CAP", 4, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 11, "LONG", 5, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 12, "SHORT", 6, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 13, "CHR", 4, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 14, "LONGCHR", 8, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 15, "ENTIER", 7, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 16, "ODD", 4, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 17, "ORD", 4, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 18, "MAX", 4, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 19, "MIN", 4, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 20, "NEW", 4, 1, 32767);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 21, "COPY", 5, 2, 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11477)))), OOC_SymbolTable_Builder__BuilderDesc_Finalize)),OOC_SymbolTable_Builder__BuilderDesc_Finalize)((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3);
  return (OOC_SymbolTable__Module)i3;
  ;
}

OOC_SymbolTable__Module OOC_SymbolTable_Predef__CreateSYSTEM(OOC_SymbolTable_Builder__Builder stb) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Module module;
  OOC_SymbolTable__PredefType ptype;

  i0 = (OOC_INT32)stb;
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetName("SYSTEM", 7);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11747)))), OOC_SymbolTable_Builder__BuilderDesc_NewModule)),OOC_SymbolTable_Builder__BuilderDesc_NewModule)((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Name)i1, (OOC_Doc__Document)(OOC_INT32)0, 1, 1, (OOC_AST__Node)(OOC_INT32)0);
  module = (OOC_SymbolTable__Module)i1;
  i2 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i2 = _check_pointer(i2, 11917);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(5, i3, OOC_UINT8, 11917))*4);
  OOC_SymbolTable_Predef__TypeAlias((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Module)i1, "ADDRESS", 8, (OOC_SymbolTable__PredefType)i2);
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Module)i1, 10, "BYTE", 5, 1, 1, (Language__Value)(OOC_INT32)0, (Language__Value)(OOC_INT32)0);
  ptype = (OOC_SymbolTable__PredefType)i2;
  i2 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i3 = _check_pointer(i2, 12091);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(5, i4, OOC_UINT8, 12091))*4);
  i2 = _check_pointer(i2, 12150);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(5, i4, OOC_UINT8, 12150))*4);
  i3 = *(OOC_INT32*)((_check_pointer(i3, 12100))+24);
  i2 = *(OOC_INT16*)((_check_pointer(i2, 12159))+28);
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Module)i1, 11, "PTR", 4, i3, i2, (Language__Value)(OOC_INT32)0, (Language__Value)(OOC_INT32)0);
  ptype = (OOC_SymbolTable__PredefType)i2;
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Module)i1, 22, "ADR", 4, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Module)i1, 23, "LSH", 4, 2, 2);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Module)i1, 24, "MOVE", 5, 3, 3);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Module)i1, 25, "NEW", 4, 2, 2);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Module)i1, 26, "ROT", 4, 2, 2);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Module)i1, 27, "VAL", 4, 2, 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12512)))), OOC_SymbolTable_Builder__BuilderDesc_Finalize)),OOC_SymbolTable_Builder__BuilderDesc_Finalize)((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Module)i1);
  return (OOC_SymbolTable__Module)i1;
  ;
}

OOC_SymbolTable__PredefType OOC_SymbolTable_Predef__GetType(OOC_INT16 id) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i0 = _check_pointer(i0, 12664);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = id;
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i2, i1, OOC_UINT16, 12664))*4);
  return (OOC_SymbolTable__PredefType)i0;
  ;
}

Language__Value OOC_SymbolTable_Predef__GetMin(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12758)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return (Language__Value)(OOC_INT32)0;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 12804))+32);
  i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_SymbolTable_Predef__minConst+(_check_index(i0, 16, OOC_UINT16, 12799))*4);
  return (Language__Value)i0;
l4:
  _failed_function(12695); return 0;
  ;
}

Language__Value OOC_SymbolTable_Predef__GetMax(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12935)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return (Language__Value)(OOC_INT32)0;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 12981))+32);
  i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_SymbolTable_Predef__maxConst+(_check_index(i0, 16, OOC_UINT16, 12976))*4);
  return (Language__Value)i0;
l4:
  _failed_function(12872); return 0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable_Predef__SmallestIntType(Language_Integer__Value value) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT16 i;

  i = 3;
  i0 = (OOC_INT32)value;
  i1=3;
l1_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_SymbolTable_Predef__minConst+(_check_index(i1, 16, OOC_UINT16, 13271))*4);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13254)))), Language_Integer__ValueDesc_Compare)),Language_Integer__ValueDesc_Compare)((Language_Integer__Value)i0, (ADT_Object__Object)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13283)))), &_td_Language_Integer__ValueDesc, 13283)));
  i2 = i2>=0;
  if (i2) goto l4;
  i2=OOC_FALSE;
  goto l6;
l4:
  i2 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_SymbolTable_Predef__maxConst+(_check_index(i1, 16, OOC_UINT16, 13331))*4);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13314)))), Language_Integer__ValueDesc_Compare)),Language_Integer__ValueDesc_Compare)((Language_Integer__Value)i0, (ADT_Object__Object)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13343)))), &_td_Language_Integer__ValueDesc, 13343)));
  i2 = i2<=0;
  
l6:
  if (!i2) goto l8;
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i1);
  return (OOC_SymbolTable__Type)i2;
l8:
  i1 = i1+1;
  i = i1;
  i2 = i1<=6;
  if (i2) goto l1_loop;
l12:
  return (OOC_SymbolTable__Type)(OOC_INT32)0;
  ;
}

static void OOC_SymbolTable_Predef__Init() {
  register OOC_INT32 i0,i1,i2;

  OOC_SymbolTable__predefIdToType = (void*)((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__32813.baseTypes[0], 16));
  i0=0;
l1_loop:
  *(OOC_INT32*)((OOC_INT32)OOC_SymbolTable_Predef__minConst+(_check_index(i0, 16, OOC_UINT32, 13578))*4) = (OOC_INT32)0;
  i1 = i0+1;
  i2 = i1<=15;
  *(OOC_INT32*)((OOC_INT32)OOC_SymbolTable_Predef__maxConst+(_check_index(i0, 16, OOC_UINT32, 13598))*4) = (OOC_INT32)0;
  if (!i2) goto l5;
  i0=i1;
  goto l1_loop;
l5:
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetName("-Language:String0", 18);
  OOC_SymbolTable_Predef__nameStringModule = (OOC_SymbolTable__Name)i0;
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetName("String", 7);
  OOC_SymbolTable_Predef__nameStringType = (OOC_SymbolTable__Name)i0;
  return;
  ;
}

void OOC_OOC_SymbolTable_Predef_init(void) {

  OOC_SymbolTable_Predef__Init();
  return;
  ;
}

/* --- */
