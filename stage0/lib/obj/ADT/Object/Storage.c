#include "ADT/Object/Storage.d"
#include "__oo2c.h"

static Msg__Msg ADT_Object_Storage__GetError(OOC_INT32 code) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ADT_Object_Storage__errorContext;
  i1 = code;
  i0 = (OOC_INT32)Msg__New((Msg__Context)i0, i1);
  return (Msg__Msg)i0;
  ;
}

static void ADT_Object_Storage__InitReader(ADT_Object_Storage__Reader r, Channel__Channel ch) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)ch;
  i1 = (OOC_INT32)r;
  ADT_Object__InitReader((ADT_Object__Reader)i1, (Channel__Channel)i0);
  *(OOC_INT32*)((_check_pointer(i1, 3688))+20) = ((OOC_INT32)RT0__NewObject(_td_ADT_Object_Storage__ObjectArray.baseTypes[0], 124));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3720))+20);
  i0 = _check_pointer(i0, 3728);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 3728))*4) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 3745))+16) = 1;
  *(OOC_INT32*)((_check_pointer(i1, 3774))+28) = ((OOC_INT32)RT0__NewObject(_td_ADT_Object_Storage__TypeArray.baseTypes[0], 12));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3806))+28);
  i0 = _check_pointer(i0, 3815);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_INT32*)(i0+((_check_index(0, i2, OOC_UINT8, 3815))*12)) = (OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3838))+28);
  i0 = _check_pointer(i0, 3847);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_INT32*)((i0+((_check_index(0, i2, OOC_UINT8, 3847))*12))+4) = (OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3876))+28);
  i0 = _check_pointer(i0, 3885);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_INT32*)((i0+((_check_index(0, i2, OOC_UINT8, 3885))*12))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 3912))+24) = 1;
  return;
  ;
}

static void ADT_Object_Storage__InitWriter(ADT_Object_Storage__Writer w, Channel__Channel ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ch;
  i1 = (OOC_INT32)w;
  ADT_Object__InitWriter((ADT_Object__Writer)i1, (Channel__Channel)i0);
  *(OOC_INT32*)((_check_pointer(i1, 4050))+16) = 0;
  *(OOC_INT32*)((_check_pointer(i1, 4079))+20) = ((OOC_INT32)RT0__NewObject(_td_ADT_Object_Storage__TypeRefMap.baseTypes[0], 12));
  *(OOC_INT32*)((_check_pointer(i1, 4114))+24) = 0;
  i0 = (OOC_INT32)ADT_Dictionary_AddressKey_IntValue__New();
  *(OOC_INT32*)((_check_pointer(i1, 4139))+28) = i0;
  return;
  ;
}

ADT_Object_Storage__Reader ADT_Object_Storage__ConnectReader(Channel__Channel ch) {
  register OOC_INT32 i0,i1;
  ADT_Object_Storage__Reader r;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_Object_Storage__Reader.baseTypes[0]);
  r = (ADT_Object_Storage__Reader)i0;
  i1 = (OOC_INT32)ch;
  ADT_Object_Storage__InitReader((ADT_Object_Storage__Reader)i0, (Channel__Channel)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4392))+12);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  return (ADT_Object_Storage__Reader)i0;
  goto l4;
l3:
  return (ADT_Object_Storage__Reader)(OOC_INT32)0;
l4:
  _failed_function(4200); return 0;
  ;
}

ADT_Object_Storage__Writer ADT_Object_Storage__ConnectWriter(Channel__Channel ch) {
  register OOC_INT32 i0,i1;
  ADT_Object_Storage__Writer w;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_Object_Storage__Writer.baseTypes[0]);
  w = (ADT_Object_Storage__Writer)i0;
  i1 = (OOC_INT32)ch;
  ADT_Object_Storage__InitWriter((ADT_Object_Storage__Writer)i0, (Channel__Channel)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4737))+12);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  return (ADT_Object_Storage__Writer)i0;
  goto l4;
l3:
  return (ADT_Object_Storage__Writer)(OOC_INT32)0;
l4:
  _failed_function(4545); return 0;
  ;
}

void ADT_Object_Storage__ReaderDesc_ReadObject(ADT_Object_Storage__Reader r, ADT_Object__Object *obj) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 ref;
  OOC_INT32 tref;
  RT0__Module module;
  auto OOC_INT32 ADT_Object_Storage__ReaderDesc_ReadObject_ReadType();
  auto void ADT_Object_Storage__ReaderDesc_ReadObject_ExtendObjTab(ADT_Object_Storage__ObjectArray *tab);
    
    OOC_INT32 ADT_Object_Storage__ReaderDesc_ReadObject_ReadType() {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_INT32 tref;
      OOC_INT32 len;
      OOC_INT32 i;
      RT0__Struct tp;
      auto void ADT_Object_Storage__ReaderDesc_ReadObject_ReadType_ExtendTypeTab(ADT_Object_Storage__TypeArray *tab);
        
        void ADT_Object_Storage__ReaderDesc_ReadObject_ReadType_ExtendTypeTab(ADT_Object_Storage__TypeArray *tab) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
          ADT_Object_Storage__TypeArray _new;
          OOC_INT32 i;

          i0 = (OOC_INT32)*tab;
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 5238)), 0);
          i1 = (OOC_INT32)RT0__NewObject(_td_ADT_Object_Storage__TypeArray.baseTypes[0], (4+i1*2));
          _new = (ADT_Object_Storage__TypeArray)i1;
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 5286)), 0);
          i0 = i0-1;
          i2 = 0<=i0;
          i = 0;
          if (!i2) goto l8;
          i2=0;
l3_loop:
          i3 = (OOC_INT32)*tab;
          i3 = _check_pointer(i3, 5317);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i5 = _check_pointer(i1, 5307);
          i6 = OOC_ARRAY_LENGTH(i5, 0);
          _copy_block((i3+((_check_index(i2, i4, OOC_UINT32, 5317))*12)),(i5+((_check_index(i2, i6, OOC_UINT32, 5307))*12)),12);
          i2 = i2+1;
          i3 = i2<=i0;
          i = i2;
          if (i3) goto l3_loop;
l8:
          *tab = (ADT_Object_Storage__TypeArray)i1;
          return;
          ;
        }


      i0 = (OOC_INT32)r;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5396)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&tref);
      i0 = tref;
      i1 = i0<0;
      if (i1) goto l33;
      i1 = (OOC_INT32)r;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 5727))+24);
      i0 = i0!=i2;
      if (!i0) goto l5;
      i0 = (OOC_INT32)ADT_Object_Storage__GetError(8);
      *(OOC_INT32*)(_check_pointer(i1, 5758)) = i0;
l5:
      i0 = (OOC_INT32)r;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5842))+28);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 5851)), 0);
      i2 = tref;
      i1 = i2==i1;
      if (!i1) goto l8;
      ADT_Object_Storage__ReaderDesc_ReadObject_ReadType_ExtendTypeTab((void*)((_check_pointer(i0, 5886))+28));
l8:
      i0 = (OOC_INT32)r;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 5924))+24);
      *(OOC_INT32*)((_check_pointer(i0, 5924))+24) = (i1+1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6035)))), BinaryRider__ReaderDesc_ReadString)),BinaryRider__ReaderDesc_ReadString)((BinaryRider__Reader)i0, (void*)((_check_pointer(i0, 6050))+32), 256);
      i0 = (OOC_INT32)r;
      i0 = (OOC_INT32)RT0__ThisModule((void*)((_check_pointer(i0, 6094))+32), 256);
      i1 = i0==(OOC_INT32)0;
      module = (RT0__Module)i0;
      if (i1) goto l11;
      i1 = (OOC_INT32)r;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6413))+28);
      i2 = _check_pointer(i2, 6422);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = tref;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6450));
      *(OOC_INT32*)((i2+((_check_index(i4, i3, OOC_UINT32, 6422))*12))+4) = i0;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6469)))), BinaryRider__ReaderDesc_ReadString)),BinaryRider__ReaderDesc_ReadString)((BinaryRider__Reader)i1, (void*)((_check_pointer(i1, 6484))+32), 256);
      i0 = (OOC_INT32)r;
      i1 = (OOC_INT32)module;
      i0 = (OOC_INT32)RT0__ThisType((RT0__Module)i1, (void*)((_check_pointer(i0, 6532))+32), 256);
      tp = (RT0__Struct)i0;
      
      goto l20;
l11:
      i0 = (OOC_INT32)r;
      i0 = Strings__Length((void*)((_check_pointer(i0, 6168))+32), 256);
      i0 = i0+1;
      len = i0;
      i1 = (OOC_INT32)r;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6195))+28);
      i2 = _check_pointer(i2, 6204);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = tref;
      *(OOC_INT32*)((i2+((_check_index(i4, i3, OOC_UINT32, 6204))*12))+4) = ((OOC_INT32)RT0__NewObject(_td_RT0__Name.baseTypes[0], i0));
      i0 = i0-1;
      i2 = 0<=i0;
      i = 0;
      if (!i2) goto l19;
      i2=0;
l14_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6276))+28);
      i3 = _check_pointer(i3, 6284);
      i5 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)((i3+((_check_index(i4, i5, OOC_UINT32, 6284))*12))+4);
      i5 = *(OOC_UINT8*)(((_check_pointer(i1, 6309))+32)+(_check_index(i2, 256, OOC_UINT32, 6314)));
      *(OOC_UINT8*)((_check_pointer(i3, 6301))+i2) = i5;
      i2 = i2+1;
      i3 = i2<=i0;
      i = i2;
      if (i3) goto l14_loop;
l19:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6345)))), BinaryRider__ReaderDesc_ReadString)),BinaryRider__ReaderDesc_ReadString)((BinaryRider__Reader)i1, (void*)((_check_pointer(i1, 6360))+32), 256);
      tp = (RT0__Struct)(OOC_INT32)0;
      i0=(OOC_INT32)0;
l20:
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l23;
      i1 = (OOC_INT32)r;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6801))+28);
      i1 = _check_pointer(i1, 6810);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = tref;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6832))+12);
      *(OOC_INT32*)((i1+((_check_index(i3, i2, OOC_UINT32, 6810))*12))+8) = i4;
      goto l32;
l23:
      i1 = (OOC_INT32)r;
      i1 = Strings__Length((void*)((_check_pointer(i1, 6615))+32), 256);
      i1 = i1+1;
      len = i1;
      i2 = (OOC_INT32)r;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6642))+28);
      i3 = _check_pointer(i3, 6651);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i5 = tref;
      *(OOC_INT32*)((i3+((_check_index(i5, i4, OOC_UINT32, 6651))*12))+8) = ((OOC_INT32)RT0__NewObject(_td_RT0__Name.baseTypes[0], i1));
      i1 = i1-1;
      i3 = 0<=i1;
      i = 0;
      if (!i3) goto l32;
      i3=0;
l26_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6721))+28);
      i4 = _check_pointer(i4, 6729);
      i6 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i5, i6, OOC_UINT32, 6729))*12))+8);
      i6 = *(OOC_UINT8*)(((_check_pointer(i2, 6752))+32)+(_check_index(i3, 256, OOC_UINT32, 6757)));
      *(OOC_UINT8*)((_check_pointer(i4, 6744))+i3) = i6;
      i3 = i3+1;
      i4 = i3<=i1;
      i = i3;
      if (i4) goto l26_loop;
l32:
      i1 = (OOC_INT32)r;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6861))+28);
      i1 = _check_pointer(i1, 6870);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = tref;
      *(OOC_INT32*)(i1+((_check_index(i3, i2, OOC_UINT32, 6870))*12)) = i0;
      return i3;
      goto l38;
l33:
      i1 = (OOC_INT32)r;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 5508))+24);
      i0 = -i0;
      i2 = i0>=i2;
      if (i2) goto l36;
      return i0;
      goto l38;
l36:
      i0 = (OOC_INT32)ADT_Object_Storage__GetError(8);
      *(OOC_INT32*)(_check_pointer(i1, 5539)) = i0;
      return 0;
l38:
      _failed_function(5009); return 0;
      ;
    }

    
    void ADT_Object_Storage__ReaderDesc_ReadObject_ExtendObjTab(ADT_Object_Storage__ObjectArray *tab) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      ADT_Object_Storage__ObjectArray _new;
      OOC_INT32 i;

      i0 = (OOC_INT32)*tab;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 7076)), 0);
      i1 = (OOC_INT32)RT0__NewObject(_td_ADT_Object_Storage__ObjectArray.baseTypes[0], (4+i1*2));
      _new = (ADT_Object_Storage__ObjectArray)i1;
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 7122)), 0);
      i0 = i0-1;
      i2 = 0<=i0;
      i = 0;
      if (!i2) goto l8;
      i2=0;
l3_loop:
      i3 = _check_pointer(i1, 7141);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i5 = (OOC_INT32)*tab;
      i5 = _check_pointer(i5, 7151);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i2, i6, OOC_UINT32, 7151))*4);
      *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 7141))*4) = i5;
      i2 = i2+1;
      i3 = i2<=i0;
      i = i2;
      if (i3) goto l3_loop;
l8:
      *tab = (ADT_Object_Storage__ObjectArray)i1;
      return;
      ;
    }


  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7221)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&ref);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7252));
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1 = ref;
  i1 = i1==0;
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (i1) goto l25;
  i1 = ref;
  i2 = i1<0;
  if (i2) goto l19;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7649))+16);
  i1 = i1!=i2;
  if (!i1) goto l11;
  i1 = (OOC_INT32)ADT_Object_Storage__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 7707)) = i1;
l11:
  i0 = ADT_Object_Storage__ReaderDesc_ReadObject_ReadType();
  tref = i0;
  i1 = (OOC_INT32)r;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7807))+28);
  i2 = _check_pointer(i2, 7816);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+((_check_index(i0, i3, OOC_UINT32, 7816))*12));
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l17;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8052))+28);
  i2 = _check_pointer(i2, 8061);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i2+((_check_index(i0, i3, OOC_UINT32, 8061))*12));
  i0 = (OOC_INT32)RT0__NewObject((RT0__Struct)i0);
  *obj = (ADT_Object__Object)((OOC_INT32)_type_cast_fast(OOC_PTR, OOC_PTR, i0));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8103))+20);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 8111)), 0);
  i2 = ref;
  i0 = i2==i0;
  if (!i0) goto l16;
  ADT_Object_Storage__ReaderDesc_ReadObject_ExtendObjTab((void*)((_check_pointer(i1, 8147))+20));
l16:
  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8183))+20);
  i1 = _check_pointer(i1, 8191);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = ref;
  i4 = (OOC_INT32)*obj;
  *(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 8191))*4) = i4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8221))+16);
  *(OOC_INT32*)((_check_pointer(i0, 8221))+16) = (i1+1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8249)))), ADT_Object__ObjectDesc_Load)),ADT_Object__ObjectDesc_Load)((ADT_Object__Object)i4, (ADT_Object__Reader)i0);
  goto l26;
l17:
  i0 = (OOC_INT32)ADT_Object_Storage__GetError(-3);
  *(OOC_INT32*)(_check_pointer(i1, 7852)) = i0;
  goto l26;
l19:
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7419))+16);
  i1 = -i1;
  i2 = i1>=i2;
  if (i2) goto l22;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7554))+20);
  i0 = _check_pointer(i0, 7562);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i1, i2, OOC_UINT32, 7562))*4);
  *obj = (ADT_Object__Object)i0;
  goto l26;
l22:
  i1 = (OOC_INT32)ADT_Object_Storage__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 7477)) = i1;
  goto l26;
l25:
  *obj = (ADT_Object__Object)(OOC_INT32)0;
l26:
  return;
  ;
}

void ADT_Object_Storage__ReaderDesc_Disconnect(ADT_Object_Storage__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8434))+20);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8442)), 0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8457))+20);
  i3 = _check_pointer(i3, 8465);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 8465))*4) = (OOC_INT32)0;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l3_loop;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8509))+28);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8518)), 0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l16;
  i2=0;
l11_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8533))+28);
  i3 = _check_pointer(i3, 8542);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 8542))*12)) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8567))+28);
  i3 = _check_pointer(i3, 8576);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 8576))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8607))+28);
  i3 = _check_pointer(i3, 8616);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 8616))*12))+8) = (OOC_INT32)0;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l11_loop;
l16:
  *(OOC_INT32*)((_check_pointer(i0, 8651))+16) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 8675))+24) = 0;
  return;
  ;
}

void ADT_Object_Storage__WriterDesc_WriteObject(ADT_Object_Storage__Writer w, ADT_Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  RT0__Struct type;
  OOC_INT32 tref;
  auto OOC_INT32 ADT_Object_Storage__WriterDesc_WriteObject_LookupType(ADT_Object_Storage__Writer w, RT0__Name module, RT0__Name type);
    
    OOC_INT32 ADT_Object_Storage__WriterDesc_WriteObject_LookupType(ADT_Object_Storage__Writer w, RT0__Name module, RT0__Name type) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
      OOC_INT32 i;
      OOC_INT32 j;
      OOC_INT32 e;
      ADT_Object_Storage__TypeRefMap _new;

      i = -1;
      i0 = (OOC_INT32)w;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 9231))+24);
      i2 = 0!=i1;
      j = i1;
      if (i2) goto l3;
      i2=i1;i1=-1;
      goto l21;
l3:
      i2 = (OOC_INT32)type;
      i3 = (OOC_INT32)module;
      i4=i1;i1=-1;
l4_loop:
      i5 = (i1+i4)>>1;
      e = i5;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9310))+20);
      i6 = _check_pointer(i6, 9322);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+((_check_index(i5, i7, OOC_UINT32, 9322))*12));
      i6 = (
      _cmp8((const void*)(_check_pointer(i6, 9333)),(const void*)(_check_pointer(i3, 9343))))<0;
      if (i6) goto l11;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9362))+20);
      i6 = _check_pointer(i6, 9374);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+((_check_index(i5, i7, OOC_UINT32, 9374))*12));
      i6 = (
      _cmp8((const void*)(_check_pointer(i6, 9385)),(const void*)(_check_pointer(i3, 9395))))==0;
      if (i6) goto l9;
      i6=OOC_FALSE;
      goto l13;
l9:
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9416))+20);
      i6 = _check_pointer(i6, 9428);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i7, OOC_UINT32, 9428))*12))+4);
      i6 = (
      _cmp8((const void*)(_check_pointer(i6, 9437)),(const void*)(_check_pointer(i2, 9446))))<=0;
      
      goto l13;
l11:
      i6=OOC_TRUE;
l13:
      if (i6) goto l15;
      j = i5;
      i4=i5;
      goto l16;
l15:
      i = i5;
      i1=i5;
l16:
      i5 = (i1+1)!=i4;
      if (i5) goto l4_loop;
l20:
      i2=i4;
l21:
      i3 = i1<0;
      if (i3) goto l24;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9556))+20);
      i3 = _check_pointer(i3, 9568);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+((_check_index(i1, i4, OOC_UINT32, 9568))*12));
      i4 = (OOC_INT32)module;
      i3 = (
      _cmp8((const void*)(_check_pointer(i3, 9579)),(const void*)(_check_pointer(i4, 9589))))!=0;
      
      goto l26;
l24:
      i3=OOC_TRUE;
l26:
      if (i3) goto l28;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9606))+20);
      i3 = _check_pointer(i3, 9618);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)((i3+((_check_index(i1, i4, OOC_UINT32, 9618))*12))+4);
      i4 = (OOC_INT32)type;
      i3 = (
      _cmp8((const void*)(_check_pointer(i3, 9627)),(const void*)(_check_pointer(i4, 9635))))!=0;
      
      goto l30;
l28:
      i3=OOC_TRUE;
l30:
      if (i3) goto l32;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10318))+20);
      i0 = _check_pointer(i0, 10330);
      i2 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = *(OOC_INT32*)((i0+((_check_index(i1, i2, OOC_UINT32, 10330))*12))+8);
      return (-i0);
      goto l52;
l32:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9743))+20);
      i3 = *(OOC_INT32*)((_check_pointer(i0, 9721))+24);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9755)), 0);
      i1 = i3==i1;
      if (!i1) goto l43;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 9785))+24);
      i1 = (OOC_INT32)RT0__NewObject(_td_ADT_Object_Storage__TypeRefMap.baseTypes[0], (4+i1*2));
      _new = (ADT_Object_Storage__TypeRefMap)i1;
      i3 = *(OOC_INT32*)((_check_pointer(i0, 9839))+24);
      i3 = i3-1;
      i4 = 0<=i3;
      i = 0;
      if (!i4) goto l42;
      i4=0;
l37_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9881))+20);
      i5 = _check_pointer(i5, 9893);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i7 = _check_pointer(i1, 9873);
      i8 = OOC_ARRAY_LENGTH(i7, 0);
      _copy_block((i5+((_check_index(i4, i6, OOC_UINT32, 9893))*12)),(i7+((_check_index(i4, i8, OOC_UINT32, 9873))*12)),12);
      i4 = i4+1;
      i5 = i4<=i3;
      i = i4;
      if (i5) goto l37_loop;
l42:
      *(OOC_INT32*)((_check_pointer(i0, 9923))+20) = i1;
l43:
      i1 = *(OOC_INT32*)((_check_pointer(i0, 9974))+24);
      i1 = i1-1;
      i3 = i1>=i2;
      i = i1;
      if (!i3) goto l51;
l46_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10037))+20);
      i3 = _check_pointer(i3, 10049);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10015))+20);
      i5 = _check_pointer(i5, 10027);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      _copy_block((i3+((_check_index(i1, i4, OOC_UINT32, 10049))*12)),(i5+((_check_index((i1+1), i6, OOC_UINT32, 10027))*12)),12);
      i1 = i1+-1;
      i3 = i1>=i2;
      i = i1;
      if (i3) goto l46_loop;
l51:
      i1 = *(OOC_INT32*)((_check_pointer(i0, 10080))+24);
      *(OOC_INT32*)((_check_pointer(i0, 10080))+24) = (i1+1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10105))+20);
      i1 = _check_pointer(i1, 10117);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i4 = (OOC_INT32)module;
      *(OOC_INT32*)(i1+((_check_index(i2, i3, OOC_UINT32, 10117))*12)) = i4;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10149))+20);
      i1 = _check_pointer(i1, 10161);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i4 = (OOC_INT32)type;
      *(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 10161))*12))+4) = i4;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10189))+20);
      i1 = _check_pointer(i1, 10201);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i4 = *(OOC_INT32*)((_check_pointer(i0, 10214))+24);
      *(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 10201))*12))+8) = i4;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 10245))+24);
      return i0;
l52:
      _failed_function(8837); return 0;
      ;
    }


  i0 = (OOC_INT32)obj;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10404))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10416))+4);
  i1 = i1!=(OOC_INT32)0;
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (i1) goto l14;
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10538))+28);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10538))+28);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10547)))), ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_HasKey)),ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_HasKey)((ADT_Dictionary_AddressKey_IntValue__Dictionary)i3, (ADT_Object__Object)i0);
  if (i2) goto l12;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10701))+16);
  *(OOC_INT32*)((_check_pointer(i1, 10701))+16) = (i2+1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10725))+28);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10725))+28);
  i4 = *(OOC_INT32*)((_check_pointer(i1, 10747))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10734)))), ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Set)),ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Set)((ADT_Dictionary_AddressKey_IntValue__Dictionary)i3, (ADT_Object__Object)i0, i4);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10784))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10771)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i1, i2);
  i0 = (OOC_INT32)RT0__TypeOf((void*)i0);
  type = (RT0__Struct)i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10931))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10939));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10951))+12);
  i0 = ADT_Object_Storage__WriterDesc_WriteObject_LookupType((ADT_Object_Storage__Writer)i1, (RT0__Name)i2, (RT0__Name)i0);
  tref = i0;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10969)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i1, i0);
  i0 = i0>0;
  if (!i0) goto l11;
  i0 = (OOC_INT32)type;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11035))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11043));
  _copy_8((_check_pointer(i2, 11049)),((_check_pointer(i1, 11053))+32),256);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11079)))), BinaryRider__WriterDesc_WriteString)),BinaryRider__WriterDesc_WriteString)((BinaryRider__Writer)i1, (void*)((_check_pointer(i1, 11095))+32), 256);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11130))+12);
  _copy_8((_check_pointer(i0, 11136)),((_check_pointer(i1, 11140))+32),256);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11166)))), BinaryRider__WriterDesc_WriteString)),BinaryRider__WriterDesc_WriteString)((BinaryRider__Writer)i1, (void*)((_check_pointer(i1, 11182))+32), 256);
l11:
  i0 = (OOC_INT32)obj;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11221)))), ADT_Object__ObjectDesc_Store)),ADT_Object__ObjectDesc_Store)((ADT_Object__Object)i0, (ADT_Object__Writer)i1);
  goto l15;
l12:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10616))+28);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10616))+28);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10625)))), ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Get)),ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Get)((ADT_Dictionary_AddressKey_IntValue__Dictionary)i3, (ADT_Object__Object)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10602)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i1, (-i0));
  goto l15;
l14:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10454)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, 0);
l15:
  return;
  ;
}

void ADT_Object_Storage__WriterDesc_Disconnect(ADT_Object_Storage__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11398))+20);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 11410)), 0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11425))+20);
  i3 = _check_pointer(i3, 11437);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 11437))*12)) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11464))+20);
  i3 = _check_pointer(i3, 11476);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 11476))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11501))+20);
  i3 = _check_pointer(i3, 11513);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 11513))*12))+8) = 0;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l3_loop;
l8:
  *(OOC_INT32*)((_check_pointer(i0, 11541))+20) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 11567))+24) = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11592))+28);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11592))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11601)))), ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Destroy)),ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Destroy)((ADT_Dictionary_AddressKey_IntValue__Dictionary)i2);
  *(OOC_INT32*)((_check_pointer(i0, 11619))+28) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 11642))+16) = 0;
  return;
  ;
}

void OOC_ADT_Object_Storage_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_Object_Storage__ErrorContext.baseTypes[0]);
  ADT_Object_Storage__errorContext = (ADT_Object_Storage__ErrorContext)i0;
  Msg__InitContext((Msg__Context)i0, "ADT:Object:Storage", 19);
  return;
  ;
}

/* --- */
