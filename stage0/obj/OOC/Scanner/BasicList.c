#include <OOC/Scanner/BasicList.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_Scanner_BasicList__Init(OOC_Scanner_BasicList__Builder b, OOC_Scanner_InputBuffer__Buffer buffer, OOC_CHAR8 includeDocComments) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)buffer;
  OOC_Scanner_Builder__Init((OOC_Scanner_Builder__Builder)i0, (OOC_Scanner_InputBuffer__Buffer)i1);
  *(OOC_INT32*)((_check_pointer(i0, 2676))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 2696))+12) = (OOC_INT32)0;
  i1 = includeDocComments;
  *(OOC_UINT8*)((_check_pointer(i0, 2716))+16) = i1;
  return;
  ;
}

OOC_Scanner_BasicList__Builder OOC_Scanner_BasicList__New(OOC_Scanner_InputBuffer__Buffer buffer, OOC_CHAR8 includeDocComments) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_BasicList__Builder.baseTypes[0]);
  i1 = (OOC_INT32)buffer;
  i2 = includeDocComments;
  OOC_Scanner_BasicList__Init((OOC_Scanner_BasicList__Builder)i0, (OOC_Scanner_InputBuffer__Buffer)i1, i2);
  return (OOC_Scanner_BasicList__Builder)i0;
  ;
}

OOC_Scanner_BasicList__Symbol OOC_Scanner_BasicList__NewSymbol(OOC_Scanner_InputBuffer__CharArray str, OOC_INT32 len) {
  register OOC_INT32 i0,i1;
  OOC_Scanner_BasicList__Symbol sym;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_BasicList__Symbol.baseTypes[0]);
  sym = (OOC_Scanner_BasicList__Symbol)i0;
  *(OOC_INT32*)(_check_pointer(i0, 3091)) = 0;
  *(OOC_INT8*)((_check_pointer(i0, 3113))+4) = (-1);
  i1 = (OOC_INT32)str;
  *(OOC_INT32*)((_check_pointer(i0, 3132))+8) = i1;
  i1 = len;
  *(OOC_INT32*)((_check_pointer(i0, 3153))+12) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 3174))+16) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 3193))+20) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 3213))+24) = 0;
  return (OOC_Scanner_BasicList__Symbol)i0;
  ;
}

OOC_Scanner_BasicList__Symbol OOC_Scanner_BasicList__CloneSymbol(OOC_Scanner_BasicList__Symbol old, const OOC_CHAR8 str__ref[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)
  OOC_Scanner_BasicList__Symbol sym;

  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_BasicList__Symbol.baseTypes[0]);
  sym = (OOC_Scanner_BasicList__Symbol)i0;
  *(OOC_INT32*)(_check_pointer(i0, 3392)) = 0;
  i1 = (OOC_INT32)old;
  i2 = *(OOC_INT8*)((_check_pointer(i1, 3425))+4);
  *(OOC_INT8*)((_check_pointer(i0, 3414))+4) = i2;
  i2 = Strings__Length((void*)(OOC_INT32)str, str_0d);
  *(OOC_INT32*)((_check_pointer(i0, 3438))+12) = i2;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3491))+12);
  *(OOC_INT32*)((_check_pointer(i0, 3481))+8) = ((OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i2+1)));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3519))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3519))+8);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 3524)), 0);
  _copy_8((const void*)(OOC_INT32)str,(void*)(_check_pointer(i2, 3524)),i3);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 3547))+16);
  *(OOC_INT32*)((_check_pointer(i0, 3535))+16) = i2;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 3574))+20);
  *(OOC_INT32*)((_check_pointer(i0, 3561))+20) = i2;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 3604))+24);
  *(OOC_INT32*)((_check_pointer(i0, 3589))+24) = i1;
  return (OOC_Scanner_BasicList__Symbol)i0;
  ;
}

void OOC_Scanner_BasicList__BuilderDesc_Clear(OOC_Scanner_BasicList__Builder b) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)b;
  *(OOC_INT32*)((_check_pointer(i0, 3693))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 3713))+12) = (OOC_INT32)0;
  return;
  ;
}

void OOC_Scanner_BasicList__BuilderDesc_AddSymbol(OOC_Scanner_BasicList__Builder b, OOC_INT8 id, OOC_INT32 cstart, OOC_INT32 cend, OOC_INT32 line, OOC_INT32 column) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_Scanner_BasicList__Symbol sym;
  OOC_INT32 len;

  i0 = id;
  i1 = i0<77;
  if (i1) goto l3;
  i1 = i0>80;
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l11;
  i1 = i0==78;
  if (i1) goto l9;
  i1=0u;
  goto l13;
l9:
  i1 = (OOC_INT32)b;
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 4038))+16);
  
  goto l13;
l11:
  i1=1u;
l13:
  if (!i1) goto l19;
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_BasicList__Symbol.baseTypes[0]);
  sym = (OOC_Scanner_BasicList__Symbol)i1;
  *(OOC_INT32*)(_check_pointer(i1, 4090)) = 0;
  *(OOC_INT8*)((_check_pointer(i1, 4114))+4) = i0;
  i0 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4145));
  i2 = *(OOC_INT32*)((_check_pointer(i2, 4158))+8);
  i3 = cstart;
  *(OOC_INT32*)((_check_pointer(i1, 4135))+16) = (i2+i3);
  i2 = line;
  *(OOC_INT32*)((_check_pointer(i1, 4192))+20) = i2;
  i2 = column;
  i4 = cend;
  *(OOC_INT32*)((_check_pointer(i1, 4217))+24) = i2;
  i2 = i4-i3;
  len = i2;
  *(OOC_INT32*)((_check_pointer(i1, 4277))+8) = ((OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i2+1)));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4324));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4337))+4);
  i0 = _check_pointer(i0, 4344);
  i4 = OOC_ARRAY_LENGTH(i0, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4389))+8);
  _move_block((i0+(_check_index(i3, i4, OOC_UINT32, 4344))),(_check_pointer(i1, 4394)),i2);
  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4413))+8);
  i1 = _check_pointer(i1, 4418);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = len;
  *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT32, 4418))) = 0u;
  *(OOC_INT32*)((_check_pointer(i0, 4440))+12) = i3;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4472))+12);
  i2 = i2==0;
  if (i2) goto l17;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4534))+12);
  *(OOC_INT32*)(_check_pointer(i2, 4540)) = i0;
  goto l18;
l17:
  *(OOC_INT32*)((_check_pointer(i1, 4500))+8) = i0;
l18:
  *(OOC_INT32*)((_check_pointer(i1, 4572))+12) = i0;
l19:
  return;
  ;
}

void OOC_OOC_Scanner_BasicList_init(void) {

  return;
  ;
}

/* --- */
