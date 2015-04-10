#include "Language/Char.d"
#include "__oo2c.h"

static void Language_Char__Init(Language_Char__Value v, OOC_INT32 value) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)Language_Char__type;
  i1 = (OOC_INT32)v;
  Language__InitValue((Language__Value)i1, (Language__Type)i0);
  i0 = value;
  *(OOC_INT32*)((_check_pointer(i1, 506))+4) = i0;
  return;
  ;
}

Language_Char__Value Language_Char__New(OOC_INT32 value) {
  register OOC_INT32 i0,i1;

  i0 = value;
  i1 = i0==0;
  if (i1) goto l3;
  i1 = (OOC_INT32)RT0__NewObject(_td_Language_Char__Value.baseTypes[0]);
  Language_Char__Init((Language_Char__Value)i1, i0);
  return (Language_Char__Value)i1;
  goto l4;
l3:
  i0 = (OOC_INT32)Language_Char__zero;
  return (Language_Char__Value)i0;
l4:
  _failed_function(546); return 0;
  ;
}

OOC_CHAR8 Language_Char__ValueDesc_Equals(Language_Char__Value v, ADT_Object__Object y) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)y;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 808)))), &_td_Language_Char__ValueDesc);
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i1 = (OOC_INT32)v;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 822))+4);
  i0 = *(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 834)))), &_td_Language_Char__ValueDesc, 834)), 840))+4);
  i0 = i1==i0;
  
l4:
  return i0;
  ;
}

OOC_INT32 Language_Char__ValueDesc_Compare(Language_Char__Value v, ADT_Object__Object y) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)y;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 945))+4);
  i1 = *(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 957)))), &_td_Language_Char__ValueDesc, 957)), 963))+4);
  return (i0-i1);
  ;
}

OOC_INT32 Language_Char__ValueDesc_HashCode(Language_Char__Value v) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)v;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 1054))+4);
  return i0;
  ;
}

ADT_String__String Language_Char__ValueDesc_ToString(Language_Char__Value v) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 x;
  OOC_INT16 i;
  OOC_CHAR8 rev[16];
  OOC_CHAR8 str[16];
  auto OOC_CHAR8 Language_Char__ValueDesc_ToString_ToHex(OOC_INT32 i);
    
    OOC_CHAR8 Language_Char__ValueDesc_ToString_ToHex(OOC_INT32 i) {
      register OOC_INT32 i0,i1;

      i0 = i;
      i1 = i0<10;
      if (i1) goto l3;
      return (55+i0);
      goto l4;
l3:
      return (48+i0);
l4:
      _failed_function(1218); return 0;
      ;
    }


  i0 = (OOC_INT32)v;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 1401))+4);
  i1 = i1<32;
  if (i1) goto l3;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 1427))+4);
  i1 = i1>=127;
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (i1) goto l11;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 1936))+4);
  i1 = i1==34;
  if (i1) goto l9;
  _copy_8("\" \"",(OOC_INT32)str,16);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 2119))+4);
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(1, 16, OOC_UINT8, 2106))) = i0;
  goto l26;
l9:
  _copy_8("\047\"\"",(OOC_INT32)str,16);
  goto l26;
l11:
  i0 = *(OOC_INT32*)((_check_pointer(i0, 1472))+4);
  x = i0;
  i = 0;
  i1=i0;i0=0;
l12_loop:
  i1 = Language_Char__ValueDesc_ToString_ToHex((_mod(i1,16)));
  i2 = x;
  *(OOC_UINT8*)((OOC_INT32)rev+(_check_index(i0, 16, OOC_UINT16, 1519))) = i1;
  i0 = i2>>4;
  i1 = i;
  i1 = i1+1;
  x = i0;
  i = i1;
  i2 = i0==0;
  if (i2) goto l16;
  {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
  goto l12_loop;
l16:
  i0 = *(OOC_UINT8*)((OOC_INT32)rev+(_check_index((i1-1), 16, OOC_UINT16, 1712)));
  i0 = i0>(OOC_CHAR8)'9';
  if (i0) goto l19;
  i0=i1;
  goto l20;
l19:
  *(OOC_UINT8*)((OOC_INT32)rev+(_check_index(i1, 16, OOC_UINT16, 1741))) = (OOC_CHAR8)'0';
  i0 = i1+1;
  
l20:
  i1 = i0-1;
  
l21_loop:
  i2 = i0-1;
  i3 = *(OOC_UINT8*)((OOC_INT32)rev+(_check_index(i2, 16, OOC_UINT16, 1834)));
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i1-i0), 16, OOC_UINT16, 1822))) = i3;
  i0 = i2==0;
  if (i0) goto l25;
  i0=i2;
  goto l21_loop;
l25:
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i1+1), 16, OOC_UINT16, 1888))) = (OOC_CHAR8)'X';
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i1+2), 16, OOC_UINT16, 1911))) = (OOC_CHAR8)'\000';
l26:
  i0 = (OOC_INT32)ADT_String__New((void*)(OOC_INT32)str, 16);
  return (ADT_String__String)i0;
  ;
}

void Language_Char__ValueDesc_Store(Language_Char__Value v, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)v;
  Language__ValueDesc_Store((Language__Value)i1, (ADT_Object__Writer)i0);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 2276))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2263)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void Language_Char__ValueDesc_Load(Language_Char__Value v, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)v;
  Language__ValueDesc_Load((Language__Value)i1, (ADT_Object__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2378)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 2390))+4));
  return;
  ;
}

Language_Char__Value Language_Char__TypeDesc_Value(Language_Char__Type t, OOC_INT32 value) {
  register OOC_INT32 i0;

  i0 = value;
  i0 = (OOC_INT32)Language_Char__New(i0);
  return (Language_Char__Value)i0;
  ;
}

Language_Char__Value Language_Char__TypeDesc_ValueOf(Language_Char__Type t, const OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 i;
  OOC_INT32 hexCount;
  OOC_INT32 ord;
  auto OOC_INT32 Language_Char__TypeDesc_ValueOf_HexDigit(OOC_CHAR8 ch);
  auto OOC_CHAR8 Language_Char__TypeDesc_ValueOf_HexToInt(const OOC_CHAR8 str__ref[], OOC_LEN str_0d, OOC_CHAR8 end, OOC_INT32 *result);
    
    OOC_INT32 Language_Char__TypeDesc_ValueOf_HexDigit(OOC_CHAR8 ch) {
      register OOC_INT32 i0;

      i0 = ch;
      i0 = _cap(i0);
      switch (i0) {
      case (OOC_CHAR8)'0' ... (OOC_CHAR8)'9':
        return (i0-48);
        goto l5;
      case (OOC_CHAR8)'A' ... (OOC_CHAR8)'F':
        return (i0+-55);
        goto l5;
      default:
        return -1;
        goto l5;
      }
l5:
      _failed_function(2633); return 0;
      ;
    }

    
    OOC_CHAR8 Language_Char__TypeDesc_ValueOf_HexToInt(const OOC_CHAR8 str__ref[], OOC_LEN str_0d, OOC_CHAR8 end, OOC_INT32 *result) {
      register OOC_INT32 i0,i1,i2;
      OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)

      OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
      *result = 0;
      i = 0;
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 3001)));
      i1 = end;
      i0 = i0!=i1;
      if (!i0) goto l11;
      i0=0;
l3_loop:
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 3055)));
      i0 = Language_Char__TypeDesc_ValueOf_HexDigit(i0);
      i2 = *result;
      i0 = ((2147483647-i0)>>4)<i2;
      if (!i0) goto l6;
      return OOC_FALSE;
l6:
      i0 = i;
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 3160)));
      i0 = Language_Char__TypeDesc_ValueOf_HexDigit(i0);
      *result = ((i2*16)+i0);
      i0 = i;
      i0 = i0+1;
      i = i0;
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 3001)));
      i2 = i2!=i1;
      if (i2) goto l3_loop;
l11:
      return OOC_TRUE;
      ;
    }


  i = 0;
  hexCount = 0;
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 3281)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l3;
  i0=0;
  goto l12;
l3:
  i0=0;
l4_loop:
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 3317)));
  i0 = Language_Char__TypeDesc_ValueOf_HexDigit(i0);
  i0 = i0>=0;
  if (!i0) goto l7;
  i0 = hexCount;
  hexCount = (i0+1);
l7:
  i0 = i;
  i0 = i0+1;
  i = i0;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 3281)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l4_loop;
l12:
  i1 = i0==3;
  if (i1) goto l15;
  i1=OOC_FALSE;
  goto l17;
l15:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 3411)));
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i0-1), str_0d, OOC_UINT32, 3420)));
  i1 = i1==i2;
  
l17:
  if (i1) goto l19;
  i1=OOC_FALSE;
  goto l25;
l19:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 3434)));
  i1 = i1==(OOC_CHAR8)'"';
  if (i1) goto l22;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 3452)));
  i1 = i1==(OOC_CHAR8)'\047';
  
  goto l25;
l22:
  i1=OOC_TRUE;
l25:
  if (i1) goto l51;
  i1 = i0>=2;
  if (i1) goto l29;
  i1=OOC_FALSE;
  goto l31;
l29:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i0-1), str_0d, OOC_UINT32, 3582)));
  i1 = i1==(OOC_CHAR8)'X';
  
l31:
  if (i1) goto l33;
  i0=OOC_FALSE;
  goto l35;
l33:
  i1 = hexCount;
  i0 = (i1+1)==i0;
  
l35:
  if (i0) goto l37;
  return (Language_Char__Value)(OOC_INT32)0;
  goto l52;
l37:
  i0 = Language_Char__TypeDesc_ValueOf_HexToInt((void*)(OOC_INT32)str, str_0d, (OOC_CHAR8)'X', (void*)(OOC_INT32)&ord);
  if (i0) goto l40;
  i0=OOC_FALSE;
  goto l42;
l40:
  i0 = ord;
  i0 = 0<=i0;
  
l42:
  if (i0) goto l44;
  i0=OOC_FALSE;
  goto l46;
l44:
  i0 = ord;
  i0 = i0<=65535;
  
l46:
  if (i0) goto l48;
  return (Language_Char__Value)(OOC_INT32)0;
  goto l52;
l48:
  i0 = ord;
  i0 = (OOC_INT32)Language_Char__New(i0);
  return (Language_Char__Value)i0;
  goto l52;
l51:
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(1, str_0d, OOC_UINT8, 3551)));
  i0 = (OOC_INT32)Language_Char__New(i0);
  return (Language_Char__Value)i0;
l52:
  _failed_function(2532); return 0;
  ;
}

ADT_String__String Language_Char__TypeDesc_ToString(Language_Char__Type t) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Language_Char__typeName;
  return (ADT_String__String)i0;
  ;
}

void OOC_Language_Char_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_Language_Char__Type.baseTypes[0]);
  Language_Char__type = (Language_Char__Type)i0;
  Language__InitType((Language__Type)i0);
  i0 = (OOC_INT32)ADT_String__New("Char", 5);
  Language_Char__typeName = (ADT_String__String)i0;
  i0 = (OOC_INT32)RT0__NewObject(_td_Language_Char__Value.baseTypes[0]);
  Language_Char__zero = (Language_Char__Value)i0;
  Language_Char__Init((Language_Char__Value)i0, 0);
  return;
  ;
}

/* --- */
