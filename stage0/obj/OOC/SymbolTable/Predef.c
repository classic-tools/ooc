#include <OOC/SymbolTable/Predef.d>
#include <__oo2c.h>
#include <setjmp.h>

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
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 5905)), (OOC_INT32)0);
  _copy_8((const void*)(OOC_INT32)name,(void*)(_check_pointer(i1, 5905)),i2);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i0, (OOC_Scanner_InputBuffer__CharArray)i1, 0, 1, 0);
  return (OOC_SymbolTable__Name)i0;
  ;
}

static OOC_SymbolTable__PredefType OOC_SymbolTable_Predef__PredefType(OOC_SymbolTable_Builder__Builder stb, OOC_SymbolTable__Module module, OOC_INT16 id, const OOC_CHAR8 name__ref[], OOC_LEN name_0d, OOC_INT32 size, OOC_INT16 align, Object_Boxed__Object minValue, Object_Boxed__Object maxValue) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)
  OOC_SymbolTable__PredefType ptype;

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)stb;
  i1 = (OOC_INT32)module;
  i2 = id;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6351)))), OOC_SymbolTable_Builder__BuilderDesc_NewPredefType)),OOC_SymbolTable_Builder__BuilderDesc_NewPredefType)((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Item)i1, i2);
  ptype = (OOC_SymbolTable__PredefType)i3;
  i4 = size;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 6390)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i3, i4, i4);
  i4 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i4 = _check_pointer(i4, 6444);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT16, 6444))*4) = i3;
  i4 = (OOC_INT32)minValue;
  *(OOC_INT32*)((OOC_INT32)OOC_SymbolTable_Predef__minConst+(_check_index(i2, 18, OOC_UINT16, 6471))*4) = i4;
  i4 = (OOC_INT32)maxValue;
  *(OOC_INT32*)((OOC_INT32)OOC_SymbolTable_Predef__maxConst+(_check_index(i2, 18, OOC_UINT16, 6501))*4) = i4;
  i2 = (
  _cmp8((const void*)(OOC_INT32)name,(const void*)""))!=(OOC_INT32)0;
  if (!i2) goto l4;
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetName((void*)(OOC_INT32)name, name_0d);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6561)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, 0, 1, (OOC_Doc__Document)(OOC_INT32)0, (OOC_SymbolTable__Type)i3);
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
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6919)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i1, 0, 1, (OOC_Doc__Document)(OOC_INT32)0, (OOC_SymbolTable__Type)i3);
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
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7276)))), OOC_SymbolTable_Builder__BuilderDesc_NewPredefProc)),OOC_SymbolTable_Builder__BuilderDesc_NewPredefProc)((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i1, i3, i4, i5);
  return;
  ;
}

OOC_SymbolTable__Module OOC_SymbolTable_Predef__CreatePredef(OOC_SymbolTable_Builder__Builder stb) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Module module;
  OOC_SymbolTable__PredefType ptype;
  OOC_SymbolTable__Redirect redir;
  auto void OOC_SymbolTable_Predef__CreatePredef_PredefConst(const OOC_CHAR8 name__ref[], OOC_LEN name_0d, Object_Boxed__Object value, OOC_SymbolTable__PredefType type);
    
    void OOC_SymbolTable_Predef__CreatePredef_PredefConst(const OOC_CHAR8 name__ref[], OOC_LEN name_0d, Object_Boxed__Object value, OOC_SymbolTable__PredefType type) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)

      OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
      i0 = (OOC_INT32)stb;
      i1 = (OOC_INT32)module;
      i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetName((void*)(OOC_INT32)name, name_0d);
      i3 = (OOC_INT32)value;
      i4 = (OOC_INT32)type;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8038)))), OOC_SymbolTable_Builder__BuilderDesc_NewConstDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewConstDecl)((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, 0, 1, (OOC_Doc__Document)(OOC_INT32)0, (Object_Boxed__Object)i3, (OOC_SymbolTable__PredefType)i4, (OOC_AST__Node)(OOC_INT32)0);
      return;
      ;
    }


  i0 = (OOC_INT32)stb;
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetName("#predef", 8);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8205)))), OOC_SymbolTable_Builder__BuilderDesc_NewModule)),OOC_SymbolTable_Builder__BuilderDesc_NewModule)((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Name)i1, (OOC_Doc__Document)(OOC_INT32)0, 1, 1, (OOC_AST__Node)(OOC_INT32)0);
  module = (OOC_SymbolTable__Module)i1;
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Module)i1, 0, "BOOLEAN", 8, 1, 1, (Object_Boxed__Object)(OOC_INT32)0, (Object_Boxed__Object)(OOC_INT32)0);
  ptype = (OOC_SymbolTable__PredefType)i0;
  i1 = (OOC_INT32)Object_Boxed__false;
  OOC_SymbolTable_Predef__CreatePredef_PredefConst("FALSE", 6, (Object_Boxed__Object)i1, (OOC_SymbolTable__PredefType)i0);
  i0 = (OOC_INT32)Object_Boxed__true;
  i1 = (OOC_INT32)ptype;
  OOC_SymbolTable_Predef__CreatePredef_PredefConst("TRUE", 5, (Object_Boxed__Object)i0, (OOC_SymbolTable__PredefType)i1);
  i0 = (OOC_INT32)Object__NewLatin1Char((OOC_CHAR8)'\000');
  i0 = (OOC_INT32)Object_Boxed__NewString((Object__String)i0);
  i1 = (OOC_INT32)Object__NewLatin1Char((OOC_CHAR8)'\377');
  i1 = (OOC_INT32)Object_Boxed__NewString((Object__String)i1);
  i2 = (OOC_INT32)stb;
  i3 = (OOC_INT32)module;
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 1, "CHAR", 5, 1, 1, (Object_Boxed__Object)i0, (Object_Boxed__Object)i1);
  i0 = (OOC_INT32)Object__NewUCS2Char((OOC_CHAR16)0);
  i0 = (OOC_INT32)Object_Boxed__NewString((Object__String)i0);
  i1 = (OOC_INT32)Object__NewUCS2Char((OOC_CHAR16)65535);
  i1 = (OOC_INT32)Object_Boxed__NewString((Object__String)i1);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 2, "LONGCHAR", 9, 2, 2, (Object_Boxed__Object)i0, (Object_Boxed__Object)i1);
  i0 = (OOC_INT32)Object__NewUCS4Char((OOC_CHAR32)0);
  i0 = (OOC_INT32)Object_Boxed__NewString((Object__String)i0);
  i1 = (OOC_INT32)Object__NewUCS4Char((OOC_CHAR32)2147483647);
  i1 = (OOC_INT32)Object_Boxed__NewString((Object__String)i1);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 3, "UCS4CHAR", 9, 4, 4, (Object_Boxed__Object)i0, (Object_Boxed__Object)i1);
  i0 = (OOC_INT32)Object_BigInt__NewInt(-128);
  i1 = (OOC_INT32)Object_BigInt__NewInt(127);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 4, "SHORTINT", 9, 1, 1, (Object_Boxed__Object)i0, (Object_Boxed__Object)i1);
  i0 = (OOC_INT32)Object_BigInt__NewInt(-32768);
  i1 = (OOC_INT32)Object_BigInt__NewInt(32767);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 5, "INTEGER", 8, 2, 2, (Object_Boxed__Object)i0, (Object_Boxed__Object)i1);
  i0 = (OOC_INT32)Object_BigInt__NewInt((-2147483647-1));
  i1 = (OOC_INT32)Object_BigInt__NewInt(2147483647);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 6, "LONGINT", 8, 4, 4, (Object_Boxed__Object)i0, (Object_Boxed__Object)i1);
  i0 = (OOC_INT32)Object_BigInt__NewString("-9223372036854775808", 21, 10);
  i1 = (OOC_INT32)Object_BigInt__NewString("9223372036854775807", 20, 10);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 7, "HUGEINT", 8, 8, 8, (Object_Boxed__Object)i0, (Object_Boxed__Object)i1);
  i0 = (OOC_INT32)Object_Boxed__NewLongReal(-3.4028234663852886E+38);
  i1 = (OOC_INT32)Object_Boxed__NewLongReal(3.4028234663852886E+38);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 8, "REAL", 5, 4, 4, (Object_Boxed__Object)i0, (Object_Boxed__Object)i1);
  i0 = (OOC_INT32)Object_Boxed__NewLongReal(-1.7976931348623157E+308);
  i1 = (OOC_INT32)Object_Boxed__NewLongReal(1.7976931348623157E+308);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 9, "LONGREAL", 9, 8, 8, (Object_Boxed__Object)i0, (Object_Boxed__Object)i1);
  i0 = (OOC_INT32)Object_BigInt__NewInt((OOC_INT32)0);
  i1 = (OOC_INT32)Object_BigInt__NewInt(31);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 10, "SET", 4, 4, 4, (Object_Boxed__Object)i0, (Object_Boxed__Object)i1);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 13, "", 1, -1, 1, (Object_Boxed__Object)(OOC_INT32)0, (Object_Boxed__Object)(OOC_INT32)0);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 14, "", 1, -1, 2, (Object_Boxed__Object)(OOC_INT32)0, (Object_Boxed__Object)(OOC_INT32)0);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 15, "", 1, -1, 4, (Object_Boxed__Object)(OOC_INT32)0, (Object_Boxed__Object)(OOC_INT32)0);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 16, "", 1, 4, 4, (Object_Boxed__Object)(OOC_INT32)0, (Object_Boxed__Object)(OOC_INT32)0);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 17, "", 1, (OOC_INT32)0, 1, (Object_Boxed__Object)(OOC_INT32)0, (Object_Boxed__Object)(OOC_INT32)0);
  ptype = (OOC_SymbolTable__PredefType)i0;
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetName("STRING", 7);
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__nameStringModule;
  i4 = (OOC_INT32)OOC_SymbolTable_Predef__nameStringType;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10986)))), OOC_SymbolTable_Builder__BuilderDesc_NewRedirect)),OOC_SymbolTable_Builder__BuilderDesc_NewRedirect)((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Name)i0, (OOC_SymbolTable__Name)i1, (OOC_SymbolTable__Name)i4);
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
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 15, "UCS4CHR", 8, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 16, "ENTIER", 7, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 17, "ODD", 4, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 18, "ORD", 4, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 19, "MAX", 4, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 20, "MIN", 4, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 21, "NEW", 4, 1, 32767);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 22, "COPY", 5, 2, 2);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3, 23, "RAISE", 6, 1, 1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12325)))), OOC_SymbolTable_Builder__BuilderDesc_Finalize)),OOC_SymbolTable_Builder__BuilderDesc_Finalize)((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Module)i3);
  return (OOC_SymbolTable__Module)i3;
  ;
}

OOC_SymbolTable__Module OOC_SymbolTable_Predef__CreateSYSTEM(OOC_SymbolTable_Builder__Builder stb) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Module module;
  OOC_SymbolTable__PredefType ptype;

  i0 = (OOC_INT32)stb;
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetName("SYSTEM", 7);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12595)))), OOC_SymbolTable_Builder__BuilderDesc_NewModule)),OOC_SymbolTable_Builder__BuilderDesc_NewModule)((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Name)i1, (OOC_Doc__Document)(OOC_INT32)0, 1, 1, (OOC_AST__Node)(OOC_INT32)0);
  module = (OOC_SymbolTable__Module)i1;
  i2 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i2 = _check_pointer(i2, 12765);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(6, i3, OOC_UINT8, 12765))*4);
  OOC_SymbolTable_Predef__TypeAlias((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Module)i1, "ADDRESS", 8, (OOC_SymbolTable__PredefType)i2);
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Module)i1, 11, "BYTE", 5, 1, 1, (Object_Boxed__Object)(OOC_INT32)0, (Object_Boxed__Object)(OOC_INT32)0);
  ptype = (OOC_SymbolTable__PredefType)i2;
  i2 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i3 = _check_pointer(i2, 12939);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(6, i4, OOC_UINT8, 12939))*4);
  i2 = _check_pointer(i2, 12998);
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(6, i4, OOC_UINT8, 12998))*4);
  i3 = *(OOC_INT32*)((_check_pointer(i3, 12948))+24);
  i2 = *(OOC_INT16*)((_check_pointer(i2, 13007))+28);
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Module)i1, 12, "PTR", 4, i3, i2, (Object_Boxed__Object)(OOC_INT32)0, (Object_Boxed__Object)(OOC_INT32)0);
  ptype = (OOC_SymbolTable__PredefType)i2;
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Module)i1, 24, "ADR", 4, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Module)i1, 25, "LSH", 4, 2, 2);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Module)i1, 26, "MOVE", 5, 3, 3);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Module)i1, 27, "NEW", 4, 2, 2);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Module)i1, 28, "ROT", 4, 2, 2);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Module)i1, 29, "VAL", 4, 2, 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13360)))), OOC_SymbolTable_Builder__BuilderDesc_Finalize)),OOC_SymbolTable_Builder__BuilderDesc_Finalize)((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Module)i1);
  return (OOC_SymbolTable__Module)i1;
  ;
}

OOC_SymbolTable__PredefType OOC_SymbolTable_Predef__GetType(OOC_INT16 id) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i0 = _check_pointer(i0, 13512);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = id;
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i2, i1, OOC_UINT16, 13512))*4);
  return (OOC_SymbolTable__PredefType)i0;
  ;
}

Object_Boxed__Object OOC_SymbolTable_Predef__GetMin(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13604)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return (Object_Boxed__Object)(OOC_INT32)0;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 13650))+32);
  i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_SymbolTable_Predef__minConst+(_check_index(i0, 18, OOC_UINT16, 13645))*4);
  return (Object_Boxed__Object)i0;
l4:
  _failed_function(13543); return 0;
  ;
}

Object_Boxed__Object OOC_SymbolTable_Predef__GetMax(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13779)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return (Object_Boxed__Object)(OOC_INT32)0;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 13825))+32);
  i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_SymbolTable_Predef__maxConst+(_check_index(i0, 18, OOC_UINT16, 13820))*4);
  return (Object_Boxed__Object)i0;
l4:
  _failed_function(13718); return 0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable_Predef__SmallestIntType(Object_BigInt__BigInt value) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT16 i;

  i = 4;
  i0 = (OOC_INT32)value;
  i1=4;
l1_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_SymbolTable_Predef__minConst+(_check_index(i1, 18, OOC_UINT16, 14111))*4);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14098)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i0, (Object__Object)i2);
  i2 = i2>=0;
  if (i2) goto l4;
  i2=OOC_FALSE;
  goto l6;
l4:
  i2 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_SymbolTable_Predef__maxConst+(_check_index(i1, 18, OOC_UINT16, 14143))*4);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14130)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i0, (Object__Object)i2);
  i2 = i2<=0;
  
l6:
  if (!i2) goto l8;
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i1);
  return (OOC_SymbolTable__Type)i2;
l8:
  i1 = i1+1;
  i = i1;
  i2 = i1<=7;
  if (i2) goto l1_loop;
l12:
  return (OOC_SymbolTable__Type)(OOC_INT32)0;
  ;
}

static void OOC_SymbolTable_Predef__Init() {
  register OOC_INT32 i0,i1,i2;

  OOC_SymbolTable__predefIdToType = (void*)((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__34301.baseTypes[0], 18));
  i0=0;
l1_loop:
  *(OOC_INT32*)((OOC_INT32)OOC_SymbolTable_Predef__minConst+(_check_index(i0, 18, OOC_UINT32, 14375))*4) = (OOC_INT32)0;
  i1 = i0+1;
  i2 = i1<=17;
  *(OOC_INT32*)((OOC_INT32)OOC_SymbolTable_Predef__maxConst+(_check_index(i0, 18, OOC_UINT32, 14395))*4) = (OOC_INT32)0;
  if (!i2) goto l5;
  i0=i1;
  goto l1_loop;
l5:
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetName("-Object", 8);
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
