#include <OOC/SSA/Allocator.d>
#include <__oo2c.h>
#include <setjmp.h>

static OOC_SSA_Allocator__RegisterFile OOC_SSA_Allocator__NewRegisterFile(OOC_INT8 registerType) {
  register OOC_INT32 i0,i1;
  OOC_SSA_Allocator__RegisterFile rf;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Allocator__RegisterFile.baseTypes[0]);
  rf = (OOC_SSA_Allocator__RegisterFile)i0;
  OOC_SSA__InitNode((OOC_SSA__Node)i0);
  i1 = registerType;
  *(OOC_INT8*)(_check_pointer(i0, 3447)) = i1;
  i1 = (OOC_INT32)ADT_ArrayList__New(16);
  *(OOC_INT32*)((_check_pointer(i0, 3485))+4) = i1;
  i1 = (OOC_INT32)ADT_ArrayList__New(16);
  *(OOC_INT32*)((_check_pointer(i0, 3527))+8) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 3568))+12) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 3591))+16) = -1;
  *(OOC_INT32*)((_check_pointer(i0, 3615))+20) = (OOC_INT32)0;
  return (OOC_SSA_Allocator__RegisterFile)i0;
  ;
}

static OOC_SSA_Allocator__LiveData OOC_SSA_Allocator__NewLiveData(OOC_SSA_IGraph__Graph g, OOC_INT32 outgoingJumps) {
  register OOC_INT32 i0,i1;
  OOC_SSA_Allocator__LiveData ld;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Allocator__LiveData.baseTypes[0]);
  ld = (OOC_SSA_Allocator__LiveData)i0;
  OOC_SSA_Schedule__InitInfo((OOC_SSA_Schedule__Info)i0);
  i1 = outgoingJumps;
  *(OOC_INT32*)(_check_pointer(i0, 3824)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 3864))+4) = 0;
  i1 = (OOC_INT32)g;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3900)))), OOC_SSA_IGraph__GraphDesc_NewVector)),OOC_SSA_IGraph__GraphDesc_NewVector)((OOC_SSA_IGraph__Graph)i1);
  *(OOC_INT32*)((_check_pointer(i0, 3889))+8) = i1;
  return (OOC_SSA_Allocator__LiveData)i0;
  ;
}

static OOC_SSA_Allocator__BlockList OOC_SSA_Allocator__GetBlockList(OOC_SSA_Schedule__Block enterBlock, OOC_SSA_Schedule__Block exitBlock) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_SSA_Schedule__Info mark;
  ADT_ArrayList__ArrayList al;
  OOC_SSA_Allocator__BlockList bl;
  OOC_INT32 i;
  auto void OOC_SSA_Allocator__GetBlockList_ScanBlock(OOC_SSA_Schedule__Block b);
    
    void OOC_SSA_Allocator__GetBlockList_ScanBlock(OOC_SSA_Schedule__Block b) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 i;

      i0 = (OOC_INT32)b;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4507))+44);
      i2 = (OOC_INT32)mark;
      i1 = i1!=i2;
      
l5:
      if (!i1) goto l33;
      i1 = (OOC_INT32)mark;
      *(OOC_INT32*)((_check_pointer(i0, 4536))+44) = i1;
      i1 = (OOC_INT32)al;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4563)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i0);
      i1 = (OOC_INT32)exitBlock;
      i1 = i0!=i1;
      if (!i1) goto l33;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4626)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (i1) goto l30;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4747)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
      if (i1) goto l28;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4823)))), &_td_OOC_SSA_Schedule__DeadEndBlockDesc);
      if (i1) goto l33;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4895)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
      if (i1) goto l17;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4892)))), 4892);
      goto l33;
l17:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4953))+52);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4959)), (OOC_INT32)0);
      i1 = i1-1;
      i2 = 0<=i1;
      i = 0;
      if (!i2) goto l33;
      i2=0;
l20_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4993))+52);
      i3 = _check_pointer(i3, 4999);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 4999))*4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5002))+4);
      OOC_SSA_Allocator__GetBlockList_ScanBlock((OOC_SSA_Schedule__Block)i3);
      i2 = i2+1;
      i3 = i2<=i1;
      i = i2;
      if (i3) goto l20_loop;
      goto l33;
l28:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4795))+48);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4801))+4);
      OOC_SSA_Allocator__GetBlockList_ScanBlock((OOC_SSA_Schedule__Block)i0);
      goto l33;
l30:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4676))+60);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4686))+4);
      OOC_SSA_Allocator__GetBlockList_ScanBlock((OOC_SSA_Schedule__Block)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4719))+48);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4725))+4);
      OOC_SSA_Allocator__GetBlockList_ScanBlock((OOC_SSA_Schedule__Block)i0);
l33:
      return;
      ;
    }


  mark = (OOC_SSA_Schedule__Info)((OOC_INT32)RT0__NewObject(_td_OOC_SSA_Schedule__Info.baseTypes[0]));
  i0 = (OOC_INT32)ADT_ArrayList__New(16);
  al = (ADT_ArrayList__ArrayList)i0;
  i0 = (OOC_INT32)enterBlock;
  OOC_SSA_Allocator__GetBlockList_ScanBlock((OOC_SSA_Schedule__Block)i0);
  i0 = (OOC_INT32)al;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5232))+4);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Allocator__BlockList.baseTypes[0], i1);
  bl = (OOC_SSA_Allocator__BlockList)i1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 5266)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = _check_pointer(i1, 5282);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5291));
  i6 = _check_pointer(i6, 5298);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 5298))*4);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 5282))*4) = (_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 5311)))), &_td_OOC_SSA_Schedule__BlockDesc, 5311));
  i4 = _check_pointer(i1, 5327);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 5327))*4);
  *(OOC_INT32*)((_check_pointer(i4, 5330))+44) = (OOC_INT32)0;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  return (OOC_SSA_Allocator__BlockList)i1;
  ;
}

OOC_INT8 OOC_SSA_Allocator__SubclassToBasicType(OOC_INT8 subclass) {
  register OOC_INT32 i0;

  i0 = subclass;
  switch (i0) {
  case 0:
    return 0;
    goto l15;
  case 9:
    return 1;
    goto l15;
  case 5:
    return 6;
    goto l15;
  case 6:
    return 7;
    goto l15;
  case 7:
    return 8;
    goto l15;
  case 8:
    return 9;
    goto l15;
  case 1:
    return 2;
    goto l15;
  case 2:
    return 3;
    goto l15;
  case 3:
    return 4;
    goto l15;
  case 4:
    return 5;
    goto l15;
  case 10:
    return 13;
    goto l15;
  case 11:
    return 14;
    goto l15;
  default:
    _failed_case(i0, 5585);
    goto l15;
  }
l15:
  _failed_function(5433); return 0;
  ;
}

OOC_INT8 OOC_SSA_Allocator__RegisterType(OOC_INT8 ctype) {
  register OOC_INT32 i0;

  i0 = ctype;
  switch (i0) {
  case 1:
  case 2 ... 4:
  case 6 ... 8:
    return 4;
    goto l7;
  case 5:
  case 9:
    return 5;
    goto l7;
  case 13:
    return 13;
    goto l7;
  case 14:
    return 14;
    goto l7;
  default:
    _failed_case(i0, 6577);
    goto l7;
  }
l7:
  _failed_function(6235); return 0;
  ;
}

static OOC_SSA_Allocator__RegisterFiles OOC_SSA_Allocator__GetRegisterFiles() {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SSA_Allocator__RegisterFiles rfs;
  OOC_INT32 i;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Allocator__RegisterFiles.baseTypes[0], 15);
  rfs = (OOC_SSA_Allocator__RegisterFiles)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 7319)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = _check_pointer(i0, 7336);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 7336))*4) = (OOC_INT32)0;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l3_loop;
l8:
  i1 = _check_pointer(i0, 7415);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i3 = (OOC_INT32)OOC_SSA_Allocator__NewRegisterFile(4);
  *(OOC_INT32*)(i1+(_check_index(4, i2, OOC_UINT8, 7415))*4) = i3;
  i1 = _check_pointer(i0, 7482);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i3 = (OOC_INT32)OOC_SSA_Allocator__NewRegisterFile(5);
  *(OOC_INT32*)(i1+(_check_index(5, i2, OOC_UINT8, 7482))*4) = i3;
  i1 = _check_pointer(i0, 7714);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i3 = (OOC_INT32)OOC_SSA_Allocator__NewRegisterFile(13);
  *(OOC_INT32*)(i1+(_check_index(13, i2, OOC_UINT8, 7714))*4) = i3;
  i1 = _check_pointer(i0, 7781);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i3 = (OOC_INT32)OOC_SSA_Allocator__NewRegisterFile(14);
  *(OOC_INT32*)(i1+(_check_index(14, i2, OOC_UINT8, 7781))*4) = i3;
  return (OOC_SSA_Allocator__RegisterFiles)i0;
  ;
}

static OOC_SSA_Allocator__RegisterFiles OOC_SSA_Allocator__IdentifyResults(OOC_SSA_Allocator__BlockList blockList, ADT_Dictionary__Dictionary inPlaceEval) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SSA_Allocator__RegisterFiles rfs;
  OOC_INT32 i;
  auto void OOC_SSA_Allocator__IdentifyResults_ScanBlock(OOC_SSA_Schedule__Block b);
    
    void OOC_SSA_Allocator__IdentifyResults_ScanBlock(OOC_SSA_Schedule__Block b) {
      register OOC_INT32 i0,i1;
      OOC_SSA_Schedule__InstrProxy proxy;
      OOC_SSA__Instr instr;
      OOC_INT8 type;
      OOC_SSA__Result res;
      auto OOC_CHAR8 OOC_SSA_Allocator__IdentifyResults_ScanBlock_PassedThroughRegister(OOC_SSA__Instr instr);
      auto void OOC_SSA_Allocator__IdentifyResults_ScanBlock_RegisterResult(OOC_SSA__Result result, OOC_INT8 ctype);
        
        OOC_CHAR8 OOC_SSA_Allocator__IdentifyResults_ScanBlock_PassedThroughRegister(OOC_SSA__Instr instr) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)instr;
          i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9157)))), OOC_SSA__InstrDesc_IsConst)),OOC_SSA__InstrDesc_IsConst)((OOC_SSA__Instr)i0);
          i1 = !i1;
          if (i1) goto l3;
          i0=OOC_FALSE;
          goto l4;
l3:
          i0 = *(OOC_INT8*)((_check_pointer(i0, 9177))+36);
          i0 = i0!=72;
          
l4:
          return i0;
          ;
        }

        
        void OOC_SSA_Allocator__IdentifyResults_ScanBlock_RegisterResult(OOC_SSA__Result result, OOC_INT8 ctype) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_INT8 rtype;

          i0 = ctype;
          i0 = OOC_SSA_Allocator__RegisterType(i0);
          rtype = i0;
          i1 = (OOC_INT32)result;
          i2 = (OOC_INT32)rfs;
          i3 = _check_pointer(i2, 9478);
          i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i0, i4, OOC_UINT8, 9478))*4);
          *(OOC_INT32*)((_check_pointer(i1, 9465))+16) = i3;
          i3 = _check_pointer(i2, 9516);
          i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i0, i4, OOC_UINT8, 9516))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 9523))+4);
          i3 = *(OOC_INT32*)((_check_pointer(i3, 9535))+4);
          *(OOC_INT32*)((_check_pointer(i1, 9501))+20) = i3;
          i3 = _check_pointer(i2, 9554);
          i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i0, i4, OOC_UINT8, 9554))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 9561))+4);
          i2 = _check_pointer(i2, 9554);
          i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
          i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i0, i4, OOC_UINT8, 9554))*4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9561))+4);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9573)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (Object__Object)i1);
          i1 = (OOC_INT32)rfs;
          i2 = _check_pointer(i1, 9603);
          i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
          i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i0, i3, OOC_UINT8, 9603))*4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9610))+8);
          i1 = _check_pointer(i1, 9603);
          i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
          i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i3, OOC_UINT8, 9603))*4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9610))+8);
          i1 = (OOC_INT32)b;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9621)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i1);
          return;
          ;
        }


      i0 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9692))+8);
      i1 = i0!=(OOC_INT32)0;
      proxy = (OOC_SSA_Schedule__InstrProxy)i0;
      if (!i1) goto l30;
l3_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9756))+12);
      instr = (OOC_SSA__Instr)i0;
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9786)))), OOC_SSA__InstrDesc_GetResultType)),OOC_SSA__InstrDesc_GetResultType)((OOC_SSA__Instr)i0);
      type = i1;
      i1 = i1!=0;
      if (i1) goto l6;
      i0=OOC_FALSE;
      goto l8;
l6:
      i0 = OOC_SSA_Allocator__IdentifyResults_ScanBlock_PassedThroughRegister((OOC_SSA__Instr)i0);
      
l8:
      if (!i0) goto l14;
      i0 = (OOC_INT32)inPlaceEval;
      i1 = (OOC_INT32)instr;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9911)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      if (i0) goto l12;
      i0 = type;
      i0 = OOC_SSA_Allocator__SubclassToBasicType(i0);
      OOC_SSA_Allocator__IdentifyResults_ScanBlock_RegisterResult((OOC_SSA__Result)i1, i0);
      goto l14;
l12:
      i0 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
      *(OOC_INT32*)((_check_pointer(i1, 9951))+16) = i0;
l14:
      i0 = (OOC_INT32)instr;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10101));
      res = (OOC_SSA__Result)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l25;
l17_loop:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 10161))+5);
      i1 = i1!=0;
      if (!i1) goto l20;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 10251))+5);
      i1 = OOC_SSA_Allocator__SubclassToBasicType(i1);
      OOC_SSA_Allocator__IdentifyResults_ScanBlock_RegisterResult((OOC_SSA__Result)i0, i1);
l20:
      i0 = (OOC_INT32)res;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10299));
      res = (OOC_SSA__Result)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l17_loop;
l25:
      i0 = (OOC_INT32)proxy;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10347));
      proxy = (OOC_SSA_Schedule__InstrProxy)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l30:
      return;
      ;
    }


  i0 = (OOC_INT32)OOC_SSA_Allocator__GetRegisterFiles();
  rfs = (OOC_SSA_Allocator__RegisterFiles)i0;
  i0 = (OOC_INT32)blockList;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 10463)), (OOC_INT32)0);
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l8;
  i1=0;
l3_loop:
  i2 = (OOC_INT32)blockList;
  i2 = _check_pointer(i2, 10497);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 10497))*4);
  OOC_SSA_Allocator__IdentifyResults_ScanBlock((OOC_SSA_Schedule__Block)i1);
  i1 = i;
  i1 = i1+1;
  i2 = i1<=i0;
  i = i1;
  if (i2) goto l3_loop;
l8:
  i0 = (OOC_INT32)rfs;
  return (OOC_SSA_Allocator__RegisterFiles)i0;
  ;
}

static void OOC_SSA_Allocator__AddToCollect(OOC_SSA_Schedule__Block loopHead, OOC_SSA__Result res) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SSA_Schedule__InstrProxy loopStart;
  OOC_SSA__Result backwardFeed;
  OOC_SSA__Instr collect;
  OOC_SSA__Opnd opnd;

  i0 = (OOC_INT32)loopHead;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10767))+8);
  loopStart = (OOC_SSA_Schedule__InstrProxy)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10800))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 10807))+36);
  i1 = i1!=10;
  if (!i1) goto l9;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10867));
  loopStart = (OOC_SSA_Schedule__InstrProxy)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10800))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 10807))+36);
  i1 = i1!=10;
  if (i1) goto l4_loop;
l9:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10917))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10917))+12);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10924)))), OOC_SSA__InstrDesc_GetBackwardFeed)),OOC_SSA__InstrDesc_GetBackwardFeed)((OOC_SSA__Instr)i0);
  backwardFeed = (OOC_SSA__Result)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10972))+8);
  collect = (OOC_SSA__Instr)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11000))+24);
  i2 = i1!=(OOC_INT32)0;
  opnd = (OOC_SSA__Opnd)i1;
  if (i2) goto l12;
  i2=OOC_FALSE;
  goto l14;
l12:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11042));
  i3 = (OOC_INT32)res;
  i2 = i2!=i3;
  
l14:
  if (!i2) goto l26;
  i2 = (OOC_INT32)res;
  
l17_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11076))+8);
  opnd = (OOC_SSA__Opnd)i1;
  i3 = i1!=(OOC_INT32)0;
  if (i3) goto l20;
  i3=OOC_FALSE;
  goto l22;
l20:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11042));
  i3 = i3!=i2;
  
l22:
  if (i3) goto l17_loop;
l26:
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l29;
  i1 = (OOC_INT32)res;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11135)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 17);
l29:
  return;
  ;
}

static OOC_SSA_Schedule__Block OOC_SSA_Allocator__SweepLiveSet(OOC_SSA_Allocator__RegisterFile rf, OOC_SSA_Schedule__Block b, OOC_SSA_IGraph__Vector live) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_SSA_IGraph__Graph iGraph;
  OOC_SSA_Schedule__InstrProxy loopEnd;
  OOC_SSA_Schedule__InstrProxy proxy;
  OOC_SSA__Result res;
  OOC_SSA_Schedule__Block loopBlock;
  OOC_INT32 i;
  auto OOC_SSA_Schedule__Block OOC_SSA_Allocator__SweepLiveSet_GetLoop(OOC_SSA_Schedule__Block b, OOC_SSA__Instr loopStart);
  auto void OOC_SSA_Allocator__SweepLiveSet_MarkOpndAsLive(OOC_SSA__Instr instr, OOC_SSA_IGraph__Vector live);
  auto void OOC_SSA_Allocator__SweepLiveSet_AddResToLive(OOC_SSA__Result res, OOC_SSA_IGraph__Vector live);
    
    OOC_SSA_Schedule__Block OOC_SSA_Allocator__SweepLiveSet_GetLoop(OOC_SSA_Schedule__Block b, OOC_SSA__Instr loopStart) {
      register OOC_INT32 i0,i1;
      OOC_SSA_Schedule__Block child;
      auto OOC_CHAR8 OOC_SSA_Allocator__SweepLiveSet_GetLoop_ContainsInstr(OOC_SSA_Schedule__InstrProxy proxy, OOC_SSA__Instr instr);
        
        OOC_CHAR8 OOC_SSA_Allocator__SweepLiveSet_GetLoop_ContainsInstr(OOC_SSA_Schedule__InstrProxy proxy, OOC_SSA__Instr instr) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)proxy;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3;
          i0=OOC_FALSE;
          goto l5;
l3:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12123))+12);
          i1 = (OOC_INT32)instr;
          i0 = i0!=i1;
          
l5:
          if (!i0) goto l16;
          i0 = (OOC_INT32)instr;
l7_loop:
          i1 = (OOC_INT32)proxy;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12167));
          proxy = (OOC_SSA_Schedule__InstrProxy)i1;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l10;
          i1=OOC_FALSE;
          goto l12;
l10:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12123))+12);
          i1 = i1!=i0;
          
l12:
          if (i1) goto l7_loop;
l16:
          i0 = (OOC_INT32)proxy;
          return (i0!=(OOC_INT32)0);
          ;
        }


      i0 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12279))+16);
      i1 = i0!=(OOC_INT32)0;
      child = (OOC_SSA_Schedule__Block)i0;
      if (i1) goto l3;
      i0=OOC_FALSE;
      goto l5;
l3:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12339))+8);
      i1 = (OOC_INT32)loopStart;
      i0 = OOC_SSA_Allocator__SweepLiveSet_GetLoop_ContainsInstr((OOC_SSA_Schedule__InstrProxy)i0, (OOC_SSA__Instr)i1);
      i0 = !i0;
      
l5:
      if (!i0) goto l16;
l7_loop:
      i0 = (OOC_INT32)child;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12388));
      child = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l10;
      i0=OOC_FALSE;
      goto l12;
l10:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12339))+8);
      i1 = (OOC_INT32)loopStart;
      i0 = OOC_SSA_Allocator__SweepLiveSet_GetLoop_ContainsInstr((OOC_SSA_Schedule__InstrProxy)i0, (OOC_SSA__Instr)i1);
      i0 = !i0;
      
l12:
      if (i0) goto l7_loop;
l16:
      i0 = (OOC_INT32)child;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l19;
      return (OOC_SSA_Schedule__Block)i0;
      goto l20;
l19:
      i0 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12463))+4);
      i1 = (OOC_INT32)loopStart;
      i0 = (OOC_INT32)OOC_SSA_Allocator__SweepLiveSet_GetLoop((OOC_SSA_Schedule__Block)i0, (OOC_SSA__Instr)i1);
      return (OOC_SSA_Schedule__Block)i0;
l20:
      _failed_function(11881); return 0;
      ;
    }

    
    void OOC_SSA_Allocator__SweepLiveSet_MarkOpndAsLive(OOC_SSA__Instr instr, OOC_SSA_IGraph__Vector live) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SSA__Opnd opnd;

      i0 = (OOC_INT32)instr;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12674))+24);
      i1 = i0!=(OOC_INT32)0;
      opnd = (OOC_SSA__Opnd)i0;
      if (!i1) goto l22;
      i1 = (OOC_INT32)live;
      
l3_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12730));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12735))+16);
      i3 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
      i2 = i2==i3;
      if (i2) goto l16;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12832));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12837))+16);
      i3 = (OOC_INT32)rf;
      i2 = i2==i3;
      if (i2) goto l8;
      i2=OOC_FALSE;
      goto l10;
l8:
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12856)))), OOC_SSA__OpndDesc_IsValueOpndHere)),OOC_SSA__OpndDesc_IsValueOpndHere)((OOC_SSA__Opnd)i0);
      
l10:
      if (!i2) goto l17;
      i2 = (OOC_INT32)iGraph;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12911));
      i3 = *(OOC_INT32*)((_check_pointer(i3, 12916))+20);
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12901)))), OOC_SSA_IGraph__GraphDesc_In)),OOC_SSA_IGraph__GraphDesc_In)((OOC_SSA_IGraph__Graph)i2, i3, (OOC_SSA_IGraph__Vector)i1);
      i2 = !i2;
      if (!i2) goto l17;
      i2 = (OOC_INT32)iGraph;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13195));
      i3 = *(OOC_INT32*)((_check_pointer(i3, 13200))+20);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13178)))), OOC_SSA_IGraph__GraphDesc_AddToLive)),OOC_SSA_IGraph__GraphDesc_AddToLive)((OOC_SSA_IGraph__Graph)i2, i3, (OOC_SSA_IGraph__Vector)i1);
      goto l17;
l16:
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12792));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12797))+8);
      OOC_SSA_Allocator__SweepLiveSet_MarkOpndAsLive((OOC_SSA__Instr)i2, (OOC_SSA_IGraph__Vector)i1);
l17:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13263))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l3_loop;
l22:
      return;
      ;
    }

    
    void OOC_SSA_Allocator__SweepLiveSet_AddResToLive(OOC_SSA__Result res, OOC_SSA_IGraph__Vector live) {
      register OOC_INT32 i0,i1,i2,i3;

      i0 = (OOC_INT32)res;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13398))+16);
      i2 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
      i1 = i1==i2;
      if (i1) goto l10;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13484))+16);
      i2 = (OOC_INT32)rf;
      i1 = i1==i2;
      if (i1) goto l5;
      i1=OOC_FALSE;
      goto l7;
l5:
      i1 = (OOC_INT32)iGraph;
      i2 = *(OOC_INT32*)((_check_pointer(i0, 13515))+20);
      i3 = (OOC_INT32)live;
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13506)))), OOC_SSA_IGraph__GraphDesc_In)),OOC_SSA_IGraph__GraphDesc_In)((OOC_SSA_IGraph__Graph)i1, i2, (OOC_SSA_IGraph__Vector)i3);
      i1 = !i1;
      
l7:
      if (!i1) goto l11;
      i1 = (OOC_INT32)iGraph;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 13566))+20);
      i2 = (OOC_INT32)live;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13550)))), OOC_SSA_IGraph__GraphDesc_AddToLive)),OOC_SSA_IGraph__GraphDesc_AddToLive)((OOC_SSA_IGraph__Graph)i1, i0, (OOC_SSA_IGraph__Vector)i2);
      goto l11;
l10:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13452))+8);
      i1 = (OOC_INT32)live;
      OOC_SSA_Allocator__SweepLiveSet_MarkOpndAsLive((OOC_SSA__Instr)i0, (OOC_SSA_IGraph__Vector)i1);
l11:
      return;
      ;
    }


  i0 = (OOC_INT32)rf;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14181))+12);
  iGraph = (OOC_SSA_IGraph__Graph)i0;
  i0 = (OOC_INT32)b;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14281)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
  if (!i1) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14447))+52);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14458));
  i1 = (OOC_INT32)live;
  OOC_SSA_Allocator__SweepLiveSet_AddResToLive((OOC_SSA__Result)i0, (OOC_SSA_IGraph__Vector)i1);
l3:
  loopEnd = (OOC_SSA_Schedule__InstrProxy)(OOC_INT32)0;
  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14546))+12);
  proxy = (OOC_SSA_Schedule__InstrProxy)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l43;
l6_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14601))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 14608))+36);
  i1 = i1==11;
  if (!i1) goto l9;
  loopEnd = (OOC_SSA_Schedule__InstrProxy)i0;
l9:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14702))+12);
  res = (OOC_SSA__Result)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14724))+16);
  i3 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
  i2 = i2!=i3;
  if (!i2) goto l38;
  i2 = i1!=(OOC_INT32)0;
  i3 = (OOC_INT32)live;
  if (!i2) goto l26;
  i2 = (OOC_INT32)iGraph;
  i4 = (OOC_INT32)rf;
  
l14_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14797))+16);
  i5 = i5==i4;
  if (i5) goto l17;
  i5=OOC_FALSE;
  goto l19;
l17:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14816))+12);
  i5 = i5==(OOC_INT32)0;
  
l19:
  if (!i5) goto l21;
  i5 = *(OOC_INT32*)((_check_pointer(i1, 15245))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15229)))), OOC_SSA_IGraph__GraphDesc_AddToLive)),OOC_SSA_IGraph__GraphDesc_AddToLive)((OOC_SSA_IGraph__Graph)i2, i5, (OOC_SSA_IGraph__Vector)i3);
l21:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15297));
  res = (OOC_SSA__Result)i1;
  i5 = i1!=(OOC_INT32)0;
  if (i5) goto l14_loop;
l26:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15433))+12);
  res = (OOC_SSA__Result)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l37;
  i2 = (OOC_INT32)iGraph;
  i4 = (OOC_INT32)rf;
  
l29_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15488))+16);
  i5 = i5==i4;
  if (!i5) goto l32;
  i5 = *(OOC_INT32*)((_check_pointer(i1, 15545))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15524)))), OOC_SSA_IGraph__GraphDesc_RemoveFromLive)),OOC_SSA_IGraph__GraphDesc_RemoveFromLive)((OOC_SSA_IGraph__Graph)i2, i5, (OOC_SSA_IGraph__Vector)i3);
l32:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15597));
  res = (OOC_SSA__Result)i1;
  i5 = i1!=(OOC_INT32)0;
  if (i5) goto l29_loop;
l37:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16188))+12);
  OOC_SSA_Allocator__SweepLiveSet_MarkOpndAsLive((OOC_SSA__Instr)i0, (OOC_SSA_IGraph__Vector)i3);
l38:
  i0 = (OOC_INT32)proxy;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16242))+4);
  proxy = (OOC_SSA_Schedule__InstrProxy)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l6_loop;
l43:
  i0 = (OOC_INT32)b;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16274)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
  if (!i1) goto l46;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16449))+48);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16455));
  i1 = (OOC_INT32)live;
  OOC_SSA_Allocator__SweepLiveSet_AddResToLive((OOC_SSA__Result)i0, (OOC_SSA_IGraph__Vector)i1);
l46:
  i0 = (OOC_INT32)loopEnd;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l49;
  return (OOC_SSA_Schedule__Block)(OOC_INT32)0;
  goto l65;
l49:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16652))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16704))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16659))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16704))+12);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16711)))), OOC_SSA__InstrDesc_GetLoopStart)),OOC_SSA__InstrDesc_GetLoopStart)((OOC_SSA__Instr)i0);
  i0 = (OOC_INT32)OOC_SSA_Allocator__SweepLiveSet_GetLoop((OOC_SSA_Schedule__Block)i1, (OOC_SSA__Instr)i0);
  loopBlock = (OOC_SSA_Schedule__Block)i0;
  i1 = (OOC_INT32)rf;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16752))+4);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 16764))+4);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l64;
  i3 = (OOC_INT32)live;
  i4 = (OOC_INT32)iGraph;
  i5=0;
l52_loop:
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 16793)))), OOC_SSA_IGraph__GraphDesc_In)),OOC_SSA_IGraph__GraphDesc_In)((OOC_SSA_IGraph__Graph)i4, i5, (OOC_SSA_IGraph__Vector)i3);
  if (i6) goto l55;
  i6=OOC_FALSE;
  goto l57;
l55:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16855))+8);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 16866));
  i6 = _check_pointer(i6, 16873);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 16873))*4);
  i6 = OOC_SSA_Schedule__Dominates((OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__Block)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 16886)))), &_td_OOC_SSA_Schedule__BlockDesc, 16886)));
  i6 = !i6;
  
l57:
  if (!i6) goto l59;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16936))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 16948));
  i6 = _check_pointer(i6, 16955);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 16955))*4);
  OOC_SSA_Allocator__AddToCollect((OOC_SSA_Schedule__Block)i0, (OOC_SSA__Result)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 16963)))), &_td_OOC_SSA__ResultDesc, 16963)));
l59:
  i5 = i5+1;
  i6 = i5<=i2;
  i = i5;
  if (i6) goto l52_loop;
l64:
  return (OOC_SSA_Schedule__Block)i0;
l65:
  _failed_function(11505); return 0;
  ;
}

static void OOC_SSA_Allocator__AssignRegisterFile(OOC_SSA_Allocator__RegisterFile rf, OOC_SSA_Schedule__Block enterBlock, OOC_SSA_Schedule__Block exitBlock, ADT_Dictionary__Dictionary registerMap) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA_IGraph__Vector live;
  auto void OOC_SSA_Allocator__AssignRegisterFile_AssignRegisterNames(OOC_SSA_Allocator__RegisterFile rf, OOC_SSA_IGraph__ColorArray colors, ADT_Dictionary__Dictionary registerMap);
  auto void OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks(OOC_SSA_Allocator__RegisterFile rf, OOC_SSA_Schedule__Block b, OOC_SSA_IGraph__Vector live);
    
    void OOC_SSA_Allocator__AssignRegisterFile_AssignRegisterNames(OOC_SSA_Allocator__RegisterFile rf, OOC_SSA_IGraph__ColorArray colors, ADT_Dictionary__Dictionary registerMap) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
      OOC_INT32 maxColor;
      OOC_INT32 i;
      OOC_SSA_Allocator__NameArray names;
      OOC_CHAR8 str[16];

      maxColor = -1;
      i0 = (OOC_INT32)colors;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 17707)), (OOC_INT32)0);
      i1 = i1-1;
      i2 = 0<=i1;
      i = 0;
      if (i2) goto l3;
      i1=-1;
      goto l13;
l3:
      i2=0;i3=-1;
l4_loop:
      i4 = _check_pointer(i0, 17733);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = *(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 17733))*4);
      i4 = i4>i3;
      if (!i4) goto l8;
      i3 = _check_pointer(i0, 17782);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 17782))*4);
      maxColor = i3;
      
l8:
      i2 = i2+1;
      i4 = i2<=i1;
      i = i2;
      if (i4) goto l4_loop;
l12:
      i1=i3;
l13:
      i2 = (OOC_INT32)rf;
      *(OOC_INT32*)((_check_pointer(i2, 17818))+16) = i1;
      i3 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Allocator__NameArray.baseTypes[0], (i1+1));
      names = (OOC_SSA_Allocator__NameArray)i3;
      i4 = 0<=i1;
      i = 0;
      if (!i4) goto l28;
      i4=0;
l16_loop:
      IntStr__IntToStr(i4, (void*)(OOC_INT32)str, 16);
      i5 = *(OOC_INT8*)(_check_pointer(i2, 18095));
      switch (i5) {
      case 4:
        Strings__Insert("i", 2, (OOC_INT32)0, (void*)(OOC_INT32)str, 16);
        goto l23;
      case 5:
        Strings__Insert("w", 2, (OOC_INT32)0, (void*)(OOC_INT32)str, 16);
        goto l23;
      case 13:
        Strings__Insert("f", 2, (OOC_INT32)0, (void*)(OOC_INT32)str, 16);
        goto l23;
      case 14:
        Strings__Insert("d", 2, (OOC_INT32)0, (void*)(OOC_INT32)str, 16);
        goto l23;
      default:
        _failed_case(i5, 18088);
        goto l23;
      }
l23:
      i5 = _check_pointer(i3, 18561);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i7 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)str, 16);
      *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 18561))*4) = i7;
      i4 = i4+1;
      i5 = i4<=i1;
      i = i4;
      if (i5) goto l16_loop;
l28:
      *(OOC_INT32*)((_check_pointer(i2, 18610))+20) = i3;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 18724)), (OOC_INT32)0);
      i1 = i1-1;
      i4 = 0<=i1;
      i = 0;
      if (!i4) goto l36;
      i4 = (OOC_INT32)registerMap;
      i5=0;
l31_loop:
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18760))+4);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 18772));
      i6 = _check_pointer(i6, 18779);
      i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 18779))*4);
      i7 = _check_pointer(i3, 18827);
      i8 = _check_pointer(i0, 18834);
      i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
      i8 = *(OOC_INT32*)(i8+(_check_index(i5, i9, OOC_UINT32, 18834))*4);
      i9 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
      i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i8, i9, OOC_UINT32, 18827))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 18751)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i4, (Object__Object)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 18787)))), &_td_OOC_SSA__ResultDesc, 18787)), (Object__Object)i7);
      i5 = i5+1;
      i6 = i5<=i1;
      i = i5;
      if (i6) goto l31_loop;
l36:
      return;
      ;
    }

    
    void OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks(OOC_SSA_Allocator__RegisterFile rf, OOC_SSA_Schedule__Block b, OOC_SSA_IGraph__Vector live) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT32 outgoingJumps;
      OOC_SSA_Allocator__LiveData ld;
      OOC_INT32 i;
      OOC_SSA_Schedule__Block loopBlock;
      auto void OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_Propagate(OOC_SSA_Schedule__Jump jump, OOC_SSA_Schedule__Block loopBlock);
      auto OOC_CHAR8 OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_BackedgeJump(OOC_SSA_Schedule__Jump jump);
      auto void OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_Merge(OOC_SSA_Allocator__LiveData ld);
        
        void OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_Propagate(OOC_SSA_Schedule__Jump jump, OOC_SSA_Schedule__Block loopBlock) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_SSA_Schedule__Jump loopTarget;

          i0 = (OOC_INT32)jump;
          i0 = i0!=(OOC_INT32)0;
          if (!i0) goto l11;
l3_loop:
          i0 = (OOC_INT32)jump;
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 19741))+12);
          i1 = !i1;
          if (!i1) goto l6;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19838))+4);
          i2 = (OOC_INT32)b;
          _assert((i1==i2), 127, 19826);
          i1 = (OOC_INT32)rf;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19896))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19896))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19887));
          i5 = (OOC_INT32)live;
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19904)))), OOC_SSA_IGraph__GraphDesc_CopyVector)),OOC_SSA_IGraph__GraphDesc_CopyVector)((OOC_SSA_IGraph__Graph)i3, (OOC_SSA_IGraph__Vector)i5);
          OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks((OOC_SSA_Allocator__RegisterFile)i1, (OOC_SSA_Schedule__Block)i4, (OOC_SSA_IGraph__Vector)i2);
l6:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19963))+8);
          jump = (OOC_SSA_Schedule__Jump)i0;
          i0 = i0!=(OOC_INT32)0;
          if (i0) goto l3_loop;
l11:
          i0 = (OOC_INT32)loopBlock;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l23;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20284))+32);
          loopTarget = (OOC_SSA_Schedule__Jump)i0;
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 20328))+12);
          i1 = !i1;
          if (!i1) goto l22;
l17_loop:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20384))+8);
          loopTarget = (OOC_SSA_Schedule__Jump)i0;
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 20328))+12);
          i1 = !i1;
          if (i1) goto l17_loop;
l22:
          i1 = (OOC_INT32)rf;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20465))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20465))+12);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20456));
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20473)))), OOC_SSA_IGraph__GraphDesc_NewVector)),OOC_SSA_IGraph__GraphDesc_NewVector)((OOC_SSA_IGraph__Graph)i3);
          OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks((OOC_SSA_Allocator__RegisterFile)i1, (OOC_SSA_Schedule__Block)i0, (OOC_SSA_IGraph__Vector)i2);
l23:
          return;
          ;
        }

        
        OOC_CHAR8 OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_BackedgeJump(OOC_SSA_Schedule__Jump jump) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)jump;
          i1 = i0==(OOC_INT32)0;
          if (i1) goto l7;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20655))+4);
          i1 = *(OOC_UINT8*)((_check_pointer(i1, 20661))+28);
          if (i1) goto l5;
          i0=OOC_FALSE;
          goto l8;
l5:
          i0 = *(OOC_UINT8*)((_check_pointer(i0, 20680))+12);
          
          goto l8;
l7:
          i0=OOC_TRUE;
l8:
          return i0;
          ;
        }

        
        void OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_Merge(OOC_SSA_Allocator__LiveData ld) {
          register OOC_INT32 i0,i1,i2,i3,i4;

          i0 = (OOC_INT32)rf;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20781))+12);
          i2 = (OOC_INT32)ld;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20812))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20781))+12);
          i4 = (OOC_INT32)live;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20789)))), OOC_SSA_IGraph__GraphDesc_MergeVector)),OOC_SSA_IGraph__GraphDesc_MergeVector)((OOC_SSA_IGraph__Graph)i0, (OOC_SSA_IGraph__Vector)i4, (OOC_SSA_IGraph__Vector)i3);
          i0 = *(OOC_INT32*)((_check_pointer(i2, 20836))+4);
          *(OOC_INT32*)((_check_pointer(i2, 20836))+4) = (i0+1);
          i0 = *(OOC_INT32*)(_check_pointer(i2, 20887));
          i1 = *(OOC_INT32*)((_check_pointer(i2, 20869))+4);
          _assert((i1<=i0), 127, 20859);
          i0 = *(OOC_INT32*)((_check_pointer(i2, 20928))+4);
          i1 = *(OOC_INT32*)(_check_pointer(i2, 20945));
          i0 = i0==i1;
          if (!i0) goto l6;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20987))+8);
          live = (OOC_SSA_IGraph__Vector)i0;
          i1 = (OOC_INT32)b;
          i2 = (OOC_INT32)rf;
          i0 = (OOC_INT32)OOC_SSA_Allocator__SweepLiveSet((OOC_SSA_Allocator__RegisterFile)i2, (OOC_SSA_Schedule__Block)i1, (OOC_SSA_IGraph__Vector)i0);
          i1 = (OOC_INT32)enterBlock;
          i2 = (OOC_INT32)b;
          i1 = i2!=i1;
          loopBlock = (OOC_SSA_Schedule__Block)i0;
          if (!i1) goto l5;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 21105))+32);
          OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_Propagate((OOC_SSA_Schedule__Jump)i1, (OOC_SSA_Schedule__Block)i0);
l5:
          i0 = (OOC_INT32)b;
          *(OOC_INT32*)((_check_pointer(i0, 21159))+44) = (OOC_INT32)0;
l6:
          return;
          ;
        }


      i0 = (OOC_INT32)b;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21651)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (i1) goto l25;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22091)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
      if (i1) goto l8;
      i1 = (OOC_INT32)live;
      i2 = (OOC_INT32)rf;
      i1 = (OOC_INT32)OOC_SSA_Allocator__SweepLiveSet((OOC_SSA_Allocator__RegisterFile)i2, (OOC_SSA_Schedule__Block)i0, (OOC_SSA_IGraph__Vector)i1);
      i2 = (OOC_INT32)enterBlock;
      i2 = i0!=i2;
      loopBlock = (OOC_SSA_Schedule__Block)i1;
      if (!i2) goto l36;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22669))+32);
      OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_Propagate((OOC_SSA_Schedule__Jump)i0, (OOC_SSA_Schedule__Block)i1);
      goto l36;
l8:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22130))+44);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l11;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22460))+44);
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22467)))), &_td_OOC_SSA_Allocator__LiveDataDesc, 22467);
      ld = (OOC_SSA_Allocator__LiveData)i0;
      
      goto l23;
l11:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22182))+52);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 22188)), (OOC_INT32)0);
      outgoingJumps = i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22222))+52);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 22228)), (OOC_INT32)0);
      i0 = i0-1;
      i1 = 0<=i0;
      i = 0;
      if (!i1) goto l22;
      i1=0;
l14_loop:
      i2 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22266))+52);
      i2 = _check_pointer(i2, 22272);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 22272))*4);
      i1 = OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_BackedgeJump((OOC_SSA_Schedule__Jump)i1);
      if (!i1) goto l17;
      i1 = outgoingJumps;
      outgoingJumps = (i1-1);
l17:
      i1 = i;
      i1 = i1+1;
      i2 = i1<=i0;
      i = i1;
      if (i2) goto l14_loop;
l22:
      i0 = (OOC_INT32)rf;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22380))+12);
      i1 = outgoingJumps;
      i0 = (OOC_INT32)OOC_SSA_Allocator__NewLiveData((OOC_SSA_IGraph__Graph)i0, i1);
      ld = (OOC_SSA_Allocator__LiveData)i0;
      i1 = (OOC_INT32)b;
      *(OOC_INT32*)((_check_pointer(i1, 22417))+44) = i0;
      
l23:
      OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_Merge((OOC_SSA_Allocator__LiveData)i0);
      goto l36;
l25:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21690))+44);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l28;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22030))+44);
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22037)))), &_td_OOC_SSA_Allocator__LiveDataDesc, 22037);
      ld = (OOC_SSA_Allocator__LiveData)i0;
      
      goto l35;
l28:
      outgoingJumps = 2;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21767))+60);
      i0 = OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_BackedgeJump((OOC_SSA_Schedule__Jump)i0);
      if (!i0) goto l31;
      i0 = outgoingJumps;
      outgoingJumps = (i0-1);
l31:
      i0 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21859))+48);
      i0 = OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_BackedgeJump((OOC_SSA_Schedule__Jump)i0);
      if (!i0) goto l34;
      i0 = outgoingJumps;
      outgoingJumps = (i0-1);
l34:
      i0 = (OOC_INT32)rf;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21950))+12);
      i1 = outgoingJumps;
      i0 = (OOC_INT32)OOC_SSA_Allocator__NewLiveData((OOC_SSA_IGraph__Graph)i0, i1);
      ld = (OOC_SSA_Allocator__LiveData)i0;
      i1 = (OOC_INT32)b;
      *(OOC_INT32*)((_check_pointer(i1, 21987))+44) = i0;
      
l35:
      OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_Merge((OOC_SSA_Allocator__LiveData)i0);
l36:
      return;
      ;
    }


  i0 = (OOC_INT32)rf;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23408))+4);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 23420))+4);
  i1 = (OOC_INT32)OOC_SSA_IGraph__NewGraph(i1);
  *(OOC_INT32*)((_check_pointer(i0, 23377))+12) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23733))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23733))+12);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23741)))), OOC_SSA_IGraph__GraphDesc_NewVector)),OOC_SSA_IGraph__GraphDesc_NewVector)((OOC_SSA_IGraph__Graph)i2);
  live = (OOC_SSA_IGraph__Vector)i1;
  i2 = (OOC_INT32)exitBlock;
  OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks((OOC_SSA_Allocator__RegisterFile)i0, (OOC_SSA_Schedule__Block)i2, (OOC_SSA_IGraph__Vector)i1);
  i0 = (OOC_INT32)rf;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23804))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23804))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23812)))), OOC_SSA_IGraph__GraphDesc_SymmetricMatrix)),OOC_SSA_IGraph__GraphDesc_SymmetricMatrix)((OOC_SSA_IGraph__Graph)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24036))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24036))+12);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24044)))), OOC_SSA_IGraph__GraphDesc_ColorGraphSimple)),OOC_SSA_IGraph__GraphDesc_ColorGraphSimple)((OOC_SSA_IGraph__Graph)i2);
  i2 = (OOC_INT32)registerMap;
  OOC_SSA_Allocator__AssignRegisterFile_AssignRegisterNames((OOC_SSA_Allocator__RegisterFile)i0, (OOC_SSA_IGraph__ColorArray)i1, (ADT_Dictionary__Dictionary)i2);
  return;
  ;
}

static void OOC_SSA_Allocator__CollectCrossLoopResults(OOC_SSA_Allocator__RegisterFile rf, OOC_SSA_Schedule__Block b, OOC_SSA_Schedule__Block closestLoop) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_SSA_Schedule__InstrProxy proxy;
  OOC_SSA__Opnd opnd;
  OOC_SSA_Schedule__Block loop;
  OOC_SSA_Schedule__Block child;

  i0 = (OOC_INT32)b;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 24386))+28);
  if (!i1) goto l3;
  closestLoop = (OOC_SSA_Schedule__Block)i0;
l3:
  i1 = (OOC_INT32)closestLoop;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l54;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24485))+8);
  proxy = (OOC_SSA_Schedule__InstrProxy)i3;
  i4 = i3!=(OOC_INT32)0;
  if (!i4) goto l54;
  i4 = (OOC_INT32)rf;
  
l8_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 24548))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 24555))+24);
  opnd = (OOC_SSA__Opnd)i5;
  i6 = i5!=(OOC_INT32)0;
  if (!i6) goto l48;
l11_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 24615));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 24620))+16);
  i6 = i6==i4;
  if (i6) goto l14;
  i6=OOC_FALSE;
  goto l16;
l14:
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 24639)))), OOC_SSA__OpndDesc_IsValueOpnd)),OOC_SSA__OpndDesc_IsValueOpnd)((OOC_SSA__Opnd)i5);
  
l16:
  if (!i6) goto l43;
  loop = (OOC_SSA_Schedule__Block)i1;
  if (i2) goto l20;
  i6=OOC_FALSE;
  goto l22;
l20:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 24991))+8);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 25002));
  i6 = _check_pointer(i6, 25009);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 25014));
  i7 = *(OOC_INT32*)((_check_pointer(i7, 25019))+20);
  i8 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i7, i8, OOC_UINT32, 25009))*4);
  i6 = OOC_SSA_Schedule__Dominates((OOC_SSA_Schedule__Block)i1, (OOC_SSA_Schedule__Block)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 25038)))), &_td_OOC_SSA_Schedule__BlockDesc, 25038)));
  i6 = !i6;
  
l22:
  if (!i6) goto l43;
  i6=i1;
l24_loop:
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 25087));
  OOC_SSA_Allocator__AddToCollect((OOC_SSA_Schedule__Block)i6, (OOC_SSA__Result)i7);
  
l25_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 25144))+4);
  loop = (OOC_SSA_Schedule__Block)i6;
  i7 = i6==(OOC_INT32)0;
  if (i7) goto l28;
  i7 = *(OOC_UINT8*)((_check_pointer(i6, 25194))+28);
  
  goto l30;
l28:
  i7=OOC_TRUE;
l30:
  if (!i7) goto l25_loop;
l33:
  i7 = i6!=(OOC_INT32)0;
  if (i7) goto l36;
  i7=OOC_FALSE;
  goto l38;
l36:
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 24991))+8);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i7, 25002));
  i7 = _check_pointer(i7, 25009);
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 25014));
  i8 = *(OOC_INT32*)((_check_pointer(i8, 25019))+20);
  i9 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i8, i9, OOC_UINT32, 25009))*4);
  i7 = OOC_SSA_Schedule__Dominates((OOC_SSA_Schedule__Block)i6, (OOC_SSA_Schedule__Block)(_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 25038)))), &_td_OOC_SSA_Schedule__BlockDesc, 25038)));
  i7 = !i7;
  
l38:
  if (i7) goto l24_loop;
l43:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 25262))+8);
  opnd = (OOC_SSA__Opnd)i5;
  i6 = i5!=(OOC_INT32)0;
  if (i6) goto l11_loop;
l48:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 25309));
  proxy = (OOC_SSA_Schedule__InstrProxy)i3;
  i5 = i3!=(OOC_INT32)0;
  if (i5) goto l8_loop;
l54:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25361))+16);
  child = (OOC_SSA_Schedule__Block)i0;
  i2 = i0!=(OOC_INT32)0;
  if (!i2) goto l62;
  i2 = (OOC_INT32)rf;
  
l57_loop:
  OOC_SSA_Allocator__CollectCrossLoopResults((OOC_SSA_Allocator__RegisterFile)i2, (OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__Block)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25475));
  child = (OOC_SSA_Schedule__Block)i0;
  i3 = i0!=(OOC_INT32)0;
  if (i3) goto l57_loop;
l62:
  return;
  ;
}

ADT_Dictionary__Dictionary OOC_SSA_Allocator__AssignRegisters(OOC_SSA__ProcBlock pb, OOC_SSA_Schedule__Block domRoot, OOC_C_DeclWriter__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  ADT_Dictionary__Dictionary inPlaceEval;
  OOC_SSA_Schedule__Block exitBlock;
  OOC_SSA_Schedule__Block enterBlock;
  OOC_SSA_Allocator__BlockList blockList;
  OOC_SSA_Allocator__RegisterFiles rfs;
  OOC_INT32 i;
  ADT_Dictionary__Dictionary registerMap;
  Object__ObjectArrayPtr keys;
  auto void OOC_SSA_Allocator__AssignRegisters_WriteNames(OOC_C_DeclWriter__Writer w, OOC_INT8 registerType, OOC_SSA_Allocator__NameArray names);
  auto void OOC_SSA_Allocator__AssignRegisters_ClearBlockInfo(OOC_SSA_Allocator__BlockList blockList);
  auto void OOC_SSA_Allocator__AssignRegisters_CheckRegisters(OOC_SSA_Schedule__Block root, ADT_Dictionary__Dictionary registerMap);
  auto ADT_Dictionary__Dictionary OOC_SSA_Allocator__AssignRegisters_InPlaceEval(OOC_SSA__ProcBlock pb);
    
    void OOC_SSA_Allocator__AssignRegisters_WriteNames(OOC_C_DeclWriter__Writer w, OOC_INT8 registerType, OOC_SSA_Allocator__NameArray names) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 i;

      i0 = (OOC_INT32)names;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 26448)), (OOC_INT32)0);
      i1 = i1!=0;
      if (!i1) goto l14;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26470)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26490)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "register ", 10);
      i2 = registerType;
      i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i1, 26544))+24)+(_check_index(i2, 17, OOC_UINT8, 26555))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26528)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, (void*)((_check_pointer(i2, 26569))+1), 32);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26587)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, (OOC_CHAR8)' ');
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 26639)), (OOC_INT32)0);
      i2 = i2-1;
      i3 = 0<=i2;
      i = 0;
      if (!i3) goto l13;
      i3=0;
l5_loop:
      i4 = i3!=0;
      if (!i4) goto l8;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26686)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, (OOC_CHAR8)',');
l8:
      i4 = _check_pointer(i0, 26751);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 26751))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26731)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i4);
      i3 = i3+1;
      i4 = i3<=i2;
      i = i3;
      if (i4) goto l5_loop;
l13:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26779)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, (OOC_CHAR8)';');
l14:
      return;
      ;
    }

    
    void OOC_SSA_Allocator__AssignRegisters_ClearBlockInfo(OOC_SSA_Allocator__BlockList blockList) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 i;

      i0 = (OOC_INT32)blockList;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 26951)), (OOC_INT32)0);
      i1 = i1-1;
      i2 = 0<=i1;
      i = 0;
      if (!i2) goto l8;
      i2=0;
l3_loop:
      i3 = _check_pointer(i0, 26976);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 26976))*4);
      *(OOC_INT32*)((_check_pointer(i3, 26979))+44) = (OOC_INT32)0;
      i2 = i2+1;
      i3 = i2<=i1;
      i = i2;
      if (i3) goto l3_loop;
l8:
      return;
      ;
    }

    
    void OOC_SSA_Allocator__AssignRegisters_CheckRegisters(OOC_SSA_Schedule__Block root, ADT_Dictionary__Dictionary registerMap) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Result undefinedVar;
      OOC_SSA_Allocator__BlockInfo ready;
      OOC_SSA_Allocator__BlockInfo current;
      auto void OOC_SSA_Allocator__AssignRegisters_CheckRegisters_ScanBlock(OOC_SSA_Schedule__Block b);
      auto void OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock(OOC_SSA_Allocator__BlockInfo bi, ADT_Dictionary__Dictionary state);
        
        void OOC_SSA_Allocator__AssignRegisters_CheckRegisters_ScanBlock(OOC_SSA_Schedule__Block b) {
          register OOC_INT32 i0,i1,i2;
          OOC_SSA_Allocator__BlockInfo bi;
          OOC_SSA_Schedule__Block child;
          auto OOC_SSA__Instr OOC_SSA_Allocator__AssignRegisters_CheckRegisters_ScanBlock_MergeInstr(OOC_SSA_Schedule__InstrProxy proxy);
            
            OOC_SSA__Instr OOC_SSA_Allocator__AssignRegisters_CheckRegisters_ScanBlock_MergeInstr(OOC_SSA_Schedule__InstrProxy proxy) {
              register OOC_INT32 i0,i1;

              i0 = (OOC_INT32)proxy;
              i0 = i0!=(OOC_INT32)0;
              if (!i0) goto l12;
l3_loop:
              i0 = (OOC_INT32)proxy;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27466))+12);
              i1 = *(OOC_INT8*)((_check_pointer(i1, 27473))+36);
              switch (i1) {
              case 5:
              case 10:
              case 11:
                i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27574))+12);
                return (OOC_SSA__Instr)i1;
                goto l7;
              default:
                goto l7;
              }
l7:
              i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 27643));
              proxy = (OOC_SSA_Schedule__InstrProxy)i0;
              i0 = i0!=(OOC_INT32)0;
              if (i0) goto l3_loop;
l12:
              return (OOC_SSA__Instr)(OOC_INT32)0;
              ;
            }


          i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Allocator__BlockInfo.baseTypes[0]);
          bi = (OOC_SSA_Allocator__BlockInfo)i0;
          OOC_SSA_Schedule__InitInfo((OOC_SSA_Schedule__Info)i0);
          *(OOC_INT32*)(_check_pointer(i0, 27796)) = (OOC_INT32)0;
          i1 = (OOC_INT32)b;
          *(OOC_INT32*)((_check_pointer(i0, 27825))+4) = i1;
          *(OOC_INT32*)((_check_pointer(i0, 27849))+12) = (OOC_INT32)0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27908))+8);
          i1 = (OOC_INT32)OOC_SSA_Allocator__AssignRegisters_CheckRegisters_ScanBlock_MergeInstr((OOC_SSA_Schedule__InstrProxy)i1);
          *(OOC_INT32*)((_check_pointer(i0, 27879))+8) = i1;
          i0 = (OOC_INT32)b;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27935))+4);
          i1 = i1==(OOC_INT32)0;
          i2 = (OOC_INT32)bi;
          if (i1) goto l3;
          i1 = *(OOC_INT32*)((_check_pointer(i0, 28108))+36);
          *(OOC_INT32*)((_check_pointer(i2, 28095))+24) = i1;
          goto l4;
l3:
          i1 = (OOC_INT32)root;
          _assert((i0==i1), 127, 28012);
          i1 = *(OOC_INT32*)((_check_pointer(i0, 28056))+36);
          *(OOC_INT32*)((_check_pointer(i2, 28043))+24) = (i1-1);
l4:
          i1 = *(OOC_INT32*)((_check_pointer(i2, 28147))+24);
          i1 = i1>1;
          if (!i1) goto l7;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 28186))+8);
          _assert((i1!=(OOC_INT32)0), 127, 28176);
l7:
          i1 = *(OOC_INT32*)((_check_pointer(i2, 28250))+24);
          *(OOC_INT32*)((_check_pointer(i2, 28235))+16) = ((OOC_INT32)RT0__NewObject(_td_OOC_SSA_Allocator__3151.baseTypes[0], i1));
          i1 = *(OOC_INT32*)((_check_pointer(i2, 28289))+24);
          *(OOC_INT32*)((_check_pointer(i2, 28276))+20) = ((OOC_INT32)RT0__NewObject(_td_OOC_SSA_Allocator__3195.baseTypes[0], i1));
          i1 = *(OOC_INT32*)((_check_pointer(i2, 28323))+24);
          i1 = i1==0;
          if (!i1) goto l18;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28357))+4);
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l16;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28721))+16);
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l14;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28763))+16);
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28773)))), &_td_OOC_SSA_Schedule__DeadEndBlockDesc);
          
          goto l15;
l14:
          i1=OOC_TRUE;
l15:
          _assert(i1, 127, 28711);
          goto l18;
l16:
          i1 = (OOC_INT32)ready;
          *(OOC_INT32*)(_check_pointer(i2, 28525)) = i1;
          ready = (OOC_SSA_Allocator__BlockInfo)i2;
          *(OOC_INT32*)((_check_pointer(i2, 28585))+16) = (OOC_INT32)0;
          *(OOC_INT32*)((_check_pointer(i2, 28619))+20) = (OOC_INT32)0;
          i1 = (OOC_INT32)ADT_Dictionary__New();
          *(OOC_INT32*)((_check_pointer(i2, 28651))+12) = i1;
l18:
          *(OOC_INT32*)((_check_pointer(i0, 29267))+44) = i2;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29300))+16);
          child = (OOC_SSA_Schedule__Block)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l26;
l21_loop:
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_ScanBlock((OOC_SSA_Schedule__Block)i0);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 29395));
          child = (OOC_SSA_Schedule__Block)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l21_loop;
l26:
          return;
          ;
        }

        
        void OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock(OOC_SSA_Allocator__BlockInfo bi, ADT_Dictionary__Dictionary state) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_SSA__Instr collect;
          OOC_SSA_Schedule__Block b;
          OOC_SSA_Schedule__InstrProxy proxy;
          OOC_SSA__Result res;
          OOC_INT32 i;
          auto void OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_UpdateTarget(OOC_SSA_Schedule__Jump jump, ADT_Dictionary__Dictionary state, OOC_SSA__Instr collect);
          auto void OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpndList(OOC_SSA__Instr instr);
          auto void OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpnd(OOC_SSA__Opnd opnd);
          auto void OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpndList(OOC_SSA__Instr instr);
            
            void OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_UpdateTarget(OOC_SSA_Schedule__Jump jump, ADT_Dictionary__Dictionary state, OOC_SSA__Instr collect) {
              register OOC_INT32 i0,i1,i2,i3,i4;
              OOC_SSA_Allocator__BlockInfo di;
              auto ADT_Dictionary__Dictionary OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_UpdateTarget_MergeVariables(OOC_SSA_Allocator__BlockInfo di);
                
                ADT_Dictionary__Dictionary OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_UpdateTarget_MergeVariables(OOC_SSA_Allocator__BlockInfo di) {
                  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11;
                  ADT_Dictionary__Dictionary allVarsMap;
                  OOC_INT32 i;
                  Object__ObjectArrayPtr vars;
                  OOC_INT32 j;
                  ADT_Dictionary__Dictionary outState;
                  Object__Object value;

                  i0 = (OOC_INT32)ADT_Dictionary__New();
                  allVarsMap = (ADT_Dictionary__Dictionary)i0;
                  i1 = (OOC_INT32)di;
                  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30589))+20);
                  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 30598)), (OOC_INT32)0);
                  i2 = i2-1;
                  i3 = 0<=i2;
                  i = 0;
                  if (!i3) goto l16;
                  i3=0;
l3_loop:
                  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30630))+20);
                  i4 = _check_pointer(i4, 30639);
                  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
                  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 30639))*4);
                  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30630))+20);
                  i5 = _check_pointer(i5, 30639);
                  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
                  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 30639))*4);
                  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 30642)))), ADT_Dictionary__DictionaryDesc_Keys)),ADT_Dictionary__DictionaryDesc_Keys)((ADT_Dictionary__Dictionary)i5);
                  vars = (Object__ObjectArrayPtr)i4;
                  i5 = OOC_ARRAY_LENGTH((_check_pointer(i4, 30689)), (OOC_INT32)0);
                  i5 = i5-1;
                  i6 = 0<=i5;
                  j = 0;
                  if (!i6) goto l11;
                  i6=0;
l6_loop:
                  i7 = _check_pointer(i4, 30734);
                  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
                  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 30734))*4);
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30723)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i7, (Object__Object)(OOC_INT32)0);
                  i6 = i6+1;
                  i7 = i6<=i5;
                  j = i6;
                  if (i7) goto l6_loop;
l11:
                  i3 = i3+1;
                  i4 = i3<=i2;
                  i = i3;
                  if (i4) goto l3_loop;
l16:
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30811)))), ADT_Dictionary__DictionaryDesc_Keys)),ADT_Dictionary__DictionaryDesc_Keys)((ADT_Dictionary__Dictionary)i0);
                  vars = (Object__ObjectArrayPtr)i0;
                  i2 = (OOC_INT32)ADT_Dictionary__New();
                  outState = (ADT_Dictionary__Dictionary)i2;
                  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30909))+20);
                  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 30918)), (OOC_INT32)0);
                  i3 = i3-1;
                  i4 = 0<=i3;
                  i = 0;
                  if (!i4) goto l43;
                  i4=0;
l19_loop:
                  i5 = OOC_ARRAY_LENGTH((_check_pointer(i0, 30963)), (OOC_INT32)0);
                  i5 = i5-1;
                  i6 = 0<=i5;
                  j = 0;
                  if (!i6) goto l38;
                  i6=0;
l22_loop:
                  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30992))+20);
                  i7 = _check_pointer(i7, 31001);
                  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
                  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 31001))*4);
                  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30992))+20);
                  i8 = _check_pointer(i8, 31001);
                  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
                  i10 = _check_pointer(i0, 31018);
                  i11 = OOC_ARRAY_LENGTH(i10, (OOC_INT32)0);
                  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i4, i9, OOC_UINT32, 31001))*4);
                  i9 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i6, i11, OOC_UINT32, 31018))*4);
                  i7 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 31004)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i8, (Object__Object)i9);
                  if (i7) goto l25;
                  i7 = _check_pointer(i0, 31759);
                  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
                  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 31759))*4);
                  i8 = (OOC_INT32)undefinedVar;
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31748)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i7, (Object__Object)i8);
                  goto l33;
l25:
                  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31132))+20);
                  i7 = _check_pointer(i7, 31141);
                  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
                  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 31141))*4);
                  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31132))+20);
                  i8 = _check_pointer(i8, 31141);
                  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
                  i10 = _check_pointer(i0, 31155);
                  i11 = OOC_ARRAY_LENGTH(i10, (OOC_INT32)0);
                  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i4, i9, OOC_UINT32, 31141))*4);
                  i9 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i6, i11, OOC_UINT32, 31155))*4);
                  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 31144)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i8, (Object__Object)i9);
                  value = (Object__Object)i7;
                  i8 = _check_pointer(i0, 31204);
                  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
                  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i6, i9, OOC_UINT32, 31204))*4);
                  i8 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31190)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (Object__Object)i8);
                  if (i8) goto l28;
                  i8 = _check_pointer(i0, 31542);
                  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
                  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i6, i9, OOC_UINT32, 31542))*4);
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31531)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i8, (Object__Object)i7);
                  goto l33;
l28:
                  i8 = _check_pointer(i0, 31257);
                  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
                  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i6, i9, OOC_UINT32, 31257))*4);
                  i8 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31246)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i2, (Object__Object)i8);
                  i7 = i8!=i7;
                  if (!i7) goto l33;
                  i7 = _check_pointer(i0, 31395);
                  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
                  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 31395))*4);
                  i8 = (OOC_INT32)undefinedVar;
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31384)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i7, (Object__Object)i8);
l33:
                  i6 = i6+1;
                  i7 = i6<=i5;
                  j = i6;
                  if (i7) goto l22_loop;
l38:
                  i4 = i4+1;
                  i5 = i4<=i3;
                  i = i4;
                  if (i5) goto l19_loop;
l43:
                  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32050))+8);
                  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 32062));
                  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 32074));
                  res = (OOC_SSA__Result)i0;
                  i1 = i0!=(OOC_INT32)0;
                  if (!i1) goto l54;
l46_loop:
                  i1 = *(OOC_INT8*)((_check_pointer(i0, 32146))+4);
                  _assert((i1==14), 127, 32135);
                  i1 = (OOC_INT32)registerMap;
                  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32205)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
                  if (!i0) goto l49;
                  i0 = (OOC_INT32)registerMap;
                  i1 = (OOC_INT32)res;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32267)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
                  i1 = (OOC_INT32)res;
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 32249)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i0, (Object__Object)i1);
l49:
                  i0 = (OOC_INT32)res;
                  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 32329));
                  res = (OOC_SSA__Result)i0;
                  i1 = i0!=(OOC_INT32)0;
                  if (i1) goto l46_loop;
l54:
                  return (ADT_Dictionary__Dictionary)i2;
                  ;
                }


              i0 = (OOC_INT32)jump;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32463))+4);
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32469))+44);
              i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32476)))), &_td_OOC_SSA_Allocator__BlockInfoDesc, 32476);
              di = (OOC_SSA_Allocator__BlockInfo)i0;
              i1 = *(OOC_INT32*)((_check_pointer(i0, 32508))+24);
              _assert((i1>0), 127, 32498);
              i1 = *(OOC_INT32*)((_check_pointer(i0, 32540))+24);
              *(OOC_INT32*)((_check_pointer(i0, 32540))+24) = (i1-1);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32563))+16);
              i1 = _check_pointer(i1, 32574);
              i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
              i3 = *(OOC_INT32*)((_check_pointer(i0, 32577))+24);
              i4 = (OOC_INT32)collect;
              *(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 32574))*4) = i4;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32611))+20);
              i1 = _check_pointer(i1, 32620);
              i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
              i3 = *(OOC_INT32*)((_check_pointer(i0, 32623))+24);
              i4 = (OOC_INT32)state;
              i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 32641)))), ADT_Dictionary__DictionaryDesc_Copy)),ADT_Dictionary__DictionaryDesc_Copy)((ADT_Dictionary__Dictionary)i4);
              *(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 32620))*4) = i4;
              i1 = *(OOC_INT32*)((_check_pointer(i0, 32667))+24);
              i1 = i1==0;
              if (!i1) goto l7;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32783))+8);
              i1 = i1!=(OOC_INT32)0;
              if (i1) goto l5;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32906))+20);
              i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 32915)), (OOC_INT32)0);
              _assert((i1==1), 127, 32891);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32957))+20);
              i1 = _check_pointer(i1, 32966);
              i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
              i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 32966))*4);
              *(OOC_INT32*)((_check_pointer(i0, 32940))+12) = i1;
              goto l6;
l5:
              i1 = (OOC_INT32)OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_UpdateTarget_MergeVariables((OOC_SSA_Allocator__BlockInfo)i0);
              *(OOC_INT32*)((_check_pointer(i0, 32824))+12) = i1;
l6:
              i0 = (OOC_INT32)di;
              i1 = (OOC_INT32)ready;
              *(OOC_INT32*)(_check_pointer(i0, 33054)) = i1;
              ready = (OOC_SSA_Allocator__BlockInfo)i0;
l7:
              return;
              ;
            }

            
            void OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpnd(OOC_SSA__Opnd opnd) {
              register OOC_INT32 i0,i1,i2,i3;
              Object__Object obj;
              Object__String defVar;
              OOC_SSA__Result currentValue;

              i0 = (OOC_INT32)registerMap;
              i1 = (OOC_INT32)opnd;
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 33403));
              i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33389)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i2);
              if (!i0) goto l10;
              i0 = (OOC_INT32)registerMap;
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 33563));
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33552)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (Object__Object)i2);
              i2 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
              i2 = i0==i2;
              obj = (Object__Object)i0;
              if (i2) goto l8;
              i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33704)))), &_td_Object__StringDesc, 33704);
              defVar = (Object__String)i0;
              i2 = (OOC_INT32)state;
              i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33740)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (Object__Object)i0);
              _assert(i2, 127, 33727);
              i2 = (OOC_INT32)state;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33900)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i2, (Object__Object)i0);
              obj = (Object__Object)i0;
              i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33954)))), &_td_OOC_SSA__ResultDesc, 33954);
              currentValue = (OOC_SSA__Result)i0;
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 33999));
              i2 = i0!=i2;
              if (!i2) goto l10;
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34030))+12);
              i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34030))+12);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 34037)))), OOC_SSA__ResultDesc_LogId)),OOC_SSA__ResultDesc_LogId)((OOC_SSA__Result)i3, "using instruction", 18);
              i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34120)))), OOC_SSA__OpndDesc_OpndIndex)),OOC_SSA__OpndDesc_OpndIndex)((OOC_SSA__Opnd)i1);
              Log__LongInt("  operand index", 16, i2);
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 34156));
              i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 34156));
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 34161)))), OOC_SSA__ResultDesc_LogId)),OOC_SSA__ResultDesc_LogId)((OOC_SSA__Result)i1, "  expected value", 17);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34219)))), OOC_SSA__ResultDesc_LogId)),OOC_SSA__ResultDesc_LogId)((OOC_SSA__Result)i0, "  actual value", 15);
              _assert(OOC_FALSE, 127, 34263);
              goto l10;
l8:
              i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 33644));
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33649))+8);
              OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpndList((OOC_SSA__Instr)i0);
l10:
              return;
              ;
            }

            
            void OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpndList(OOC_SSA__Instr instr) {
              register OOC_INT32 i0,i1;
              OOC_SSA__Opnd opnd;

              i0 = (OOC_INT32)instr;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34691))+24);
              opnd = (OOC_SSA__Opnd)i1;
              i0 = *(OOC_INT8*)((_check_pointer(i0, 34722))+36);
              i0 = i0==5;
              if (i0) goto l3;
              i0=i1;
              goto l4;
l3:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34967))+8);
              opnd = (OOC_SSA__Opnd)i0;
              
l4:
              i1 = i0!=(OOC_INT32)0;
              if (!i1) goto l15;
l7_loop:
              i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35045)))), OOC_SSA__OpndDesc_IsValueOpndHere)),OOC_SSA__OpndDesc_IsValueOpndHere)((OOC_SSA__Opnd)i0);
              if (!i1) goto l10;
              OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpnd((OOC_SSA__Opnd)i0);
l10:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35143))+8);
              opnd = (OOC_SSA__Opnd)i0;
              i1 = i0!=(OOC_INT32)0;
              if (i1) goto l7_loop;
l15:
              return;
              ;
            }


          collect = (OOC_SSA__Instr)(OOC_INT32)0;
          i0 = (OOC_INT32)bi;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35256))+4);
          b = (OOC_SSA_Schedule__Block)i0;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35279)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
          if (!i1) goto l3;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35341)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc, 35341)), 35353))+48);
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpnd((OOC_SSA__Opnd)i0);
l3:
          i0 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35402))+8);
          proxy = (OOC_SSA_Schedule__InstrProxy)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l32;
l6_loop:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35465))+12);
          i1 = *(OOC_INT8*)((_check_pointer(i1, 35472))+36);
          i1 = i1==6;
          if (i1) goto l12;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35644))+12);
          i1 = *(OOC_INT8*)((_check_pointer(i1, 35651))+36);
          i1 = i1==5;
          if (!i1) goto l13;
          i1 = (OOC_INT32)b;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35711))+8);
          _assert((i0==i1), 127, 35694);
          goto l13;
l12:
          i1 = (OOC_INT32)collect;
          _assert((i1==(OOC_INT32)0), 127, 35516);
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35565));
          _assert((i1==(OOC_INT32)0), 127, 35552);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35613))+12);
          collect = (OOC_SSA__Instr)i1;
l13:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35760))+12);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35767))+16);
          i2 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
          i1 = i1!=i2;
          if (!i1) goto l27;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35826))+12);
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpndList((OOC_SSA__Instr)i0);
          i0 = (OOC_INT32)proxy;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35873))+12);
          res = (OOC_SSA__Result)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l27;
          i1 = (OOC_INT32)state;
          
l18_loop:
          i2 = (OOC_INT32)registerMap;
          i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 36098)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (Object__Object)i0);
          if (!i2) goto l21;
          i2 = (OOC_INT32)registerMap;
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 36157)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i2, (Object__Object)i0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36139)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i1, (Object__Object)i2, (Object__Object)i0);
l21:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 36234));
          res = (OOC_SSA__Result)i0;
          i2 = i0!=(OOC_INT32)0;
          if (i2) goto l18_loop;
l27:
          i0 = (OOC_INT32)proxy;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 36315));
          proxy = (OOC_SSA_Schedule__InstrProxy)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l6_loop;
l32:
          i0 = (OOC_INT32)b;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36364)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
          if (!i1) goto l35;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36426)))), &_td_OOC_SSA_Schedule__BranchBlockDesc, 36426)), 36438))+52);
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpnd((OOC_SSA__Opnd)i0);
l35:
          i0 = (OOC_INT32)b;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36488)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
          if (i1) goto l57;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36573)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
          if (i1) goto l55;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36714)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
          if (i1) goto l45;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36865)))), &_td_OOC_SSA_Schedule__DeadEndBlockDesc);
          if (i1) goto l58;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36862)))), 36862);
          goto l58;
l45:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36770))+52);
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 36776)), (OOC_INT32)0);
          i0 = i0-1;
          i1 = 0<=i0;
          i = 0;
          if (!i1) goto l58;
          i1=0;
l48_loop:
          i2 = (OOC_INT32)b;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 36811))+52);
          i2 = _check_pointer(i2, 36817);
          i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
          i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 36817))*4);
          i2 = (OOC_INT32)state;
          i3 = (OOC_INT32)collect;
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_UpdateTarget((OOC_SSA_Schedule__Jump)i1, (ADT_Dictionary__Dictionary)i2, (OOC_SSA__Instr)i3);
          i1 = i;
          i1 = i1+1;
          i2 = i1<=i0;
          i = i1;
          if (i2) goto l48_loop;
          goto l58;
l55:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36624))+48);
          i1 = (OOC_INT32)collect;
          i2 = (OOC_INT32)state;
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_UpdateTarget((OOC_SSA_Schedule__Jump)i0, (ADT_Dictionary__Dictionary)i2, (OOC_SSA__Instr)i1);
          i0 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36674))+60);
          i1 = (OOC_INT32)state;
          i2 = (OOC_INT32)collect;
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_UpdateTarget((OOC_SSA_Schedule__Jump)i0, (ADT_Dictionary__Dictionary)i1, (OOC_SSA__Instr)i2);
          goto l58;
l57:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36537))+48);
          i1 = (OOC_INT32)collect;
          i2 = (OOC_INT32)state;
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_UpdateTarget((OOC_SSA_Schedule__Jump)i0, (ADT_Dictionary__Dictionary)i2, (OOC_SSA__Instr)i1);
l58:
          return;
          ;
        }


      i0 = (OOC_INT32)OOC_SSA__NewResult((OOC_SSA__Instr)(OOC_INT32)0, -1, -1);
      undefinedVar = (OOC_SSA__Result)i0;
      i0 = (OOC_INT32)root;
      ready = (OOC_SSA_Allocator__BlockInfo)(OOC_INT32)0;
      OOC_SSA_Allocator__AssignRegisters_CheckRegisters_ScanBlock((OOC_SSA_Schedule__Block)i0);
      i0 = (OOC_INT32)ready;
      _assert((i0!=(OOC_INT32)0), 127, 37072);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 37113));
      _assert((i1==(OOC_INT32)0), 127, 37100);
      if (!(i0!=(OOC_INT32)0)) goto l8;
l3_loop:
      i1 = (OOC_INT32)ready;
      current = (OOC_SSA_Allocator__BlockInfo)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 37343));
      ready = (OOC_SSA_Allocator__BlockInfo)i2;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37391))+12);
      OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock((OOC_SSA_Allocator__BlockInfo)i1, (ADT_Dictionary__Dictionary)i2);
      i1 = (OOC_INT32)ready;
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l8:
      return;
      ;
    }

    
    ADT_Dictionary__Dictionary OOC_SSA_Allocator__AssignRegisters_InPlaceEval(OOC_SSA__ProcBlock pb) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      ADT_Dictionary__Dictionary inPlaceEval;
      OOC_SSA__Instr instr;
      OOC_SSA_Schedule__Block instrBlock;
      OOC_INT32 insideUse;
      OOC_INT32 outsideUse;
      OOC_SSA__Opnd use;
      OOC_SSA__Instr useInstr;
      auto OOC_CHAR8 OOC_SSA_Allocator__AssignRegisters_InPlaceEval_FoldedOpcode(OOC_INT8 opcode);
        
        OOC_CHAR8 OOC_SSA_Allocator__AssignRegisters_InPlaceEval_FoldedOpcode(OOC_INT8 opcode) {
          register OOC_INT32 i0;

          i0 = opcode;
          switch (i0) {
          case 55:
          case 12:
          case 58:
          case 0:
          case 3:
          case 56:
          case 57:
            return OOC_FALSE;
            goto l4;
          default:
            return OOC_TRUE;
            goto l4;
          }
l4:
          _failed_function(37701); return 0;
          ;
        }


      i0 = (OOC_INT32)ADT_Dictionary__New();
      inPlaceEval = (ADT_Dictionary__Dictionary)i0;
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38108))+8);
      i1 = i0!=(OOC_INT32)0;
      instr = (OOC_SSA__Instr)i0;
      if (!i1) goto l55;
l3_loop:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 38167))+5);
      i1 = i1!=0;
      if (i1) goto l6;
      i1=OOC_FALSE;
      goto l8;
l6:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38214))+16);
      i1 = i1!=(OOC_INT32)0;
      
l8:
      if (i1) goto l10;
      i0=OOC_FALSE;
      goto l11;
l10:
      i0 = *(OOC_INT8*)((_check_pointer(i0, 38260))+36);
      i0 = OOC_SSA_Allocator__AssignRegisters_InPlaceEval_FoldedOpcode(i0);
      
l11:
      i1 = (OOC_INT32)instr;
      if (!i0) goto l50;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38304))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38320)))), &_td_OOC_SSA_Schedule__InstrProxyDesc, 38320)), 38331))+8);
      instrBlock = (OOC_SSA_Schedule__Block)i0;
      insideUse = 0;
      outsideUse = 0;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38406))+12);
      use = (OOC_SSA__Opnd)i2;
      i3 = i2!=(OOC_INT32)0;
      if (i3) goto l16;
      i2=0;i3=0;
      goto l34;
l16:
      i3=0;i4=0;
l17_loop:
      i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 38466)))), OOC_SSA__OpndDesc_IsValueOpndHere)),OOC_SSA__OpndDesc_IsValueOpndHere)((OOC_SSA__Opnd)i2);
      if (!i5) goto l29;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 38520))+12);
      useInstr = (OOC_SSA__Instr)i5;
      i6 = *(OOC_INT8*)((_check_pointer(i5, 38555))+36);
      i6 = i6!=6;
      if (i6) goto l23;
      i5=OOC_FALSE;
      goto l25;
l23:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 38610))+16);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 38626)))), &_td_OOC_SSA_Schedule__InstrProxyDesc, 38626)), 38637))+8);
      i5 = i5==i0;
      
l25:
      if (i5) goto l27;
      i4 = i4+1;
      outsideUse = i4;
      
      goto l29;
l27:
      i3 = i3+1;
      insideUse = i3;
      
l29:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 38808))+16);
      use = (OOC_SSA__Opnd)i2;
      i5 = i2!=(OOC_INT32)0;
      if (i5) goto l17_loop;
l33:
      i2=i3;i3=i4;
l34:
      i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38859)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (i4) goto l37;
      i0=OOC_FALSE;
      goto l39;
l37:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38920)))), &_td_OOC_SSA_Schedule__BranchBlockDesc, 38920)), 38932))+52);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 38943));
      i0 = i0==i1;
      
l39:
      if (i0) goto l41;
      i0=i2;
      goto l42;
l41:
      i0 = i2+1;
      insideUse = i0;
      
l42:
      i2 = i3==0;
      if (i2) goto l45;
      i0=OOC_FALSE;
      goto l47;
l45:
      i0 = i0==1;
      
l47:
      if (!i0) goto l50;
      i0 = (OOC_INT32)inPlaceEval;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39094)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
l50:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39164))+28);
      instr = (OOC_SSA__Instr)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l55:
      i0 = (OOC_INT32)inPlaceEval;
      return (ADT_Dictionary__Dictionary)i0;
      ;
    }


  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)OOC_SSA_Allocator__AssignRegisters_InPlaceEval((OOC_SSA__ProcBlock)i0);
  inPlaceEval = (ADT_Dictionary__Dictionary)i0;
  i1 = (OOC_INT32)pb;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 42015));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 42029))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 42045)))), &_td_OOC_SSA_Schedule__InstrProxyDesc, 42045)), 42056))+8);
  exitBlock = (OOC_SSA_Schedule__Block)i2;
  i3 = (OOC_INT32)domRoot;
  enterBlock = (OOC_SSA_Schedule__Block)i3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 42098)))), OOC_SSA__ProcBlockDesc_SetMarkers)),OOC_SSA__ProcBlockDesc_SetMarkers)((OOC_SSA__ProcBlock)i1, (OOC_SSA__Node)(OOC_INT32)0, -1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 42133)))), OOC_SSA_Schedule__BlockDesc_SetInfo)),OOC_SSA_Schedule__BlockDesc_SetInfo)((OOC_SSA_Schedule__Block)i3, (OOC_SSA_Schedule__Info)(OOC_INT32)0);
  i1 = (OOC_INT32)OOC_SSA_Allocator__GetBlockList((OOC_SSA_Schedule__Block)i3, (OOC_SSA_Schedule__Block)i2);
  blockList = (OOC_SSA_Allocator__BlockList)i1;
  i0 = (OOC_INT32)OOC_SSA_Allocator__IdentifyResults((OOC_SSA_Allocator__BlockList)i1, (ADT_Dictionary__Dictionary)i0);
  rfs = (OOC_SSA_Allocator__RegisterFiles)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 42575)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l11;
  i2=0;
l3_loop:
  i4 = _check_pointer(i0, 42596);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 42596))*4);
  i4 = i4!=(OOC_INT32)0;
  if (!i4) goto l6;
  i4 = _check_pointer(i0, 42648);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 42648))*4);
  OOC_SSA_Allocator__CollectCrossLoopResults((OOC_SSA_Allocator__RegisterFile)i4, (OOC_SSA_Schedule__Block)i3, (OOC_SSA_Schedule__Block)(OOC_INT32)0);
l6:
  i2 = i2+1;
  i4 = i2<=i1;
  i = i2;
  if (i4) goto l3_loop;
l11:
  i1 = (OOC_INT32)ADT_Dictionary__New();
  registerMap = (ADT_Dictionary__Dictionary)i1;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 42939)), (OOC_INT32)0);
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l22;
  i1=0;
l14_loop:
  i2 = (OOC_INT32)rfs;
  i2 = _check_pointer(i2, 42960);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 42960))*4);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l17;
  i1 = (OOC_INT32)blockList;
  OOC_SSA_Allocator__AssignRegisters_ClearBlockInfo((OOC_SSA_Allocator__BlockList)i1);
  i1 = (OOC_INT32)rfs;
  i2 = _check_pointer(i1, 43043);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i4 = i;
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i4, i3, OOC_UINT32, 43043))*4);
  i3 = (OOC_INT32)enterBlock;
  i5 = (OOC_INT32)exitBlock;
  i6 = (OOC_INT32)registerMap;
  OOC_SSA_Allocator__AssignRegisterFile((OOC_SSA_Allocator__RegisterFile)i2, (OOC_SSA_Schedule__Block)i3, (OOC_SSA_Schedule__Block)i5, (ADT_Dictionary__Dictionary)i6);
  i2 = _check_pointer(i1, 43111);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i4, i3, OOC_UINT32, 43111))*4);
  i1 = _check_pointer(i1, 43133);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i4, i3, OOC_UINT32, 43133))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 43136))+20);
  i2 = *(OOC_INT8*)(_check_pointer(i2, 43114));
  i3 = (OOC_INT32)w;
  OOC_SSA_Allocator__AssignRegisters_WriteNames((OOC_C_DeclWriter__Writer)i3, i2, (OOC_SSA_Allocator__NameArray)i1);
l17:
  i1 = i;
  i1 = i1+1;
  i2 = i1<=i0;
  i = i1;
  if (i2) goto l14_loop;
l22:
  i0 = (OOC_INT32)inPlaceEval;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43189)))), ADT_Dictionary__DictionaryDesc_Keys)),ADT_Dictionary__DictionaryDesc_Keys)((ADT_Dictionary__Dictionary)i0);
  keys = (Object__ObjectArrayPtr)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 43226)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  i3 = (OOC_INT32)registerMap;
  if (!i2) goto l30;
  i2=0;
l25_loop:
  i4 = _check_pointer(i0, 43262);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 43262))*4);
  i5 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 43251)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i3, (Object__Object)i4, (Object__Object)i5);
  i2 = i2+1;
  i4 = i2<=i1;
  i = i2;
  if (i4) goto l25_loop;
l30:
  i0 = (OOC_INT32)domRoot;
  OOC_SSA_Allocator__AssignRegisters_CheckRegisters((OOC_SSA_Schedule__Block)i0, (ADT_Dictionary__Dictionary)i3);
  i0 = (OOC_INT32)registerMap;
  return (ADT_Dictionary__Dictionary)i0;
  ;
}

void OOC_OOC_SSA_Allocator_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)OOC_SSA__NewResult((OOC_SSA__Instr)(OOC_INT32)0, -1, -1);
  OOC_SSA_Allocator__markInPlace = (OOC_SSA__Result)i0;
  return;
  ;
}

/* --- */
