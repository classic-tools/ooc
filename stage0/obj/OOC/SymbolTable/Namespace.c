#include "OOC/SymbolTable/Namespace.d"
#include "__oo2c.h"

void OOC_SymbolTable_Namespace__ErrorContextDesc_GetTemplate(OOC_SymbolTable_Namespace__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3071))+8);
  switch (i1) {
  case 1:
    _copy_16((const void*)((OOC_CHAR16[]){77,117,108,116,105,112,108,101,32,100,101,99,108,97,114,97,116,105,111,110,32,111,102,32,115,97,109,101,32,110,97,109,101,0}),(void*)(OOC_INT32)t,128);
    goto l10;
  case 2:
    _copy_16((const void*)((OOC_CHAR16[]){65,32,114,101,99,111,114,100,32,109,101,109,98,101,114,32,111,102,32,116,104,105,115,32,110,97,109,101,32,97,108,114,101,97,100,121,32,101,120,105,115,116,115,0}),(void*)(OOC_INT32)t,128);
    goto l10;
  case 3:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,110,97,109,101,32,105,115,32,97,108,114,101,97,100,121,32,100,101,102,105,110,101,100,32,105,110,32,116,104,101,32,114,101,99,111,114,100,39,115,32,98,97,115,101,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l10;
  case 4:
    _copy_16((const void*)((OOC_CHAR16[]){65,32,102,105,101,108,100,32,111,102,32,116,104,105,115,32,110,97,109,101,32,105,115,32,97,108,114,101,97,100,121,32,100,101,102,105,110,101,100,32,102,111,114,32,116,104,101,32,98,97,115,101,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l10;
  case 5:
    _copy_16((const void*)((OOC_CHAR16[]){77,117,115,116,32,98,101,32,101,120,112,111,114,116,101,100,32,108,105,107,101,32,105,110,104,101,114,105,116,101,100,32,100,101,99,108,97,114,97,116,105,111,110,0}),(void*)(OOC_INT32)t,128);
    goto l10;
  case 6:
    _copy_16((const void*)((OOC_CHAR16[]){70,111,114,109,97,108,32,112,97,114,97,109,101,116,101,114,115,32,100,111,110,39,116,32,109,97,116,99,104,32,105,110,104,101,114,105,116,101,100,32,100,101,99,108,97,114,97,116,105,111,110,0}),(void*)(OOC_INT32)t,128);
    goto l10;
  case 7:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,112,114,111,99,101,100,117,114,101,32,114,101,100,101,102,105,110,101,115,32,97,32,112,114,111,99,101,100,117,114,101,32,116,104,97,116,32,105,115,32,100,101,99,108,97,114,101,100,32,108,97,116,101,114,0}),(void*)(OOC_INT32)t,128);
    goto l10;
  default:
    _failed_case(i1, 3063);
    goto l10;
  }
l10:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3733)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

static void OOC_SymbolTable_Namespace__InitNamespace(OOC_SymbolTable_Namespace__Namespace ns, OOC_SymbolTable__DeclarationArray da, OOC_INT32 len) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ns;
  OOC_SymbolTable__InitNamespace((OOC_SymbolTable__Namespace)i0);
  i1 = (OOC_INT32)da;
  *(OOC_INT32*)(_check_pointer(i0, 3935)) = i1;
  i1 = len;
  *(OOC_INT32*)((_check_pointer(i0, 3960))+4) = i1;
  return;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable_Namespace__NamespaceDesc_IdentifyLocal2(OOC_SymbolTable_Namespace__Namespace ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition, OOC_CHAR8 *baseNotExported) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 s;
  OOC_INT32 e;
  OOC_INT32 m;
  OOC_SymbolTable__Declaration decl;

  s = 0;
  i0 = (OOC_INT32)ns;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4366))+4);
  e = i1;
  i2 = 0<i1;
  if (i2) goto l3;
  i2=i1;i1=0;
  goto l13;
l3:
  i2 = (OOC_INT32)name;
  i3=i1;i1=0;
l4_loop:
  i4 = (i1+i3)>>1;
  m = i4;
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4437));
  i5 = _check_pointer(i5, 4448);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 4448))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 4451))+16);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 4457))+12);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4470))+12);
  i5 = (
  _cmp8((const void*)(_check_pointer(i5, 4462)),(const void*)(_check_pointer(i6, 4475))))<(OOC_INT32)0;
  if (i5) goto l7;
  e = i4;
  i3=i4;
  goto l8;
l7:
  i1 = i4+1;
  s = i1;
  
l8:
  i4 = i1<i3;
  if (i4) goto l4_loop;
l12:
  i2=i3;
l13:
  _assert((i1==i2), 127, 4549);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 4579))+4);
  i2 = i1<i2;
  if (i2) goto l16;
  i2=OOC_FALSE;
  goto l18;
l16:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4598));
  i2 = _check_pointer(i2, 4609);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 4609))*4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4612))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4618))+12);
  i3 = (OOC_INT32)name;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4631))+12);
  i2 = (
  _cmp8((const void*)(_check_pointer(i2, 4623)),(const void*)(_check_pointer(i3, 4636))))==(OOC_INT32)0;
  
l18:
  if (i2) goto l20;
  return (OOC_SymbolTable__Declaration)(OOC_INT32)0;
  goto l37;
l20:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4660));
  i0 = _check_pointer(i0, 4671);
  i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i1, i2, OOC_UINT32, 4671))*4);
  decl = (OOC_SymbolTable__Declaration)i0;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4690)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  i2 = (OOC_INT32)sourceContext;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4716)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i2);
  i1 = i1==i2;
  if (i1) goto l27;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 4962))+24);
  i1 = i1==0;
  if (!i1) goto l36;
  *baseNotExported = OOC_TRUE;
  i0=(OOC_INT32)0;
  goto l36;
l27:
  i1 = (OOC_INT32)name;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 4861))+20);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 4881));
  i1 = i2>i1;
  if (i1) goto l30;
  i1=OOC_FALSE;
  goto l32;
l30:
  i1 = ignorePosition;
  i1 = !i1;
  
l32:
  if (!i1) goto l36;
  i0=(OOC_INT32)0;
l36:
  return (OOC_SymbolTable__Declaration)i0;
l37:
  _failed_function(4028); return 0;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable_Namespace__NamespaceDesc_Identify2(OOC_SymbolTable_Namespace__Namespace ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition, OOC_CHAR8 *baseNotExported) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)ns;
  i1 = (OOC_INT32)sourceContext;
  i2 = (OOC_INT32)name;
  i3 = ignorePosition;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5529)))), OOC_SymbolTable_Namespace__NamespaceDesc_IdentifyLocal2)),OOC_SymbolTable_Namespace__NamespaceDesc_IdentifyLocal2)((OOC_SymbolTable_Namespace__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (void*)(OOC_INT32)baseNotExported);
  return (OOC_SymbolTable__Declaration)i0;
  ;
}

static void OOC_SymbolTable_Namespace__ErrDecl(OOC_INT32 code, OOC_SymbolTable__Declaration decl, OOC_Error__List errList) {
  register OOC_INT32 i0,i1,i2;
  Msg__Msg lastError;

  i0 = (OOC_INT32)OOC_SymbolTable_Namespace__namespaceContext;
  i1 = code;
  i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
  lastError = (Msg__Msg)i0;
  i1 = (OOC_INT32)decl;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5833))+16);
  i2 = *(OOC_INT32*)(_check_pointer(i2, 5839));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5806)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5888))+16);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 5894))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5860)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5946))+16);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 5952))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5916)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
  i1 = (OOC_INT32)errList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5974)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i1, (Msg__Msg)i0);
  return;
  ;
}

void OOC_SymbolTable_Namespace__NamespaceDesc_CheckLocalUniqueness(OOC_SymbolTable_Namespace__Namespace ns, OOC_Error__List errList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10;
  OOC_SymbolTable__DeclarationArray da;
  OOC_INT32 i;
  OOC_INT32 min;
  OOC_INT32 j;
  OOC_INT32 h;

  i0 = (OOC_INT32)ns;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6503));
  da = (OOC_SymbolTable__DeclarationArray)i1;
  i = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6545))+4);
  i2 = 0<(i2-1);
  if (!i2) goto l51;
  i2 = (OOC_INT32)errList;
  i3=0;
l3_loop:
  i4 = _check_pointer(i1, 6576);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 6576))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 6579))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 6585))+12);
  i5 = _check_pointer(i1, 6596);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index((i3+1), i6, OOC_UINT32, 6596))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 6601))+16);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 6607))+12);
  i4 = (
  _cmp8((const void*)(_check_pointer(i4, 6590)),(const void*)(_check_pointer(i5, 6612))))==(OOC_INT32)0;
  if (!i4) goto l46;
  i4 = i3+1;
  min = i3;
  j = i4;
  i5 = *(OOC_INT32*)((_check_pointer(i0, 6832))+4);
  i5 = i4<i5;
  if (i5) goto l8;
  i5=OOC_FALSE;
  goto l10;
l8:
  i5 = _check_pointer(i1, 6866);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 6866))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 6869))+16);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 6875))+12);
  i6 = _check_pointer(i1, 6886);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 6886))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 6889))+16);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 6895))+12);
  i5 = (
  _cmp8((const void*)(_check_pointer(i5, 6880)),(const void*)(_check_pointer(i6, 6900))))==(OOC_INT32)0;
  
l10:
  if (i5) goto l12;
  i5=i3;
  goto l26;
l12:
  i5=i3;
l13_loop:
  i6 = _check_pointer(i1, 6922);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 6922))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 6925))+16);
  i7 = _check_pointer(i1, 6941);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i5, i8, OOC_UINT32, 6941))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 6946))+16);
  i7 = *(OOC_INT32*)(_check_pointer(i7, 6952));
  i6 = *(OOC_INT32*)(_check_pointer(i6, 6931));
  i6 = i6<i7;
  if (!i6) goto l17;
  min = i4;
  i5=i4;
l17:
  i4 = i4+1;
  j = i4;
  i6 = *(OOC_INT32*)((_check_pointer(i0, 6832))+4);
  i6 = i4<i6;
  if (i6) goto l20;
  i6=OOC_FALSE;
  goto l22;
l20:
  i6 = _check_pointer(i1, 6866);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 6866))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 6869))+16);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 6875))+12);
  i7 = _check_pointer(i1, 6886);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 6886))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 6889))+16);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 6895))+12);
  i6 = (
  _cmp8((const void*)(_check_pointer(i6, 6880)),(const void*)(_check_pointer(i7, 6900))))==(OOC_INT32)0;
  
l22:
  if (i6) goto l13_loop;
l26:
  i6 = i4-1;
  i7 = i3<=i6;
  h = i3;
  if (!i7) goto l37;
  i7=i3;
l29_loop:
  i8 = i7!=i5;
  if (!i8) goto l32;
  i8 = _check_pointer(i1, 7197);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i7, i9, OOC_UINT32, 7197))*4);
  OOC_SymbolTable_Namespace__ErrDecl(1, (OOC_SymbolTable__Declaration)i8, (OOC_Error__List)i2);
l32:
  i7 = i7+1;
  i8 = i7<=i6;
  h = i7;
  if (i8) goto l29_loop;
l37:
  i6 = _check_pointer(i1, 7312);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i8 = _check_pointer(i1, 7321);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i5, i9, OOC_UINT32, 7321))*4);
  *(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 7312))*4) = i5;
  i4 = (i4-i3)-1;
  h = i4;
  i5 = *(OOC_INT32*)((_check_pointer(i0, 7378))+4);
  i6 = i3+(i4+1);
  i5 = i5-1;
  i7 = i6<=i5;
  j = i6;
  if (!i7) goto l45;
l40_loop:
  i7 = _check_pointer(i1, 7408);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i9 = _check_pointer(i1, 7419);
  i10 = OOC_ARRAY_LENGTH(i9, (OOC_INT32)0);
  i9 = (OOC_INT32)*(OOC_INT32*)(i9+(_check_index(i6, i10, OOC_UINT32, 7419))*4);
  *(OOC_INT32*)(i7+(_check_index((i6-i4), i8, OOC_UINT32, 7408))*4) = i9;
  i6 = i6+1;
  i7 = i6<=i5;
  j = i6;
  if (i7) goto l40_loop;
l45:
  i5 = *(OOC_INT32*)((_check_pointer(i0, 7451))+4);
  *(OOC_INT32*)((_check_pointer(i0, 7451))+4) = (i5-i4);
l46:
  i3 = i3+1;
  i = i3;
  i4 = *(OOC_INT32*)((_check_pointer(i0, 6545))+4);
  i4 = i3<(i4-1);
  if (i4) goto l3_loop;
l51:
  return;
  ;
}

static void OOC_SymbolTable_Namespace__InitNested(OOC_SymbolTable_Namespace__Nested ns, OOC_SymbolTable__DeclarationArray da, OOC_INT32 len) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)da;
  i1 = len;
  i2 = (OOC_INT32)ns;
  OOC_SymbolTable_Namespace__InitNamespace((OOC_SymbolTable_Namespace__Namespace)i2, (OOC_SymbolTable__DeclarationArray)i0, i1);
  *(OOC_INT32*)((_check_pointer(i2, 7686))+8) = (OOC_INT32)0;
  return;
  ;
}

OOC_SymbolTable_Namespace__Nested OOC_SymbolTable_Namespace__NewNested(OOC_SymbolTable__DeclarationArray da, OOC_INT32 len) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Namespace__Nested.baseTypes[0]);
  i1 = (OOC_INT32)da;
  i2 = len;
  OOC_SymbolTable_Namespace__InitNested((OOC_SymbolTable_Namespace__Nested)i0, (OOC_SymbolTable__DeclarationArray)i1, i2);
  return (OOC_SymbolTable_Namespace__Nested)i0;
  ;
}

void OOC_SymbolTable_Namespace__NestedDesc_SetEnclosingNamespace(OOC_SymbolTable_Namespace__Nested ns, OOC_SymbolTable_Namespace__Namespace ns0) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ns;
  i1 = (OOC_INT32)ns0;
  *(OOC_INT32*)((_check_pointer(i0, 8046))+8) = i1;
  return;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable_Namespace__NestedDesc_IdentifyLocal2(OOC_SymbolTable_Namespace__Nested ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition, OOC_CHAR8 *baseNotExported) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)ns;
  i1 = (OOC_INT32)sourceContext;
  i2 = (OOC_INT32)name;
  i3 = ignorePosition;
  i0 = (OOC_INT32)OOC_SymbolTable_Namespace__NamespaceDesc_IdentifyLocal2((OOC_SymbolTable_Namespace__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (void*)(OOC_INT32)baseNotExported);
  return (OOC_SymbolTable__Declaration)i0;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable_Namespace__NestedDesc_Identify2(OOC_SymbolTable_Namespace__Nested ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition, OOC_CHAR8 *baseNotExported) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_SymbolTable__Declaration decl;

  i0 = (OOC_INT32)ns;
  i1 = (OOC_INT32)sourceContext;
  i2 = (OOC_INT32)name;
  i3 = ignorePosition;
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8785)))), OOC_SymbolTable_Namespace__NestedDesc_IdentifyLocal2)),OOC_SymbolTable_Namespace__NestedDesc_IdentifyLocal2)((OOC_SymbolTable_Namespace__Nested)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (void*)(OOC_INT32)baseNotExported);
  i5 = i4==(OOC_INT32)0;
  decl = (OOC_SymbolTable__Declaration)i4;
  if (i5) goto l3;
  i5=OOC_FALSE;
  goto l5;
l3:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8882))+8);
  i5 = i5!=(OOC_INT32)0;
  
l5:
  if (i5) goto l7;
  i0=i4;
  goto l8;
l7:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8921))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8921))+8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8931)))), OOC_SymbolTable_Namespace__NamespaceDesc_Identify2)),OOC_SymbolTable_Namespace__NamespaceDesc_Identify2)((OOC_SymbolTable_Namespace__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (void*)(OOC_INT32)baseNotExported);
  
l8:
  return (OOC_SymbolTable__Declaration)i0;
  ;
}

static void OOC_SymbolTable_Namespace__InitExtended(OOC_SymbolTable_Namespace__Extended ns, OOC_SymbolTable__DeclarationArray da, OOC_INT32 len) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)da;
  i1 = len;
  i2 = (OOC_INT32)ns;
  OOC_SymbolTable_Namespace__InitNamespace((OOC_SymbolTable_Namespace__Namespace)i2, (OOC_SymbolTable__DeclarationArray)i0, i1);
  *(OOC_INT32*)((_check_pointer(i2, 9230))+8) = (OOC_INT32)0;
  return;
  ;
}

OOC_SymbolTable_Namespace__Namespace OOC_SymbolTable_Namespace__NewExtended(OOC_SymbolTable__DeclarationArray da, OOC_INT32 len) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Namespace__Extended.baseTypes[0]);
  i1 = (OOC_INT32)da;
  i2 = len;
  OOC_SymbolTable_Namespace__InitExtended((OOC_SymbolTable_Namespace__Extended)i0, (OOC_SymbolTable__DeclarationArray)i1, i2);
  return (OOC_SymbolTable_Namespace__Namespace)i0;
  ;
}

void OOC_SymbolTable_Namespace__ExtendedDesc_SetBaseNamespace(OOC_SymbolTable_Namespace__Extended ns, OOC_SymbolTable_Namespace__Namespace ns0) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ns;
  i1 = (OOC_INT32)ns0;
  *(OOC_INT32*)((_check_pointer(i0, 9594))+8) = i1;
  return;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable_Namespace__ExtendedDesc_IdentifyLocal2(OOC_SymbolTable_Namespace__Extended ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition, OOC_CHAR8 *baseNotExported) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)ns;
  i1 = (OOC_INT32)sourceContext;
  i2 = (OOC_INT32)name;
  i3 = ignorePosition;
  i0 = (OOC_INT32)OOC_SymbolTable_Namespace__NamespaceDesc_IdentifyLocal2((OOC_SymbolTable_Namespace__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (void*)(OOC_INT32)baseNotExported);
  return (OOC_SymbolTable__Declaration)i0;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable_Namespace__ExtendedDesc_Identify2(OOC_SymbolTable_Namespace__Extended ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition, OOC_CHAR8 *baseNotExported) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_SymbolTable__Declaration decl;

  i0 = (OOC_INT32)ns;
  i1 = (OOC_INT32)sourceContext;
  i2 = (OOC_INT32)name;
  i3 = ignorePosition;
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10343)))), OOC_SymbolTable_Namespace__ExtendedDesc_IdentifyLocal2)),OOC_SymbolTable_Namespace__ExtendedDesc_IdentifyLocal2)((OOC_SymbolTable_Namespace__Extended)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (void*)(OOC_INT32)baseNotExported);
  i5 = i4==(OOC_INT32)0;
  decl = (OOC_SymbolTable__Declaration)i4;
  if (i5) goto l3;
  i5=OOC_FALSE;
  goto l5;
l3:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10440))+8);
  i5 = i5!=(OOC_INT32)0;
  
l5:
  if (i5) goto l7;
  i0=i4;
  goto l8;
l7:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10478))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10478))+8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10487)))), OOC_SymbolTable_Namespace__NamespaceDesc_Identify2)),OOC_SymbolTable_Namespace__NamespaceDesc_Identify2)((OOC_SymbolTable_Namespace__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (void*)(OOC_INT32)baseNotExported);
  
l8:
  return (OOC_SymbolTable__Declaration)i0;
  ;
}

void OOC_SymbolTable_Namespace__ExtendedDesc_InsertTBProc(OOC_SymbolTable_Namespace__Extended ns, OOC_SymbolTable__ProcDecl procDecl, OOC_Error__List errList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_INT32 s;
  OOC_INT32 e;
  OOC_INT32 m;
  OOC_SymbolTable__DeclarationArray n;
  OOC_INT32 i;

  i0 = (OOC_INT32)ns;
  i1 = (OOC_INT32)procDecl;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11215))+16);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11180)))), OOC_SymbolTable__NamespaceDesc_IdentifyLocal)),OOC_SymbolTable__NamespaceDesc_IdentifyLocal)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, OOC_FALSE);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l35;
  s = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 11329))+4);
  e = i2;
  i3 = 0<i2;
  if (i3) goto l5;
  i3=i2;i2=0;
  goto l15;
l5:
  i3=i2;i2=0;
l6_loop:
  i4 = (i2+i3)>>1;
  m = i4;
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11406));
  i5 = _check_pointer(i5, 11417);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 11417))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 11420))+16);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 11426))+12);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11443))+16);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 11449))+12);
  i5 = (
  _cmp8((const void*)(_check_pointer(i5, 11431)),(const void*)(_check_pointer(i6, 11454))))<(OOC_INT32)0;
  if (i5) goto l9;
  e = i4;
  i3=i4;
  goto l10;
l9:
  i2 = i4+1;
  s = i2;
  
l10:
  i4 = i2<i3;
  if (i4) goto l6_loop;
l15:
  _assert((i2==i3), 127, 11547);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 11579))+4);
  i3 = i2<i3;
  if (!i3) goto l18;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11616));
  i3 = _check_pointer(i3, 11627);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 11627))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11630))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11636))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11653))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 11659))+12);
  _assert(((
  _cmp8((const void*)(_check_pointer(i3, 11641)),(const void*)(_check_pointer(i4, 11664))))>(OOC_INT32)0), 127, 11606);
l18:
  i3 = *(OOC_INT32*)((_check_pointer(i0, 11701))+4);
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__DeclarationArray.baseTypes[0], (i3+1));
  i4 = i2-1;
  n = (OOC_SymbolTable__DeclarationArray)i3;
  i5 = 0<=i4;
  i = 0;
  if (!i5) goto l26;
  i5=0;
l21_loop:
  i6 = _check_pointer(i3, 11754);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11763));
  i8 = _check_pointer(i8, 11774);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i5, i9, OOC_UINT32, 11774))*4);
  *(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 11754))*4) = i8;
  i5 = i5+1;
  i6 = i5<=i4;
  i = i5;
  if (i6) goto l21_loop;
l26:
  i4 = _check_pointer(i3, 11796);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 11796))*4) = i1;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 11835))+4);
  i1 = i1-1;
  i4 = i2<=i1;
  i = i2;
  if (!i4) goto l34;
l29_loop:
  i4 = _check_pointer(i3, 11862);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11873));
  i6 = _check_pointer(i6, 11884);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i2, i7, OOC_UINT32, 11884))*4);
  *(OOC_INT32*)(i4+(_check_index((i2+1), i5, OOC_UINT32, 11862))*4) = i6;
  i2 = i2+1;
  i4 = i2<=i1;
  i = i2;
  if (i4) goto l29_loop;
l34:
  *(OOC_INT32*)(_check_pointer(i0, 11914)) = i3;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 11945))+4);
  *(OOC_INT32*)((_check_pointer(i0, 11945))+4) = (i1+1);
  goto l36;
l35:
  i0 = (OOC_INT32)errList;
  OOC_SymbolTable_Namespace__ErrDecl(2, (OOC_SymbolTable__Declaration)i1, (OOC_Error__List)i0);
l36:
  return;
  ;
}

OOC_SymbolTable__ProcDecl OOC_SymbolTable_Namespace__ExtendedDesc_GetTBProcByIndex(OOC_SymbolTable_Namespace__Extended ns, OOC_INT32 index) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;
  OOC_SymbolTable__Declaration decl;

  i0 = (OOC_INT32)ns;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12319))+4);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l14;
  i2 = index;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12353));
  i4 = _check_pointer(i4, 12364);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 12364))*4);
  decl = (OOC_SymbolTable__Declaration)i4;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 12384)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (!i5) goto l9;
  i5 = *(OOC_INT32*)((_check_pointer(i4, 12418))+44);
  i5 = i5==i2;
  if (!i5) goto l9;
  return (OOC_SymbolTable__ProcDecl)i4;
l9:
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l3_loop;
l14:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12537))+8);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l17;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12601))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12601))+8);
  i2 = index;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12611)))), &_td_OOC_SymbolTable_Namespace__ExtendedDesc, 12611)), 12620)))), OOC_SymbolTable_Namespace__ExtendedDesc_GetTBProcByIndex)),OOC_SymbolTable_Namespace__ExtendedDesc_GetTBProcByIndex)((OOC_SymbolTable_Namespace__Extended)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12611)))), &_td_OOC_SymbolTable_Namespace__ExtendedDesc, 12611)), i2);
  return (OOC_SymbolTable__ProcDecl)i0;
  goto l18;
l17:
  return (OOC_SymbolTable__ProcDecl)(OOC_INT32)0;
l18:
  _failed_function(12013); return 0;
  ;
}

OOC_SymbolTable__ProcDecl OOC_SymbolTable_Namespace__ExtendedDesc_GetSuperProcByIndex(OOC_SymbolTable_Namespace__Extended ns, OOC_INT32 index) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)ns;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12907))+8);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12971))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12971))+8);
  i2 = index;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12981)))), &_td_OOC_SymbolTable_Namespace__ExtendedDesc, 12981)), 12990)))), OOC_SymbolTable_Namespace__ExtendedDesc_GetTBProcByIndex)),OOC_SymbolTable_Namespace__ExtendedDesc_GetTBProcByIndex)((OOC_SymbolTable_Namespace__Extended)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12981)))), &_td_OOC_SymbolTable_Namespace__ExtendedDesc, 12981)), i2);
  return (OOC_SymbolTable__ProcDecl)i0;
  goto l4;
l3:
  return (OOC_SymbolTable__ProcDecl)(OOC_INT32)0;
l4:
  _failed_function(12707); return 0;
  ;
}

void OOC_SymbolTable_Namespace__ExtendedDesc_CheckRestrictions(OOC_SymbolTable_Namespace__Extended ns, OOC_SymbolTable__Record record, OOC_Error__List errList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 i;
  OOC_SymbolTable__Declaration decl;
  OOC_CHAR8 baseNotExported;
  OOC_SymbolTable__Declaration base;

  i0 = (OOC_INT32)ns;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 13903))+4);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l49;
  i2 = (OOC_INT32)errList;
  i3 = (OOC_INT32)record;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13937));
  i5 = _check_pointer(i5, 13948);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 13948))*4);
  decl = (OOC_SymbolTable__Declaration)i5;
  i6 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 13968)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i6) goto l36;
  i6 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 14336)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i6) goto l8;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 14330)))), 14330);
  goto l44;
l8:
  baseNotExported = OOC_FALSE;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14402))+8);
  i6 = i6==(OOC_INT32)0;
  if (i6) goto l11;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14479))+8);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14479))+8);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 14510))+16);
  i6 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 14488)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i7, (OOC_SymbolTable__Item)i5, (OOC_SymbolTable__Name)i8, OOC_TRUE);
  base = (OOC_SymbolTable__Declaration)i6;
  
  goto l12;
l11:
  base = (OOC_SymbolTable__Declaration)(OOC_INT32)0;
  i6=(OOC_INT32)0;
l12:
  i7 = i6!=(OOC_INT32)0;
  if (i7) goto l15;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15232)))), OOC_SymbolTable__RecordDesc_AssignTBProcIndex)),OOC_SymbolTable__RecordDesc_AssignTBProcIndex)((OOC_SymbolTable__Record)i3, (OOC_SymbolTable__ProcDecl)i5);
  goto l44;
l15:
  i7 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 14586)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i7) goto l32;
  i7 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 14680)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i7) goto l20;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 14674)))), 14674);
  goto l44;
l20:
  i7 = *(OOC_INT8*)((_check_pointer(i5, 14718))+24);
  i8 = *(OOC_INT8*)((_check_pointer(i6, 14737))+24);
  i7 = i7!=i8;
  if (!i7) goto l23;
  OOC_SymbolTable_Namespace__ErrDecl(5, (OOC_SymbolTable__Declaration)i5, (OOC_Error__List)i2);
l23:
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 14875))+52);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 14893))+52);
  i7 = OOC_SymbolTable_TypeRules__IsValidRedefinition((OOC_SymbolTable__FormalPars)i7, (OOC_SymbolTable__FormalPars)i8);
  if (i7) goto l26;
  OOC_SymbolTable_Namespace__ErrDecl(6, (OOC_SymbolTable__Declaration)i5, (OOC_Error__List)i2);
  goto l44;
l26:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 14930)))), OOC_SymbolTable__ProcDeclDesc_CopyTBProcIndex)),OOC_SymbolTable__ProcDeclDesc_CopyTBProcIndex)((OOC_SymbolTable__ProcDecl)i6, (OOC_SymbolTable__ProcDecl)i5);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 14978))+16);
  i6 = *(OOC_INT32*)((_check_pointer(i6, 14996))+20);
  i7 = *(OOC_INT32*)(_check_pointer(i7, 14984));
  i6 = i7<i6;
  if (!i6) goto l44;
  OOC_SymbolTable_Namespace__ErrDecl(7, (OOC_SymbolTable__Declaration)i5, (OOC_Error__List)i2);
  goto l44;
l32:
  OOC_SymbolTable_Namespace__ErrDecl(4, (OOC_SymbolTable__Declaration)i5, (OOC_Error__List)i2);
  goto l44;
l36:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14001))+8);
  i6 = i6!=(OOC_INT32)0;
  if (!i6) goto l44;
  baseNotExported = OOC_FALSE;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14079))+8);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14079))+8);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 14108))+16);
  i6 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 14087)))), OOC_SymbolTable_Namespace__NamespaceDesc_Identify2)),OOC_SymbolTable_Namespace__NamespaceDesc_Identify2)((OOC_SymbolTable_Namespace__Namespace)i7, (OOC_SymbolTable__Item)i5, (OOC_SymbolTable__Name)i8, OOC_TRUE, (void*)(OOC_INT32)&baseNotExported);
  base = (OOC_SymbolTable__Declaration)i6;
  i6 = i6==(OOC_INT32)0;
  if (i6) goto l41;
  OOC_SymbolTable_Namespace__ErrDecl(3, (OOC_SymbolTable__Declaration)i5, (OOC_Error__List)i2);
  goto l44;
l41:
  i6 = baseNotExported;
  *(OOC_UINT8*)((_check_pointer(i5, 14186))+52) = i6;
l44:
  i4 = i4+1;
  i5 = i4<=i1;
  i = i4;
  if (i5) goto l3_loop;
l49:
  return;
  ;
}

void OOC_OOC_SymbolTable_Namespace_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Namespace__ErrorContext.baseTypes[0]);
  OOC_SymbolTable_Namespace__namespaceContext = (OOC_SymbolTable_Namespace__ErrorContext)i0;
  OOC_Error__InitContext((OOC_Error__Context)i0, "OOC:SymbolTable:Namespace", 26);
  return;
  ;
}

/* --- */
