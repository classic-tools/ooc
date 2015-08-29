#include <OOC/SymbolTable/Uses.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_SymbolTable_Uses__ErrorContextDesc_GetTemplate(OOC_SymbolTable_Uses__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 1794))+8);
  switch (i1) {
  case 1:
    _copy_16((const void*)((OOC_CHAR16[]){91,117,115,101,115,93,32,85,115,101,0}),(void*)(OOC_INT32)t,128);
    goto l6;
  case 2:
    _copy_16((const void*)((OOC_CHAR16[]){91,117,115,101,115,93,32,68,101,102,105,110,105,116,105,111,110,0}),(void*)(OOC_INT32)t,128);
    goto l6;
  case 3:
    _copy_16((const void*)((OOC_CHAR16[]){87,97,114,110,105,110,103,58,32,85,115,101,32,111,102,32,100,101,112,114,101,99,97,116,101,100,32,111,98,106,101,99,116,0}),(void*)(OOC_INT32)t,128);
    goto l6;
  default:
    _failed_case(i1, 1786);
    goto l6;
  }
l6:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1992)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

static void OOC_SymbolTable_Uses__InitUses(OOC_SymbolTable_Uses__Uses u, OOC_SymbolTable_Uses__Selector selector) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)u;
  i1 = (OOC_INT32)selector;
  *(OOC_INT32*)(_check_pointer(i0, 2106)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 2134))+4) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 2156))+8) = 0;
  *(OOC_UINT8*)((_check_pointer(i0, 2183))+12) = 0u;
  *(OOC_INT32*)((_check_pointer(i0, 2209))+16) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 2241))+20) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Uses__StoredUses.baseTypes[0], 8));
  return;
  ;
}

OOC_SymbolTable_Uses__Uses OOC_SymbolTable_Uses__New(const OOC_CHAR8 extIdent__ref[], OOC_LEN extIdent_0d, OOC_CHAR8 *syntaxError) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(extIdent,OOC_CHAR8 ,extIdent_0d)
  auto OOC_SymbolTable__Name OOC_SymbolTable_Uses__New_GetName(const OOC_CHAR8 str__ref[], OOC_LEN str_0d);
  auto OOC_SymbolTable_Uses__Selector OOC_SymbolTable_Uses__New_ParseIdent(const OOC_CHAR8 str__ref[], OOC_LEN str_0d);
    
    OOC_SymbolTable__Name OOC_SymbolTable_Uses__New_GetName(const OOC_CHAR8 str__ref[], OOC_LEN str_0d) {
      register OOC_INT32 i0,i1;
      OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)
      OOC_Scanner_InputBuffer__CharArray string;

      OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
      i0 = Strings__Length((void*)(OOC_INT32)str, str_0d);
      i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i0+1));
      string = (OOC_Scanner_InputBuffer__CharArray)i0;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2793)), 0);
      _copy_8((const void*)(OOC_INT32)str,(void*)(_check_pointer(i0, 2793)),i1);
      i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Name.baseTypes[0]);
      OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i1, (OOC_Scanner_InputBuffer__CharArray)i0, 0, 0, 0);
      return (OOC_SymbolTable__Name)i1;
      ;
    }

    
    OOC_SymbolTable_Uses__Selector OOC_SymbolTable_Uses__New_ParseIdent(const OOC_CHAR8 str__ref[], OOC_LEN str_0d) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)
      OOC_INT16 count;
      OOC_INT16 i;
      OOC_SymbolTable_Uses__Selector s;
      OOC_INT16 start;
      OOC_CHAR8 buffer[1024];

      OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT16, 3122)));
      i0 = i0!=0u;
      if (i0) goto l3;
      i0=0;
      goto l14;
l3:
      i0=0;i1=0;
l4_loop:
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 3151)));
      switch (i2) {
      case 97u ... 122u:
      case 65u ... 90u:
      case 48u ... 57u:
      case 95u:
      case 58u:
        
        goto l9;
      case 46u:
        i1 = i1+1;
        
        goto l9;
      default:
        return (OOC_SymbolTable_Uses__Selector)(OOC_INT32)0;
        
        goto l9;
      }
l9:
      i0 = i0+1;
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 3122)));
      i2 = i2!=0u;
      if (i2) goto l4_loop;
l13:
      i0=i1;
l14:
      i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Uses__Selector.baseTypes[0], (i0+1));
      s = (OOC_SymbolTable_Uses__Selector)i0;
      count = 0;
      i = 0;
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT16, 3426)));
      i1 = i1!=0u;
      if (!i1) goto l47;
      i1=0;i2=0;
l17_loop:
      start = i1;
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT16, 3477)));
      i3 = i3!=46u;
      if (i3) goto l20;
      i3=0u;
      goto l22;
l20:
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT16, 3494)));
      i3 = i3!=0u;
      
l22:
      if (i3) goto l24;
      i3=i1;
      goto l34;
l24:
      i3=i1;
l25_loop:
      i3 = i3+1;
      i = i3;
      i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT16, 3477)));
      i4 = i4!=46u;
      if (i4) goto l28;
      i4=0u;
      goto l30;
l28:
      i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT16, 3494)));
      i4 = i4!=0u;
      
l30:
      if (i4) goto l25_loop;
l34:
      i4 = i3==i1;
      if (i4) goto l37;
      Strings__Extract((void*)(OOC_INT32)str, str_0d, i1, (i3-i1), (void*)(OOC_INT32)buffer, 1024);
      i1 = _check_pointer(i0, 3686);
      i4 = OOC_ARRAY_LENGTH(i1, 0);
      i5 = (OOC_INT32)OOC_SymbolTable_Uses__New_GetName((void*)(OOC_INT32)buffer, 1024);
      *(OOC_INT32*)(i1+(_check_index(i2, i4, OOC_UINT16, 3686))*4) = i5;
      goto l38;
l37:
      return (OOC_SymbolTable_Uses__Selector)(OOC_INT32)0;
l38:
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT16, 3742)));
      i1 = i1==46u;
      if (i1) goto l41;
      i1=i3;
      goto l42;
l41:
      i1 = i3+1;
      i = i1;
      
l42:
      i2 = i2+1;
      count = i2;
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT16, 3426)));
      i3 = i3!=0u;
      if (i3) goto l17_loop;
l47:
      return (OOC_SymbolTable_Uses__Selector)i0;
      ;
    }


  OOC_INITIALIZE_VPAR(extIdent__ref,extIdent,OOC_CHAR8 ,extIdent_0d)
  i0 = (
  _cmp8((const void*)(OOC_INT32)extIdent,(const void*)""))==0;
  if (i0) goto l3;
  i0 = (OOC_INT32)OOC_SymbolTable_Uses__New_ParseIdent((void*)(OOC_INT32)extIdent, extIdent_0d);
  *syntaxError = (i0==(OOC_INT32)0);
  
  goto l4;
l3:
  *syntaxError = 0u;
  i0=(OOC_INT32)0;
l4:
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Uses__Uses.baseTypes[0]);
  OOC_SymbolTable_Uses__InitUses((OOC_SymbolTable_Uses__Uses)i1, (OOC_SymbolTable_Uses__Selector)i0);
  return (OOC_SymbolTable_Uses__Uses)i1;
  ;
}

OOC_CHAR8 OOC_SymbolTable_Uses__UsesDesc_TrackingDeclarations(OOC_SymbolTable_Uses__Uses u) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)u;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4188));
  return (i0!=0);
  ;
}

void OOC_SymbolTable_Uses__UsesDesc_StartModule(OOC_SymbolTable_Uses__Uses u, OOC_SymbolTable__Module symTab, OOC_Error__List errList) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)u;
  i1 = (OOC_INT32)errList;
  *(OOC_INT32*)((_check_pointer(i0, 4517))+4) = i1;
  i1 = OOC_SymbolTable_Uses__UsesDesc_TrackingDeclarations((OOC_SymbolTable_Uses__Uses)i0);
  if (i1) goto l3;
  *(OOC_UINT8*)((_check_pointer(i0, 4653))+12) = 0u;
  goto l4;
l3:
  i1 = (OOC_INT32)symTab;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4603))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4608))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4617));
  i2 = _check_pointer(i2, 4626);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 4626))*4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4629))+12);
  *(OOC_UINT8*)((_check_pointer(i0, 4582))+12) = ((
  _cmp8((const void*)(_check_pointer(i1, 4612)),(const void*)(_check_pointer(i2, 4633))))==0);
l4:
  return;
  ;
}

static void OOC_SymbolTable_Uses__AddMsg(OOC_SymbolTable_Uses__Uses u, OOC_SymbolTable__Name ident, OOC_INT32 code) {
  register OOC_INT32 i0,i1,i2;
  Msg__Msg e;

  i0 = (OOC_INT32)OOC_SymbolTable_Uses__usesContext;
  i1 = code;
  i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
  e = (Msg__Msg)i0;
  i1 = (OOC_INT32)ident;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 4867));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4841)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 4906))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4879)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 4948))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4919)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
  i1 = (OOC_INT32)u;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4963))+4);
  OOC_Error__ListDesc_AppendWarning((OOC_Error__List)i1, (Msg__Msg)i0);
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable_Uses__UsesDesc_Matches(OOC_SymbolTable_Uses__Uses u, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 index;
  OOC_SymbolTable__ProcDecl p;
  OOC_SymbolTable__Record record;

  i0 = (OOC_INT32)u;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5162))+8);
  i2 = (OOC_INT32)decl;
  i1 = i2==i1;
  if (i1) goto l48;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5208))+8);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l5;
  return 0u;
  goto l49;
l5:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5244)))), &_td_OOC_SymbolTable__ImportDesc);
  if (i1) goto l8;
  i1=0u;
  goto l10;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5280)))), &_td_OOC_SymbolTable__ImportDesc, 5280)), 5287))+48);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5306))+8);
  i1 = i1==i3;
  
l10:
  if (i1) goto l45;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5360)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i1) goto l14;
  i1=0u;
  goto l16;
l14:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5381))+8);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5390)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  
l16:
  if (i1) goto l18;
  i1=0u;
  goto l20;
l18:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5426))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5431))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5440))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5448))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5453))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 5435)),(const void*)(_check_pointer(i3, 5457))))==0;
  
l20:
  if (i1) goto l22;
  i1=0u;
  goto l24;
l22:
  i1 = OOC_SymbolTable__ProcDeclDesc_IsTypeBound((OOC_SymbolTable__ProcDecl)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5483)))), &_td_OOC_SymbolTable__ProcDeclDesc, 5483)));
  
l24:
  if (i1) goto l26;
  i1=0u;
  goto l28;
l26:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5522))+8);
  i1 = OOC_SymbolTable__ProcDeclDesc_IsTypeBound((OOC_SymbolTable__ProcDecl)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5535)))), &_td_OOC_SymbolTable__ProcDeclDesc, 5535)));
  
l28:
  if (i1) goto l30;
  i1=0u;
  goto l32;
l30:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5621))+8);
  i3 = *(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5583)))), &_td_OOC_SymbolTable__ProcDeclDesc, 5583)), 5592))+52);
  i1 = *(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5634)))), &_td_OOC_SymbolTable__ProcDeclDesc, 5634)), 5643))+52);
  i1 = i3==i1;
  
l32:
  if (i1) goto l34;
  return 0u;
  goto l49;
l34:
  i1 = *(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5864)))), &_td_OOC_SymbolTable__ProcDeclDesc, 5864)), 5873))+52);
  index = i1;
  p = (OOC_SymbolTable__ProcDecl)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5909)))), &_td_OOC_SymbolTable__ProcDeclDesc, 5909));
l35_loop:
  i3 = (OOC_INT32)OOC_SymbolTable__ProcDeclDesc_Class((OOC_SymbolTable__ProcDecl)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5964)))), &_td_OOC_SymbolTable__ProcDeclDesc, 5964)));
  record = (OOC_SymbolTable__Record)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 6004))+48);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 6004))+48);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 6007)))), OOC_SymbolTable__NamespaceDesc_GetSuperProcByIndex)),OOC_SymbolTable__NamespaceDesc_GetSuperProcByIndex)((OOC_SymbolTable__Namespace)i3, i1);
  p = (OOC_SymbolTable__ProcDecl)i3;
  i4 = i3==(OOC_INT32)0;
  if (i4) goto l38;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6069))+8);
  i4 = i3==i4;
  
  goto l40;
l38:
  i4=1u;
l40:
  if (!i4) goto l35_loop;
l43:
  return (i3!=(OOC_INT32)0);
  goto l49;
l45:
  return 1u;
  goto l49;
l48:
  return 1u;
l49:
  _failed_function(5026); return 0;
  ;
}

void OOC_SymbolTable_Uses__UsesDesc_RegisterSymTab(OOC_SymbolTable_Uses__Uses u, OOC_SymbolTable__Module symTab) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;
  auto OOC_SymbolTable__Declaration OOC_SymbolTable_Uses__UsesDesc_RegisterSymTab_ResolveSelector(OOC_SymbolTable__Module root);
  auto OOC_SymbolTable__Declaration OOC_SymbolTable_Uses__UsesDesc_RegisterSymTab_Resolve(void);
    
    OOC_SymbolTable__Declaration OOC_SymbolTable_Uses__UsesDesc_RegisterSymTab_ResolveSelector(OOC_SymbolTable__Module root) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 i;
      OOC_SymbolTable__Item item;
      OOC_SymbolTable__Namespace ns;
      auto OOC_SymbolTable__Namespace OOC_SymbolTable_Uses__UsesDesc_RegisterSymTab_ResolveSelector_Namespace(OOC_SymbolTable__Item item);
        
        OOC_SymbolTable__Namespace OOC_SymbolTable_Uses__UsesDesc_RegisterSymTab_ResolveSelector_Namespace(OOC_SymbolTable__Item item) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)item;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6622)))), &_td_OOC_SymbolTable__ModuleDesc);
          if (i1) goto l35;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6678)))), &_td_OOC_SymbolTable__ProcDeclDesc);
          if (i1) goto l33;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6747)))), &_td_OOC_SymbolTable__TypeDeclDesc);
          if (i1) goto l31;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6818)))), &_td_OOC_SymbolTable__VarDeclDesc);
          if (i1) goto l29;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6888)))), &_td_OOC_SymbolTable__FieldDeclDesc);
          if (i1) goto l27;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6960)))), &_td_OOC_SymbolTable__ImportDesc);
          if (i1) goto l25;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7050)))), &_td_OOC_SymbolTable__RecordDesc);
          if (i1) goto l23;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7106)))), &_td_OOC_SymbolTable__PointerDesc);
          if (i1) goto l21;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7180)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i1) goto l19;
          return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
          goto l36;
l19:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7226))+40);
          i0 = (OOC_INT32)OOC_SymbolTable_Uses__UsesDesc_RegisterSymTab_ResolveSelector_Namespace((OOC_SymbolTable__Item)i0);
          return (OOC_SymbolTable__Namespace)i0;
          goto l36;
l21:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7154))+36);
          i0 = (OOC_INT32)OOC_SymbolTable_Uses__UsesDesc_RegisterSymTab_ResolveSelector_Namespace((OOC_SymbolTable__Item)i0);
          return (OOC_SymbolTable__Namespace)i0;
          goto l36;
l23:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7087))+48);
          return (OOC_SymbolTable__Namespace)i0;
          goto l36;
l25:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7007))+48);
          i0 = (OOC_INT32)OOC_SymbolTable_Uses__UsesDesc_RegisterSymTab_ResolveSelector_Namespace((OOC_SymbolTable__Item)i0);
          return (OOC_SymbolTable__Namespace)i0;
          goto l36;
l27:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6938))+44);
          i0 = (OOC_INT32)OOC_SymbolTable_Uses__UsesDesc_RegisterSymTab_ResolveSelector_Namespace((OOC_SymbolTable__Item)i0);
          return (OOC_SymbolTable__Namespace)i0;
          goto l36;
l29:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6866))+44);
          i0 = (OOC_INT32)OOC_SymbolTable_Uses__UsesDesc_RegisterSymTab_ResolveSelector_Namespace((OOC_SymbolTable__Item)i0);
          return (OOC_SymbolTable__Namespace)i0;
          goto l36;
l31:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6796))+44);
          i0 = (OOC_INT32)OOC_SymbolTable_Uses__UsesDesc_RegisterSymTab_ResolveSelector_Namespace((OOC_SymbolTable__Item)i0);
          return (OOC_SymbolTable__Namespace)i0;
          goto l36;
l33:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6717))+56);
          return (OOC_SymbolTable__Namespace)i0;
          goto l36;
l35:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6659))+44);
          return (OOC_SymbolTable__Namespace)i0;
l36:
          _failed_function(6551); return 0;
          ;
        }


      i0 = (OOC_INT32)root;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7339))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7344))+12);
      i2 = (OOC_INT32)u;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 7353));
      i3 = _check_pointer(i3, 7362);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 7362))*4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7365))+12);
      i1 = (
      _cmp8((const void*)(_check_pointer(i1, 7348)),(const void*)(_check_pointer(i3, 7369))))==0;
      if (i1) goto l3;
      return (OOC_SymbolTable__Declaration)0;
      goto l25;
l3:
      i = 1;
      item = (OOC_SymbolTable__Item)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 7439));
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7448)), 0);
      i1 = 1!=i1;
      if (!i1) goto l24;
l7_loop:
      i0 = (OOC_INT32)OOC_SymbolTable_Uses__UsesDesc_RegisterSymTab_ResolveSelector_Namespace((OOC_SymbolTable__Item)i0);
      ns = (OOC_SymbolTable__Namespace)i0;
      i1 = i0==0;
      if (i1) goto l10;
      i1 = (OOC_INT32)u;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7596));
      i1 = _check_pointer(i1, 7605);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = i;
      i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 7605))*4);
      i2 = (OOC_INT32)root;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7579)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i1, 1u);
      item = (OOC_SymbolTable__Item)i0;
      
      goto l11;
l10:
      item = (OOC_SymbolTable__Item)0;
      i0=0;
l11:
      i1 = i0==0;
      if (i1) goto l14;
      i1 = i;
      i = (i1+1);
      goto l19;
l14:
      i1 = (OOC_INT32)root;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7694))+16);
      i1 = *(OOC_INT32*)(_check_pointer(i1, 7699));
      i1 = i1>=0;
      if (i1) goto l17;
      return (OOC_SymbolTable__Declaration)0;
      goto l19;
l17:
      Err__String("Error: Cannot resolve member `", 31);
      i1 = (OOC_INT32)u;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7858));
      i2 = _check_pointer(i2, 7867);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = i;
      i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i4, i3, OOC_UINT32, 7867))*4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7870))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7858));
      i1 = _check_pointer(i1, 7867);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i4, i3, OOC_UINT32, 7867))*4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7870))+12);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7874)), 0);
      Err__String((void*)(_check_pointer(i2, 7874)), i1);
      Err__String("\047 of --uses", 12);
      Err__Ln();
      _halt(1);
l19:
      i1 = (OOC_INT32)u;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7439));
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7448)), 0);
      i2 = i;
      i1 = i2!=i1;
      if (i1) goto l7_loop;
l24:
      return (OOC_SymbolTable__Declaration)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8188)))), &_td_OOC_SymbolTable__DeclarationDesc, 8188));
l25:
      _failed_function(6411); return 0;
      ;
    }

    
    OOC_SymbolTable__Declaration OOC_SymbolTable_Uses__UsesDesc_RegisterSymTab_Resolve(void) {
      register OOC_INT32 i0,i1,i2;
      OOC_SymbolTable__Declaration decl;
      OOC_SymbolTable__Item item;

      i0 = (OOC_INT32)symTab;
      i0 = (OOC_INT32)OOC_SymbolTable_Uses__UsesDesc_RegisterSymTab_ResolveSelector((OOC_SymbolTable__Module)i0);
      decl = (OOC_SymbolTable__Declaration)i0;
      i1 = i0==(OOC_INT32)0;
      if (!i1) goto l25;
      i2 = (OOC_INT32)symTab;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8469))+8);
      item = (OOC_SymbolTable__Item)i2;
      if (i1) goto l6;
      i1=0u;
      goto l8;
l6:
      i1 = i2!=(OOC_INT32)0;
      
l8:
      if (!i1) goto l25;
      i1=i0;i0=i2;
l11_loop:
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8547)))), &_td_OOC_SymbolTable__ImportDesc);
      if (!i2) goto l15;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8603))+48);
      i1 = (OOC_INT32)OOC_SymbolTable_Uses__UsesDesc_RegisterSymTab_ResolveSelector((OOC_SymbolTable__Module)i1);
      decl = (OOC_SymbolTable__Declaration)i1;
      
l15:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8698));
      item = (OOC_SymbolTable__Item)i0;
      i2 = i1==(OOC_INT32)0;
      if (i2) goto l18;
      i2=0u;
      goto l20;
l18:
      i2 = i0!=(OOC_INT32)0;
      
l20:
      if (i2) goto l11_loop;
l23:
      i0=i1;
l25:
      return (OOC_SymbolTable__Declaration)i0;
      ;
    }


  i0 = (OOC_INT32)u;
  i1 = OOC_SymbolTable_Uses__UsesDesc_TrackingDeclarations((OOC_SymbolTable_Uses__Uses)i0);
  if (!i1) goto l21;
  i1 = (OOC_INT32)OOC_SymbolTable_Uses__UsesDesc_RegisterSymTab_Resolve();
  *(OOC_INT32*)((_check_pointer(i0, 8826))+8) = i1;
  i0 = (OOC_INT32)u;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8860))+8);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l5;
  i1=0u;
  goto l7;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8880))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8888))+16);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 8893));
  i1 = i1>=0;
  
l7:
  if (!i1) goto l9;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8928))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8936))+16);
  OOC_SymbolTable_Uses__AddMsg((OOC_SymbolTable_Uses__Uses)i0, (OOC_SymbolTable__Name)i1, 2);
l9:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8995))+16);
  i = 0;
  i2 = 0<i1;
  if (!i2) goto l20;
  i2=0;
l12_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9039))+20);
  i3 = _check_pointer(i3, 9050);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)((i3+(_check_index(i2, i4, OOC_UINT32, 9050))*8)+4);
  i3 = OOC_SymbolTable_Uses__UsesDesc_Matches((OOC_SymbolTable_Uses__Uses)i0, (OOC_SymbolTable__Declaration)i3);
  if (!i3) goto l15;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9086))+20);
  i3 = _check_pointer(i3, 9097);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 9097))*8);
  OOC_SymbolTable_Uses__AddMsg((OOC_SymbolTable_Uses__Uses)i0, (OOC_SymbolTable__Name)i3, 1);
l15:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9144))+20);
  i3 = _check_pointer(i3, 9155);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 9155))*8) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9182))+20);
  i3 = _check_pointer(i3, 9193);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+(_check_index(i2, i4, OOC_UINT32, 9193))*8)+4) = (OOC_INT32)0;
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l12_loop;
l20:
  *(OOC_INT32*)((_check_pointer(i0, 9228))+16) = 0;
  *(OOC_UINT8*)((_check_pointer(i0, 9258))+12) = 0u;
l21:
  return;
  ;
}

void OOC_SymbolTable_Uses__Mark(OOC_SymbolTable__Declaration decl, OOC_SymbolTable_Uses__Uses uses, OOC_SymbolTable__Name ident) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_SymbolTable_Uses__StoredUses _new;
  OOC_INT32 i;
  auto OOC_CHAR8 OOC_SymbolTable_Uses__Mark_Deprecated(OOC_SymbolTable__Declaration decl);
    
    OOC_CHAR8 OOC_SymbolTable_Uses__Mark_Deprecated(OOC_SymbolTable__Declaration decl) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)decl;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9505)))), &_td_OOC_SymbolTable__ImportDesc);
      if (i1) goto l3;
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 9598))+32);
      return i0;
      goto l4;
l3:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9540))+48);
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 9555))+32);
      return i0;
l4:
      _failed_function(9436); return 0;
      ;
    }


  i0 = (OOC_INT32)decl;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l38;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9688)))), OOC_SymbolTable__DeclarationDesc_IncrUsageCounter)),OOC_SymbolTable__DeclarationDesc_IncrUsageCounter)((OOC_SymbolTable__Declaration)i0);
  i1 = (OOC_INT32)uses;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l5;
  i3=0u;
  goto l7;
l5:
  i3 = (OOC_INT32)ident;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 9740));
  i3 = i3>0;
  
l7:
  if (!i3) goto l38;
  i3 = OOC_SymbolTable_Uses__Mark_Deprecated((OOC_SymbolTable__Declaration)i0);
  if (!i3) goto l12;
  i3 = (OOC_INT32)ident;
  OOC_SymbolTable_Uses__AddMsg((OOC_SymbolTable_Uses__Uses)i1, (OOC_SymbolTable__Name)i3, 3);
l12:
  if (i2) goto l14;
  i2=0u;
  goto l16;
l14:
  i2 = OOC_SymbolTable_Uses__UsesDesc_TrackingDeclarations((OOC_SymbolTable_Uses__Uses)i1);
  
l16:
  if (!i2) goto l38;
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 9921))+12);
  if (i2) goto l23;
  i0 = OOC_SymbolTable_Uses__UsesDesc_Matches((OOC_SymbolTable_Uses__Uses)i1, (OOC_SymbolTable__Declaration)i0);
  if (!i0) goto l38;
  i0 = (OOC_INT32)ident;
  OOC_SymbolTable_Uses__AddMsg((OOC_SymbolTable_Uses__Uses)i1, (OOC_SymbolTable__Name)i0, 1);
  goto l38;
l23:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9984))+20);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 9957))+16);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 9995)), 0);
  i2 = i3==i2;
  if (!i2) goto l34;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10031))+16);
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Uses__StoredUses.baseTypes[0], (i2*2));
  _new = (OOC_SymbolTable_Uses__StoredUses)i2;
  i = 0;
  i3 = *(OOC_INT32*)((_check_pointer(i1, 10084))+16);
  i4 = 0<i3;
  if (!i4) goto l33;
  i4=0;
l28_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10136))+20);
  i5 = _check_pointer(i5, 10147);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = _check_pointer(i2, 10125);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  _copy_block((i5+(_check_index(i4, i6, OOC_UINT32, 10147))*8),(i7+(_check_index(i4, i8, OOC_UINT32, 10125))*8),8);
  i4 = i4+1;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l28_loop;
l33:
  *(OOC_INT32*)((_check_pointer(i1, 10189))+20) = i2;
l34:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10242))+20);
  i2 = _check_pointer(i2, 10253);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 10258))+16);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i5 = (OOC_INT32)ident;
  *(OOC_INT32*)(i2+(_check_index(i3, i4, OOC_UINT32, 10253))*8) = i5;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10308))+20);
  i2 = _check_pointer(i2, 10319);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 10324))+16);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_INT32*)((i2+(_check_index(i3, i4, OOC_UINT32, 10319))*8)+4) = i0;
  i0 = *(OOC_INT32*)((_check_pointer(i1, 10376))+16);
  *(OOC_INT32*)((_check_pointer(i1, 10376))+16) = (i0+1);
l38:
  return;
  ;
}

void OOC_OOC_SymbolTable_Uses_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Uses__ErrorContext.baseTypes[0]);
  OOC_SymbolTable_Uses__usesContext = (OOC_SymbolTable_Uses__ErrorContext)i0;
  OOC_Error__InitContext((OOC_Error__Context)i0, "OOC:SymbolTable:Uses", 21);
  return;
  ;
}

/* --- */
