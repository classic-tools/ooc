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
  i0 = (OOC_INT32)URI_Authority_ServerBased__New((URI_String__StringPtr)(OOC_INT32)0, (URI_String__StringPtr)i0, (-1), (-1));
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2123)))), URI_Scheme_Hierarchical__GenericDesc_Copy)),URI_Scheme_Hierarchical__GenericDesc_Copy)((URI_Scheme_Hierarchical__Generic)i1, (URI__URI)i0);
  return (URI_Scheme_File__URI)i0;
  ;
}

void URI_Scheme_File__URIDesc_GetPath(URI_Scheme_File__URI file, OOC_CHAR8 filePath[], OOC_LEN filePath_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  URI_Scheme_Hierarchical__Segment segm;
  Msg__Msg res;

  _copy_8((const void*)"",(void*)(OOC_INT32)filePath,filePath_0d);
  i0 = (OOC_INT32)file;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2474))+12);
  segm = (URI_Scheme_Hierarchical__Segment)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l15;
l3_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2533))+12);
  i2 = i1!=i2;
  if (i2) goto l6;
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 2552))+16);
  
  goto l8;
l6:
  i2=1u;
l8:
  if (!i2) goto l10;
  Strings__Append("/", 2, (void*)(OOC_INT32)filePath, filePath_0d);
l10:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2648))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2648))+4);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 2656)), 0);
  Strings__Append((void*)(_check_pointer(i2, 2656)), i3, (void*)(OOC_INT32)filePath, filePath_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2688));
  segm = (URI_Scheme_Hierarchical__Segment)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l3_loop;
l15:
  OS_HostPath__Denormalize((void*)(OOC_INT32)filePath, filePath_0d, (void*)(OOC_INT32)&res);
  return;
  ;
}

IO__ByteChannel URI_Scheme_File__URIDesc_GetChannel(URI_Scheme_File__URI file, OOC_INT8 mode) {
  register OOC_INT32 i0,i1;
  OOC_CHAR8 filePath[2048];
  Object__String8 s;

  i0 = (OOC_INT32)file;
  URI_Scheme_File__URIDesc_GetPath((URI_Scheme_File__URI)i0, (void*)(OOC_INT32)filePath, 2048);
  i0 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)filePath, 2048);
  s = (Object__String8)i0;
  i1 = mode;
  switch (i1) {
  case 0:
    i0 = (OOC_INT32)IO_FileChannel__Open((Object__String8)i0, 23u);
    return (IO__ByteChannel)i0;
    goto l6;
  case 1:
    i0 = (OOC_INT32)IO_FileChannel__Open((Object__String8)i0, 67u);
    return (IO__ByteChannel)i0;
    goto l6;
  case 2:
    i0 = (OOC_INT32)IO_FileChannel__Open((Object__String8)i0, 1u);
    return (IO__ByteChannel)i0;
    goto l6;
  default:
    _failed_case(i1, 2997);
    goto l6;
  }
l6:
  _failed_function(2783); return 0;
  ;
}

URI_Scheme_File__URI URI_Scheme_File__NewPrototype(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)URI_String__Copy("file", 5);
  i0 = (OOC_INT32)URI_Scheme_File__New((URI_String__StringPtr)i0, (URI__Authority)(OOC_INT32)0, (URI__Query)(OOC_INT32)0);
  return (URI_Scheme_File__URI)i0;
  ;
}

URI_Scheme_File__URI URI_Scheme_File__GetCwd(void) {
  register OOC_INT32 i0;
  OOC_CHAR8 path[4096];
  Msg__Msg res;
  OOC_CHAR8 uriString[4096];
  URI__URI uri;

  OS_ProcessParameters__getcwd((void*)(OOC_INT32)path, 4096, (void*)(OOC_INT32)&res);
  i0 = (OOC_INT32)res;
  i0 = i0==(OOC_INT32)0;
  if (!i0) goto l3;
  OS_HostPath__Normalize((void*)(OOC_INT32)path, 4096, (void*)(OOC_INT32)&res);
l3:
  i0 = (OOC_INT32)res;
  i0 = i0==(OOC_INT32)0;
  if (!i0) goto l9;
  _copy_8((const void*)"file:",(void*)(OOC_INT32)uriString,4096);
  URI_String__AppendEscaped((void*)(OOC_INT32)path, 4096, ":@&=+$,/", 9, (void*)(OOC_INT32)uriString, 4096);
  i0 = Strings__Length((void*)(OOC_INT32)uriString, 4096);
  i0 = *(OOC_UINT8*)((OOC_INT32)uriString+(_check_index((i0-1), 4096, OOC_UINT16, 4148)));
  i0 = i0!=47u;
  if (!i0) goto l8;
  Strings__Append("/", 2, (void*)(OOC_INT32)uriString, 4096);
l8:
  i0 = (OOC_INT32)URI_Parser__NewURI((void*)(OOC_INT32)uriString, 4096, (URI__HierarchicalURI)(OOC_INT32)0, (void*)(OOC_INT32)&res);
  uri = (URI__URI)i0;
  _assert((i0!=(OOC_INT32)0), 127, 4298);
  return (URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4335)))), &_td_URI_Scheme_File__URIDesc, 4335));
l9:
  return (URI_Scheme_File__URI)(OOC_INT32)0;
  ;
}

URI_Scheme_File__URI URI_Scheme_File__ToURI(const OOC_CHAR8 filePath__ref[], OOC_LEN filePath_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(filePath,OOC_CHAR8 ,filePath_0d)
  OOC_CHAR8 normPath[4096];
  Msg__Msg res;
  OOC_CHAR8 uriString[4096];
  URI__URI uri;

  OOC_INITIALIZE_VPAR(filePath__ref,filePath,OOC_CHAR8 ,filePath_0d)
  _copy_8((const void*)(OOC_INT32)filePath,(void*)(OOC_INT32)normPath,4096);
  OS_HostPath__Normalize((void*)(OOC_INT32)normPath, 4096, (void*)(OOC_INT32)&res);
  i0 = (OOC_INT32)res;
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l3;
  return (URI_Scheme_File__URI)(OOC_INT32)0;
l3:
  i0 = *(OOC_UINT8*)((OOC_INT32)normPath+(_check_index(0, 4096, OOC_UINT8, 4770)));
  i0 = i0==47u;
  if (i0) goto l6;
  _copy_8((const void*)"",(void*)(OOC_INT32)uriString,4096);
  URI_String__AppendEscaped((void*)(OOC_INT32)normPath, 4096, "@&=+$,/", 8, (void*)(OOC_INT32)uriString, 4096);
  i0 = (OOC_INT32)URI_Scheme_File__GetCwd();
  i0 = (OOC_INT32)URI_Parser__NewURI((void*)(OOC_INT32)uriString, 4096, (URI__HierarchicalURI)i0, (void*)(OOC_INT32)&res);
  uri = (URI__URI)i0;
  
  goto l7;
l6:
  _copy_8((const void*)"file:",(void*)(OOC_INT32)uriString,4096);
  URI_String__AppendEscaped((void*)(OOC_INT32)normPath, 4096, ":@&=+$,/", 9, (void*)(OOC_INT32)uriString, 4096);
  i0 = (OOC_INT32)URI_Parser__NewURI((void*)(OOC_INT32)uriString, 4096, (URI__HierarchicalURI)(OOC_INT32)0, (void*)(OOC_INT32)&res);
  uri = (URI__URI)i0;
  
l7:
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l10;
  return (URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5186)))), &_td_URI_Scheme_File__URIDesc, 5186));
  goto l11;
l10:
  return (URI_Scheme_File__URI)(OOC_INT32)0;
l11:
  _failed_function(4389); return 0;
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
