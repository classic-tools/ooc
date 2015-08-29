#include <OOC/SSA/IGraph.d>
#include <__oo2c.h>

void OOC_SSA_IGraph__GraphDesc_Clear(OOC_SSA_IGraph__Graph g) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;
  OOC_INT32 j;

  i0 = (OOC_INT32)g;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2495));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 2498)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l16;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2535));
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 2538)), 1);
  i3 = i3-1;
  i4 = 0<=i3;
  j = 0;
  if (!i4) goto l11;
  i4=0;
l6_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2558));
  i5 = _check_pointer(i5, 2561);
  i6 = OOC_ARRAY_LENGTH(i5, 1);
  i7 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  *(OOC_UINT32*)((i5+((_check_index(i2, i7, OOC_UINT32, 2561))*(4*i6)))+(_check_index(i4, i6, OOC_UINT32, 2563))*4) = 0;
  i4 = i4+1;
  i5 = i4<=i3;
  j = i4;
  if (i5) goto l6_loop;
l11:
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l3_loop;
l16:
  return;
  ;
}

static void OOC_SSA_IGraph__InitGraph(OOC_SSA_IGraph__Graph g, OOC_INT32 size) {
  register OOC_INT32 i0,i1;

  i0 = size;
  i1 = (OOC_INT32)g;
  *(OOC_INT32*)(_check_pointer(i1, 2679)) = ((OOC_INT32)RT0__NewObject(_td_OOC_SSA_IGraph__BitMatrix.baseTypes[0], i0, (((i0+32)-1)>>5)));
  *(OOC_INT32*)((_check_pointer(i1, 2732))+4) = i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2753)))), OOC_SSA_IGraph__GraphDesc_Clear)),OOC_SSA_IGraph__GraphDesc_Clear)((OOC_SSA_IGraph__Graph)i1);
  return;
  ;
}

OOC_SSA_IGraph__Graph OOC_SSA_IGraph__NewGraph(OOC_INT32 size) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_IGraph__Graph.baseTypes[0]);
  i1 = size;
  OOC_SSA_IGraph__InitGraph((OOC_SSA_IGraph__Graph)i0, i1);
  return (OOC_SSA_IGraph__Graph)i0;
  ;
}

OOC_SSA_IGraph__Vector OOC_SSA_IGraph__GraphDesc_NewVector(OOC_SSA_IGraph__Graph g) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SSA_IGraph__Vector v;
  OOC_INT32 i;

  i0 = (OOC_INT32)g;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3148));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3151)), 1);
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_IGraph__Vector.baseTypes[0], i0);
  v = (OOC_SSA_IGraph__Vector)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3183)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = _check_pointer(i0, 3198);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_UINT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 3198))*4) = 0;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l3_loop;
l8:
  return (OOC_SSA_IGraph__Vector)i0;
  ;
}

OOC_SSA_IGraph__Vector OOC_SSA_IGraph__GraphDesc_CopyVector(OOC_SSA_IGraph__Graph g, OOC_SSA_IGraph__Vector v) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_SSA_IGraph__Vector w;
  OOC_INT32 i;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)g;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3444));
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3433)), (OOC_INT32)0);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 3447)), 1);
  _assert((i3==i2), 127, 3419);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3473));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3476)), 1);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_IGraph__Vector.baseTypes[0], i1);
  w = (OOC_SSA_IGraph__Vector)i1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3508)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = _check_pointer(i1, 3523);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = _check_pointer(i0, 3531);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = *(OOC_UINT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 3531))*4);
  *(OOC_UINT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 3523))*4) = i6;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  return (OOC_SSA_IGraph__Vector)i1;
  ;
}

void OOC_SSA_IGraph__GraphDesc_Interfere(OOC_SSA_IGraph__Graph g, OOC_INT32 res, OOC_SSA_IGraph__Vector live) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12;
  OOC_SSA_IGraph__BitMatrix m;
  OOC_INT32 i;

  i0 = (OOC_INT32)g;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3891));
  m = (OOC_SSA_IGraph__BitMatrix)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3920)), 1);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2 = res;
  i3 = (OOC_INT32)live;
  i4=0;
l3_loop:
  i5 = _check_pointer(i0, 3938);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i7 = OOC_ARRAY_LENGTH(i5, 1);
  i8 = _check_pointer(i0, 3951);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i10 = OOC_ARRAY_LENGTH(i8, 1);
  i11 = _check_pointer(i3, 3964);
  i12 = OOC_ARRAY_LENGTH(i11, (OOC_INT32)0);
  i11 = *(OOC_UINT32*)(i11+(_check_index(i4, i12, OOC_UINT32, 3964))*4);
  i8 = *(OOC_UINT32*)((i8+((_check_index(i2, i9, OOC_UINT32, 3951))*(4*i10)))+(_check_index(i4, i10, OOC_UINT32, 3955))*4);
  *(OOC_UINT32*)((i5+((_check_index(i2, i6, OOC_UINT32, 3938))*(4*i7)))+(_check_index(i4, i7, OOC_UINT32, 3942))*4) = (i8|i11);
  i4 = i4+1;
  i5 = i4<=i1;
  i = i4;
  if (i5) goto l3_loop;
l8:
  return;
  ;
}

void OOC_SSA_IGraph__GraphDesc_AddToLive(OOC_SSA_IGraph__Graph g, OOC_INT32 res, OOC_SSA_IGraph__Vector live) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)g;
  i1 = res;
  i2 = (OOC_INT32)live;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4216)))), OOC_SSA_IGraph__GraphDesc_Interfere)),OOC_SSA_IGraph__GraphDesc_Interfere)((OOC_SSA_IGraph__Graph)i0, i1, (OOC_SSA_IGraph__Vector)i2);
  i0 = _check_pointer(i2, 4255);
  i3 = i1>>5;
  i4 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = _check_pointer(i2, 4255);
  i5 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_UINT32*)(i2+(_check_index(i3, i5, OOC_UINT32, 4255))*4);
  *(OOC_UINT32*)(i0+(_check_index(i3, i4, OOC_UINT32, 4255))*4) = (_set_bit(i2,(_mod(i1,32))));
  return;
  ;
}

void OOC_SSA_IGraph__GraphDesc_RemoveFromLive(OOC_SSA_IGraph__Graph g, OOC_INT32 res, OOC_SSA_IGraph__Vector live) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)live;
  i1 = _check_pointer(i0, 4463);
  i2 = res;
  i3 = i2>>5;
  i4 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i0 = _check_pointer(i0, 4463);
  i5 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = *(OOC_UINT32*)(i0+(_check_index(i3, i5, OOC_UINT32, 4463))*4);
  *(OOC_UINT32*)(i1+(_check_index(i3, i4, OOC_UINT32, 4463))*4) = (_clear_bit(i0,(_mod(i2,32))));
  return;
  ;
}

OOC_CHAR8 OOC_SSA_IGraph__GraphDesc_In(OOC_SSA_IGraph__Graph g, OOC_INT32 res, OOC_SSA_IGraph__Vector live) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)live;
  i0 = _check_pointer(i0, 4724);
  i1 = res;
  i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = *(OOC_UINT32*)(i0+(_check_index((i1>>5), i2, OOC_UINT32, 4724))*4);
  return (_in((_mod(i1,32)),i0));
  ;
}

OOC_CHAR8 OOC_SSA_IGraph__GraphDesc_Conflicts(OOC_SSA_IGraph__Graph g, OOC_INT32 i, OOC_INT32 j) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SSA_IGraph__BitMatrix m;

  i0 = (OOC_INT32)g;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4924));
  m = (OOC_SSA_IGraph__BitMatrix)i0;
  i0 = _check_pointer(i0, 4962);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = OOC_ARRAY_LENGTH(i0, 1);
  i3 = i;
  i4 = j;
  i0 = *(OOC_UINT32*)((i0+((_check_index(i3, i1, OOC_UINT32, 4962))*(4*i2)))+(_check_index((i4>>5), i2, OOC_UINT32, 4964))*4);
  return (_in((_mod(i4,32)),i0));
  ;
}

void OOC_SSA_IGraph__GraphDesc_MergeVector(OOC_SSA_IGraph__Graph g, OOC_SSA_IGraph__Vector source, OOC_SSA_IGraph__Vector dest) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)source;
  i1 = (OOC_INT32)dest;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 5213)), (OOC_INT32)0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 5227)), (OOC_INT32)0);
  _assert((i2==i3), 127, 5194);
  i2 = (OOC_INT32)g;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 5251))+4);
  i3 = i3-1;
  i4 = 0<=i3;
  i = 0;
  if (!i4) goto l11;
  i4=0;
l3_loop:
  i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5273)))), OOC_SSA_IGraph__GraphDesc_In)),OOC_SSA_IGraph__GraphDesc_In)((OOC_SSA_IGraph__Graph)i2, i4, (OOC_SSA_IGraph__Vector)i0);
  if (!i5) goto l6;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5304)))), OOC_SSA_IGraph__GraphDesc_AddToLive)),OOC_SSA_IGraph__GraphDesc_AddToLive)((OOC_SSA_IGraph__Graph)i2, i4, (OOC_SSA_IGraph__Vector)i1);
l6:
  i4 = i4+1;
  i5 = i4<=i3;
  i = i4;
  if (i5) goto l3_loop;
l11:
  return;
  ;
}

void OOC_SSA_IGraph__GraphDesc_SymmetricMatrix(OOC_SSA_IGraph__Graph g) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14;
  OOC_SSA_IGraph__BitMatrix m;
  OOC_INT32 y;
  OOC_INT32 x;

  i0 = (OOC_INT32)g;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5772));
  m = (OOC_SSA_IGraph__BitMatrix)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 5801)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  y = 0;
  if (!i2) goto l23;
  i2=0;
l3_loop:
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i0, 5835)), (OOC_INT32)0);
  i3 = i3-1;
  i4 = 0<=i3;
  i5 = _mod(i2,32);
  i6 = i2>>5;
  x = 0;
  if (!i4) goto l18;
  i4=0;
l6_loop:
  i7 = _check_pointer(i0, 5876);
  i8 = OOC_ARRAY_LENGTH(i7, 1);
  i9 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i10 = i4>>5;
  i7 = *(OOC_UINT32*)((i7+((_check_index(i2, i9, OOC_UINT32, 5876))*(4*i8)))+(_check_index(i10, i8, OOC_UINT32, 5878))*4);
  i8 = _mod(i4,32);
  i7 = _in(i8,i7);
  if (i7) goto l12;
  i7 = _check_pointer(i0, 5998);
  i9 = OOC_ARRAY_LENGTH(i7, 1);
  i11 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = *(OOC_UINT32*)((i7+((_check_index(i4, i11, OOC_UINT32, 5998))*(4*i9)))+(_check_index(i6, i9, OOC_UINT32, 6000))*4);
  i7 = _in(i5,i7);
  if (!i7) goto l13;
  i7 = _check_pointer(i0, 6090);
  i9 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i11 = OOC_ARRAY_LENGTH(i7, 1);
  i12 = _check_pointer(i0, 6090);
  i13 = OOC_ARRAY_LENGTH(i12, 1);
  i14 = OOC_ARRAY_LENGTH(i12, (OOC_INT32)0);
  i12 = *(OOC_UINT32*)((i12+((_check_index(i2, i14, OOC_UINT32, 6090))*(4*i13)))+(_check_index(i10, i13, OOC_UINT32, 6092))*4);
  *(OOC_UINT32*)((i7+((_check_index(i2, i9, OOC_UINT32, 6090))*(4*i11)))+(_check_index(i10, i11, OOC_UINT32, 6092))*4) = (_set_bit(i12,i8));
  goto l13;
l12:
  i7 = _check_pointer(i0, 5921);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i9 = OOC_ARRAY_LENGTH(i7, 1);
  i10 = _check_pointer(i0, 5921);
  i11 = OOC_ARRAY_LENGTH(i10, 1);
  i12 = OOC_ARRAY_LENGTH(i10, (OOC_INT32)0);
  i10 = *(OOC_UINT32*)((i10+((_check_index(i4, i12, OOC_UINT32, 5921))*(4*i11)))+(_check_index(i6, i11, OOC_UINT32, 5923))*4);
  *(OOC_UINT32*)((i7+((_check_index(i4, i8, OOC_UINT32, 5921))*(4*i9)))+(_check_index(i6, i9, OOC_UINT32, 5923))*4) = (_set_bit(i10,i5));
l13:
  i4 = i4+1;
  i7 = i4<=i3;
  x = i4;
  if (i7) goto l6_loop;
l18:
  i3 = _check_pointer(i0, 6194);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i7 = OOC_ARRAY_LENGTH(i3, 1);
  i8 = _check_pointer(i0, 6194);
  i9 = OOC_ARRAY_LENGTH(i8, 1);
  i10 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i8 = *(OOC_UINT32*)((i8+((_check_index(i2, i10, OOC_UINT32, 6194))*(4*i9)))+(_check_index(i6, i9, OOC_UINT32, 6196))*4);
  *(OOC_UINT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 6194))*(4*i7)))+(_check_index(i6, i7, OOC_UINT32, 6196))*4) = (_clear_bit(i8,i5));
  i2 = i2+1;
  i3 = i2<=i1;
  y = i2;
  if (i3) goto l3_loop;
l23:
  return;
  ;
}

OOC_SSA_IGraph__ColorArray OOC_SSA_IGraph__GraphDesc_ColorGraphTrivial(OOC_SSA_IGraph__Graph g) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SSA_IGraph__ColorArray ca;
  OOC_INT32 i;

  i0 = (OOC_INT32)g;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 6531))+4);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_IGraph__ColorArray.baseTypes[0], i1);
  ca = (OOC_SSA_IGraph__ColorArray)i1;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 6559))+4);
  i0 = i0-1;
  i2 = 0<=i0;
  i = 0;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = _check_pointer(i1, 6579);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 6579))*4) = i2;
  i2 = i2+1;
  i3 = i2<=i0;
  i = i2;
  if (i3) goto l3_loop;
l8:
  return (OOC_SSA_IGraph__ColorArray)i1;
  ;
}

OOC_SSA_IGraph__ColorArray OOC_SSA_IGraph__GraphDesc_ColorGraphSimple(OOC_SSA_IGraph__Graph g) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11;
  OOC_SSA_IGraph__ColorArray ca;
  OOC_SSA_IGraph__BitMatrix m;
  OOC_INT32 i;
  OOC_INT32 color;
  OOC_INT32 clashes;
  OOC_INT32 j;

  i0 = (OOC_INT32)g;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7027))+4);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_IGraph__ColorArray.baseTypes[0], i1);
  ca = (OOC_SSA_IGraph__ColorArray)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7046));
  m = (OOC_SSA_IGraph__BitMatrix)i2;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 7070))+4);
  i0 = i0-1;
  i3 = 0<=i0;
  i = 0;
  if (!i3) goto l30;
  i3=0;
l3_loop:
  i4 = i3-1;
  i5 = 0<=i4;
  color = 0;
  i6=0;
l4_loop:
  clashes = 0;
  j = 0;
  if (i5) goto l7;
  i7=0;
  goto l21;
l7:
  i7=i6;i6=0;i8=0;
l8_loop:
  i9 = _check_pointer(i2, 7201);
  i10 = OOC_ARRAY_LENGTH(i9, 1);
  i11 = OOC_ARRAY_LENGTH(i9, (OOC_INT32)0);
  i9 = *(OOC_UINT32*)((i9+((_check_index(i3, i11, OOC_UINT32, 7201))*(4*i10)))+(_check_index((i6>>5), i10, OOC_UINT32, 7203))*4);
  i9 = _in((_mod(i6,32)),i9);
  if (i9) goto l11;
  i9=OOC_FALSE;
  goto l13;
l11:
  i9 = _check_pointer(i1, 7242);
  i10 = OOC_ARRAY_LENGTH(i9, (OOC_INT32)0);
  i9 = *(OOC_INT32*)(i9+(_check_index(i6, i10, OOC_UINT32, 7242))*4);
  i9 = i9==i7;
  
l13:
  if (!i9) goto l16;
  i7 = i7+1;
  color = i7;
  i8 = i8+1;
  clashes = i8;
  
l16:
  i6 = i6+1;
  i9 = i6<=i4;
  j = i6;
  if (i9) goto l8_loop;
l20:
  i6=i7;i7=i8;
l21:
  i7 = i7==0;
  if (!i7) goto l4_loop;
l25:
  i4 = _check_pointer(i1, 7374);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 7374))*4) = i6;
  i3 = i3+1;
  i4 = i3<=i0;
  i = i3;
  if (i4) goto l3_loop;
l30:
  return (OOC_SSA_IGraph__ColorArray)i1;
  ;
}

void OOC_OOC_SSA_IGraph_init(void) {

  return;
  ;
}

/* --- */
