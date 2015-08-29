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
      i1 = *(OOC_INT32*)((_check_pointer(i1, 5318))+16);
      i0 = i0!=i1;
      if (!i0) goto l5;
      IO__RaiseFormatError((Object__String)((OOC_INT32)_c0));
      return 0;
l5:
      i0 = (OOC_INT32)r;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5450))+20);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 5459)), 0);
      i2 = tref;
      i1 = i2==i1;
      if (!i1) goto l8;
      ADT_Object_Storage__ReaderDesc_ReadObject_ReadType_ExtendTypeTab((void*)((_check_pointer(i0, 5494))+20));
l8:
      i0 = (OOC_INT32)r;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 5532))+16);
      *(OOC_INT32*)((_check_pointer(i0, 5532))+16) = (i1+1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5643)))), IO_BinaryRider__ReaderDesc_ReadString)),IO_BinaryRider__ReaderDesc_ReadString)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i0, 5658))+24), 256);
      i0 = (OOC_INT32)r;
      i0 = (OOC_INT32)RT0__ThisModule((void*)((_check_pointer(i0, 5702))+24), 256);
      module = (RT0__Module)i0;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l11;
      i1 = (OOC_INT32)r;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6021))+20);
      i2 = _check_pointer(i2, 6030);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = tref;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6058));
      *(OOC_INT32*)((i2+((_check_index(i4, i3, OOC_UINT32, 6030))*12))+4) = i0;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6077)))), IO_BinaryRider__ReaderDesc_ReadString)),IO_BinaryRider__ReaderDesc_ReadString)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i1, 6092))+24), 256);
      i0 = (OOC_INT32)r;
      i1 = (OOC_INT32)module;
      i0 = (OOC_INT32)RT0__ThisType((RT0__Module)i1, (void*)((_check_pointer(i0, 6140))+24), 256);
      tp = (RT0__Struct)i0;
      
      goto l20;
l11:
      i0 = (OOC_INT32)r;
      i0 = Strings__Length((void*)((_check_pointer(i0, 5776))+24), 256);
      i0 = i0+1;
      len = i0;
      i1 = (OOC_INT32)r;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5803))+20);
      i2 = _check_pointer(i2, 5812);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = tref;
      *(OOC_INT32*)((i2+((_check_index(i4, i3, OOC_UINT32, 5812))*12))+4) = ((OOC_INT32)RT0__NewObject(_td_RT0__Name.baseTypes[0], i0));
      i = 0;
      i2 = 0<i0;
      if (!i2) goto l19;
      i2=0;
l14_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5884))+20);
      i3 = _check_pointer(i3, 5892);
      i5 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)((i3+((_check_index(i4, i5, OOC_UINT32, 5892))*12))+4);
      i5 = *(OOC_UINT8*)(((_check_pointer(i1, 5917))+24)+(_check_index(i2, 256, OOC_UINT32, 5922)));
      *(OOC_UINT8*)((_check_pointer(i3, 5909))+i2) = i5;
      i2 = i2+1;
      i = i2;
      i3 = i2<i0;
      if (i3) goto l14_loop;
l19:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5953)))), IO_BinaryRider__ReaderDesc_ReadString)),IO_BinaryRider__ReaderDesc_ReadString)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i1, 5968))+24), 256);
      tp = (RT0__Struct)(OOC_INT32)0;
      i0=(OOC_INT32)0;
l20:
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l23;
      i1 = (OOC_INT32)r;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6409))+20);
      i1 = _check_pointer(i1, 6418);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = tref;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6440))+12);
      *(OOC_INT32*)((i1+((_check_index(i3, i2, OOC_UINT32, 6418))*12))+8) = i4;
      goto l32;
l23:
      i1 = (OOC_INT32)r;
      i1 = Strings__Length((void*)((_check_pointer(i1, 6223))+24), 256);
      i1 = i1+1;
      len = i1;
      i2 = (OOC_INT32)r;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6250))+20);
      i3 = _check_pointer(i3, 6259);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i5 = tref;
      *(OOC_INT32*)((i3+((_check_index(i5, i4, OOC_UINT32, 6259))*12))+8) = ((OOC_INT32)RT0__NewObject(_td_RT0__Name.baseTypes[0], i1));
      i = 0;
      i3 = 0<i1;
      if (!i3) goto l32;
      i3=0;
l26_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6329))+20);
      i4 = _check_pointer(i4, 6337);
      i6 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i5, i6, OOC_UINT32, 6337))*12))+8);
      i6 = *(OOC_UINT8*)(((_check_pointer(i2, 6360))+24)+(_check_index(i3, 256, OOC_UINT32, 6365)));
      *(OOC_UINT8*)((_check_pointer(i4, 6352))+i3) = i6;
      i3 = i3+1;
      i = i3;
      i4 = i3<i1;
      if (i4) goto l26_loop;
l32:
      i1 = (OOC_INT32)r;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6469))+20);
      i1 = _check_pointer(i1, 6478);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = tref;
      *(OOC_INT32*)(i1+((_check_index(i3, i2, OOC_UINT32, 6478))*12)) = i0;
      return i3;
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
      return 0;
l38:
      _failed_function(4585); return 0;
      ;
    }

    
    void ADT_Object_Storage__ReaderDesc_ReadObject_ExtendObjTab(ADT_Object_Storage__ObjectArray *tab) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      ADT_Object_Storage__ObjectArray _new;
      OOC_INT32 i;

      i0 = (OOC_INT32)*tab;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6684)), 0);
      i1 = (OOC_INT32)RT0__NewObject(_td_ADT_Object_Storage__ObjectArray.baseTypes[0], (4+i1*2));
      _new = (ADT_Object_Storage__ObjectArray)i1;
      i = 0;
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6730)), 0);
      i2 = 0<i0;
      if (!i2) goto l8;
      i2=0;
l3_loop:
      i3 = _check_pointer(i1, 6749);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i5 = (OOC_INT32)*tab;
      i5 = _check_pointer(i5, 6759);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i2, i6, OOC_UINT32, 6759))*4);
      *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 6749))*4) = i5;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6829)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&ref);
  i1 = ref;
  i2 = i1==0;
  if (i2) goto l21;
  i2 = i1<0;
  if (i2) goto l15;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 7250))+8);
  i0 = i1!=i0;
  if (!i0) goto l7;
  IO__RaiseFormatError((Object__String)((OOC_INT32)_c2));
l7:
  i0 = ADT_Object_Storage__ReaderDesc_ReadObject_ReadType();
  tref = i0;
  i1 = (OOC_INT32)r;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7407))+20);
  i2 = _check_pointer(i2, 7416);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+((_check_index(i0, i3, OOC_UINT32, 7416))*12));
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l13;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7670))+20);
  i2 = _check_pointer(i2, 7679);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i2+((_check_index(i0, i3, OOC_UINT32, 7679))*12));
  i0 = (OOC_INT32)RT0__NewObject((RT0__Struct)i0);
  *obj = (ADT_Storable__Object)((OOC_INT32)_type_cast_fast(OOC_INT32, OOC_INT32, i0));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7721))+12);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 7729)), 0);
  i2 = ref;
  i0 = i2==i0;
  if (!i0) goto l12;
  ADT_Object_Storage__ReaderDesc_ReadObject_ExtendObjTab((void*)((_check_pointer(i1, 7765))+12));
l12:
  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7801))+12);
  i1 = _check_pointer(i1, 7809);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = ref;
  i4 = (OOC_INT32)*obj;
  *(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 7809))*4) = i4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7839))+8);
  *(OOC_INT32*)((_check_pointer(i0, 7839))+8) = (i1+1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7867)))), ADT_Storable__ObjectDesc_Load)),ADT_Storable__ObjectDesc_Load)((ADT_Storable__Object)i4, (ADT_Storable__Reader)i0);
  goto l22;
l13:
  ADT_Storable__RaiseTypeError((Object__String)((OOC_INT32)_c3));
  goto l22;
l15:
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6996))+8);
  i1 = -i1;
  i2 = i1>=i2;
  if (i2) goto l18;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7155))+12);
  i0 = _check_pointer(i0, 7163);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i1, i2, OOC_UINT32, 7163))*4);
  *obj = (ADT_Storable__Object)i0;
  goto l22;
l18:
  IO__RaiseFormatError((Object__String)((OOC_INT32)_c4));
  *obj = (ADT_Storable__Object)(OOC_INT32)0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8052))+12);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8060)), 0);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8075))+12);
  i3 = _check_pointer(i3, 8083);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 8083))*4) = (OOC_INT32)0;
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l3_loop;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8127))+20);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8136)), 0);
  i = 0;
  i2 = 0<i1;
  if (!i2) goto l16;
  i2=0;
l11_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8151))+20);
  i3 = _check_pointer(i3, 8160);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 8160))*12)) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8185))+20);
  i3 = _check_pointer(i3, 8194);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 8194))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8225))+20);
  i3 = _check_pointer(i3, 8234);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 8234))*12))+8) = (OOC_INT32)0;
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l11_loop;
l16:
  *(OOC_INT32*)((_check_pointer(i0, 8269))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 8293))+16) = 0;
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

      i = (-1);
      i0 = (OOC_INT32)w;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 8867))+16);
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
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8946))+12);
      i6 = _check_pointer(i6, 8958);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+((_check_index(i5, i7, OOC_UINT32, 8958))*12));
      i6 = (
      _cmp8((const void*)(_check_pointer(i6, 8969)),(const void*)(_check_pointer(i3, 8979))))<0;
      if (i6) goto l11;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8998))+12);
      i6 = _check_pointer(i6, 9010);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+((_check_index(i5, i7, OOC_UINT32, 9010))*12));
      i6 = (
      _cmp8((const void*)(_check_pointer(i6, 9021)),(const void*)(_check_pointer(i3, 9031))))==0;
      if (i6) goto l9;
      i6=0u;
      goto l13;
l9:
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9052))+12);
      i6 = _check_pointer(i6, 9064);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i7, OOC_UINT32, 9064))*12))+4);
      i6 = (
      _cmp8((const void*)(_check_pointer(i6, 9073)),(const void*)(_check_pointer(i2, 9082))))<=0;
      
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
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9192))+12);
      i3 = _check_pointer(i3, 9204);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+((_check_index(i1, i4, OOC_UINT32, 9204))*12));
      i4 = (OOC_INT32)module;
      i3 = (
      _cmp8((const void*)(_check_pointer(i3, 9215)),(const void*)(_check_pointer(i4, 9225))))!=0;
      
      goto l26;
l24:
      i3=1u;
l26:
      if (i3) goto l28;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9242))+12);
      i3 = _check_pointer(i3, 9254);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)((i3+((_check_index(i1, i4, OOC_UINT32, 9254))*12))+4);
      i4 = (OOC_INT32)type;
      i3 = (
      _cmp8((const void*)(_check_pointer(i3, 9263)),(const void*)(_check_pointer(i4, 9271))))!=0;
      
      goto l30;
l28:
      i3=1u;
l30:
      if (i3) goto l32;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9954))+12);
      i0 = _check_pointer(i0, 9966);
      i2 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = *(OOC_INT32*)((i0+((_check_index(i1, i2, OOC_UINT32, 9966))*12))+8);
      return (-i0);
      goto l52;
l32:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9379))+12);
      i3 = *(OOC_INT32*)((_check_pointer(i0, 9357))+16);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9391)), 0);
      i1 = i3==i1;
      if (!i1) goto l43;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 9421))+16);
      i1 = (OOC_INT32)RT0__NewObject(_td_ADT_Object_Storage__TypeRefMap.baseTypes[0], (4+i1*2));
      _new = (ADT_Object_Storage__TypeRefMap)i1;
      i3 = *(OOC_INT32*)((_check_pointer(i0, 9475))+16);
      i = 0;
      i4 = 0<i3;
      if (!i4) goto l42;
      i4=0;
l37_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9517))+12);
      i5 = _check_pointer(i5, 9529);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i7 = _check_pointer(i1, 9509);
      i8 = OOC_ARRAY_LENGTH(i7, 0);
      _copy_block((i5+((_check_index(i4, i6, OOC_UINT32, 9529))*12)),(i7+((_check_index(i4, i8, OOC_UINT32, 9509))*12)),12);
      i4 = i4+1;
      i = i4;
      i5 = i4<i3;
      if (i5) goto l37_loop;
l42:
      *(OOC_INT32*)((_check_pointer(i0, 9559))+12) = i1;
l43:
      i1 = *(OOC_INT32*)((_check_pointer(i0, 9610))+16);
      i1 = i1-1;
      i = i1;
      i3 = i1>=i2;
      if (!i3) goto l51;
l46_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9673))+12);
      i3 = _check_pointer(i3, 9685);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9651))+12);
      i5 = _check_pointer(i5, 9663);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      _copy_block((i3+((_check_index(i1, i4, OOC_UINT32, 9685))*12)),(i5+((_check_index((i1+1), i6, OOC_UINT32, 9663))*12)),12);
      i1 = i1+(-1);
      i = i1;
      i3 = i1>=i2;
      if (i3) goto l46_loop;
l51:
      i1 = *(OOC_INT32*)((_check_pointer(i0, 9716))+16);
      *(OOC_INT32*)((_check_pointer(i0, 9716))+16) = (i1+1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9741))+12);
      i1 = _check_pointer(i1, 9753);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i4 = (OOC_INT32)module;
      *(OOC_INT32*)(i1+((_check_index(i2, i3, OOC_UINT32, 9753))*12)) = i4;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9785))+12);
      i1 = _check_pointer(i1, 9797);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i4 = (OOC_INT32)type;
      *(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 9797))*12))+4) = i4;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9825))+12);
      i1 = _check_pointer(i1, 9837);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i4 = *(OOC_INT32*)((_check_pointer(i0, 9850))+16);
      *(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 9837))*12))+8) = i4;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 9881))+16);
      return i0;
l52:
      _failed_function(8473); return 0;
      ;
    }


  i0 = (OOC_INT32)obj;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l10;
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10131))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10131))+20);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10140)))), ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_HasKey)),ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_HasKey)((ADT_Dictionary_AddressKey_IntValue__Dictionary)i3, (Object__Object)i0);
  if (i2) goto l8;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10294))+8);
  *(OOC_INT32*)((_check_pointer(i1, 10294))+8) = (i2+1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10318))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10318))+20);
  i4 = *(OOC_INT32*)((_check_pointer(i1, 10340))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10327)))), ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Set)),ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Set)((ADT_Dictionary_AddressKey_IntValue__Dictionary)i3, (Object__Object)i0, i4);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10377))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10364)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i0 = (OOC_INT32)RT0__TypeOf((void*)i0);
  type = (RT0__Struct)i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10524))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10532));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10544))+12);
  i0 = ADT_Object_Storage__WriterDesc_WriteObject_LookupType((ADT_Object_Storage__Writer)i1, (RT0__Name)i2, (RT0__Name)i0);
  tref = i0;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10562)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i0);
  i0 = i0>0;
  if (!i0) goto l7;
  i0 = (OOC_INT32)type;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10628))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10636));
  _copy_8((const void*)(_check_pointer(i2, 10642)),(void*)((_check_pointer(i1, 10646))+24),256);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10672)))), IO_BinaryRider__WriterDesc_WriteString)),IO_BinaryRider__WriterDesc_WriteString)((IO_BinaryRider__Writer)i1, (void*)((_check_pointer(i1, 10688))+24), 256);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10723))+12);
  _copy_8((const void*)(_check_pointer(i0, 10729)),(void*)((_check_pointer(i1, 10733))+24),256);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10759)))), IO_BinaryRider__WriterDesc_WriteString)),IO_BinaryRider__WriterDesc_WriteString)((IO_BinaryRider__Writer)i1, (void*)((_check_pointer(i1, 10775))+24), 256);
l7:
  i0 = (OOC_INT32)obj;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10814)))), ADT_Storable__ObjectDesc_Store)),ADT_Storable__ObjectDesc_Store)((ADT_Storable__Object)i0, (ADT_Storable__Writer)i1);
  goto l11;
l8:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10209))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10209))+20);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10218)))), ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Get)),ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Get)((ADT_Dictionary_AddressKey_IntValue__Dictionary)i3, (Object__Object)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10195)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, (-i0));
  goto l11;
l10:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10047)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, 0);
l11:
  return;
  ;
}

void ADT_Object_Storage__WriterDesc_Disconnect(ADT_Object_Storage__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10991))+12);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 11003)), 0);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11018))+12);
  i3 = _check_pointer(i3, 11030);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 11030))*12)) = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11057))+12);
  i3 = _check_pointer(i3, 11069);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 11069))*12))+4) = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11094))+12);
  i3 = _check_pointer(i3, 11106);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 11106))*12))+8) = 0;
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l3_loop;
l8:
  *(OOC_INT32*)((_check_pointer(i0, 11134))+12) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 11160))+16) = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11185))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11185))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11194)))), ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Destroy)),ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Destroy)((ADT_Dictionary_AddressKey_IntValue__Dictionary)i2);
  *(OOC_INT32*)((_check_pointer(i0, 11212))+20) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 11235))+8) = 0;
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
