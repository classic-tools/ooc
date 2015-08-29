#include <OOC/SymbolTable/Namespace.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_SymbolTable_Namespace__ErrorContextDesc_GetTemplate(OOC_SymbolTable_Namespace__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3170))+8);
  switch (i1) {
  case 1:
    _copy_16((const void*)((OOC_CHAR16[]){77,117,108,116,105,112,108,101,32,100,101,99,108,97,114,97,116,105,111,110,32,111,102,32,115,97,109,101,32,110,97,109,101,0}),(void*)(OOC_INT32)t,128);
    goto l12;
  case 2:
    _copy_16((const void*)((OOC_CHAR16[]){65,32,114,101,99,111,114,100,32,109,101,109,98,101,114,32,111,102,32,116,104,105,115,32,110,97,109,101,32,97,108,114,101,97,100,121,32,101,120,105,115,116,115,0}),(void*)(OOC_INT32)t,128);
    goto l12;
  case 3:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,110,97,109,101,32,105,115,32,97,108,114,101,97,100,121,32,100,101,102,105,110,101,100,32,105,110,32,116,104,101,32,114,101,99,111,114,100,39,115,32,98,97,115,101,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l12;
  case 4:
    _copy_16((const void*)((OOC_CHAR16[]){65,32,102,105,101,108,100,32,111,102,32,116,104,105,115,32,110,97,109,101,32,105,115,32,97,108,114,101,97,100,121,32,100,101,102,105,110,101,100,32,102,111,114,32,116,104,101,32,98,97,115,101,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l12;
  case 5:
    _copy_16((const void*)((OOC_CHAR16[]){77,117,115,116,32,98,101,32,101,120,112,111,114,116,101,100,32,108,105,107,101,32,105,110,104,101,114,105,116,101,100,32,100,101,99,108,97,114,97,116,105,111,110,0}),(void*)(OOC_INT32)t,128);
    goto l12;
  case 6:
    _copy_16((const void*)((OOC_CHAR16[]){70,111,114,109,97,108,32,112,97,114,97,109,101,116,101,114,115,32,100,111,110,39,116,32,109,97,116,99,104,32,105,110,104,101,114,105,116,101,100,32,100,101,99,108,97,114,97,116,105,111,110,0}),(void*)(OOC_INT32)t,128);
    goto l12;
  case 7:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,112,114,111,99,101,100,117,114,101,32,114,101,100,101,102,105,110,101,115,32,97,32,112,114,111,99,101,100,117,114,101,32,116,104,97,116,32,105,115,32,100,101,99,108,97,114,101,100,32,108,97,116,101,114,0}),(void*)(OOC_INT32)t,128);
    goto l12;
  case 8:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,115,116,97,116,105,99,32,116,121,112,101,45,98,111,117,110,100,32,112,114,111,99,101,100,117,114,101,32,109,117,115,116,32,98,101,32,101,120,112,111,114,116,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l12;
  case 9:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,109,117,115,116,32,98,101,32,97,32,110,111,110,45,102,117,110,99,116,105,111,110,32,112,114,111,99,101,100,117,114,101,0}),(void*)(OOC_INT32)t,128);
    goto l12;
  default:
    _failed_case(i1, 3162);
    goto l12;
  }
l12:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3997)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

static void OOC_SymbolTable_Namespace__InitNamespace(OOC_SymbolTable_Namespace__Namespace ns, OOC_SymbolTable__DeclarationArray da, OOC_INT32 len) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ns;
  OOC_SymbolTable__InitNamespace((OOC_SymbolTable__Namespace)i0);
  i1 = (OOC_INT32)da;
  *(OOC_INT32*)(_check_pointer(i0, 4199)) = i1;
  i1 = len;
  *(OOC_INT32*)((_check_pointer(i0, 4224))+4) = i1;
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4788))+4);
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
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4859));
  i5 = _check_pointer(i5, 4870);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 4870))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 4873))+20);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 4879))+12);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4892))+12);
  i5 = (
  _cmp8((const void*)(_check_pointer(i5, 4884)),(const void*)(_check_pointer(i6, 4897))))<0;
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
  _assert((i1==i2), 127, 4971);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 5001))+4);
  i2 = i1<i2;
  if (i2) goto l16;
  i2=0u;
  goto l18;
l16:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5020));
  i2 = _check_pointer(i2, 5031);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 5031))*4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5034))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5040))+12);
  i3 = (OOC_INT32)name;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5053))+12);
  i2 = (
  _cmp8((const void*)(_check_pointer(i2, 5045)),(const void*)(_check_pointer(i3, 5058))))==0;
  
l18:
  if (i2) goto l20;
  return (OOC_SymbolTable__Declaration)0;
  goto l37;
l20:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5082));
  i0 = _check_pointer(i0, 5093);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i1, i2, OOC_UINT32, 5093))*4);
  decl = (OOC_SymbolTable__Declaration)i0;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5112)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  i2 = (OOC_INT32)sourceContext;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5138)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i2);
  i1 = i1==i2;
  if (i1) goto l27;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 5384))+28);
  i1 = i1==0;
  if (!i1) goto l36;
  *baseNotExported = 1u;
  i0=0;
  goto l36;
l27:
  i1 = (OOC_INT32)name;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 5283))+24);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 5303));
  i1 = i2>i1;
  if (i1) goto l30;
  i1=0u;
  goto l32;
l30:
  i1 = ignorePosition;
  i1 = !i1;
  
l32:
  if (!i1) goto l36;
  i0=0;
l36:
  return (OOC_SymbolTable__Declaration)i0;
l37:
  _failed_function(4292); return 0;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable_Namespace__NamespaceDesc_Identify2(OOC_SymbolTable_Namespace__Namespace ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition, OOC_CHAR8 *baseNotExported) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)ns;
  i1 = (OOC_INT32)sourceContext;
  i2 = (OOC_INT32)name;
  i3 = ignorePosition;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5951)))), OOC_SymbolTable_Namespace__NamespaceDesc_IdentifyLocal2)),OOC_SymbolTable_Namespace__NamespaceDesc_IdentifyLocal2)((OOC_SymbolTable_Namespace__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (void*)(OOC_INT32)baseNotExported);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6255))+20);
  i2 = *(OOC_INT32*)(_check_pointer(i2, 6261));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6228)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6310))+20);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 6316))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6282)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6368))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 6374))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6338)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
  i1 = (OOC_INT32)errList;
  OOC_Error__ListDesc_Append((OOC_Error__List)i1, (Msg__Msg)i0);
  return;
  ;
}

void OOC_SymbolTable_Namespace__NamespaceDesc_CheckLocalUniqueness(OOC_SymbolTable_Namespace__Namespace ns, OOC_Error__List errList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11;
  OOC_SymbolTable__DeclarationArray da;
  OOC_INT32 i;
  OOC_INT32 min;
  OOC_INT32 j;
  OOC_INT32 h;

  i0 = (OOC_INT32)ns;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6925));
  da = (OOC_SymbolTable__DeclarationArray)i1;
  i = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6967))+4);
  i2 = 0<(i2-1);
  if (!i2) goto l51;
  i2 = (OOC_INT32)errList;
  i3=0;
l3_loop:
  i4 = _check_pointer(i1, 6998);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 6998))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 7001))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 7007))+12);
  i5 = _check_pointer(i1, 7018);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = i3+1;
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i7, i6, OOC_UINT32, 7018))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 7023))+20);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 7029))+12);
  i4 = (
  _cmp8((const void*)(_check_pointer(i4, 7012)),(const void*)(_check_pointer(i5, 7034))))==0;
  if (!i4) goto l46;
  min = i3;
  j = i7;
  i4 = *(OOC_INT32*)((_check_pointer(i0, 7254))+4);
  i4 = i7<i4;
  if (i4) goto l8;
  i4=0u;
  goto l10;
l8:
  i4 = _check_pointer(i1, 7288);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 7288))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 7291))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 7297))+12);
  i5 = _check_pointer(i1, 7308);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i7, i6, OOC_UINT32, 7308))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 7311))+20);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 7317))+12);
  i4 = (
  _cmp8((const void*)(_check_pointer(i4, 7302)),(const void*)(_check_pointer(i5, 7322))))==0;
  
l10:
  if (i4) goto l12;
  i4=i7;i5=i3;
  goto l26;
l12:
  i4=i7;i5=i3;
l13_loop:
  i6 = _check_pointer(i1, 7344);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i8, OOC_UINT32, 7344))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7347))+20);
  i8 = _check_pointer(i1, 7363);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i5, i9, OOC_UINT32, 7363))*4);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 7368))+20);
  i8 = *(OOC_INT32*)(_check_pointer(i8, 7374));
  i6 = *(OOC_INT32*)(_check_pointer(i6, 7353));
  i6 = i6<i8;
  if (!i6) goto l17;
  min = i4;
  i5=i4;
l17:
  i4 = i4+1;
  j = i4;
  i6 = *(OOC_INT32*)((_check_pointer(i0, 7254))+4);
  i6 = i4<i6;
  if (i6) goto l20;
  i6=0u;
  goto l22;
l20:
  i6 = _check_pointer(i1, 7288);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i8, OOC_UINT32, 7288))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7291))+20);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7297))+12);
  i8 = _check_pointer(i1, 7308);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i4, i9, OOC_UINT32, 7308))*4);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 7311))+20);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 7317))+12);
  i6 = (
  _cmp8((const void*)(_check_pointer(i6, 7302)),(const void*)(_check_pointer(i8, 7322))))==0;
  
l22:
  if (i6) goto l13_loop;
l26:
  h = i3;
  i6 = i3<i4;
  if (!i6) goto l37;
  i6=i3;
l29_loop:
  i8 = i6!=i5;
  if (!i8) goto l32;
  i8 = _check_pointer(i1, 7619);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i6, i9, OOC_UINT32, 7619))*4);
  OOC_SymbolTable_Namespace__ErrDecl(1, (OOC_SymbolTable__Declaration)i8, (OOC_Error__List)i2);
l32:
  i6 = i6+1;
  h = i6;
  i8 = i6<i4;
  if (i8) goto l29_loop;
l37:
  i6 = _check_pointer(i1, 7734);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i9 = _check_pointer(i1, 7743);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i9+(_check_index(i5, i10, OOC_UINT32, 7743))*4);
  *(OOC_INT32*)(i6+(_check_index(i3, i8, OOC_UINT32, 7734))*4) = i5;
  i4 = (i4-i3)-1;
  h = i4;
  i3 = i3+(i4+1);
  j = i3;
  i5 = *(OOC_INT32*)((_check_pointer(i0, 7800))+4);
  i6 = i3<i5;
  if (!i6) goto l45;
  i6 = (i4*(-1))+i3;
  
l40_loop:
  i8 = _check_pointer(i1, 7830);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i10 = _check_pointer(i1, 7841);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i3, i11, OOC_UINT32, 7841))*4);
  *(OOC_INT32*)(i8+(_check_index(i6, i9, OOC_UINT32, 7830))*4) = i10;
  i3 = i3+1;
  j = i3;
  i6 = i6+1;
  i8 = i3<i5;
  if (i8) goto l40_loop;
l45:
  i3 = *(OOC_INT32*)((_check_pointer(i0, 7873))+4);
  *(OOC_INT32*)((_check_pointer(i0, 7873))+4) = (i3-i4);
l46:
  i = i7;
  i3 = *(OOC_INT32*)((_check_pointer(i0, 6967))+4);
  i3 = i7<(i3-1);
  if (!i3) goto l51;
  i3=i7;
  goto l3_loop;
l51:
  return;
  ;
}

static void OOC_SymbolTable_Namespace__InitNested(OOC_SymbolTable_Namespace__Nested ns, OOC_SymbolTable__DeclarationArray da, OOC_INT32 len) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)ns;
  i1 = (OOC_INT32)da;
  i2 = len;
  OOC_SymbolTable_Namespace__InitNamespace((OOC_SymbolTable_Namespace__Namespace)i0, (OOC_SymbolTable__DeclarationArray)i1, i2);
  *(OOC_INT32*)((_check_pointer(i0, 8108))+8) = (OOC_INT32)0;
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
  *(OOC_INT32*)((_check_pointer(i0, 8468))+8) = i1;
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
  i4 = (OOC_INT32)OOC_SymbolTable_Namespace__NestedDesc_IdentifyLocal2((OOC_SymbolTable_Namespace__Nested)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (void*)(OOC_INT32)baseNotExported);
  decl = (OOC_SymbolTable__Declaration)i4;
  i5 = i4==(OOC_INT32)0;
  if (i5) goto l3;
  i5=0u;
  goto l5;
l3:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9304))+8);
  i5 = i5!=(OOC_INT32)0;
  
l5:
  if (i5) goto l7;
  i0=i4;
  goto l8;
l7:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9343))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9343))+8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9353)))), OOC_SymbolTable_Namespace__NamespaceDesc_Identify2)),OOC_SymbolTable_Namespace__NamespaceDesc_Identify2)((OOC_SymbolTable_Namespace__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (void*)(OOC_INT32)baseNotExported);
  
l8:
  return (OOC_SymbolTable__Declaration)i0;
  ;
}

static void OOC_SymbolTable_Namespace__InitExtended(OOC_SymbolTable_Namespace__Extended ns, OOC_SymbolTable__DeclarationArray da, OOC_INT32 len) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)ns;
  i1 = (OOC_INT32)da;
  i2 = len;
  OOC_SymbolTable_Namespace__InitNamespace((OOC_SymbolTable_Namespace__Namespace)i0, (OOC_SymbolTable__DeclarationArray)i1, i2);
  *(OOC_INT32*)((_check_pointer(i0, 9652))+8) = (OOC_INT32)0;
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
  *(OOC_INT32*)((_check_pointer(i0, 10016))+8) = i1;
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
  i4 = (OOC_INT32)OOC_SymbolTable_Namespace__ExtendedDesc_IdentifyLocal2((OOC_SymbolTable_Namespace__Extended)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (void*)(OOC_INT32)baseNotExported);
  decl = (OOC_SymbolTable__Declaration)i4;
  i5 = i4==(OOC_INT32)0;
  if (i5) goto l3;
  i5=0u;
  goto l5;
l3:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10862))+8);
  i5 = i5!=(OOC_INT32)0;
  
l5:
  if (i5) goto l7;
  i0=i4;
  goto l8;
l7:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10900))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10900))+8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10909)))), OOC_SymbolTable_Namespace__NamespaceDesc_Identify2)),OOC_SymbolTable_Namespace__NamespaceDesc_Identify2)((OOC_SymbolTable_Namespace__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (void*)(OOC_INT32)baseNotExported);
  
l8:
  return (OOC_SymbolTable__Declaration)i0;
  ;
}

void OOC_SymbolTable_Namespace__ExtendedDesc_InsertTBProc(OOC_SymbolTable_Namespace__Extended ns, OOC_SymbolTable__ProcDecl procDecl, OOC_Error__List errList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 s;
  OOC_INT32 e;
  OOC_INT32 m;
  OOC_SymbolTable__DeclarationArray n;
  OOC_INT32 i;

  i0 = (OOC_INT32)ns;
  i1 = (OOC_INT32)procDecl;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11637))+20);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11602)))), OOC_SymbolTable__NamespaceDesc_IdentifyLocal)),OOC_SymbolTable__NamespaceDesc_IdentifyLocal)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, 0u);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l35;
  s = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 11751))+4);
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
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11828));
  i5 = _check_pointer(i5, 11839);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 11839))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 11842))+20);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 11848))+12);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11865))+20);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 11871))+12);
  i5 = (
  _cmp8((const void*)(_check_pointer(i5, 11853)),(const void*)(_check_pointer(i6, 11876))))<0;
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
  _assert((i2==i3), 127, 11969);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 12001))+4);
  i3 = i2<i3;
  if (!i3) goto l18;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12038));
  i3 = _check_pointer(i3, 12049);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 12049))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 12052))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 12058))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12075))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 12081))+12);
  _assert(((
  _cmp8((const void*)(_check_pointer(i3, 12063)),(const void*)(_check_pointer(i4, 12086))))>0), 127, 12028);
l18:
  i3 = *(OOC_INT32*)((_check_pointer(i0, 12123))+4);
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__DeclarationArray.baseTypes[0], (i3+1));
  n = (OOC_SymbolTable__DeclarationArray)i3;
  i = 0;
  i4 = 0<i2;
  if (!i4) goto l26;
  i4=0;
l21_loop:
  i5 = _check_pointer(i3, 12176);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12185));
  i7 = _check_pointer(i7, 12196);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 12196))*4);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 12176))*4) = i7;
  i4 = i4+1;
  i = i4;
  i5 = i4<i2;
  if (i5) goto l21_loop;
l26:
  i4 = _check_pointer(i3, 12218);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 12218))*4) = i1;
  i = i2;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12257))+4);
  i4 = i2<i1;
  if (!i4) goto l34;
l29_loop:
  i4 = _check_pointer(i3, 12284);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = i2+1;
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12295));
  i7 = _check_pointer(i7, 12306);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i2, i8, OOC_UINT32, 12306))*4);
  *(OOC_INT32*)(i4+(_check_index(i6, i5, OOC_UINT32, 12284))*4) = i2;
  i = i6;
  i2 = i6<i1;
  if (!i2) goto l34;
  i2=i6;
  goto l29_loop;
l34:
  *(OOC_INT32*)(_check_pointer(i0, 12336)) = i3;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12367))+4);
  *(OOC_INT32*)((_check_pointer(i0, 12367))+4) = (i1+1);
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
  i = 0;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12741))+4);
  i2 = 0<i1;
  if (!i2) goto l14;
  i2 = index;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12775));
  i4 = _check_pointer(i4, 12786);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 12786))*4);
  decl = (OOC_SymbolTable__Declaration)i4;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 12806)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (!i5) goto l9;
  i5 = *(OOC_INT32*)((_check_pointer(i4, 12840))+56);
  i5 = i5==i2;
  if (!i5) goto l9;
  return (OOC_SymbolTable__ProcDecl)i4;
l9:
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l3_loop;
l14:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12959))+8);
  i1 = i1==0;
  if (i1) goto l17;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13023))+8);
  i1 = index;
  i0 = (OOC_INT32)OOC_SymbolTable_Namespace__ExtendedDesc_GetTBProcByIndex((OOC_SymbolTable_Namespace__Extended)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13033)))), &_td_OOC_SymbolTable_Namespace__ExtendedDesc, 13033)), i1);
  return (OOC_SymbolTable__ProcDecl)i0;
  goto l18;
l17:
  return (OOC_SymbolTable__ProcDecl)0;
l18:
  _failed_function(12435); return 0;
  ;
}

OOC_SymbolTable__ProcDecl OOC_SymbolTable_Namespace__ExtendedDesc_GetSuperProcByIndex(OOC_SymbolTable_Namespace__Extended ns, OOC_INT32 index) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ns;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13329))+8);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13393))+8);
  i1 = index;
  i0 = (OOC_INT32)OOC_SymbolTable_Namespace__ExtendedDesc_GetTBProcByIndex((OOC_SymbolTable_Namespace__Extended)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13403)))), &_td_OOC_SymbolTable_Namespace__ExtendedDesc, 13403)), i1);
  return (OOC_SymbolTable__ProcDecl)i0;
  goto l4;
l3:
  return (OOC_SymbolTable__ProcDecl)(OOC_INT32)0;
l4:
  _failed_function(13129); return 0;
  ;
}

void OOC_SymbolTable_Namespace__ExtendedDesc_CheckRestrictions(OOC_SymbolTable_Namespace__Extended ns, OOC_SymbolTable__Record record, OOC_SymbolTable_Uses__Uses uses, OOC_Error__List errList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16;
  OOC_INT32 i;
  OOC_SymbolTable__Declaration decl;
  OOC_CHAR8 baseNotExported;
  OOC_SymbolTable__Declaration base;
  OOC_SymbolTable__Type rec;
  OOC_SymbolTable__TypeRefArray args;
  OOC_INT32 j;
  OOC_SymbolTable__QualType qualType;
  OOC_SymbolTable__Type ptr;
  OOC_SymbolTable__Type baseFormalPars;

  i0 = (OOC_INT32)ns;
  i = 0;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 14486))+4);
  i2 = 0<i1;
  if (!i2) goto l94;
  i2 = (OOC_INT32)errList;
  i3 = (OOC_INT32)&_td_OOC_SymbolTable__TypeRef;
  i4 = (OOC_INT32)uses;
  i5 = (OOC_INT32)record;
  i6=0;
l3_loop:
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14520));
  i7 = _check_pointer(i7, 14531);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 14531))*4);
  decl = (OOC_SymbolTable__Declaration)i7;
  i8 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 14551)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i8) goto l81;
  i8 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 14929)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i8) goto l8;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 14923)))), 14923);
  goto l89;
l8:
  baseNotExported = 0u;
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14995))+8);
  i8 = i8==0;
  if (i8) goto l11;
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15072))+8);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15072))+8);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 15103))+20);
  i8 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 15081)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i9, (OOC_SymbolTable__Item)i7, (OOC_SymbolTable__Name)i10, 1u);
  base = (OOC_SymbolTable__Declaration)i8;
  
  goto l12;
l11:
  base = (OOC_SymbolTable__Declaration)0;
  i8=0;
l12:
  i9 = i8!=0;
  if (i9) goto l15;
  OOC_SymbolTable__RecordDesc_AssignTBProcIndex((OOC_SymbolTable__Record)i5, (OOC_SymbolTable__ProcDecl)i7);
  goto l89;
l15:
  i9 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 15179)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i9) goto l77;
  i9 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 15273)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i9) goto l20;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 15267)))), 15267);
  goto l89;
l20:
  i9 = *(OOC_INT8*)((_check_pointer(i7, 15311))+28);
  i10 = *(OOC_INT8*)((_check_pointer(i8, 15330))+28);
  i9 = i9!=i10;
  if (!i9) goto l23;
  OOC_SymbolTable_Namespace__ErrDecl(5, (OOC_SymbolTable__Declaration)i7, (OOC_Error__List)i2);
l23:
  i9 = (OOC_INT32)OOC_SymbolTable__ProcDeclDesc_Class((OOC_SymbolTable__ProcDecl)i7);
  rec = (OOC_SymbolTable__Type)i9;
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i9, 15478))+28);
  i10 = i10!=0;
  if (i10) goto l26;
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 16246))+64);
  baseFormalPars = (OOC_SymbolTable__Type)i9;
  
  goto l44;
l26:
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i9, 15648))+28);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 15657))+20);
  i10 = OOC_ARRAY_LENGTH((_check_pointer(i10, 15664)), 0);
  i10 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__TypeRefArray.baseTypes[0], i10);
  args = (OOC_SymbolTable__TypeRefArray)i10;
  j = 0;
  i11 = OOC_ARRAY_LENGTH((_check_pointer(i10, 15705)), 0);
  i12 = 0<i11;
  if (!i12) goto l34;
  i12=0;
l29_loop:
  i13 = _check_pointer(i10, 15749);
  i14 = OOC_ARRAY_LENGTH(i13, 0);
  i15 = OOC_ARRAY_LENGTH((_check_pointer(i10, 15749)), 0);
  i15 = _check_index(i12, i15, OOC_UINT32, 15749);
  i15 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i9, 15757))+28);
  i15 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i15, 15766))+20);
  i15 = _check_pointer(i15, 15773);
  i16 = OOC_ARRAY_LENGTH(i15, 0);
  i15 = (OOC_INT32)*(OOC_INT32*)(i15+(_check_index(i12, i16, OOC_UINT32, 15773))*4);
  OOC_SymbolTable__InitTypeRef((void*)(i13+(_check_index(i12, i14, OOC_UINT32, 15749))*8), (RT0__Struct)i3, (OOC_SymbolTable__Type)i15);
  i12 = i12+1;
  j = i12;
  i13 = i12<i11;
  if (i13) goto l29_loop;
l34:
  i11 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__QualType.baseTypes[0]);
  qualType = (OOC_SymbolTable__QualType)i11;
  i12 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i9, 15891))+20);
  OOC_SymbolTable__InitQualType((OOC_SymbolTable__QualType)i11, (OOC_SymbolTable__Item)0, (OOC_SymbolTable__Position)i12, (OOC_SymbolTable__Type)i9, (OOC_SymbolTable__TypeRefArray)i10);
  i9 = (OOC_INT32)OOC_SymbolTable__Expand((OOC_SymbolTable__Type)i11);
  rec = (OOC_SymbolTable__Type)i9;
  i10 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i9, 15982)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i9);
  i11 = (OOC_INT32)OOC_SymbolTable__ProcDeclDesc_Class((OOC_SymbolTable__ProcDecl)i8);
  i10 = i10!=i11;
  if (!i10) goto l43;
l38_loop:
  i10 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i9, 16038)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i9);
  ptr = (OOC_SymbolTable__Type)i10;
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 16093)))), &_td_OOC_SymbolTable__RecordDesc, 16093)), 16100))+40);
  i9 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i9, 16076)))), OOC_SymbolTable__TypeDesc_Closure)),OOC_SymbolTable__TypeDesc_Closure)((OOC_SymbolTable__Type)i9, (OOC_SymbolTable__Type)i10);
  rec = (OOC_SymbolTable__Type)i9;
  i10 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i9, 15982)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i9);
  i11 = (OOC_INT32)OOC_SymbolTable__ProcDeclDesc_Class((OOC_SymbolTable__ProcDecl)i8);
  i10 = i10!=i11;
  if (i10) goto l38_loop;
l43:
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 16179))+64);
  i9 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i9, 16166)))), OOC_SymbolTable__TypeDesc_Closure)),OOC_SymbolTable__TypeDesc_Closure)((OOC_SymbolTable__Type)i9, (OOC_SymbolTable__Type)i10);
  baseFormalPars = (OOC_SymbolTable__Type)i9;
  
l44:
  i10 = *(OOC_INT8*)((_check_pointer(i7, 16309))+48);
  i10 = i10==2;
  if (i10) goto l47;
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 16401))+64);
  i9 = OOC_SymbolTable_TypeRules__IsValidRedefinition((OOC_SymbolTable__Type)i9, (OOC_SymbolTable__FormalPars)i10);
  
  goto l49;
l47:
  i9=1u;
l49:
  if (i9) goto l51;
  OOC_SymbolTable_Namespace__ErrDecl(6, (OOC_SymbolTable__Declaration)i7, (OOC_Error__List)i2);
  goto l89;
l51:
  i9 = *(OOC_UINT8*)((_check_pointer(i8, 16440))+51);
  if (!i9) goto l54;
  *(OOC_UINT8*)((_check_pointer(i8, 16479))+51) = 0u;
l54:
  OOC_SymbolTable__ProcDeclDesc_CopyTBProcIndex((OOC_SymbolTable__ProcDecl)i8, (OOC_SymbolTable__ProcDecl)i7);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 16588))+20);
  i10 = *(OOC_INT32*)((_check_pointer(i8, 16606))+24);
  i9 = *(OOC_INT32*)(_check_pointer(i9, 16594));
  i9 = i9<i10;
  if (!i9) goto l57;
  OOC_SymbolTable_Namespace__ErrDecl(7, (OOC_SymbolTable__Declaration)i7, (OOC_Error__List)i2);
l57:
  i9 = *(OOC_INT8*)((_check_pointer(i7, 16731))+48);
  i9 = i9==2;
  if (!i9) goto l70;
  i9 = *(OOC_INT8*)((_check_pointer(i7, 16791))+28);
  i9 = i9==0;
  if (!i9) goto l62;
  OOC_SymbolTable_Namespace__ErrDecl(8, (OOC_SymbolTable__Declaration)i7, (OOC_Error__List)i2);
l62:
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 16944))+20);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i9, 16949))+12);
  i9 = (
  _cmp8((const void*)(_check_pointer(i9, 16953)),(const void*)"INIT"))==0;
  if (i9) goto l65;
  i9=0u;
  goto l67;
l65:
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 17002))+64);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i9, 17013))+44);
  i9 = i9!=0;
  
l67:
  if (!i9) goto l70;
  OOC_SymbolTable_Namespace__ErrDecl(9, (OOC_SymbolTable__Declaration)i7, (OOC_Error__List)i2);
l70:
  i9 = _check_pointer(i7, 17152);
  i10 = *(OOC_UINT8*)((_check_pointer(i7, 17171))+36);
  if (i10) goto l73;
  i10 = *(OOC_UINT8*)((_check_pointer(i8, 17190))+36);
  
  goto l74;
l73:
  i10=1u;
l74:
  *(OOC_UINT8*)(i9+36) = i10;
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 17258))+20);
  OOC_SymbolTable_Uses__Mark((OOC_SymbolTable__Declaration)i8, (OOC_SymbolTable_Uses__Uses)i4, (OOC_SymbolTable__Name)i7);
  goto l89;
l77:
  OOC_SymbolTable_Namespace__ErrDecl(4, (OOC_SymbolTable__Declaration)i7, (OOC_Error__List)i2);
  goto l89;
l81:
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14584))+8);
  i8 = i8!=0;
  if (!i8) goto l89;
  baseNotExported = 0u;
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14662))+8);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14662))+8);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 14691))+20);
  i8 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 14670)))), OOC_SymbolTable_Namespace__NamespaceDesc_Identify2)),OOC_SymbolTable_Namespace__NamespaceDesc_Identify2)((OOC_SymbolTable_Namespace__Namespace)i9, (OOC_SymbolTable__Item)i7, (OOC_SymbolTable__Name)i10, 1u, (void*)(OOC_INT32)&baseNotExported);
  base = (OOC_SymbolTable__Declaration)i8;
  i8 = i8==0;
  if (i8) goto l86;
  OOC_SymbolTable_Namespace__ErrDecl(3, (OOC_SymbolTable__Declaration)i7, (OOC_Error__List)i2);
  goto l89;
l86:
  i8 = baseNotExported;
  *(OOC_UINT8*)((_check_pointer(i7, 14769))+60) = i8;
l89:
  i6 = i6+1;
  i = i6;
  i7 = i6<i1;
  if (i7) goto l3_loop;
l94:
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
