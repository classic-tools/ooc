#include <ADT/Object/Storage.d>
#include <__oo2c.h>
#include <setjmp.h>

static void ADT_Object_Storage__InitReader(ADT_Object_Storage__Reader r, IO__ByteChannel ch) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)ch;
  ADT_Storable__InitReader((ADT_Storable__Reader)i0, (IO__ByteChannel)i1);
  *(OOC_INT32*)((_check_pointer(i0, 3241))+12) = ((OOC_INT32)RT0__NewObject(_td_ADT_Object_Storage__ObjectArray.baseTypes[0], 124));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3273))+12);
  i1 = _check_pointer(i1, 3281);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 3281))*4) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 3298))+8) = 1;
  *(OOC_INT32*)((_check_pointer(i0, 3327))+20) = ((OOC_INT32)RT0__NewObject(_td_ADT_Object_Storage__TypeArray.baseTypes[0], 12));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3359))+20);
  i1 = _check_pointer(i1, 3368);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_INT32*)(i1+((_check_index(0, i2, OOC_UINT8, 3368))*12)) = (OOC_INT32)0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3391))+20);
  i1 = _check_pointer(i1, 3400);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_INT32*)((i1+((_check_index(0, i2, OOC_UINT8, 3400))*12))+4) = (OOC_INT32)0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3429))+20);
  i1 = _check_pointer(i1, 3438);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_INT32*)((i1+((_check_index(0, i2, OOC_UINT8, 3438))*12))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 3465))+16) = 1;
  return;
  ;
}

static void ADT_Object_Storage__InitWriter(ADT_Object_Storage__Writer w, IO__ByteChannel ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)ch;
  ADT_Storable__InitWriter((ADT_Storable__Writer)i0, (IO__ByteChannel)i1);
  *(OOC_INT32*)((_check_pointer(i0, 3604))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 3633))+12) = ((OOC_INT32)RT0__NewObject(_td_ADT_Object_Storage__TypeRefMap.baseTypes[0], 12));
  *(OOC_INT32*)((_check_pointer(i0, 3668))+16) = 0;
  i1 = (OOC_INT32)ADT_Dictionary_AddressKey_IntValue__New();
  *(OOC_INT32*)((_check_pointer(i0, 3693))+20) = i1;
  return;
  ;
}

ADT_Object_Storage__Reader ADT_Object_Storage__ConnectReader(IO__ByteChannel ch) {
  register OOC_INT32 i0,i1;
  ADT_Object_Storage__Reader r;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_Object_Storage__Reader.baseTypes[0]);
  r = (ADT_Object_Storage__Reader)i0;
  i1 = (OOC_INT32)ch;
  ADT_Object_Storage__InitReader((ADT_Object_Storage__Reader)i0, (IO__ByteChannel)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3945))+4);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  return (ADT_Object_Storage__Reader)i0;
  goto l4;
l3:
  return (ADT_Object_Storage__Reader)(OOC_INT32)0;
l4:
  _failed_function(3754); return 0;
  ;
}

ADT_Object_Storage__Writer ADT_Object_Storage__ConnectWriter(IO__ByteChannel ch) {
  register OOC_INT32 i0,i1;
  ADT_Object_Storage__Writer w;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_Object_Storage__Writer.baseTypes[0]);
  w = (ADT_Object_Storage__Writer)i0;
  i1 = (OOC_INT32)ch;
  ADT_Object_Storage__InitWriter((ADT_Object_Storage__Writer)i0, (IO__ByteChannel)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4292))+4);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  return (ADT_Object_Storage__Writer)i0;
  goto l4;
l3:
  return (ADT_Object_Storage__Writer)(OOC_INT32)0;
l4:
  _failed_function(4101); return 0;
  ;
}

void ADT_Object_Storage__ReaderDesc_ReadObject(ADT_Object_Storage__Reader r, ADT_Storable__Object *obj) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 ref;
  OOC_INT32 tref;
  RT0__Module module;
  auto OOC_INT32 ADT_Object_Storage__ReaderDesc_ReadObject_ReadType(void);
  auto void ADT_Object_Storage__ReaderDesc_ReadObject_ExtendObjTab(ADT_Object_Storage__ObjectArray *tab);
    
    OOC_INT32 ADT_Object_Storage__ReaderDesc_ReadObject_ReadType(void) {
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
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4830)), 0);
          i1 = (OOC_INT32)RT0__NewObject(_td_ADT_Object_Storage__TypeArray.baseTypes[0], (4+i1*2));
          _new = (ADT_Object_Storage__TypeArray)i1;
          i = 0;
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4878)), 0);
          i2 = 0<i0;
          if (!i2) goto l8;
          i2=0;
l3_loop:
          i3 = (OOC_INT32)*tab;
          i3 = _check_pointer(i3, 4909);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i5 = _check_pointer(i1, 4899);
          i6 = OOC_ARRAY_LENGTH(i5, 0);
          _copy_block((i3+((_check_index(i2, i4, OOC_UINT32, 4909))*12)),(i5+((_check_index(i2, i6, OOC_UINT32, 4899))*12)),12);
          i2 = i2+1;
          i = i2;
          i3 = i2<i0;
          if (i3) goto l3_loop;
l8:
          *tab = (ADT_Object_Storage__TypeArray)i1;
          return;
          ;
        }


      i0 = (OOC_INT32)r;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4988)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&tref);
      i0 = tref;
      i1 = i0<0;
      if (i1) goto l33;
      i1 = (OOC_INT32)r;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 5299))+16);
      i2 = i0!=i2;
      if (!i2) goto l5;
      IO__RaiseFormatError((Object__String)((OOC_INT32)_c0));
l5:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5411))+20);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 5420)), 0);
      i0 = i0==i2;
      if (!i0) goto l8;
      ADT_Object_Storage__ReaderDesc_ReadObject_ReadType_ExtendTypeTab((void*)((_check_pointer(i1, 5455))+20));
l8:
      i0 = (OOC_INT32)r;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 5493))+16);
      *(OOC_INT32*)((_check_pointer(i0, 5493))+16) = (i1+1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5604)))), IO_BinaryRider__ReaderDesc_ReadString)),IO_BinaryRider__ReaderDesc_ReadString)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i0, 5619))+24), 256);
      i0 = (OOC_INT32)r;
      i0 = (OOC_INT32)RT0__ThisModule((void*)((_check_pointer(i0, 5663))+24), 256);
      module = (RT0__Module)i0;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l11;
      i1 = (OOC_INT32)r;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5982))+20);
      i2 = _check_pointer(i2, 5991);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = tref;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6019));
      *(OOC_INT32*)((i2+((_check_index(i4, i3, OOC_UINT32, 5991))*12))+4) = i0;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6038)))), IO_BinaryRider__ReaderDesc_ReadString)),IO_BinaryRider__ReaderDesc_ReadString)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i1, 6053))+24), 256);
      i0 = (OOC_INT32)r;
      i1 = (OOC_INT32)module;
      i0 = (OOC_INT32)RT0__ThisType((RT0__Module)i1, (void*)((_check_pointer(i0, 6101))+24), 256);
      tp = (RT0__Struct)i0;
      
      goto l20;
l11:
      i0 = (OOC_INT32)r;
      i1 = Strings__Length((void*)((_check_pointer(i0, 5737))+24), 256);
      i1 = i1+1;
      len = i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5764))+20);
      i2 = _check_pointer(i2, 5773);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = tref;
      *(OOC_INT32*)((i2+((_check_index(i4, i3, OOC_UINT32, 5773))*12))+4) = ((OOC_INT32)RT0__NewObject(_td_RT0__Name.baseTypes[0], i1));
      i = 0;
      i2 = 0<i1;
      if (!i2) goto l19;
      i2=0;
l14_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5845))+20);
      i3 = _check_pointer(i3, 5853);
      i5 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)((i3+((_check_index(i4, i5, OOC_UINT32, 5853))*12))+4);
      i5 = *(OOC_UINT8*)(((_check_pointer(i0, 5878))+24)+(_check_index(i2, 256, OOC_UINT32, 5883)));
      *(OOC_UINT8*)((_check_pointer(i3, 5870))+i2) = i5;
      i2 = i2+1;
      i = i2;
      i3 = i2<i1;
      if (i3) goto l14_loop;
l19:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5914)))), IO_BinaryRider__ReaderDesc_ReadString)),IO_BinaryRider__ReaderDesc_ReadString)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i0, 5929))+24), 256);
      tp = (RT0__Struct)(OOC_INT32)0;
      i0=(OOC_INT32)0;
l20:
      i1 = (OOC_INT32)r;
      i2 = tref;
      i3 = i0==(OOC_INT32)0;
      if (i3) goto l23;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6370))+20);
      i3 = _check_pointer(i3, 6379);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6401))+12);
      *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 6379))*12))+8) = i5;
      goto l32;
l23:
      i3 = Strings__Length((void*)((_check_pointer(i1, 6184))+24), 256);
      i3 = i3+1;
      len = i3;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6211))+20);
      i4 = _check_pointer(i4, 6220);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      *(OOC_INT32*)((i4+((_check_index(i2, i5, OOC_UINT32, 6220))*12))+8) = ((OOC_INT32)RT0__NewObject(_td_RT0__Name.baseTypes[0], i3));
      i = 0;
      i4 = 0<i3;
      if (!i4) goto l32;
      i4=0;
l26_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6290))+20);
      i5 = _check_pointer(i5, 6298);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)((i5+((_check_index(i2, i6, OOC_UINT32, 6298))*12))+8);
      i6 = *(OOC_UINT8*)(((_check_pointer(i1, 6321))+24)+(_check_index(i4, 256, OOC_UINT32, 6326)));
      *(OOC_UINT8*)((_check_pointer(i5, 6313))+i4) = i6;
      i4 = i4+1;
      i = i4;
      i5 = i4<i3;
      if (i5) goto l26_loop;
l32:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6430))+20);
      i1 = _check_pointer(i1, 6439);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      *(OOC_INT32*)(i1+((_check_index(i2, i3, OOC_UINT32, 6439))*12)) = i0;
      return i2;
      goto l38;
l33:
      i1 = (OOC_INT32)r;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 5100))+16);
      i0 = -i0;
      i1 = i0>=i1;
      if (i1) goto l36;
      return i0;
      goto l38;
l36:
      IO__RaiseFormatError((Object__String)((OOC_INT32)_c1));
l38:
      _failed_function(4585); return 0;
      ;
    }

    
    void ADT_Object_Storage__ReaderDesc_ReadObject_ExtendObjTab(ADT_Object_Storage__ObjectArray *tab) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      ADT_Object_Storage__ObjectArray _new;
      OOC_INT32 i;

      i0 = (OOC_INT32)*tab;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6645)), 0);
      i1 = (OOC_INT32)RT0__NewObject(_td_ADT_Object_Storage__ObjectArray.baseTypes[0], (4+i1*2));
      _new = (ADT_Object_Storage__ObjectArray)i1;
      i = 0;
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6691)), 0);
      i2 = 0<i0;
      if (!i2) goto l8;
      i2=0;
l3_loop:
      i3 = _check_pointer(i1, 6710);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i5 = (OOC_INT32)*tab;
      i5 = _check_pointer(i5, 6720);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i2, i6, OOC_UINT32, 6720))*4);
      *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 6710))*4) = i5;
      i2 = i2+1;
      i = i2;
      i3 = i2<i0;
      if (i3) goto l3_loop;
l8:
      *tab = (ADT_Object_Storage__ObjectArray)i1;
      return;
      ;
    }


  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6790)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&ref);
  i1 = ref;
  i2 = i1==0;
  if (i2) goto l21;
  i2 = i1<0;
  if (i2) goto l15;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 7189))+8);
  i0 = i1!=i0;
  if (!i0) goto l7;
  IO__RaiseFormatError((Object__String)((OOC_INT32)_c2));
l7:
  i0 = ADT_Object_Storage__ReaderDesc_ReadObject_ReadType();
  tref = i0;
  i1 = (OOC_INT32)r;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7346))+20);
  i2 = _check_pointer(i2, 7355);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+((_check_index(i0, i3, OOC_UINT32, 7355))*12));
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l13;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7609))+20);
  i2 = _check_pointer(i2, 7618);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i2+((_check_index(i0, i3, OOC_UINT32, 7618))*12));
  i0 = (OOC_INT32)RT0__NewObject((RT0__Struct)i0);
  *obj = (ADT_Storable__Object)((OOC_INT32)_type_cast_fast(OOC_INT32, OOC_INT32, i0));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7660))+12);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 7668)), 0);
  i2 = ref;
  i0 = i2==i0;
  if (!i0) goto l12;
  ADT_Object_Storage__ReaderDesc_ReadObject_ExtendObjTab((void*)((_check_pointer(i1, 7704))+12));
l12:
  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7740))+12);
  i1 = _check_pointer(i1, 7748);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = ref;
  i4 = (OOC_INT32)*obj;
  *(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 7748))*4) = i4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7778))+8);
  *(OOC_INT32*)((_check_pointer(i0, 7778))+8) = (i1+1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7806)))), ADT_Storable__ObjectDesc_Load)),ADT_Storable__ObjectDesc_Load)((ADT_Storable__Object)i4, (ADT_Storable__Reader)i0);
  goto l22;
l13:
  ADT_Storable__RaiseTypeError((Object__String)((OOC_INT32)_c3));
  goto l22;
l15:
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6957))+8);
  i1 = -i1;
  i2 = i1>=i2;
  if (i2) goto l18;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7094))+12);
  i0 = _check_pointer(i0, 7102);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i1, i2, OOC_UINT32, 7102))*4);
  *obj = (ADT_Storable__Object)i0;
  goto l22;
l18:
  IO__RaiseFormatError((Object__String)((OOC_INT32)_c4));
  goto l22;
l21:
  *obj = (ADT_Storable__Object)(OOC_INT32)0;
l22:
  return;
  ;
}

void ADT_Object_Storage__ReaderDesc_Disconnect(ADT_Object_Storage__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7991))+12);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7999)), 0);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8014))+12);
  i3 = _check_pointer(i3, 8022);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 8022))*4) = (OOC_INT32)0;
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l3_loop;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8066))+20);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8075)), 0);
  i = 0;
  i2 = 0<i1;
  if (!i2) goto l16;
  i2=0;
l11_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8090))+20);
  i3 = _check_pointer(i3, 8099);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 8099))*12)) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8124))+20);
  i3 = _check_pointer(i3, 8133);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 8133))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8164))+20);
  i3 = _check_pointer(i3, 8173);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 8173))*12))+8) = (OOC_INT32)0;
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l11_loop;
l16:
  *(OOC_INT32*)((_check_pointer(i0, 8208))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 8232))+16) = 0;
  return;
  ;
}

void ADT_Object_Storage__WriterDesc_WriteObject(ADT_Object_Storage__Writer w, ADT_Storable__Object obj) {
  register OOC_INT32 i0,i1,i2,i3;
  RT0__Struct type;
  OOC_INT32 tref;
  auto OOC_INT32 ADT_Object_Storage__WriterDesc_WriteObject_LookupType(ADT_Object_Storage__Writer w, RT0__Name module, RT0__Name type);
    
    OOC_INT32 ADT_Object_Storage__WriterDesc_WriteObject_LookupType(ADT_Object_Storage__Writer w, RT0__Name module, RT0__Name type) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
      OOC_INT32 i;
      OOC_INT32 j;
      OOC_INT32 e;
      ADT_Object_Storage__TypeRefMap _new;

      i = (-1);
      i0 = (OOC_INT32)w;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 8806))+16);
      j = i1;
      i2 = 0!=i1;
      if (i2) goto l3;
      i2=i1;i1=(-1);
      goto l21;
l3:
      i2 = (OOC_INT32)type;
      i3 = (OOC_INT32)module;
      i4=i1;i1=(-1);
l4_loop:
      i5 = (i1+i4)>>1;
      e = i5;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8885))+12);
      i6 = _check_pointer(i6, 8897);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+((_check_index(i5, i7, OOC_UINT32, 8897))*12));
      i6 = (
      _cmp8((const void*)(_check_pointer(i6, 8908)),(const void*)(_check_pointer(i3, 8918))))<0;
      if (i6) goto l11;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8937))+12);
      i6 = _check_pointer(i6, 8949);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+((_check_index(i5, i7, OOC_UINT32, 8949))*12));
      i6 = (
      _cmp8((const void*)(_check_pointer(i6, 8960)),(const void*)(_check_pointer(i3, 8970))))==0;
      if (i6) goto l9;
      i6=0u;
      goto l13;
l9:
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8991))+12);
      i6 = _check_pointer(i6, 9003);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i7, OOC_UINT32, 9003))*12))+4);
      i6 = (
      _cmp8((const void*)(_check_pointer(i6, 9012)),(const void*)(_check_pointer(i2, 9021))))<=0;
      
      goto l13;
l11:
      i6=1u;
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
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9131))+12);
      i3 = _check_pointer(i3, 9143);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+((_check_index(i1, i4, OOC_UINT32, 9143))*12));
      i4 = (OOC_INT32)module;
      i3 = (
      _cmp8((const void*)(_check_pointer(i3, 9154)),(const void*)(_check_pointer(i4, 9164))))!=0;
      
      goto l26;
l24:
      i3=1u;
l26:
      if (i3) goto l28;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9181))+12);
      i3 = _check_pointer(i3, 9193);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)((i3+((_check_index(i1, i4, OOC_UINT32, 9193))*12))+4);
      i4 = (OOC_INT32)type;
      i3 = (
      _cmp8((const void*)(_check_pointer(i3, 9202)),(const void*)(_check_pointer(i4, 9210))))!=0;
      
      goto l30;
l28:
      i3=1u;
l30:
      if (i3) goto l32;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9893))+12);
      i0 = _check_pointer(i0, 9905);
      i2 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = *(OOC_INT32*)((i0+((_check_index(i1, i2, OOC_UINT32, 9905))*12))+8);
      return (-i0);
      goto l52;
l32:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9318))+12);
      i3 = *(OOC_INT32*)((_check_pointer(i0, 9296))+16);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9330)), 0);
      i1 = i3==i1;
      if (!i1) goto l43;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 9360))+16);
      i1 = (OOC_INT32)RT0__NewObject(_td_ADT_Object_Storage__TypeRefMap.baseTypes[0], (4+i1*2));
      _new = (ADT_Object_Storage__TypeRefMap)i1;
      i3 = *(OOC_INT32*)((_check_pointer(i0, 9414))+16);
      i = 0;
      i4 = 0<i3;
      if (!i4) goto l42;
      i4=0;
l37_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9456))+12);
      i5 = _check_pointer(i5, 9468);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i7 = _check_pointer(i1, 9448);
      i8 = OOC_ARRAY_LENGTH(i7, 0);
      _copy_block((i5+((_check_index(i4, i6, OOC_UINT32, 9468))*12)),(i7+((_check_index(i4, i8, OOC_UINT32, 9448))*12)),12);
      i4 = i4+1;
      i = i4;
      i5 = i4<i3;
      if (i5) goto l37_loop;
l42:
      *(OOC_INT32*)((_check_pointer(i0, 9498))+12) = i1;
l43:
      i1 = *(OOC_INT32*)((_check_pointer(i0, 9549))+16);
      i1 = i1-1;
      i = i1;
      i3 = i1>=i2;
      if (!i3) goto l51;
l46_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9612))+12);
      i3 = _check_pointer(i3, 9624);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9590))+12);
      i5 = _check_pointer(i5, 9602);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      _copy_block((i3+((_check_index(i1, i4, OOC_UINT32, 9624))*12)),(i5+((_check_index((i1+1), i6, OOC_UINT32, 9602))*12)),12);
      i1 = i1+(-1);
      i = i1;
      i3 = i1>=i2;
      if (i3) goto l46_loop;
l51:
      i1 = *(OOC_INT32*)((_check_pointer(i0, 9655))+16);
      *(OOC_INT32*)((_check_pointer(i0, 9655))+16) = (i1+1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9680))+12);
      i1 = _check_pointer(i1, 9692);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i4 = (OOC_INT32)module;
      *(OOC_INT32*)(i1+((_check_index(i2, i3, OOC_UINT32, 9692))*12)) = i4;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9724))+12);
      i1 = _check_pointer(i1, 9736);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i4 = (OOC_INT32)type;
      *(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 9736))*12))+4) = i4;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9764))+12);
      i1 = _check_pointer(i1, 9776);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i4 = *(OOC_INT32*)((_check_pointer(i0, 9789))+16);
      *(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 9776))*12))+8) = i4;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 9820))+16);
      return i0;
l52:
      _failed_function(8412); return 0;
      ;
    }


  i0 = (OOC_INT32)obj;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l10;
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10070))+20);
  i2 = ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_HasKey((ADT_Dictionary_AddressKey_IntValue__Dictionary)i2, (Object__Object)i0);
  if (i2) goto l8;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10233))+8);
  *(OOC_INT32*)((_check_pointer(i1, 10233))+8) = (i2+1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10257))+20);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 10279))+8);
  ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Set((ADT_Dictionary_AddressKey_IntValue__Dictionary)i2, (Object__Object)i0, i3);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10316))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10303)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i0 = (OOC_INT32)RT0__TypeOf((void*)i0);
  type = (RT0__Struct)i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10463))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10471));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10483))+12);
  i0 = ADT_Object_Storage__WriterDesc_WriteObject_LookupType((ADT_Object_Storage__Writer)i1, (RT0__Name)i2, (RT0__Name)i0);
  tref = i0;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10501)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i0);
  i0 = i0>0;
  if (!i0) goto l7;
  i0 = (OOC_INT32)type;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10567))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10575));
  _copy_8((const void*)(_check_pointer(i2, 10581)),(void*)((_check_pointer(i1, 10585))+24),256);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10611)))), IO_BinaryRider__WriterDesc_WriteString)),IO_BinaryRider__WriterDesc_WriteString)((IO_BinaryRider__Writer)i1, (void*)((_check_pointer(i1, 10627))+24), 256);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10662))+12);
  _copy_8((const void*)(_check_pointer(i0, 10668)),(void*)((_check_pointer(i1, 10672))+24),256);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10698)))), IO_BinaryRider__WriterDesc_WriteString)),IO_BinaryRider__WriterDesc_WriteString)((IO_BinaryRider__Writer)i1, (void*)((_check_pointer(i1, 10714))+24), 256);
l7:
  i0 = (OOC_INT32)obj;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10753)))), ADT_Storable__ObjectDesc_Store)),ADT_Storable__ObjectDesc_Store)((ADT_Storable__Object)i0, (ADT_Storable__Writer)i1);
  goto l11;
l8:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10148))+20);
  i0 = ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Get((ADT_Dictionary_AddressKey_IntValue__Dictionary)i2, (Object__Object)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10134)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, (-i0));
  goto l11;
l10:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9986)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, 0);
l11:
  return;
  ;
}

void ADT_Object_Storage__WriterDesc_Disconnect(ADT_Object_Storage__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10930))+12);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 10942)), 0);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10957))+12);
  i3 = _check_pointer(i3, 10969);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 10969))*12)) = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10996))+12);
  i3 = _check_pointer(i3, 11008);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 11008))*12))+4) = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11033))+12);
  i3 = _check_pointer(i3, 11045);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 11045))*12))+8) = 0;
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l3_loop;
l8:
  *(OOC_INT32*)((_check_pointer(i0, 11073))+12) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 11099))+16) = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11124))+20);
  ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Destroy((ADT_Dictionary_AddressKey_IntValue__Dictionary)i1);
  *(OOC_INT32*)((_check_pointer(i0, 11151))+20) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 11174))+8) = 0;
  return;
  ;
}

void OOC_ADT_Object_Storage_init(void) {
  _c0 = Object__NewLatin1Region("Type count mismatch", 20, 0, 19);
  _c1 = Object__NewLatin1Region("Invalid type reference", 23, 0, 22);
  _c2 = Object__NewLatin1Region("Object count mismatch", 22, 0, 21);
  _c3 = Object__NewLatin1Region("Failed to resolve type name", 28, 0, 27);
  _c4 = Object__NewLatin1Region("Invalid object reference", 25, 0, 24);

  return;
  ;
}

/* --- */
