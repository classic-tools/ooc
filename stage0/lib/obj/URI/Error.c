#include <URI/Error.d>
#include <__oo2c.h>
#include <setjmp.h>

void URI_Error__ContextDesc_GetTemplate(URI_Error__Context context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  URI_Error__Mapping m;

  i0 = (OOC_INT32)context;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1482))+4);
  i1 = i0!=(OOC_INT32)0;
  m = (URI_Error__Mapping)i0;
  i2 = (OOC_INT32)msg;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 1517))+4);
  i3 = *(OOC_INT32*)((_check_pointer(i2, 1529))+8);
  i1 = i1!=i3;
  
l5:
  if (!i1) goto l17;
l8_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1552));
  m = (URI_Error__Mapping)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l11;
  i1=OOC_FALSE;
  goto l13;
l11:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 1517))+4);
  i3 = *(OOC_INT32*)((_check_pointer(i2, 1529))+8);
  i1 = i1!=i3;
  
l13:
  if (i1) goto l8_loop;
l17:
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l20;
  _copy_16((const void*)((OOC_CHAR16[]){45,45,117,110,107,110,111,119,110,32,101,114,114,111,114,32,99,111,100,101,45,45,0}),(void*)(OOC_INT32)templ,templ_0d);
  LongStrings__Append(((OOC_CHAR16[]){10,109,115,103,95,99,111,110,116,101,120,116,61,36,123,77,83,71,95,67,79,78,84,69,88,84,125,10,109,115,103,95,99,111,100,101,61,36,123,77,83,71,95,67,79,68,69,125,0}), 49, (void*)(OOC_INT32)templ, templ_0d);
  goto l21;
l20:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1603))+8);
  _copy_16((const void*)(_check_pointer(i0, 1609)),(void*)(OOC_INT32)templ,templ_0d);
l21:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 1815)))), Msg__MsgDesc_GetAttribute)),Msg__MsgDesc_GetAttribute)((Msg__Msg)i2, "uri", 4);
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l24;
  LongStrings__Append(((OOC_CHAR16[]){10,117,114,105,61,36,123,117,114,105,125,0}), 12, (void*)(OOC_INT32)templ, templ_0d);
l24:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 1921)))), Msg__MsgDesc_GetAttribute)),Msg__MsgDesc_GetAttribute)((Msg__Msg)i2, "uri_pos", 8);
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l27;
  LongStrings__Append(((OOC_CHAR16[]){10,117,114,105,95,112,111,115,61,36,123,117,114,105,95,112,111,115,125,0}), 20, (void*)(OOC_INT32)templ, templ_0d);
l27:
  return;
  ;
}

void URI_Error__ContextDesc_SetString(URI_Error__Context context, OOC_INT32 code, const Msg__String str__ref, OOC_LEN str_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)
  auto void URI_Error__ContextDesc_SetString_Append(URI_Error__Mapping *mlist);
    
    void URI_Error__ContextDesc_SetString_Append(URI_Error__Mapping *mlist) {
      register OOC_INT32 i0,i1,i2;
      OOC_CHAR16 str16[1024];

      i0 = (OOC_INT32)*mlist;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l7;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 2559))+4);
      i2 = code;
      i1 = i1==i2;
      if (i1) goto l5;
      URI_Error__ContextDesc_SetString_Append((void*)(_check_pointer(i0, 2685)));
      goto l8;
l5:
      _copy_8to16((const void*)(OOC_INT32)str,(void*)(OOC_INT32)str16,1024);
      i1 = (OOC_INT32)Msg__GetLStringPtr((void*)(OOC_INT32)str16, 1024);
      *(OOC_INT32*)((_check_pointer(i0, 2619))+8) = i1;
      goto l8;
l7:
      i0 = (OOC_INT32)RT0__NewObject(_td_URI_Error__Mapping.baseTypes[0]);
      *mlist = (URI_Error__Mapping)i0;
      *(OOC_INT32*)(_check_pointer(i0, 2423)) = (OOC_INT32)0;
      i0 = (OOC_INT32)*mlist;
      i1 = code;
      *(OOC_INT32*)((_check_pointer(i0, 2451))+4) = i1;
      _copy_8to16((const void*)(OOC_INT32)str,(void*)(OOC_INT32)str16,1024);
      i0 = (OOC_INT32)*mlist;
      i1 = (OOC_INT32)Msg__GetLStringPtr((void*)(OOC_INT32)str16, 1024);
      *(OOC_INT32*)((_check_pointer(i0, 2507))+8) = i1;
l8:
      return;
      ;
    }


  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  i0 = (OOC_INT32)context;
  URI_Error__ContextDesc_SetString_Append((void*)((_check_pointer(i0, 2749))+4));
  return;
  ;
}

URI_Error__Context URI_Error__NewContext(const Msg__String id__ref, OOC_LEN id_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(id,OOC_CHAR8 ,id_0d)
  URI_Error__Context c;

  OOC_INITIALIZE_VPAR(id__ref,id,OOC_CHAR8 ,id_0d)
  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Error__Context.baseTypes[0]);
  c = (URI_Error__Context)i0;
  Msg__InitContext((Msg__Context)i0, (void*)(OOC_INT32)id, id_0d);
  *(OOC_INT32*)((_check_pointer(i0, 3003))+4) = (OOC_INT32)0;
  return (URI_Error__Context)i0;
  ;
}

void URI_Error__SetURIString(Msg__Msg msg, URI_String__String str, OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)msg;
  i1 = (OOC_INT32)Msg__GetStringPtr((void*)(OOC_INT32)str, str_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3196)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "uri", 4, (Msg__StringPtr)i1);
  return;
  ;
}

Msg__Msg URI_Error__New(URI_Error__Context context, OOC_INT32 code, OOC_INT16 pos) {
  register OOC_INT32 i0,i1;
  Msg__Msg msg;

  i0 = (OOC_INT32)context;
  i1 = code;
  i0 = (OOC_INT32)Msg__New((Msg__Context)i0, i1);
  msg = (Msg__Msg)i0;
  i1 = pos;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3576)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "uri_pos", 8, i1);
  return (Msg__Msg)i0;
  ;
}

void OOC_URI_Error_init(void) {

  return;
  ;
}

/* --- */
