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
  ADT_Storable__InitReader((ADT_Storable__Reader)i1, (Channel__Channel)i0);
  *(OOC_INT32*)((_check_pointer(i1, 3703))+20) = ((OOC_INT32)RT0__NewObject(_td_ADT_Object_Storage__ObjectArray.baseTypes[0], 124));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3735))+20);
  i0 = _check_pointer(i0, 3743);
  i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  *(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 3743))*4) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 3760))+16) = 1;
  *(OOC_INT32*)((_check_pointer(i1, 3789))+28) = ((OOC_INT32)RT0__NewObject(_td_ADT_Object_Storage__TypeArray.baseTypes[0], 12));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3821))+28);
  i0 = _check_pointer(i0, 3830);
  i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  *(OOC_INT32*)(i0+((_check_index(0, i2, OOC_UINT8, 3830))*12)) = (OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3853))+28);
  i0 = _check_pointer(i0, 3862);
  i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  *(OOC_INT32*)((i0+((_check_index(0, i2, OOC_UINT8, 3862))*12))+4) = (OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3891))+28);
  i0 = _check_pointer(i0, 3900);
  i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  *(OOC_INT32*)((i0+((_check_index(0, i2, OOC_UINT8, 3900))*12))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 3927))+24) = 1;
  return;
  ;
}

static void ADT_Object_Storage__InitWriter(ADT_Object_Storage__Writer w, Channel__Channel ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ch;
  i1 = (OOC_INT32)w;
  ADT_Storable__InitWriter((ADT_Storable__Writer)i1, (Channel__Channel)i0);
  *(OOC_INT32*)((_check_pointer(i1, 4067))+16) = 0;
  *(OOC_INT32*)((_check_pointer(i1, 4096))+20) = ((OOC_INT32)RT0__NewObject(_td_ADT_Object_Storage__TypeRefMap.baseTypes[0], 12));
  *(OOC_INT32*)((_check_pointer(i1, 4131))+24) = 0;
  i0 = (OOC_INT32)ADT_Dictionary_AddressKey_IntValue__New();
  *(OOC_INT32*)((_check_pointer(i1, 4156))+28) = i0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4409))+12);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  return (ADT_Object_Storage__Reader)i0;
  goto l4;
l3:
  return (ADT_Object_Storage__Reader)(OOC_INT32)0;
l4:
  _failed_function(4217); return 0;
  ;
}

ADT_Object_Storage__Writer ADT_Object_Storage__ConnectWriter(Channel__Channel ch) {
  register OOC_INT32 i0,i1;
  ADT_Object_Storage__Writer w;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_Object_Storage__Writer.baseTypes[0]);
  w = (ADT_Object_Storage__Writer)i0;
  i1 = (OOC_INT32)ch;
  ADT_Object_Storage__InitWriter((ADT_Object_Storage__Writer)i0, (Channel__Channel)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4754))+12);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  return (ADT_Object_Storage__Writer)i0;
  goto l4;
l3:
  return (ADT_Object_Storage__Writer)(OOC_INT32)0;
l4:
  _failed_function(4562); return 0;
  ;
}

void ADT_Object_Storage__ReaderDesc_ReadObject(ADT_Object_Storage__Reader r, ADT_Storable__Object *obj) {
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
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 5257)), (OOC_INT32)0);
          i1 = (OOC_INT32)RT0__NewObject(_td_ADT_Object_Storage__TypeArray.baseTypes[0], (4+i1*2));
          _new = (ADT_Object_Storage__TypeArray)i1;
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 5305)), (OOC_INT32)0);
          i0 = i0-1;
          i2 = 0<=i0;
          i = 0;
          if (!i2) goto l8;
          i2=0;
l3_loop:
          i3 = (OOC_INT32)*tab;
          i3 = _check_pointer(i3, 5336);
          i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
          i5 = _check_pointer(i1, 5326);
          i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
          _copy_block((i3+((_check_index(i2, i4, OOC_UINT32, 5336))*12)),(i5+((_check_index(i2, i6, OOC_UINT32, 5326))*12)),12);
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5415)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&tref);
      i0 = tref;
      i1 = i0<0;
      if (i1) goto l33;
      i1 = (OOC_INT32)r;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 5746))+24);
      i0 = i0!=i2;
      if (!i0) goto l5;
      i0 = (OOC_INT32)ADT_Object_Storage__GetError(8);
      *(OOC_INT32*)(_check_pointer(i1, 5777)) = i0;
l5:
      i0 = (OOC_INT32)r;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5861))+28);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 5870)), (OOC_INT32)0);
      i2 = tref;
      i1 = i2==i1;
      if (!i1) goto l8;
      ADT_Object_Storage__ReaderDesc_ReadObject_ReadType_ExtendTypeTab((void*)((_check_pointer(i0, 5905))+28));
l8:
      i0 = (OOC_INT32)r;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 5943))+24);
      *(OOC_INT32*)((_check_pointer(i0, 5943))+24) = (i1+1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6054)))), BinaryRider__ReaderDesc_ReadString)),BinaryRider__ReaderDesc_ReadString)((BinaryRider__Reader)i0, (void*)((_check_pointer(i0, 6069))+32), 256);
      i0 = (OOC_INT32)r;
      i0 = (OOC_INT32)RT0__ThisModule((void*)((_check_pointer(i0, 6113))+32), 256);
      i1 = i0==(OOC_INT32)0;
      module = (RT0__Module)i0;
      if (i1) goto l11;
      i1 = (OOC_INT32)r;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6432))+28);
      i2 = _check_pointer(i2, 6441);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i4 = tref;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6469));
      *(OOC_INT32*)((i2+((_check_index(i4, i3, OOC_UINT32, 6441))*12))+4) = i0;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6488)))), BinaryRider__ReaderDesc_ReadString)),BinaryRider__ReaderDesc_ReadString)((BinaryRider__Reader)i1, (void*)((_check_pointer(i1, 6503))+32), 256);
      i0 = (OOC_INT32)r;
      i1 = (OOC_INT32)module;
      i0 = (OOC_INT32)RT0__ThisType((RT0__Module)i1, (void*)((_check_pointer(i0, 6551))+32), 256);
      tp = (RT0__Struct)i0;
      
      goto l20;
l11:
      i0 = (OOC_INT32)r;
      i0 = Strings__Length((void*)((_check_pointer(i0, 6187))+32), 256);
      i0 = i0+1;
      len = i0;
      i1 = (OOC_INT32)r;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6214))+28);
      i2 = _check_pointer(i2, 6223);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i4 = tref;
      *(OOC_INT32*)((i2+((_check_index(i4, i3, OOC_UINT32, 6223))*12))+4) = ((OOC_INT32)RT0__NewObject(_td_RT0__Name.baseTypes[0], i0));
      i0 = i0-1;
      i2 = 0<=i0;
      i = 0;
      if (!i2) goto l19;
      i2=0;
l14_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6295))+28);
      i3 = _check_pointer(i3, 6303);
      i5 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)((i3+((_check_index(i4, i5, OOC_UINT32, 6303))*12))+4);
      i5 = *(OOC_UINT8*)(((_check_pointer(i1, 6328))+32)+(_check_index(i2, 256, OOC_UINT32, 6333)));
      *(OOC_UINT8*)((_check_pointer(i3, 6320))+i2) = i5;
      i2 = i2+1;
      i3 = i2<=i0;
      i = i2;
      if (i3) goto l14_loop;
l19:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6364)))), BinaryRider__ReaderDesc_ReadString)),BinaryRider__ReaderDesc_ReadString)((BinaryRider__Reader)i1, (void*)((_check_pointer(i1, 6379))+32), 256);
      tp = (RT0__Struct)(OOC_INT32)0;
      i0=(OOC_INT32)0;
l20:
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l23;
      i1 = (OOC_INT32)r;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6820))+28);
      i1 = _check_pointer(i1, 6829);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i3 = tref;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6851))+12);
      *(OOC_INT32*)((i1+((_check_index(i3, i2, OOC_UINT32, 6829))*12))+8) = i4;
      goto l32;
l23:
      i1 = (OOC_INT32)r;
      i1 = Strings__Length((void*)((_check_pointer(i1, 6634))+32), 256);
      i1 = i1+1;
      len = i1;
      i2 = (OOC_INT32)r;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6661))+28);
      i3 = _check_pointer(i3, 6670);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i5 = tref;
      *(OOC_INT32*)((i3+((_check_index(i5, i4, OOC_UINT32, 6670))*12))+8) = ((OOC_INT32)RT0__NewObject(_td_RT0__Name.baseTypes[0], i1));
      i1 = i1-1;
      i3 = 0<=i1;
      i = 0;
      if (!i3) goto l32;
      i3=0;
l26_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6740))+28);
      i4 = _check_pointer(i4, 6748);
      i6 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i5, i6, OOC_UINT32, 6748))*12))+8);
      i6 = *(OOC_UINT8*)(((_check_pointer(i2, 6771))+32)+(_check_index(i3, 256, OOC_UINT32, 6776)));
      *(OOC_UINT8*)((_check_pointer(i4, 6763))+i3) = i6;
      i3 = i3+1;
      i4 = i3<=i1;
      i = i3;
      if (i4) goto l26_loop;
l32:
      i1 = (OOC_INT32)r;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6880))+28);
      i1 = _check_pointer(i1, 6889);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i3 = tref;
      *(OOC_INT32*)(i1+((_check_index(i3, i2, OOC_UINT32, 6889))*12)) = i0;
      return i3;
      goto l38;
l33:
      i1 = (OOC_INT32)r;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 5527))+24);
      i0 = -i0;
      i2 = i0>=i2;
      if (i2) goto l36;
      return i0;
      goto l38;
l36:
      i0 = (OOC_INT32)ADT_Object_Storage__GetError(8);
      *(OOC_INT32*)(_check_pointer(i1, 5558)) = i0;
      return 0;
l38:
      _failed_function(5028); return 0;
      ;
    }

    
    void ADT_Object_Storage__ReaderDesc_ReadObject_ExtendObjTab(ADT_Object_Storage__ObjectArray *tab) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      ADT_Object_Storage__ObjectArray _new;
      OOC_INT32 i;

      i0 = (OOC_INT32)*tab;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 7095)), (OOC_INT32)0);
      i1 = (OOC_INT32)RT0__NewObject(_td_ADT_Object_Storage__ObjectArray.baseTypes[0], (4+i1*2));
      _new = (ADT_Object_Storage__ObjectArray)i1;
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 7141)), (OOC_INT32)0);
      i0 = i0-1;
      i2 = 0<=i0;
      i = 0;
      if (!i2) goto l8;
      i2=0;
l3_loop:
      i3 = _check_pointer(i1, 7160);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i5 = (OOC_INT32)*tab;
      i5 = _check_pointer(i5, 7170);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i2, i6, OOC_UINT32, 7170))*4);
      *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 7160))*4) = i5;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7240)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&ref);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7271));
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
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7668))+16);
  i1 = i1!=i2;
  if (!i1) goto l11;
  i1 = (OOC_INT32)ADT_Object_Storage__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 7726)) = i1;
l11:
  i0 = ADT_Object_Storage__ReaderDesc_ReadObject_ReadType();
  tref = i0;
  i1 = (OOC_INT32)r;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7826))+28);
  i2 = _check_pointer(i2, 7835);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+((_check_index(i0, i3, OOC_UINT32, 7835))*12));
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l17;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8075))+28);
  i2 = _check_pointer(i2, 8084);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i2+((_check_index(i0, i3, OOC_UINT32, 8084))*12));
  i0 = (OOC_INT32)RT0__NewObject((RT0__Struct)i0);
  *obj = (ADT_Storable__Object)((OOC_INT32)_type_cast_fast(OOC_PTR, OOC_PTR, i0));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8126))+20);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 8134)), (OOC_INT32)0);
  i2 = ref;
  i0 = i2==i0;
  if (!i0) goto l16;
  ADT_Object_Storage__ReaderDesc_ReadObject_ExtendObjTab((void*)((_check_pointer(i1, 8170))+20));
l16:
  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8206))+20);
  i1 = _check_pointer(i1, 8214);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i3 = ref;
  i4 = (OOC_INT32)*obj;
  *(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 8214))*4) = i4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8244))+16);
  *(OOC_INT32*)((_check_pointer(i0, 8244))+16) = (i1+1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8272)))), ADT_Storable__ObjectDesc_Load)),ADT_Storable__ObjectDesc_Load)((ADT_Storable__Object)i4, (ADT_Storable__Reader)i0);
  goto l26;
l17:
  i0 = (OOC_INT32)ADT_Object_Storage__GetError(-3);
  *(OOC_INT32*)(_check_pointer(i1, 7871)) = i0;
  goto l26;
l19:
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7438))+16);
  i1 = -i1;
  i2 = i1>=i2;
  if (i2) goto l22;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7573))+20);
  i0 = _check_pointer(i0, 7581);
  i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i1, i2, OOC_UINT32, 7581))*4);
  *obj = (ADT_Storable__Object)i0;
  goto l26;
l22:
  i1 = (OOC_INT32)ADT_Object_Storage__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 7496)) = i1;
  goto l26;
l25:
  *obj = (ADT_Storable__Object)(OOC_INT32)0;
l26:
  return;
  ;
}

void ADT_Object_Storage__ReaderDesc_Disconnect(ADT_Object_Storage__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8457))+20);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8465)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8480))+20);
  i3 = _check_pointer(i3, 8488);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 8488))*4) = (OOC_INT32)0;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l3_loop;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8532))+28);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8541)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l16;
  i2=0;
l11_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8556))+28);
  i3 = _check_pointer(i3, 8565);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 8565))*12)) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8590))+28);
  i3 = _check_pointer(i3, 8599);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 8599))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8630))+28);
  i3 = _check_pointer(i3, 8639);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 8639))*12))+8) = (OOC_INT32)0;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l11_loop;
l16:
  *(OOC_INT32*)((_check_pointer(i0, 8674))+16) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 8698))+24) = 0;
  return;
  ;
}

void ADT_Object_Storage__WriterDesc_WriteObject(ADT_Object_Storage__Writer w, ADT_Storable__Object obj) {
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
      i1 = *(OOC_INT32*)((_check_pointer(i0, 9256))+24);
      i2 = (OOC_INT32)0!=i1;
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
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9335))+20);
      i6 = _check_pointer(i6, 9347);
      i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+((_check_index(i5, i7, OOC_UINT32, 9347))*12));
      i6 = (
      _cmp8((const void*)(_check_pointer(i6, 9358)),(const void*)(_check_pointer(i3, 9368))))<(OOC_INT32)0;
      if (i6) goto l11;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9387))+20);
      i6 = _check_pointer(i6, 9399);
      i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+((_check_index(i5, i7, OOC_UINT32, 9399))*12));
      i6 = (
      _cmp8((const void*)(_check_pointer(i6, 9410)),(const void*)(_check_pointer(i3, 9420))))==(OOC_INT32)0;
      if (i6) goto l9;
      i6=OOC_FALSE;
      goto l13;
l9:
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9441))+20);
      i6 = _check_pointer(i6, 9453);
      i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
      i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i7, OOC_UINT32, 9453))*12))+4);
      i6 = (
      _cmp8((const void*)(_check_pointer(i6, 9462)),(const void*)(_check_pointer(i2, 9471))))<=(OOC_INT32)0;
      
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
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9581))+20);
      i3 = _check_pointer(i3, 9593);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+((_check_index(i1, i4, OOC_UINT32, 9593))*12));
      i4 = (OOC_INT32)module;
      i3 = (
      _cmp8((const void*)(_check_pointer(i3, 9604)),(const void*)(_check_pointer(i4, 9614))))!=(OOC_INT32)0;
      
      goto l26;
l24:
      i3=OOC_TRUE;
l26:
      if (i3) goto l28;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9631))+20);
      i3 = _check_pointer(i3, 9643);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)((i3+((_check_index(i1, i4, OOC_UINT32, 9643))*12))+4);
      i4 = (OOC_INT32)type;
      i3 = (
      _cmp8((const void*)(_check_pointer(i3, 9652)),(const void*)(_check_pointer(i4, 9660))))!=(OOC_INT32)0;
      
      goto l30;
l28:
      i3=OOC_TRUE;
l30:
      if (i3) goto l32;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10343))+20);
      i0 = _check_pointer(i0, 10355);
      i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i0 = *(OOC_INT32*)((i0+((_check_index(i1, i2, OOC_UINT32, 10355))*12))+8);
      return (-i0);
      goto l52;
l32:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9768))+20);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9780)), (OOC_INT32)0);
      i3 = *(OOC_INT32*)((_check_pointer(i0, 9746))+24);
      i1 = i3==i1;
      if (!i1) goto l43;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 9810))+24);
      i1 = (OOC_INT32)RT0__NewObject(_td_ADT_Object_Storage__TypeRefMap.baseTypes[0], (4+i1*2));
      _new = (ADT_Object_Storage__TypeRefMap)i1;
      i3 = *(OOC_INT32*)((_check_pointer(i0, 9864))+24);
      i3 = i3-1;
      i4 = 0<=i3;
      i = 0;
      if (!i4) goto l42;
      i4=0;
l37_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9906))+20);
      i5 = _check_pointer(i5, 9918);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i7 = _check_pointer(i1, 9898);
      i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
      _copy_block((i5+((_check_index(i4, i6, OOC_UINT32, 9918))*12)),(i7+((_check_index(i4, i8, OOC_UINT32, 9898))*12)),12);
      i4 = i4+1;
      i5 = i4<=i3;
      i = i4;
      if (i5) goto l37_loop;
l42:
      *(OOC_INT32*)((_check_pointer(i0, 9948))+20) = i1;
l43:
      i1 = *(OOC_INT32*)((_check_pointer(i0, 9999))+24);
      i1 = i1-1;
      i3 = i1>=i2;
      i = i1;
      if (!i3) goto l51;
l46_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10062))+20);
      i3 = _check_pointer(i3, 10074);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10040))+20);
      i5 = _check_pointer(i5, 10052);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      _copy_block((i3+((_check_index(i1, i4, OOC_UINT32, 10074))*12)),(i5+((_check_index((i1+1), i6, OOC_UINT32, 10052))*12)),12);
      i1 = i1+-1;
      i3 = i1>=i2;
      i = i1;
      if (i3) goto l46_loop;
l51:
      i1 = *(OOC_INT32*)((_check_pointer(i0, 10105))+24);
      *(OOC_INT32*)((_check_pointer(i0, 10105))+24) = (i1+1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10130))+20);
      i1 = _check_pointer(i1, 10142);
      i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i4 = (OOC_INT32)module;
      *(OOC_INT32*)(i1+((_check_index(i2, i3, OOC_UINT32, 10142))*12)) = i4;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10174))+20);
      i1 = _check_pointer(i1, 10186);
      i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i4 = (OOC_INT32)type;
      *(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 10186))*12))+4) = i4;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10214))+20);
      i1 = _check_pointer(i1, 10226);
      i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i4 = *(OOC_INT32*)((_check_pointer(i0, 10239))+24);
      *(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 10226))*12))+8) = i4;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 10270))+24);
      return i0;
l52:
      _failed_function(8862); return 0;
      ;
    }


  i0 = (OOC_INT32)obj;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10429))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10441))+4);
  i1 = i1!=(OOC_INT32)0;
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (i1) goto l14;
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10563))+28);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10563))+28);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10572)))), ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_HasKey)),ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_HasKey)((ADT_Dictionary_AddressKey_IntValue__Dictionary)i3, (Object__Object)i0);
  if (i2) goto l12;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10726))+16);
  *(OOC_INT32*)((_check_pointer(i1, 10726))+16) = (i2+1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10750))+28);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 10772))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10750))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10759)))), ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Set)),ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Set)((ADT_Dictionary_AddressKey_IntValue__Dictionary)i4, (Object__Object)i0, i3);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10809))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10796)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i1, i2);
  i0 = (OOC_INT32)RT0__TypeOf((void*)i0);
  type = (RT0__Struct)i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10956))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10964));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10976))+12);
  i0 = ADT_Object_Storage__WriterDesc_WriteObject_LookupType((ADT_Object_Storage__Writer)i1, (RT0__Name)i2, (RT0__Name)i0);
  tref = i0;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10994)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i1, i0);
  i0 = i0>0;
  if (!i0) goto l11;
  i0 = (OOC_INT32)type;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11060))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11068));
  _copy_8((const void*)(_check_pointer(i2, 11074)),(void*)((_check_pointer(i1, 11078))+32),256);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11104)))), BinaryRider__WriterDesc_WriteString)),BinaryRider__WriterDesc_WriteString)((BinaryRider__Writer)i1, (void*)((_check_pointer(i1, 11120))+32), 256);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11155))+12);
  _copy_8((const void*)(_check_pointer(i0, 11161)),(void*)((_check_pointer(i1, 11165))+32),256);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11191)))), BinaryRider__WriterDesc_WriteString)),BinaryRider__WriterDesc_WriteString)((BinaryRider__Writer)i1, (void*)((_check_pointer(i1, 11207))+32), 256);
l11:
  i0 = (OOC_INT32)obj;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11246)))), ADT_Storable__ObjectDesc_Store)),ADT_Storable__ObjectDesc_Store)((ADT_Storable__Object)i0, (ADT_Storable__Writer)i1);
  goto l15;
l12:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10641))+28);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10641))+28);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10650)))), ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Get)),ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Get)((ADT_Dictionary_AddressKey_IntValue__Dictionary)i3, (Object__Object)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10627)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i1, (-i0));
  goto l15;
l14:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10479)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, 0);
l15:
  return;
  ;
}

void ADT_Object_Storage__WriterDesc_Disconnect(ADT_Object_Storage__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11423))+20);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 11435)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11450))+20);
  i3 = _check_pointer(i3, 11462);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 11462))*12)) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11489))+20);
  i3 = _check_pointer(i3, 11501);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 11501))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11526))+20);
  i3 = _check_pointer(i3, 11538);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 11538))*12))+8) = 0;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l3_loop;
l8:
  *(OOC_INT32*)((_check_pointer(i0, 11566))+20) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 11592))+24) = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11617))+28);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11617))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11626)))), ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Destroy)),ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Destroy)((ADT_Dictionary_AddressKey_IntValue__Dictionary)i2);
  *(OOC_INT32*)((_check_pointer(i0, 11644))+28) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 11667))+16) = 0;
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
