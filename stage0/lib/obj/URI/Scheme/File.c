#include <URI/Scheme/File.d>
#include <__oo2c.h>
#include <setjmp.h>

void URI_Scheme_File__Init(URI_Scheme_File__URI file, URI_String__StringPtr schemeId, URI__Authority authority, URI__Query query) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)file;
  i1 = (OOC_INT32)schemeId;
  i2 = (OOC_INT32)authority;
  i3 = (OOC_INT32)query;
  URI_Scheme_Hierarchical__Init((URI_Scheme_Hierarchical__Generic)i0, (URI_String__StringPtr)i1, (URI__Authority)i2, (URI__Query)i3);
  return;
  ;
}

URI_Scheme_File__URI URI_Scheme_File__New(URI_String__StringPtr schemeId, URI__Authority authority, URI__Query query) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Scheme_File__URI.baseTypes[0]);
  i1 = (OOC_INT32)schemeId;
  i2 = (OOC_INT32)authority;
  i3 = (OOC_INT32)query;
  URI_Scheme_File__Init((URI_Scheme_File__URI)i0, (URI_String__StringPtr)i1, (URI__Authority)i2, (URI__Query)i3);
  return (URI_Scheme_File__URI)i0;
  ;
}

URI__Authority URI_Scheme_File__URIDesc_NewAuthority(URI_Scheme_File__URI file) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)URI_String__Copy("", 1);
  i0 = (OOC_INT32)URI_Authority_ServerBased__New((URI_String__StringPtr)(OOC_INT32)0, (URI_String__StringPtr)i0, -1, -1);
  return (URI__Authority)i0;
  ;
}

URI__Query URI_Scheme_File__URIDesc_NewQuery(URI_Scheme_File__URI file) {

  return (URI__Query)(OOC_INT32)0;
  ;
}

URI_Scheme_File__URI URI_Scheme_File__URIDesc_Clone(URI_Scheme_File__URI file) {
  register OOC_INT32 i0,i1;
  URI_Scheme_File__URI copy;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Scheme_File__URI.baseTypes[0]);
  copy = (URI_Scheme_File__URI)i0;
  i1 = (OOC_INT32)file;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2088)))), URI_Scheme_Hierarchical__GenericDesc_Copy)),URI_Scheme_Hierarchical__GenericDesc_Copy)((URI_Scheme_Hierarchical__Generic)i1, (URI__URI)i0);
  return (URI_Scheme_File__URI)i0;
  ;
}

void URI_Scheme_File__URIDesc_GetPath(URI_Scheme_File__URI file, OOC_CHAR8 filePath[], OOC_LEN filePath_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  URI_Scheme_Hierarchical__Segment segm;

  _copy_8((const void*)"",(void*)(OOC_INT32)filePath,filePath_0d);
  i0 = (OOC_INT32)file;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2420))+12);
  i2 = i1!=(OOC_INT32)0;
  segm = (URI_Scheme_Hierarchical__Segment)i1;
  if (!i2) goto l15;
l3_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2479))+12);
  i2 = i1!=i2;
  if (i2) goto l6;
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 2498))+16);
  
  goto l8;
l6:
  i2=OOC_TRUE;
l8:
  if (!i2) goto l10;
  Strings__Append("/", 2, (void*)(OOC_INT32)filePath, filePath_0d);
l10:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2594))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2594))+4);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 2602)), (OOC_INT32)0);
  Strings__Append((void*)(_check_pointer(i2, 2602)), i3, (void*)(OOC_INT32)filePath, filePath_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2634));
  segm = (URI_Scheme_Hierarchical__Segment)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l3_loop;
l15:
  return;
  ;
}

Files__File URI_Scheme_File__URIDesc_GetChannel(URI_Scheme_File__URI file, OOC_INT8 mode, Msg__Msg *res) {
  register OOC_INT32 i0;
  OOC_CHAR8 filePath[2048];

  i0 = (OOC_INT32)file;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2815)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)i0, (void*)(OOC_INT32)filePath, 2048);
  i0 = mode;
  switch (i0) {
  case 0:
    i0 = (OOC_INT32)Files__New((void*)(OOC_INT32)filePath, 2048, 3, (void*)(OOC_INT32)res);
    return (Files__File)i0;
    goto l6;
  case 1:
    i0 = (OOC_INT32)Files__Tmp((void*)(OOC_INT32)filePath, 2048, 3, (void*)(OOC_INT32)res);
    return (Files__File)i0;
    goto l6;
  case 2:
    i0 = (OOC_INT32)Files__Old((void*)(OOC_INT32)filePath, 2048, 1, (void*)(OOC_INT32)res);
    return (Files__File)i0;
    goto l6;
  default:
    _failed_case(i0, 2841);
    goto l6;
  }
l6:
  _failed_function(2687); return 0;
  ;
}

URI_Scheme_File__URI URI_Scheme_File__NewPrototype() {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)URI_String__Copy("file", 5);
  i0 = (OOC_INT32)URI_Scheme_File__New((URI_String__StringPtr)i0, (URI__Authority)(OOC_INT32)0, (URI__Query)(OOC_INT32)0);
  return (URI_Scheme_File__URI)i0;
  ;
}

URI_Scheme_File__URI URI_Scheme_File__GetCwd() {
  register OOC_INT32 i0;
  OOC_CHAR8 path[4096];
  Msg__Msg res;
  OOC_CHAR8 uriString[4096];
  URI__URI uri;

  OS_ProcessParameters__getcwd((void*)(OOC_INT32)path, 4096, (void*)(OOC_INT32)&res);
  i0 = (OOC_INT32)res;
  i0 = i0==(OOC_INT32)0;
  if (!i0) goto l6;
  _copy_8((const void*)"file:",(void*)(OOC_INT32)uriString,4096);
  URI_String__AppendEscaped((void*)(OOC_INT32)path, 4096, ":@&=+$,/", 9, (void*)(OOC_INT32)uriString, 4096);
  i0 = Strings__Length((void*)(OOC_INT32)uriString, 4096);
  i0 = *(OOC_UINT8*)((OOC_INT32)uriString+(_check_index((i0-1), 4096, OOC_UINT16, 3722)));
  i0 = i0!=(OOC_CHAR8)'/';
  if (!i0) goto l5;
  Strings__Append("/", 2, (void*)(OOC_INT32)uriString, 4096);
l5:
  i0 = (OOC_INT32)URI_Parser__NewURI((void*)(OOC_INT32)uriString, 4096, (URI__HierarchicalURI)(OOC_INT32)0, (void*)(OOC_INT32)&res);
  uri = (URI__URI)i0;
  _assert((i0!=(OOC_INT32)0), 127, 3872);
  return (URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3909)))), &_td_URI_Scheme_File__URIDesc, 3909));
l6:
  return (URI_Scheme_File__URI)(OOC_INT32)0;
  ;
}

URI_Scheme_File__URI URI_Scheme_File__ToURI(const OOC_CHAR8 filePath__ref[], OOC_LEN filePath_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(filePath,OOC_CHAR8 ,filePath_0d)
  OOC_CHAR8 uriString[4096];
  URI__URI uri;
  Msg__Msg res;

  OOC_INITIALIZE_VPAR(filePath__ref,filePath,OOC_CHAR8 ,filePath_0d)
  i0 = *(OOC_UINT8*)((OOC_INT32)filePath+(_check_index(0, filePath_0d, OOC_UINT8, 4227)));
  i0 = i0==(OOC_CHAR8)'/';
  if (i0) goto l3;
  i0 = (OOC_INT32)URI_Scheme_File__GetCwd();
  i0 = (OOC_INT32)URI_Parser__NewURI((void*)(OOC_INT32)filePath, filePath_0d, (URI__HierarchicalURI)i0, (void*)(OOC_INT32)&res);
  uri = (URI__URI)i0;
  
  goto l4;
l3:
  _copy_8((const void*)"file:",(void*)(OOC_INT32)uriString,4096);
  URI_String__AppendEscaped((void*)(OOC_INT32)filePath, filePath_0d, ":@&=+$,/", 9, (void*)(OOC_INT32)uriString, 4096);
  i0 = (OOC_INT32)URI_Parser__NewURI((void*)(OOC_INT32)uriString, 4096, (URI__HierarchicalURI)(OOC_INT32)0, (void*)(OOC_INT32)&res);
  uri = (URI__URI)i0;
  
l4:
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l7;
  return (URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4539)))), &_td_URI_Scheme_File__URIDesc, 4539));
  goto l8;
l7:
  return (URI_Scheme_File__URI)(OOC_INT32)0;
l8:
  _failed_function(3963); return 0;
  ;
}

void OOC_URI_Scheme_File_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)URI_Scheme_File__NewPrototype();
  URI__RegisterScheme((URI__URI)i0);
  return;
  ;
}

/* --- */
