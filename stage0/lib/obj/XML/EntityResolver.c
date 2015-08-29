#include <XML/EntityResolver.d>
#include <__oo2c.h>

XML_DTD__StringURI XML_EntityResolver__NormalizeURI(XML_UnicodeBuffer__CharArray uri) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT16 len16;
  XML_UnicodeCodec__Codec codec;
  OOC_CHAR8 str8[8192];
  OOC_INT32 srcDone;
  OOC_INT32 destDone;
  OOC_INT16 i;
  OOC_CHAR8 repl[4];
  auto OOC_CHAR8 XML_EntityResolver__NormalizeURI_ToHex(OOC_INT16 i);
    
    OOC_CHAR8 XML_EntityResolver__NormalizeURI_ToHex(OOC_INT16 i) {
      register OOC_INT32 i0,i1;

      i0 = i;
      i1 = i0<10;
      if (i1) goto l3;
      return (i0+55);
      goto l4;
l3:
      return (i0+48);
l4:
      _failed_function(1680); return 0;
      ;
    }


  i0 = (OOC_INT32)uri;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 1891)), (OOC_INT32)0);
  i1 = LongStrings__Length((void*)(_check_pointer(i0, 1891)), i1);
  len16 = i1;
  i2 = (OOC_INT32)XML_UnicodeCodec_UTF8__factory;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 1920)))), XML_UnicodeCodec_UTF8__FactoryDesc_NewCodec)),XML_UnicodeCodec_UTF8__FactoryDesc_NewCodec)((XML_UnicodeCodec_UTF8__Factory)i2);
  codec = (XML_UnicodeCodec__Codec)i2;
  i3 = i1!=(OOC_INT32)0;
  if (i3) goto l3;
  _copy_8((const void*)"",(void*)(OOC_INT32)str8,8192);
  goto l7;
l3:
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2053)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2040)))), XML_UnicodeCodec__CodecDesc_Encode)),XML_UnicodeCodec__CodecDesc_Encode)((XML_UnicodeCodec__Codec)i2, (void*)(_check_pointer(i0, 2053)), i3, 0, i1, (void*)(OOC_INT32)str8, 8192, 0, 8192, (void*)(OOC_INT32)&srcDone, (void*)(OOC_INT32)&destDone);
  i3 = srcDone;
  i4 = i3!=i1;
  if (!i4) goto l6;
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2165)), (OOC_INT32)0);
  i5 = destDone;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2152)))), XML_UnicodeCodec__CodecDesc_Encode)),XML_UnicodeCodec__CodecDesc_Encode)((XML_UnicodeCodec__Codec)i2, (void*)(_check_pointer(i0, 2165)), i4, i3, i1, (void*)(OOC_INT32)str8, 8192, i5, 8192, (void*)(OOC_INT32)&srcDone, (void*)(OOC_INT32)&destDone);
  i0 = srcDone;
  _assert((i0==i1), 127, 2263);
l6:
  i0 = destDone;
  *(OOC_UINT8*)((OOC_INT32)str8+(_check_index(i0, 8192, OOC_UINT32, 2309))) = (OOC_CHAR8)'\000';
l7:
  i = (OOC_INT32)0;
  i0 = *(OOC_UINT8*)((OOC_INT32)str8+(_check_index((OOC_INT32)0, 8192, OOC_UINT16, 2497)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l10;
  i0=(OOC_INT32)0;
  goto l36;
l10:
  i0=(OOC_INT32)0;
l11_loop:
  i1 = *(OOC_UINT8*)((OOC_INT32)str8+(_check_index(i0, 8192, OOC_UINT16, 2524)));
  i1 = i1>=(OOC_CHAR8)'\200';
  if (i1) goto l26;
  i1 = *(OOC_UINT8*)((OOC_INT32)str8+(_check_index(i0, 8192, OOC_UINT16, 2576)));
  i1 = URI_CharClass__IsReserved(i1);
  if (i1) goto l16;
  i1 = *(OOC_UINT8*)((OOC_INT32)str8+(_check_index(i0, 8192, OOC_UINT16, 2623)));
  i1 = URI_CharClass__IsUnreserved(i1);
  
  goto l18;
l16:
  i1=OOC_TRUE;
l18:
  if (i1) goto l20;
  i1 = *(OOC_UINT8*)((OOC_INT32)str8+(_check_index(i0, 8192, OOC_UINT16, 2647)));
  i1 = i1==(OOC_CHAR8)'#';
  
  goto l22;
l20:
  i1=OOC_TRUE;
l22:
  if (i1) goto l24;
  i1 = *(OOC_UINT8*)((OOC_INT32)str8+(_check_index(i0, 8192, OOC_UINT16, 2677)));
  i1 = i1==(OOC_CHAR8)'%';
  
  goto l25;
l24:
  i1=OOC_TRUE;
l25:
  i1 = !i1;
  
  goto l28;
l26:
  i1=OOC_TRUE;
l28:
  if (i1) goto l30;
  i0 = i0+1;
  i = i0;
  
  goto l31;
l30:
  _copy_8((const void*)"%HH",(void*)(OOC_INT32)repl,4);
  i0 = *(OOC_UINT8*)((OOC_INT32)str8+(_check_index(i0, 8192, OOC_UINT16, 2752)));
  i0 = XML_EntityResolver__NormalizeURI_ToHex((i0>>4));
  *(OOC_UINT8*)((OOC_INT32)repl+(_check_index(1, 4, OOC_UINT8, 2729))) = i0;
  i0 = i;
  i0 = *(OOC_UINT8*)((OOC_INT32)str8+(_check_index(i0, 8192, OOC_UINT16, 2801)));
  i0 = XML_EntityResolver__NormalizeURI_ToHex((_mod(i0,16)));
  *(OOC_UINT8*)((OOC_INT32)repl+(_check_index(2, 4, OOC_UINT8, 2778))) = i0;
  i0 = i;
  Strings__Delete((void*)(OOC_INT32)str8, 8192, i0, 1);
  Strings__Insert((void*)(OOC_INT32)repl, 4, i0, (void*)(OOC_INT32)str8, 8192);
  i0 = i0+3;
  i = i0;
  
l31:
  i1 = *(OOC_UINT8*)((OOC_INT32)str8+(_check_index(i0, 8192, OOC_UINT16, 2497)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l11_loop;
l36:
  i0 = (OOC_INT32)XML_DTD__GetStringURI((void*)(OOC_INT32)str8, 8192, 0, i0);
  return (XML_DTD__StringURI)i0;
  ;
}

void XML_EntityResolver__ResolverDesc_GetURI(XML_EntityResolver__Resolver r, XML_UnicodeBuffer__CharArray _public, XML_UnicodeBuffer__CharArray system, URI__URI baseURI, URI__URI *uri, Msg__Msg *res) {
  register OOC_INT32 i0,i1,i2;
  XML_DTD__StringURI str8;

  i0 = (OOC_INT32)system;
  i1 = i0==(OOC_INT32)0;
  if (!i1) goto l3;
  *uri = (URI__URI)(OOC_INT32)0;
  *res = (Msg__Msg)(OOC_INT32)0;
  return;
l3:
  i0 = (OOC_INT32)XML_EntityResolver__NormalizeURI((XML_UnicodeBuffer__CharArray)i0);
  i1 = (OOC_INT32)baseURI;
  i2 = i1!=(OOC_INT32)0;
  str8 = (XML_DTD__StringURI)i0;
  if (i2) goto l6;
  i2=OOC_FALSE;
  goto l8;
l6:
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3989)))), &_td_URI__HierarchicalURIDesc);
  
l8:
  if (i2) goto l10;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4129)), (OOC_INT32)0);
  i0 = (OOC_INT32)URI_Parser__NewURI((void*)(_check_pointer(i0, 4129)), i1, (URI__HierarchicalURI)(OOC_INT32)0, (void*)(OOC_INT32)res);
  *uri = (URI__URI)i0;
  goto l11;
l10:
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4050)), (OOC_INT32)0);
  i0 = (OOC_INT32)URI_Parser__NewURI((void*)(_check_pointer(i0, 4050)), i2, (URI__HierarchicalURI)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4065)))), &_td_URI__HierarchicalURIDesc, 4065)), (void*)(OOC_INT32)res);
  *uri = (URI__URI)i0;
l11:
  return;
  ;
}

XML_EntityResolver__Resolver XML_EntityResolver__New() {

  return (XML_EntityResolver__Resolver)((OOC_INT32)RT0__NewObject(_td_XML_EntityResolver__Resolver.baseTypes[0]));
  ;
}

void OOC_XML_EntityResolver_init(void) {

  return;
  ;
}

/* --- */
