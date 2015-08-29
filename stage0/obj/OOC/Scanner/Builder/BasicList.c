#include <OOC/Scanner/Builder/BasicList.d>
#include <__oo2c.h>

void OOC_Scanner_Builder_BasicList__Init(OOC_Scanner_Builder_BasicList__Builder b, OOC_Scanner_InputBuffer__Buffer buffer, OOC_CHAR8 includeDocComments) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)buffer;
  i1 = (OOC_INT32)b;
  OOC_Scanner_Builder__Init((OOC_Scanner_Builder__Builder)i1, (OOC_Scanner_InputBuffer__Buffer)i0);
  *(OOC_INT32*)((_check_pointer(i1, 2684))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 2704))+12) = (OOC_INT32)0;
  i0 = includeDocComments;
  *(OOC_UINT8*)((_check_pointer(i1, 2724))+16) = i0;
  return;
  ;
}

OOC_Scanner_Builder_BasicList__Builder OOC_Scanner_Builder_BasicList__New(OOC_Scanner_InputBuffer__Buffer buffer, OOC_CHAR8 includeDocComments) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_Builder_BasicList__Builder.baseTypes[0]);
  i1 = (OOC_INT32)buffer;
  i2 = includeDocComments;
  OOC_Scanner_Builder_BasicList__Init((OOC_Scanner_Builder_BasicList__Builder)i0, (OOC_Scanner_InputBuffer__Buffer)i1, i2);
  return (OOC_Scanner_Builder_BasicList__Builder)i0;
  ;
}

OOC_Scanner_Builder_BasicList__Symbol OOC_Scanner_Builder_BasicList__NewSymbol(OOC_Scanner_InputBuffer__CharArray str, OOC_INT32 len) {
  register OOC_INT32 i0,i1;
  OOC_Scanner_Builder_BasicList__Symbol sym;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_Builder_BasicList__Symbol.baseTypes[0]);
  sym = (OOC_Scanner_Builder_BasicList__Symbol)i0;
  *(OOC_INT32*)(_check_pointer(i0, 3099)) = (OOC_INT32)0;
  *(OOC_INT8*)((_check_pointer(i0, 3121))+4) = -1;
  i1 = (OOC_INT32)str;
  *(OOC_INT32*)((_check_pointer(i0, 3140))+8) = i1;
  i1 = len;
  *(OOC_INT32*)((_check_pointer(i0, 3161))+12) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 3182))+16) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 3201))+20) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 3221))+24) = 0;
  return (OOC_Scanner_Builder_BasicList__Symbol)i0;
  ;
}

OOC_Scanner_Builder_BasicList__Symbol OOC_Scanner_Builder_BasicList__CloneSymbol(OOC_Scanner_Builder_BasicList__Symbol old, const OOC_CHAR8 str__ref[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)
  OOC_Scanner_Builder_BasicList__Symbol sym;

  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_Builder_BasicList__Symbol.baseTypes[0]);
  sym = (OOC_Scanner_Builder_BasicList__Symbol)i0;
  *(OOC_INT32*)(_check_pointer(i0, 3400)) = (OOC_INT32)0;
  i1 = (OOC_INT32)old;
  i2 = *(OOC_INT8*)((_check_pointer(i1, 3433))+4);
  *(OOC_INT8*)((_check_pointer(i0, 3422))+4) = i2;
  i2 = Strings__Length((void*)(OOC_INT32)str, str_0d);
  *(OOC_INT32*)((_check_pointer(i0, 3446))+12) = i2;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3499))+12);
  *(OOC_INT32*)((_check_pointer(i0, 3489))+8) = ((OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i2+1)));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3527))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3527))+8);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 3532)), (OOC_INT32)0);
  _copy_8((const void*)(OOC_INT32)str,(void*)(_check_pointer(i2, 3532)),i3);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 3555))+16);
  *(OOC_INT32*)((_check_pointer(i0, 3543))+16) = i2;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 3582))+20);
  *(OOC_INT32*)((_check_pointer(i0, 3569))+20) = i2;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 3612))+24);
  *(OOC_INT32*)((_check_pointer(i0, 3597))+24) = i1;
  return (OOC_Scanner_Builder_BasicList__Symbol)i0;
  ;
}

void OOC_Scanner_Builder_BasicList__BuilderDesc_Clear(OOC_Scanner_Builder_BasicList__Builder b) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)b;
  *(OOC_INT32*)((_check_pointer(i0, 3701))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 3721))+12) = (OOC_INT32)0;
  return;
  ;
}

void OOC_Scanner_Builder_BasicList__BuilderDesc_AddSymbol(OOC_Scanner_Builder_BasicList__Builder b, OOC_INT8 id, OOC_INT32 cstart, OOC_INT32 cend, OOC_INT32 line, OOC_INT32 column) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_Scanner_Builder_BasicList__Symbol sym;
  OOC_INT32 len;

  i0 = id;
  i1 = i0<74;
  if (i1) goto l3;
  i1 = i0>77;
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (i1) goto l11;
  i1 = i0==75;
  if (i1) goto l9;
  i1=OOC_FALSE;
  goto l13;
l9:
  i1 = (OOC_INT32)b;
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 4046))+16);
  
  goto l13;
l11:
  i1=OOC_TRUE;
l13:
  if (!i1) goto l19;
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_Builder_BasicList__Symbol.baseTypes[0]);
  sym = (OOC_Scanner_Builder_BasicList__Symbol)i1;
  *(OOC_INT32*)(_check_pointer(i1, 4098)) = (OOC_INT32)0;
  *(OOC_INT8*)((_check_pointer(i1, 4122))+4) = i0;
  i0 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4153));
  i2 = *(OOC_INT32*)((_check_pointer(i2, 4166))+8);
  i3 = cstart;
  *(OOC_INT32*)((_check_pointer(i1, 4143))+16) = (i2+i3);
  i2 = line;
  *(OOC_INT32*)((_check_pointer(i1, 4200))+20) = i2;
  i2 = column;
  i4 = cend;
  i4 = i4-i3;
  *(OOC_INT32*)((_check_pointer(i1, 4225))+24) = i2;
  len = i4;
  *(OOC_INT32*)((_check_pointer(i1, 4285))+8) = ((OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i4+1)));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4332));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4345))+4);
  i0 = _check_pointer(i0, 4352);
  i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4397))+8);
  _move_block((i0+(_check_index(i3, i2, OOC_UINT32, 4352))),(_check_pointer(i1, 4402)),i4);
  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4421))+8);
  i1 = _check_pointer(i1, 4426);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i3 = len;
  *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT32, 4426))) = (OOC_CHAR8)'\000';
  *(OOC_INT32*)((_check_pointer(i0, 4448))+12) = i3;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4480))+12);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l17;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4542))+12);
  *(OOC_INT32*)(_check_pointer(i2, 4548)) = i0;
  goto l18;
l17:
  *(OOC_INT32*)((_check_pointer(i1, 4508))+8) = i0;
l18:
  *(OOC_INT32*)((_check_pointer(i1, 4580))+12) = i0;
l19:
  return;
  ;
}

void OOC_OOC_Scanner_Builder_BasicList_init(void) {

  return;
  ;
}

/* --- */
