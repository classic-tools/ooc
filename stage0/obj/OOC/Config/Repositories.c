#include "OOC/Config/Repositories.d"
#include "__oo2c.h"

void OOC_Config_Repositories__ErrorContextDesc_GetTemplate(OOC_Config_Repositories__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 1985))+8);
  switch (i1) {
  case 1:
    _copy_16(((OOC_CHAR16[]){73,110,118,97,108,105,100,32,99,111,110,116,101,110,116,32,102,111,114,32,101,108,101,109,101,110,116,32,96,36,123,110,97,109,101,125,39,0}),(OOC_INT32)t,128);
    goto l6;
  case 2:
    _copy_16(((OOC_CHAR16[]){65,116,116,114,105,98,117,116,101,32,96,36,123,110,97,109,101,125,39,32,105,115,32,110,111,116,32,100,101,102,105,110,101,100,32,102,111,114,32,116,104,105,115,32,101,108,101,109,101,110,116,0}),(OOC_INT32)t,128);
    goto l6;
  case 3:
    _copy_16(((OOC_CHAR16[]){84,104,105,115,32,101,108,101,109,101,110,116,32,109,117,115,116,32,98,101,32,101,109,112,116,121,0}),(OOC_INT32)t,128);
    goto l6;
  default:
    _failed_case(i1, 1977);
    goto l6;
  }
l6:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2237)))), XML_Error__ContextDesc_WriteTemplate)),XML_Error__ContextDesc_WriteTemplate)((XML_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

static void OOC_Config_Repositories__Init(OOC_Config_Repositories__Section s, const Config_Parser__String id__ref, OOC_LEN id_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(id,OOC_CHAR16 ,id_0d)

  OOC_INITIALIZE_VPAR(id__ref,id,OOC_CHAR16 ,(id_0d*2))
  i0 = (OOC_INT32)s;
  Config_Section__Init((Config_Section__Section)i0, (void*)(OOC_INT32)id, id_0d);
  *(OOC_INT32*)((_check_pointer(i0, 2373))+4) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 2405))+8) = ((OOC_INT32)RT0__NewObject(_td_OOC_Config_Repositories__ModuleList.baseTypes[0], 64));
  *(OOC_INT32*)((_check_pointer(i0, 2424))+12) = 0;
  return;
  ;
}

OOC_Config_Repositories__Section OOC_Config_Repositories__New() {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Config_Repositories__Section.baseTypes[0]);
  OOC_Config_Repositories__Init((OOC_Config_Repositories__Section)i0, ((OOC_CHAR16[]){114,101,112,111,115,105,116,111,114,105,101,115,0}), 13);
  return (OOC_Config_Repositories__Section)i0;
  ;
}

void OOC_Config_Repositories__InitRepositoryEntry(OOC_Config_Repositories__RepositoryEntry re, const OOC_CHAR8 name__ref[], OOC_LEN name_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)re;
  *(OOC_INT32*)(_check_pointer(i0, 2708)) = (OOC_INT32)0;
  _copy_8to16((OOC_INT32)name,((_check_pointer(i0, 2741))+4),32);
  return;
  ;
}

OOC_Repository__Repository OOC_Config_Repositories__RepositoryEntryDesc_ProcessElement(OOC_Config_Repositories__RepositoryEntry re, Config_Parser__Element node, XML_Locator__ErrorListener errorListener, OOC_Repository__Repository baseRep) {

  _failed_function(2821); return 0;
  ;
}

void OOC_Config_Repositories__AddRepositoryEntry(OOC_Config_Repositories__RepositoryEntry re) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)re;
  i1 = (OOC_INT32)OOC_Config_Repositories__repositoryEntries;
  *(OOC_INT32*)(_check_pointer(i0, 3117)) = i1;
  OOC_Config_Repositories__repositoryEntries = (OOC_Config_Repositories__RepositoryEntry)i0;
  return;
  ;
}

void OOC_Config_Repositories__SectionDesc_ProcessElements(OOC_Config_Repositories__Section s, Config_Parser__Element sectionRoot, XML_Locator__ErrorListener errorListener) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Config_Parser__Node node;
  OOC_Config_Repositories__RepositoryEntry re;
  OOC_Repository__Repository rep;
  Msg__Msg lastError;
  auto void OOC_Config_Repositories__SectionDesc_ProcessElements_Err(OOC_INT32 code, Config_Parser__Node xmlNode);
    
    void OOC_Config_Repositories__SectionDesc_ProcessElements_Err(OOC_INT32 code, Config_Parser__Node xmlNode) {
      register OOC_INT32 i0,i1,i2,i3;

      i0 = (OOC_INT32)errorListener;
      i1 = (OOC_INT32)xmlNode;
      i2 = (OOC_INT32)OOC_Config_Repositories__repositoriesContext;
      i3 = code;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3566)))), XML_Locator__ErrorListenerDesc_Error)),XML_Locator__ErrorListenerDesc_Error)((XML_Locator__ErrorListener)i0, (XML_Error__Context)i2, i3, OOC_FALSE, (void*)((_check_pointer(i1, 3616))+4));
      lastError = (Msg__Msg)i0;
      return;
      ;
    }


  i0 = (OOC_INT32)sectionRoot;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3670))+36);
  i1 = i0!=(OOC_INT32)0;
  node = (Config_Parser__Node)i0;
  if (!i1) goto l43;
l3_loop:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3722)))), &_td_Config_Parser__ElementDesc);
  if (i1) goto l13;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4218)))), &_td_Config_Parser__CharDataDesc);
  if (i1) goto l8;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4212)))), 4212);
  goto l38;
l8:
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4255)))), Config_Parser__NodeDesc_IsWhitespace)),Config_Parser__NodeDesc_IsWhitespace)((Config_Parser__Node)i0);
  i1 = !i1;
  if (!i1) goto l38;
  OOC_Config_Repositories__SectionDesc_ProcessElements_Err(1, (Config_Parser__Node)i0);
  goto l38;
l13:
  i1 = (OOC_INT32)OOC_Config_Repositories__repositoryEntries;
  re = (OOC_Config_Repositories__RepositoryEntry)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l16;
  i2=OOC_FALSE;
  goto l18;
l16:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3818))+28);
  i2 = (
  _cmp16((const void*)((_check_pointer(i1, 3805))+4),(const void*)(_check_pointer(i2, 3824))))!=0;
  
l18:
  if (!i2) goto l30;
l21_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3848));
  re = (OOC_Config_Repositories__RepositoryEntry)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l24;
  i2=OOC_FALSE;
  goto l26;
l24:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3818))+28);
  i2 = (
  _cmp16((const void*)((_check_pointer(i1, 3805))+4),(const void*)(_check_pointer(i2, 3824))))!=0;
  
l26:
  if (i2) goto l21_loop;
l30:
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l33;
  OOC_Config_Repositories__SectionDesc_ProcessElements_Err(1, (Config_Parser__Node)i0);
  i0 = (OOC_INT32)lastError;
  i1 = (OOC_INT32)s;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 4175));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 4175));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4181)), 0);
  i1 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 4181)), i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4127)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i1);
  goto l38;
l33:
  i2 = (OOC_INT32)s;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3963))+4);
  i4 = (OOC_INT32)errorListener;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3923)))), OOC_Config_Repositories__RepositoryEntryDesc_ProcessElement)),OOC_Config_Repositories__RepositoryEntryDesc_ProcessElement)((OOC_Config_Repositories__RepositoryEntry)i1, (Config_Parser__Element)i0, (XML_Locator__ErrorListener)i4, (OOC_Repository__Repository)i3);
  rep = (OOC_Repository__Repository)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l38;
  *(OOC_INT32*)((_check_pointer(i2, 4022))+4) = i0;
l38:
  i0 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4355));
  node = (Config_Parser__Node)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l43:
  return;
  ;
}

void OOC_Config_Repositories__SectionDesc_DumpContent(OOC_Config_Repositories__Section s, Channel__Channel ch) {
  register OOC_INT32 i0,i1,i2,i3;
  TextRider__Writer w;
  OOC_CHAR8 str8[2048];
  auto void OOC_Config_Repositories__SectionDesc_DumpContent_Write(OOC_Repository__Repository rep);
    
    void OOC_Config_Repositories__SectionDesc_DumpContent_Write(OOC_Repository__Repository rep) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)rep;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l4;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4623));
      OOC_Config_Repositories__SectionDesc_DumpContent_Write((OOC_Repository__Repository)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4646)))), OOC_Repository__RepositoryDesc_DumpContent)),OOC_Repository__RepositoryDesc_DumpContent)((OOC_Repository__Repository)i0, (TextRider__Writer)i1);
l4:
      return;
      ;
    }


  i0 = (OOC_INT32)ch;
  i0 = (OOC_INT32)TextRider__ConnectWriter((Channel__Channel)i0);
  w = (TextRider__Writer)i0;
  i1 = (OOC_INT32)s;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 4763));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 4763));
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 4769)), 0);
  LongStrings__Short((void*)(_check_pointer(i2, 4769)), i3, (OOC_CHAR8)'?', (void*)(OOC_INT32)str8, 2048);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4789)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "<", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4815)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)str8, 2048);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4842)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ">", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4864)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4887))+4);
  OOC_Config_Repositories__SectionDesc_DumpContent_Write((OOC_Repository__Repository)i0);
  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4927));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4927));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4933)), 0);
  LongStrings__Short((void*)(_check_pointer(i1, 4933)), i0, (OOC_CHAR8)'?', (void*)(OOC_INT32)str8, 2048);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4953)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "</", 3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4980)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)str8, 2048);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5007)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ">", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5029)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

OOC_Repository__Module OOC_Config_Repositories__SectionDesc_GetModule(OOC_Config_Repositories__Section s, const OOC_CHAR8 moduleRef__ref[], OOC_LEN moduleRef_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_ALLOCATE_VPAR(moduleRef,OOC_CHAR8 ,moduleRef_0d)
  OOC_INT32 i;
  OOC_Repository__Repository topLevelRep;
  OOC_Repository__Module m;
  URI_Scheme_File__URI file;
  auto void OOC_Config_Repositories__SectionDesc_GetModule_AddToCache(OOC_Repository__Module m);
    
    void OOC_Config_Repositories__SectionDesc_GetModule_AddToCache(OOC_Repository__Module m) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
      OOC_Config_Repositories__ModuleList _new;
      OOC_INT32 i;

      i0 = (OOC_INT32)m;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l14;
      i1 = (OOC_INT32)s;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6811))+8);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 6792))+12);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 6818)), 0);
      i2 = i3==i2;
      if (!i2) goto l13;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6853))+8);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 6860)), 0);
      i2 = (OOC_INT32)RT0__NewObject(_td_OOC_Config_Repositories__ModuleList.baseTypes[0], (i2*2));
      _new = (OOC_Config_Repositories__ModuleList)i2;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6897))+8);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 6904)), 0);
      i3 = i3-1;
      i4 = 0<=i3;
      i = 0;
      if (!i4) goto l12;
      i4=0;
l7_loop:
      i5 = _check_pointer(i2, 6927);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6935))+8);
      i7 = _check_pointer(i7, 6942);
      i8 = OOC_ARRAY_LENGTH(i7, 0);
      i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 6942))*4);
      *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 6927))*4) = i7;
      i4 = i4+1;
      i5 = i4<=i3;
      i = i4;
      if (i5) goto l7_loop;
l12:
      *(OOC_INT32*)((_check_pointer(i1, 6972))+8) = i2;
l13:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7009))+8);
      i2 = _check_pointer(i2, 7016);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 7018))+12);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      *(OOC_INT32*)(i2+(_check_index(i3, i4, OOC_UINT32, 7016))*4) = i0;
      i0 = *(OOC_INT32*)((_check_pointer(i1, 7050))+12);
      *(OOC_INT32*)((_check_pointer(i1, 7050))+12) = (i0+1);
l14:
      return;
      ;
    }


  OOC_INITIALIZE_VPAR(moduleRef__ref,moduleRef,OOC_CHAR8 ,moduleRef_0d)
  i0 = OOC_Repository__ValidModuleName((void*)(OOC_INT32)moduleRef, moduleRef_0d);
  if (i0) goto l3;
  i0 = *(OOC_UINT8*)((OOC_INT32)moduleRef+(_check_index(0, moduleRef_0d, OOC_UINT8, 7163)));
  i0 = i0==(OOC_CHAR8)'#';
  
  goto l5;
l3:
  i0=OOC_TRUE;
l5:
  if (i0) goto l40;
  i0 = (OOC_INT32)URI_Scheme_File__ToURI((void*)(OOC_INT32)moduleRef, moduleRef_0d);
  file = (URI_Scheme_File__URI)i0;
  i = 0;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 8196))+12);
  i2 = 0!=i2;
  if (i2) goto l9;
  i2=OOC_FALSE;
  goto l11;
l9:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8212))+8);
  i2 = _check_pointer(i2, 8219);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT32, 8219))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8212))+8);
  i3 = _check_pointer(i3, 8219);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT32, 8219))*4);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8222)))), OOC_Repository__ModuleDesc_MatchesURI)),OOC_Repository__ModuleDesc_MatchesURI)((OOC_Repository__Module)i3, 0, (URI__URI)i0);
  
l11:
  if (i2) goto l13;
  i2=0;
  goto l23;
l13:
  i2=0;
l14_loop:
  i2 = i2+1;
  i = i2;
  i3 = *(OOC_INT32*)((_check_pointer(i1, 8196))+12);
  i3 = i2!=i3;
  if (i3) goto l17;
  i3=OOC_FALSE;
  goto l19;
l17:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8212))+8);
  i3 = _check_pointer(i3, 8219);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 8219))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8212))+8);
  i4 = _check_pointer(i4, 8219);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 8219))*4);
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8222)))), OOC_Repository__ModuleDesc_MatchesURI)),OOC_Repository__ModuleDesc_MatchesURI)((OOC_Repository__Module)i4, 0, (URI__URI)i0);
  
l19:
  if (i3) goto l14_loop;
l23:
  i3 = *(OOC_INT32*)((_check_pointer(i1, 8316))+12);
  i3 = i2!=i3;
  if (!i3) goto l26;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8373))+8);
  i3 = _check_pointer(i3, 8380);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 8380))*4);
  return (OOC_Repository__Module)i2;
l26:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8482))+4);
  topLevelRep = (OOC_Repository__Repository)i2;
  
l27_loop:
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8534)))), OOC_Repository__RepositoryDesc_GetModuleByURI)),OOC_Repository__RepositoryDesc_GetModuleByURI)((OOC_Repository__Repository)i2, (URI__HierarchicalURI)i0, OOC_FALSE);
  m = (OOC_Repository__Module)i3;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 8600));
  topLevelRep = (OOC_Repository__Repository)i2;
  i4 = i3!=(OOC_INT32)0;
  if (i4) goto l30;
  i4 = i2==(OOC_INT32)0;
  
  goto l32;
l30:
  i4=OOC_TRUE;
l32:
  if (!i4) goto l27_loop;
l35:
  i2 = i3==(OOC_INT32)0;
  if (i2) goto l38;
  i0=i3;
  goto l39;
l38:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8701))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8701))+4);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8714)))), OOC_Repository__RepositoryDesc_GetModuleByURI)),OOC_Repository__RepositoryDesc_GetModuleByURI)((OOC_Repository__Repository)i1, (URI__HierarchicalURI)i0, OOC_TRUE);
  m = (OOC_Repository__Module)i0;
  
l39:
  OOC_Config_Repositories__SectionDesc_GetModule_AddToCache((OOC_Repository__Module)i0);
  i0 = (OOC_INT32)m;
  return (OOC_Repository__Module)i0;
  goto l70;
l40:
  i0 = (OOC_INT32)s;
  i = 0;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7427))+12);
  i1 = 0!=i1;
  if (i1) goto l43;
  i1=OOC_FALSE;
  goto l45;
l43:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7443))+8);
  i1 = _check_pointer(i1, 7450);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT32, 7450))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7453))+4);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 7459)),(const void*)(OOC_INT32)moduleRef))!=0;
  
l45:
  if (i1) goto l47;
  i1=0;
  goto l57;
l47:
  i1=0;
l48_loop:
  i1 = i1+1;
  i = i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7427))+12);
  i2 = i1!=i2;
  if (i2) goto l51;
  i2=OOC_FALSE;
  goto l53;
l51:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7443))+8);
  i2 = _check_pointer(i2, 7450);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 7450))*4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7453))+4);
  i2 = (
  _cmp8((const void*)(_check_pointer(i2, 7459)),(const void*)(OOC_INT32)moduleRef))!=0;
  
l53:
  if (i2) goto l48_loop;
l57:
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7519))+12);
  i2 = i1!=i2;
  if (!i2) goto l60;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7576))+8);
  i2 = _check_pointer(i2, 7583);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 7583))*4);
  return (OOC_Repository__Module)i1;
l60:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7682))+4);
  topLevelRep = (OOC_Repository__Repository)i0;
  
l61_loop:
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7734)))), OOC_Repository__RepositoryDesc_GetModule)),OOC_Repository__RepositoryDesc_GetModule)((OOC_Repository__Repository)i0, (void*)(OOC_INT32)moduleRef, moduleRef_0d, (URI__HierarchicalURI)(OOC_INT32)0);
  m = (OOC_Repository__Module)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7798));
  topLevelRep = (OOC_Repository__Repository)i0;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l64;
  i2 = i0==(OOC_INT32)0;
  
  goto l66;
l64:
  i2=OOC_TRUE;
l66:
  if (!i2) goto l61_loop;
l69:
  OOC_Config_Repositories__SectionDesc_GetModule_AddToCache((OOC_Repository__Module)i1);
  i0 = (OOC_INT32)m;
  return (OOC_Repository__Module)i0;
l70:
  _failed_function(5082); return 0;
  ;
}

URI__URI OOC_Config_Repositories__SectionDesc_GetResource(OOC_Config_Repositories__Section s, const OOC_CHAR8 package__ref[], OOC_LEN package_0d, const OOC_CHAR8 path__ref[], OOC_LEN path_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(package,OOC_CHAR8 ,package_0d)
  OOC_ALLOCATE_VPAR(path,OOC_CHAR8 ,path_0d)
  OOC_Repository__Repository topLevelRep;
  URI__URI uri;

  OOC_INITIALIZE_VPAR(package__ref,package,OOC_CHAR8 ,package_0d)
  OOC_INITIALIZE_VPAR(path__ref,path,OOC_CHAR8 ,path_0d)
  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9212))+4);
  topLevelRep = (OOC_Repository__Repository)i0;
  
l1_loop:
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9262)))), OOC_Repository__RepositoryDesc_GetResource)),OOC_Repository__RepositoryDesc_GetResource)((OOC_Repository__Repository)i0, (void*)(OOC_INT32)package, package_0d, (void*)(OOC_INT32)path, path_0d);
  uri = (URI__URI)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9325));
  topLevelRep = (OOC_Repository__Repository)i0;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l4;
  i2 = i0==(OOC_INT32)0;
  
  goto l6;
l4:
  i2=OOC_TRUE;
l6:
  if (!i2) goto l1_loop;
l9:
  return (URI__URI)i1;
  ;
}

ADT_String__StringArrayPtr OOC_Config_Repositories__SectionDesc_GetIncludePaths(OOC_Config_Repositories__Section s) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 c;
  OOC_Repository__Repository rep;
  ADT_String__StringArrayPtr result;
  OOC_Repository__URIBuffer str;
  OOC_Repository__URIBuffer subdir;
  auto OOC_CHAR8 OOC_Config_Repositories__SectionDesc_GetIncludePaths_Select(OOC_Repository__Repository rep);
    
    OOC_CHAR8 OOC_Config_Repositories__SectionDesc_GetIncludePaths_Select(OOC_Repository__Repository rep) {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)rep;
      return (OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9701)))), &_td_OOC_Repository_FileSystem__RepositoryDesc));
      ;
    }


  c = 0;
  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9778))+4);
  i1 = i0!=(OOC_INT32)0;
  rep = (OOC_Repository__Repository)i0;
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l5;
l3:
  i0 = OOC_Config_Repositories__SectionDesc_GetIncludePaths_Select((OOC_Repository__Repository)i0);
  
l5:
  if (!i0) goto l15;
l6_loop:
  i0 = c;
  c = (i0+1);
  i0 = (OOC_INT32)rep;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9864));
  rep = (OOC_Repository__Repository)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l9;
  i0=OOC_FALSE;
  goto l11;
l9:
  i0 = OOC_Config_Repositories__SectionDesc_GetIncludePaths_Select((OOC_Repository__Repository)i0);
  
l11:
  if (i0) goto l6_loop;
l15:
  i0 = c;
  result = (ADT_String__StringArrayPtr)((OOC_INT32)RT0__NewObject(_td_ADT_String__StringArrayPtr.baseTypes[0], i0));
  c = 0;
  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9933))+4);
  rep = (OOC_Repository__Repository)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l26;
l18_loop:
  i0 = OOC_Config_Repositories__SectionDesc_GetIncludePaths_Select((OOC_Repository__Repository)i0);
  i1 = (OOC_INT32)rep;
  if (!i0) goto l21;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10023)))), &_td_OOC_Repository_FileSystem__RepositoryDesc, 10023)), 10034))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10023)))), &_td_OOC_Repository_FileSystem__RepositoryDesc, 10023)), 10034))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10056)))), &_td_URI_Scheme_File__URIDesc, 10056)), 10060)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10056)))), &_td_URI_Scheme_File__URIDesc, 10056)), (void*)(OOC_INT32)str, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10086)))), OOC_Repository__RepositoryDesc_GetDefaultSubdir)),OOC_Repository__RepositoryDesc_GetDefaultSubdir)((OOC_Repository__Repository)i1, 13, (void*)(OOC_INT32)subdir, 1024);
  Strings__Append((void*)(OOC_INT32)subdir, 1024, (void*)(OOC_INT32)str, 1024);
  i0 = (OOC_INT32)result;
  i0 = _check_pointer(i0, 10201);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i3 = c;
  i4 = (OOC_INT32)ADT_String__New((void*)(OOC_INT32)str, 1024);
  *(OOC_INT32*)(i0+(_check_index(i3, i2, OOC_UINT32, 10201))*4) = i4;
  c = (i3+1);
l21:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 10270));
  rep = (OOC_Repository__Repository)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l18_loop;
l26:
  i0 = (OOC_INT32)result;
  return (ADT_String__StringArrayPtr)i0;
  ;
}

void OOC_OOC_Config_Repositories_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Config_Repositories__ErrorContext.baseTypes[0]);
  OOC_Config_Repositories__repositoriesContext = (OOC_Config_Repositories__ErrorContext)i0;
  Msg__InitContext((Msg__Context)i0, "OOC:Config:Repositories", 24);
  OOC_Config_Repositories__repositoryEntries = (OOC_Config_Repositories__RepositoryEntry)(OOC_INT32)0;
  return;
  ;
}

/* --- */
