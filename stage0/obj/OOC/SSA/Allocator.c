#include "OOC/SSA/Allocator.d"
#include "__oo2c.h"

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
          register OOC_INT32 i0;

          i0 = (OOC_INT32)instr;
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9157)))), OOC_SSA__InstrDesc_IsConst)),OOC_SSA__InstrDesc_IsConst)((OOC_SSA__Instr)i0);
          return (!i0);
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
          i3 = _check_pointer(i2, 9443);
          i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i0, i4, OOC_UINT8, 9443))*4);
          *(OOC_INT32*)((_check_pointer(i1, 9430))+16) = i3;
          i3 = _check_pointer(i2, 9481);
          i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i0, i4, OOC_UINT8, 9481))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 9488))+4);
          i3 = *(OOC_INT32*)((_check_pointer(i3, 9500))+4);
          *(OOC_INT32*)((_check_pointer(i1, 9466))+20) = i3;
          i3 = _check_pointer(i2, 9519);
          i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i0, i4, OOC_UINT8, 9519))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 9526))+4);
          i2 = _check_pointer(i2, 9519);
          i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
          i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i0, i4, OOC_UINT8, 9519))*4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9526))+4);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9538)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (Object__Object)i1);
          i1 = (OOC_INT32)rfs;
          i2 = _check_pointer(i1, 9568);
          i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
          i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i0, i3, OOC_UINT8, 9568))*4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9575))+8);
          i1 = _check_pointer(i1, 9568);
          i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
          i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i3, OOC_UINT8, 9568))*4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9575))+8);
          i1 = (OOC_INT32)b;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9586)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i1);
          return;
          ;
        }


      i0 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9657))+8);
      i1 = i0!=(OOC_INT32)0;
      proxy = (OOC_SSA_Schedule__InstrProxy)i0;
      if (!i1) goto l30;
l3_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9721))+12);
      instr = (OOC_SSA__Instr)i0;
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9751)))), OOC_SSA__InstrDesc_GetResultType)),OOC_SSA__InstrDesc_GetResultType)((OOC_SSA__Instr)i0);
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
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9876)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      if (i0) goto l12;
      i0 = type;
      i0 = OOC_SSA_Allocator__SubclassToBasicType(i0);
      OOC_SSA_Allocator__IdentifyResults_ScanBlock_RegisterResult((OOC_SSA__Result)i1, i0);
      goto l14;
l12:
      i0 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
      *(OOC_INT32*)((_check_pointer(i1, 9916))+16) = i0;
l14:
      i0 = (OOC_INT32)instr;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10066));
      res = (OOC_SSA__Result)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l25;
l17_loop:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 10126))+5);
      i1 = i1!=0;
      if (!i1) goto l20;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 10216))+5);
      i1 = OOC_SSA_Allocator__SubclassToBasicType(i1);
      OOC_SSA_Allocator__IdentifyResults_ScanBlock_RegisterResult((OOC_SSA__Result)i0, i1);
l20:
      i0 = (OOC_INT32)res;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10264));
      res = (OOC_SSA__Result)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l17_loop;
l25:
      i0 = (OOC_INT32)proxy;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10312));
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
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 10428)), (OOC_INT32)0);
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l8;
  i1=0;
l3_loop:
  i2 = (OOC_INT32)blockList;
  i2 = _check_pointer(i2, 10462);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 10462))*4);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10732))+8);
  loopStart = (OOC_SSA_Schedule__InstrProxy)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10765))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 10772))+36);
  i1 = i1!=10;
  if (!i1) goto l9;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10832));
  loopStart = (OOC_SSA_Schedule__InstrProxy)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10765))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 10772))+36);
  i1 = i1!=10;
  if (i1) goto l4_loop;
l9:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10882))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10882))+12);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10889)))), OOC_SSA__InstrDesc_GetBackwardFeed)),OOC_SSA__InstrDesc_GetBackwardFeed)((OOC_SSA__Instr)i0);
  backwardFeed = (OOC_SSA__Result)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10937))+8);
  collect = (OOC_SSA__Instr)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10965))+24);
  i2 = i1!=(OOC_INT32)0;
  opnd = (OOC_SSA__Opnd)i1;
  if (i2) goto l12;
  i2=OOC_FALSE;
  goto l14;
l12:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11007));
  i3 = (OOC_INT32)res;
  i2 = i2!=i3;
  
l14:
  if (!i2) goto l26;
  i2 = (OOC_INT32)res;
  
l17_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11041))+8);
  opnd = (OOC_SSA__Opnd)i1;
  i3 = i1!=(OOC_INT32)0;
  if (i3) goto l20;
  i3=OOC_FALSE;
  goto l22;
l20:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11007));
  i3 = i3!=i2;
  
l22:
  if (i3) goto l17_loop;
l26:
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l29;
  i1 = (OOC_INT32)res;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11100)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 17);
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
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12088))+12);
          i1 = (OOC_INT32)instr;
          i0 = i0!=i1;
          
l5:
          if (!i0) goto l16;
          i0 = (OOC_INT32)instr;
l7_loop:
          i1 = (OOC_INT32)proxy;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12132));
          proxy = (OOC_SSA_Schedule__InstrProxy)i1;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l10;
          i1=OOC_FALSE;
          goto l12;
l10:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12088))+12);
          i1 = i1!=i0;
          
l12:
          if (i1) goto l7_loop;
l16:
          i0 = (OOC_INT32)proxy;
          return (i0!=(OOC_INT32)0);
          ;
        }


      i0 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12244))+16);
      i1 = i0!=(OOC_INT32)0;
      child = (OOC_SSA_Schedule__Block)i0;
      if (i1) goto l3;
      i0=OOC_FALSE;
      goto l5;
l3:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12304))+8);
      i1 = (OOC_INT32)loopStart;
      i0 = OOC_SSA_Allocator__SweepLiveSet_GetLoop_ContainsInstr((OOC_SSA_Schedule__InstrProxy)i0, (OOC_SSA__Instr)i1);
      i0 = !i0;
      
l5:
      if (!i0) goto l16;
l7_loop:
      i0 = (OOC_INT32)child;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12353));
      child = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l10;
      i0=OOC_FALSE;
      goto l12;
l10:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12304))+8);
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
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12428))+4);
      i1 = (OOC_INT32)loopStart;
      i0 = (OOC_INT32)OOC_SSA_Allocator__SweepLiveSet_GetLoop((OOC_SSA_Schedule__Block)i0, (OOC_SSA__Instr)i1);
      return (OOC_SSA_Schedule__Block)i0;
l20:
      _failed_function(11846); return 0;
      ;
    }

    
    void OOC_SSA_Allocator__SweepLiveSet_MarkOpndAsLive(OOC_SSA__Instr instr, OOC_SSA_IGraph__Vector live) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SSA__Opnd opnd;

      i0 = (OOC_INT32)instr;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12639))+24);
      i1 = i0!=(OOC_INT32)0;
      opnd = (OOC_SSA__Opnd)i0;
      if (!i1) goto l22;
      i1 = (OOC_INT32)live;
      
l3_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12695));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12700))+16);
      i3 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
      i2 = i2==i3;
      if (i2) goto l16;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12797));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12802))+16);
      i3 = (OOC_INT32)rf;
      i2 = i2==i3;
      if (i2) goto l8;
      i2=OOC_FALSE;
      goto l10;
l8:
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12821)))), OOC_SSA__OpndDesc_IsValueOpndHere)),OOC_SSA__OpndDesc_IsValueOpndHere)((OOC_SSA__Opnd)i0);
      
l10:
      if (!i2) goto l17;
      i2 = (OOC_INT32)iGraph;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12876));
      i3 = *(OOC_INT32*)((_check_pointer(i3, 12881))+20);
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12866)))), OOC_SSA_IGraph__GraphDesc_In)),OOC_SSA_IGraph__GraphDesc_In)((OOC_SSA_IGraph__Graph)i2, i3, (OOC_SSA_IGraph__Vector)i1);
      i2 = !i2;
      if (!i2) goto l17;
      i2 = (OOC_INT32)iGraph;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13160));
      i3 = *(OOC_INT32*)((_check_pointer(i3, 13165))+20);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13143)))), OOC_SSA_IGraph__GraphDesc_AddToLive)),OOC_SSA_IGraph__GraphDesc_AddToLive)((OOC_SSA_IGraph__Graph)i2, i3, (OOC_SSA_IGraph__Vector)i1);
      goto l17;
l16:
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12757));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12762))+8);
      OOC_SSA_Allocator__SweepLiveSet_MarkOpndAsLive((OOC_SSA__Instr)i2, (OOC_SSA_IGraph__Vector)i1);
l17:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13228))+8);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13363))+16);
      i2 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
      i1 = i1==i2;
      if (i1) goto l10;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13449))+16);
      i2 = (OOC_INT32)rf;
      i1 = i1==i2;
      if (i1) goto l5;
      i1=OOC_FALSE;
      goto l7;
l5:
      i1 = (OOC_INT32)iGraph;
      i2 = *(OOC_INT32*)((_check_pointer(i0, 13480))+20);
      i3 = (OOC_INT32)live;
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13471)))), OOC_SSA_IGraph__GraphDesc_In)),OOC_SSA_IGraph__GraphDesc_In)((OOC_SSA_IGraph__Graph)i1, i2, (OOC_SSA_IGraph__Vector)i3);
      i1 = !i1;
      
l7:
      if (!i1) goto l11;
      i1 = (OOC_INT32)iGraph;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 13531))+20);
      i2 = (OOC_INT32)live;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13515)))), OOC_SSA_IGraph__GraphDesc_AddToLive)),OOC_SSA_IGraph__GraphDesc_AddToLive)((OOC_SSA_IGraph__Graph)i1, i0, (OOC_SSA_IGraph__Vector)i2);
      goto l11;
l10:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13417))+8);
      i1 = (OOC_INT32)live;
      OOC_SSA_Allocator__SweepLiveSet_MarkOpndAsLive((OOC_SSA__Instr)i0, (OOC_SSA_IGraph__Vector)i1);
l11:
      return;
      ;
    }


  i0 = (OOC_INT32)rf;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14146))+12);
  iGraph = (OOC_SSA_IGraph__Graph)i0;
  i0 = (OOC_INT32)b;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14246)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
  if (!i1) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14412))+52);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14423));
  i1 = (OOC_INT32)live;
  OOC_SSA_Allocator__SweepLiveSet_AddResToLive((OOC_SSA__Result)i0, (OOC_SSA_IGraph__Vector)i1);
l3:
  loopEnd = (OOC_SSA_Schedule__InstrProxy)(OOC_INT32)0;
  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14511))+12);
  proxy = (OOC_SSA_Schedule__InstrProxy)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l43;
l6_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14566))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 14573))+36);
  i1 = i1==11;
  if (!i1) goto l9;
  loopEnd = (OOC_SSA_Schedule__InstrProxy)i0;
l9:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14667))+12);
  res = (OOC_SSA__Result)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14689))+16);
  i3 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
  i2 = i2!=i3;
  if (!i2) goto l38;
  i2 = i1!=(OOC_INT32)0;
  i3 = (OOC_INT32)live;
  if (!i2) goto l26;
  i2 = (OOC_INT32)iGraph;
  i4 = (OOC_INT32)rf;
  
l14_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14762))+16);
  i5 = i5==i4;
  if (i5) goto l17;
  i5=OOC_FALSE;
  goto l19;
l17:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14781))+12);
  i5 = i5==(OOC_INT32)0;
  
l19:
  if (!i5) goto l21;
  i5 = *(OOC_INT32*)((_check_pointer(i1, 15210))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15194)))), OOC_SSA_IGraph__GraphDesc_AddToLive)),OOC_SSA_IGraph__GraphDesc_AddToLive)((OOC_SSA_IGraph__Graph)i2, i5, (OOC_SSA_IGraph__Vector)i3);
l21:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15262));
  res = (OOC_SSA__Result)i1;
  i5 = i1!=(OOC_INT32)0;
  if (i5) goto l14_loop;
l26:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15398))+12);
  res = (OOC_SSA__Result)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l37;
  i2 = (OOC_INT32)iGraph;
  i4 = (OOC_INT32)rf;
  
l29_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15453))+16);
  i5 = i5==i4;
  if (!i5) goto l32;
  i5 = *(OOC_INT32*)((_check_pointer(i1, 15510))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15489)))), OOC_SSA_IGraph__GraphDesc_RemoveFromLive)),OOC_SSA_IGraph__GraphDesc_RemoveFromLive)((OOC_SSA_IGraph__Graph)i2, i5, (OOC_SSA_IGraph__Vector)i3);
l32:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15562));
  res = (OOC_SSA__Result)i1;
  i5 = i1!=(OOC_INT32)0;
  if (i5) goto l29_loop;
l37:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16153))+12);
  OOC_SSA_Allocator__SweepLiveSet_MarkOpndAsLive((OOC_SSA__Instr)i0, (OOC_SSA_IGraph__Vector)i3);
l38:
  i0 = (OOC_INT32)proxy;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16207))+4);
  proxy = (OOC_SSA_Schedule__InstrProxy)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l6_loop;
l43:
  i0 = (OOC_INT32)b;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16239)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
  if (!i1) goto l46;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16414))+48);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16420));
  i1 = (OOC_INT32)live;
  OOC_SSA_Allocator__SweepLiveSet_AddResToLive((OOC_SSA__Result)i0, (OOC_SSA_IGraph__Vector)i1);
l46:
  i0 = (OOC_INT32)loopEnd;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l49;
  return (OOC_SSA_Schedule__Block)(OOC_INT32)0;
  goto l65;
l49:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16617))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16669))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16624))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16669))+12);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16676)))), OOC_SSA__InstrDesc_GetLoopStart)),OOC_SSA__InstrDesc_GetLoopStart)((OOC_SSA__Instr)i0);
  i0 = (OOC_INT32)OOC_SSA_Allocator__SweepLiveSet_GetLoop((OOC_SSA_Schedule__Block)i1, (OOC_SSA__Instr)i0);
  loopBlock = (OOC_SSA_Schedule__Block)i0;
  i1 = (OOC_INT32)rf;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16717))+4);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 16729))+4);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l64;
  i3 = (OOC_INT32)live;
  i4 = (OOC_INT32)iGraph;
  i5=0;
l52_loop:
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 16758)))), OOC_SSA_IGraph__GraphDesc_In)),OOC_SSA_IGraph__GraphDesc_In)((OOC_SSA_IGraph__Graph)i4, i5, (OOC_SSA_IGraph__Vector)i3);
  if (i6) goto l55;
  i6=OOC_FALSE;
  goto l57;
l55:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16820))+8);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 16831));
  i6 = _check_pointer(i6, 16838);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 16838))*4);
  i6 = OOC_SSA_Schedule__Dominates((OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__Block)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 16851)))), &_td_OOC_SSA_Schedule__BlockDesc, 16851)));
  i6 = !i6;
  
l57:
  if (!i6) goto l59;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16901))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 16913));
  i6 = _check_pointer(i6, 16920);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 16920))*4);
  OOC_SSA_Allocator__AddToCollect((OOC_SSA_Schedule__Block)i0, (OOC_SSA__Result)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 16928)))), &_td_OOC_SSA__ResultDesc, 16928)));
l59:
  i5 = i5+1;
  i6 = i5<=i2;
  i = i5;
  if (i6) goto l52_loop;
l64:
  return (OOC_SSA_Schedule__Block)i0;
l65:
  _failed_function(11470); return 0;
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
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 17672)), (OOC_INT32)0);
      i1 = i1-1;
      i2 = 0<=i1;
      i = 0;
      if (i2) goto l3;
      i1=-1;
      goto l13;
l3:
      i2=0;i3=-1;
l4_loop:
      i4 = _check_pointer(i0, 17698);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = *(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 17698))*4);
      i4 = i4>i3;
      if (!i4) goto l8;
      i3 = _check_pointer(i0, 17747);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 17747))*4);
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
      *(OOC_INT32*)((_check_pointer(i2, 17783))+16) = i1;
      i3 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Allocator__NameArray.baseTypes[0], (i1+1));
      names = (OOC_SSA_Allocator__NameArray)i3;
      i4 = 0<=i1;
      i = 0;
      if (!i4) goto l28;
      i4=0;
l16_loop:
      IntStr__IntToStr(i4, (void*)(OOC_INT32)str, 16);
      i5 = *(OOC_INT8*)(_check_pointer(i2, 18060));
      switch (i5) {
      case 4:
        Strings__Insert("i", 2, 0, (void*)(OOC_INT32)str, 16);
        goto l23;
      case 5:
        Strings__Insert("w", 2, 0, (void*)(OOC_INT32)str, 16);
        goto l23;
      case 13:
        Strings__Insert("f", 2, 0, (void*)(OOC_INT32)str, 16);
        goto l23;
      case 14:
        Strings__Insert("d", 2, 0, (void*)(OOC_INT32)str, 16);
        goto l23;
      default:
        _failed_case(i5, 18053);
        goto l23;
      }
l23:
      i5 = _check_pointer(i3, 18526);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i7 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)str, 16);
      *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 18526))*4) = i7;
      i4 = i4+1;
      i5 = i4<=i1;
      i = i4;
      if (i5) goto l16_loop;
l28:
      *(OOC_INT32*)((_check_pointer(i2, 18575))+20) = i3;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 18689)), (OOC_INT32)0);
      i1 = i1-1;
      i4 = 0<=i1;
      i = 0;
      if (!i4) goto l36;
      i4 = (OOC_INT32)registerMap;
      i5=0;
l31_loop:
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18725))+4);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 18737));
      i6 = _check_pointer(i6, 18744);
      i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 18744))*4);
      i7 = _check_pointer(i3, 18792);
      i8 = _check_pointer(i0, 18799);
      i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
      i8 = *(OOC_INT32*)(i8+(_check_index(i5, i9, OOC_UINT32, 18799))*4);
      i9 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
      i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i8, i9, OOC_UINT32, 18792))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 18716)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i4, (Object__Object)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 18752)))), &_td_OOC_SSA__ResultDesc, 18752)), (Object__Object)i7);
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
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 19706))+12);
          i1 = !i1;
          if (!i1) goto l6;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19803))+4);
          i2 = (OOC_INT32)b;
          _assert((i1==i2), 127, 19791);
          i1 = (OOC_INT32)rf;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19861))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19861))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19852));
          i5 = (OOC_INT32)live;
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19869)))), OOC_SSA_IGraph__GraphDesc_CopyVector)),OOC_SSA_IGraph__GraphDesc_CopyVector)((OOC_SSA_IGraph__Graph)i3, (OOC_SSA_IGraph__Vector)i5);
          OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks((OOC_SSA_Allocator__RegisterFile)i1, (OOC_SSA_Schedule__Block)i4, (OOC_SSA_IGraph__Vector)i2);
l6:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19928))+8);
          jump = (OOC_SSA_Schedule__Jump)i0;
          i0 = i0!=(OOC_INT32)0;
          if (i0) goto l3_loop;
l11:
          i0 = (OOC_INT32)loopBlock;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l23;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20249))+32);
          loopTarget = (OOC_SSA_Schedule__Jump)i0;
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 20293))+12);
          i1 = !i1;
          if (!i1) goto l22;
l17_loop:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20349))+8);
          loopTarget = (OOC_SSA_Schedule__Jump)i0;
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 20293))+12);
          i1 = !i1;
          if (i1) goto l17_loop;
l22:
          i1 = (OOC_INT32)rf;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20430))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20430))+12);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20421));
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20438)))), OOC_SSA_IGraph__GraphDesc_NewVector)),OOC_SSA_IGraph__GraphDesc_NewVector)((OOC_SSA_IGraph__Graph)i3);
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20620))+4);
          i1 = *(OOC_UINT8*)((_check_pointer(i1, 20626))+28);
          if (i1) goto l5;
          i0=OOC_FALSE;
          goto l8;
l5:
          i0 = *(OOC_UINT8*)((_check_pointer(i0, 20645))+12);
          
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20746))+12);
          i2 = (OOC_INT32)ld;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20777))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20746))+12);
          i4 = (OOC_INT32)live;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20754)))), OOC_SSA_IGraph__GraphDesc_MergeVector)),OOC_SSA_IGraph__GraphDesc_MergeVector)((OOC_SSA_IGraph__Graph)i0, (OOC_SSA_IGraph__Vector)i4, (OOC_SSA_IGraph__Vector)i3);
          i0 = *(OOC_INT32*)((_check_pointer(i2, 20801))+4);
          *(OOC_INT32*)((_check_pointer(i2, 20801))+4) = (i0+1);
          i0 = *(OOC_INT32*)(_check_pointer(i2, 20852));
          i1 = *(OOC_INT32*)((_check_pointer(i2, 20834))+4);
          _assert((i1<=i0), 127, 20824);
          i0 = *(OOC_INT32*)(_check_pointer(i2, 20910));
          i1 = *(OOC_INT32*)((_check_pointer(i2, 20893))+4);
          i0 = i1==i0;
          if (!i0) goto l6;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20952))+8);
          live = (OOC_SSA_IGraph__Vector)i0;
          i1 = (OOC_INT32)b;
          i2 = (OOC_INT32)rf;
          i0 = (OOC_INT32)OOC_SSA_Allocator__SweepLiveSet((OOC_SSA_Allocator__RegisterFile)i2, (OOC_SSA_Schedule__Block)i1, (OOC_SSA_IGraph__Vector)i0);
          i1 = (OOC_INT32)enterBlock;
          i2 = (OOC_INT32)b;
          i1 = i2!=i1;
          loopBlock = (OOC_SSA_Schedule__Block)i0;
          if (!i1) goto l5;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 21070))+32);
          OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_Propagate((OOC_SSA_Schedule__Jump)i1, (OOC_SSA_Schedule__Block)i0);
l5:
          i0 = (OOC_INT32)b;
          *(OOC_INT32*)((_check_pointer(i0, 21124))+44) = (OOC_INT32)0;
l6:
          return;
          ;
        }


      i0 = (OOC_INT32)b;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21616)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (i1) goto l25;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22056)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
      if (i1) goto l8;
      i1 = (OOC_INT32)live;
      i2 = (OOC_INT32)rf;
      i1 = (OOC_INT32)OOC_SSA_Allocator__SweepLiveSet((OOC_SSA_Allocator__RegisterFile)i2, (OOC_SSA_Schedule__Block)i0, (OOC_SSA_IGraph__Vector)i1);
      i2 = (OOC_INT32)enterBlock;
      i2 = i0!=i2;
      loopBlock = (OOC_SSA_Schedule__Block)i1;
      if (!i2) goto l36;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22634))+32);
      OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_Propagate((OOC_SSA_Schedule__Jump)i0, (OOC_SSA_Schedule__Block)i1);
      goto l36;
l8:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22095))+44);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l11;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22425))+44);
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22432)))), &_td_OOC_SSA_Allocator__LiveDataDesc, 22432);
      ld = (OOC_SSA_Allocator__LiveData)i0;
      
      goto l23;
l11:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22147))+52);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 22153)), (OOC_INT32)0);
      outgoingJumps = i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22187))+52);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 22193)), (OOC_INT32)0);
      i0 = i0-1;
      i1 = 0<=i0;
      i = 0;
      if (!i1) goto l22;
      i1=0;
l14_loop:
      i2 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22231))+52);
      i2 = _check_pointer(i2, 22237);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 22237))*4);
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
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22345))+12);
      i1 = outgoingJumps;
      i0 = (OOC_INT32)OOC_SSA_Allocator__NewLiveData((OOC_SSA_IGraph__Graph)i0, i1);
      ld = (OOC_SSA_Allocator__LiveData)i0;
      i1 = (OOC_INT32)b;
      *(OOC_INT32*)((_check_pointer(i1, 22382))+44) = i0;
      
l23:
      OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_Merge((OOC_SSA_Allocator__LiveData)i0);
      goto l36;
l25:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21655))+44);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l28;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21995))+44);
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22002)))), &_td_OOC_SSA_Allocator__LiveDataDesc, 22002);
      ld = (OOC_SSA_Allocator__LiveData)i0;
      
      goto l35;
l28:
      outgoingJumps = 2;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21732))+60);
      i0 = OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_BackedgeJump((OOC_SSA_Schedule__Jump)i0);
      if (!i0) goto l31;
      i0 = outgoingJumps;
      outgoingJumps = (i0-1);
l31:
      i0 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21824))+48);
      i0 = OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_BackedgeJump((OOC_SSA_Schedule__Jump)i0);
      if (!i0) goto l34;
      i0 = outgoingJumps;
      outgoingJumps = (i0-1);
l34:
      i0 = (OOC_INT32)rf;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21915))+12);
      i1 = outgoingJumps;
      i0 = (OOC_INT32)OOC_SSA_Allocator__NewLiveData((OOC_SSA_IGraph__Graph)i0, i1);
      ld = (OOC_SSA_Allocator__LiveData)i0;
      i1 = (OOC_INT32)b;
      *(OOC_INT32*)((_check_pointer(i1, 21952))+44) = i0;
      
l35:
      OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_Merge((OOC_SSA_Allocator__LiveData)i0);
l36:
      return;
      ;
    }


  i0 = (OOC_INT32)rf;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23373))+4);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 23385))+4);
  i1 = (OOC_INT32)OOC_SSA_IGraph__NewGraph(i1);
  *(OOC_INT32*)((_check_pointer(i0, 23342))+12) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23698))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23698))+12);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23706)))), OOC_SSA_IGraph__GraphDesc_NewVector)),OOC_SSA_IGraph__GraphDesc_NewVector)((OOC_SSA_IGraph__Graph)i2);
  live = (OOC_SSA_IGraph__Vector)i1;
  i2 = (OOC_INT32)exitBlock;
  OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks((OOC_SSA_Allocator__RegisterFile)i0, (OOC_SSA_Schedule__Block)i2, (OOC_SSA_IGraph__Vector)i1);
  i0 = (OOC_INT32)rf;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23769))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23769))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23777)))), OOC_SSA_IGraph__GraphDesc_SymmetricMatrix)),OOC_SSA_IGraph__GraphDesc_SymmetricMatrix)((OOC_SSA_IGraph__Graph)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24001))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24001))+12);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24009)))), OOC_SSA_IGraph__GraphDesc_ColorGraphSimple)),OOC_SSA_IGraph__GraphDesc_ColorGraphSimple)((OOC_SSA_IGraph__Graph)i2);
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
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 24351))+28);
  if (!i1) goto l3;
  closestLoop = (OOC_SSA_Schedule__Block)i0;
l3:
  i1 = (OOC_INT32)closestLoop;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l54;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24450))+8);
  proxy = (OOC_SSA_Schedule__InstrProxy)i3;
  i4 = i3!=(OOC_INT32)0;
  if (!i4) goto l54;
  i4 = (OOC_INT32)rf;
  
l8_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 24513))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 24520))+24);
  opnd = (OOC_SSA__Opnd)i5;
  i6 = i5!=(OOC_INT32)0;
  if (!i6) goto l48;
l11_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 24580));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 24585))+16);
  i6 = i6==i4;
  if (i6) goto l14;
  i6=OOC_FALSE;
  goto l16;
l14:
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 24604)))), OOC_SSA__OpndDesc_IsValueOpnd)),OOC_SSA__OpndDesc_IsValueOpnd)((OOC_SSA__Opnd)i5);
  
l16:
  if (!i6) goto l43;
  loop = (OOC_SSA_Schedule__Block)i1;
  if (i2) goto l20;
  i6=OOC_FALSE;
  goto l22;
l20:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 24956))+8);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 24967));
  i6 = _check_pointer(i6, 24974);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 24979));
  i7 = *(OOC_INT32*)((_check_pointer(i7, 24984))+20);
  i8 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i7, i8, OOC_UINT32, 24974))*4);
  i6 = OOC_SSA_Schedule__Dominates((OOC_SSA_Schedule__Block)i1, (OOC_SSA_Schedule__Block)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 25003)))), &_td_OOC_SSA_Schedule__BlockDesc, 25003)));
  i6 = !i6;
  
l22:
  if (!i6) goto l43;
  i6=i1;
l24_loop:
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 25052));
  OOC_SSA_Allocator__AddToCollect((OOC_SSA_Schedule__Block)i6, (OOC_SSA__Result)i7);
  
l25_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 25109))+4);
  loop = (OOC_SSA_Schedule__Block)i6;
  i7 = i6==(OOC_INT32)0;
  if (i7) goto l28;
  i7 = *(OOC_UINT8*)((_check_pointer(i6, 25159))+28);
  
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
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 24956))+8);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i7, 24967));
  i7 = _check_pointer(i7, 24974);
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 24979));
  i8 = *(OOC_INT32*)((_check_pointer(i8, 24984))+20);
  i9 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i8, i9, OOC_UINT32, 24974))*4);
  i7 = OOC_SSA_Schedule__Dominates((OOC_SSA_Schedule__Block)i6, (OOC_SSA_Schedule__Block)(_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 25003)))), &_td_OOC_SSA_Schedule__BlockDesc, 25003)));
  i7 = !i7;
  
l38:
  if (i7) goto l24_loop;
l43:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 25227))+8);
  opnd = (OOC_SSA__Opnd)i5;
  i6 = i5!=(OOC_INT32)0;
  if (i6) goto l11_loop;
l48:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 25274));
  proxy = (OOC_SSA_Schedule__InstrProxy)i3;
  i5 = i3!=(OOC_INT32)0;
  if (i5) goto l8_loop;
l54:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25326))+16);
  child = (OOC_SSA_Schedule__Block)i0;
  i2 = i0!=(OOC_INT32)0;
  if (!i2) goto l62;
  i2 = (OOC_INT32)rf;
  
l57_loop:
  OOC_SSA_Allocator__CollectCrossLoopResults((OOC_SSA_Allocator__RegisterFile)i2, (OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__Block)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25440));
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
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 26413)), (OOC_INT32)0);
      i1 = i1!=0;
      if (!i1) goto l14;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26435)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26455)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "register ", 10);
      i2 = registerType;
      i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i1, 26509))+24)+(_check_index(i2, 17, OOC_UINT8, 26520))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26493)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, (void*)((_check_pointer(i2, 26534))+1), 32);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26552)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, (OOC_CHAR8)' ');
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 26604)), (OOC_INT32)0);
      i2 = i2-1;
      i3 = 0<=i2;
      i = 0;
      if (!i3) goto l13;
      i3=0;
l5_loop:
      i4 = i3!=0;
      if (!i4) goto l8;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26651)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, (OOC_CHAR8)',');
l8:
      i4 = _check_pointer(i0, 26713);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 26713))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26696)))), OOC_C_DeclWriter__WriterDesc_WriteStr)),OOC_C_DeclWriter__WriterDesc_WriteStr)((OOC_C_DeclWriter__Writer)i1, (Object__String)i4);
      i3 = i3+1;
      i4 = i3<=i2;
      i = i3;
      if (i4) goto l5_loop;
l13:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26741)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, (OOC_CHAR8)';');
l14:
      return;
      ;
    }

    
    void OOC_SSA_Allocator__AssignRegisters_ClearBlockInfo(OOC_SSA_Allocator__BlockList blockList) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 i;

      i0 = (OOC_INT32)blockList;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 26913)), (OOC_INT32)0);
      i1 = i1-1;
      i2 = 0<=i1;
      i = 0;
      if (!i2) goto l8;
      i2=0;
l3_loop:
      i3 = _check_pointer(i0, 26938);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 26938))*4);
      *(OOC_INT32*)((_check_pointer(i3, 26941))+44) = (OOC_INT32)0;
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
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27428))+12);
              i1 = *(OOC_INT8*)((_check_pointer(i1, 27435))+36);
              switch (i1) {
              case 5:
              case 10:
              case 11:
                i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27536))+12);
                return (OOC_SSA__Instr)i1;
                goto l7;
              default:
                goto l7;
              }
l7:
              i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 27605));
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
          *(OOC_INT32*)(_check_pointer(i0, 27758)) = (OOC_INT32)0;
          i1 = (OOC_INT32)b;
          *(OOC_INT32*)((_check_pointer(i0, 27787))+4) = i1;
          *(OOC_INT32*)((_check_pointer(i0, 27811))+12) = (OOC_INT32)0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27870))+8);
          i1 = (OOC_INT32)OOC_SSA_Allocator__AssignRegisters_CheckRegisters_ScanBlock_MergeInstr((OOC_SSA_Schedule__InstrProxy)i1);
          *(OOC_INT32*)((_check_pointer(i0, 27841))+8) = i1;
          i0 = (OOC_INT32)b;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27897))+4);
          i1 = i1==(OOC_INT32)0;
          i2 = (OOC_INT32)bi;
          if (i1) goto l3;
          i1 = *(OOC_INT32*)((_check_pointer(i0, 28070))+36);
          *(OOC_INT32*)((_check_pointer(i2, 28057))+24) = i1;
          goto l4;
l3:
          i1 = (OOC_INT32)root;
          _assert((i0==i1), 127, 27974);
          i1 = *(OOC_INT32*)((_check_pointer(i0, 28018))+36);
          *(OOC_INT32*)((_check_pointer(i2, 28005))+24) = (i1-1);
l4:
          i1 = *(OOC_INT32*)((_check_pointer(i2, 28109))+24);
          i1 = i1>1;
          if (!i1) goto l7;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 28148))+8);
          _assert((i1!=(OOC_INT32)0), 127, 28138);
l7:
          i1 = *(OOC_INT32*)((_check_pointer(i2, 28212))+24);
          *(OOC_INT32*)((_check_pointer(i2, 28197))+16) = ((OOC_INT32)RT0__NewObject(_td_OOC_SSA_Allocator__3151.baseTypes[0], i1));
          i1 = *(OOC_INT32*)((_check_pointer(i2, 28251))+24);
          *(OOC_INT32*)((_check_pointer(i2, 28238))+20) = ((OOC_INT32)RT0__NewObject(_td_OOC_SSA_Allocator__3195.baseTypes[0], i1));
          i1 = *(OOC_INT32*)((_check_pointer(i2, 28285))+24);
          i1 = i1==0;
          if (!i1) goto l18;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28319))+4);
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l16;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28683))+16);
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l14;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28725))+16);
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28735)))), &_td_OOC_SSA_Schedule__DeadEndBlockDesc);
          
          goto l15;
l14:
          i1=OOC_TRUE;
l15:
          _assert(i1, 127, 28673);
          goto l18;
l16:
          i1 = (OOC_INT32)ready;
          *(OOC_INT32*)(_check_pointer(i2, 28487)) = i1;
          ready = (OOC_SSA_Allocator__BlockInfo)i2;
          *(OOC_INT32*)((_check_pointer(i2, 28547))+16) = (OOC_INT32)0;
          *(OOC_INT32*)((_check_pointer(i2, 28581))+20) = (OOC_INT32)0;
          i1 = (OOC_INT32)ADT_Dictionary__New();
          *(OOC_INT32*)((_check_pointer(i2, 28613))+12) = i1;
l18:
          *(OOC_INT32*)((_check_pointer(i0, 29229))+44) = i2;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29262))+16);
          child = (OOC_SSA_Schedule__Block)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l26;
l21_loop:
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_ScanBlock((OOC_SSA_Schedule__Block)i0);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 29357));
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
                  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30551))+20);
                  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 30560)), (OOC_INT32)0);
                  i2 = i2-1;
                  i3 = 0<=i2;
                  i = 0;
                  if (!i3) goto l16;
                  i3=0;
l3_loop:
                  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30592))+20);
                  i4 = _check_pointer(i4, 30601);
                  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
                  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 30601))*4);
                  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30592))+20);
                  i5 = _check_pointer(i5, 30601);
                  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
                  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 30601))*4);
                  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 30604)))), ADT_Dictionary__DictionaryDesc_Keys)),ADT_Dictionary__DictionaryDesc_Keys)((ADT_Dictionary__Dictionary)i5);
                  vars = (Object__ObjectArrayPtr)i4;
                  i5 = OOC_ARRAY_LENGTH((_check_pointer(i4, 30651)), (OOC_INT32)0);
                  i5 = i5-1;
                  i6 = 0<=i5;
                  j = 0;
                  if (!i6) goto l11;
                  i6=0;
l6_loop:
                  i7 = _check_pointer(i4, 30696);
                  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
                  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 30696))*4);
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30685)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i7, (Object__Object)(OOC_INT32)0);
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
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30773)))), ADT_Dictionary__DictionaryDesc_Keys)),ADT_Dictionary__DictionaryDesc_Keys)((ADT_Dictionary__Dictionary)i0);
                  vars = (Object__ObjectArrayPtr)i0;
                  i2 = (OOC_INT32)ADT_Dictionary__New();
                  outState = (ADT_Dictionary__Dictionary)i2;
                  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30871))+20);
                  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 30880)), (OOC_INT32)0);
                  i3 = i3-1;
                  i4 = 0<=i3;
                  i = 0;
                  if (!i4) goto l43;
                  i4=0;
l19_loop:
                  i5 = OOC_ARRAY_LENGTH((_check_pointer(i0, 30925)), (OOC_INT32)0);
                  i5 = i5-1;
                  i6 = 0<=i5;
                  j = 0;
                  if (!i6) goto l38;
                  i6=0;
l22_loop:
                  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30954))+20);
                  i7 = _check_pointer(i7, 30963);
                  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
                  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 30963))*4);
                  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30954))+20);
                  i8 = _check_pointer(i8, 30963);
                  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
                  i10 = _check_pointer(i0, 30980);
                  i11 = OOC_ARRAY_LENGTH(i10, (OOC_INT32)0);
                  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i4, i9, OOC_UINT32, 30963))*4);
                  i9 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i6, i11, OOC_UINT32, 30980))*4);
                  i7 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 30966)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i8, (Object__Object)i9);
                  if (i7) goto l25;
                  i7 = _check_pointer(i0, 31721);
                  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
                  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 31721))*4);
                  i8 = (OOC_INT32)undefinedVar;
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31710)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i7, (Object__Object)i8);
                  goto l33;
l25:
                  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31094))+20);
                  i7 = _check_pointer(i7, 31103);
                  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
                  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 31103))*4);
                  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31094))+20);
                  i8 = _check_pointer(i8, 31103);
                  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
                  i10 = _check_pointer(i0, 31117);
                  i11 = OOC_ARRAY_LENGTH(i10, (OOC_INT32)0);
                  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i4, i9, OOC_UINT32, 31103))*4);
                  i9 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i6, i11, OOC_UINT32, 31117))*4);
                  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 31106)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i8, (Object__Object)i9);
                  value = (Object__Object)i7;
                  i8 = _check_pointer(i0, 31166);
                  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
                  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i6, i9, OOC_UINT32, 31166))*4);
                  i8 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31152)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (Object__Object)i8);
                  if (i8) goto l28;
                  i8 = _check_pointer(i0, 31504);
                  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
                  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i6, i9, OOC_UINT32, 31504))*4);
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31493)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i8, (Object__Object)i7);
                  goto l33;
l28:
                  i8 = _check_pointer(i0, 31219);
                  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
                  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i6, i9, OOC_UINT32, 31219))*4);
                  i8 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31208)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i2, (Object__Object)i8);
                  i7 = i8!=i7;
                  if (!i7) goto l33;
                  i7 = _check_pointer(i0, 31357);
                  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
                  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 31357))*4);
                  i8 = (OOC_INT32)undefinedVar;
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31346)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i7, (Object__Object)i8);
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
                  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32012))+8);
                  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 32024));
                  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 32036));
                  res = (OOC_SSA__Result)i0;
                  i1 = i0!=(OOC_INT32)0;
                  if (!i1) goto l54;
l46_loop:
                  i1 = *(OOC_INT8*)((_check_pointer(i0, 32108))+4);
                  _assert((i1==14), 127, 32097);
                  i1 = (OOC_INT32)registerMap;
                  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32167)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
                  if (!i0) goto l49;
                  i0 = (OOC_INT32)registerMap;
                  i1 = (OOC_INT32)res;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32229)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
                  i1 = (OOC_INT32)res;
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 32211)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i0, (Object__Object)i1);
l49:
                  i0 = (OOC_INT32)res;
                  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 32291));
                  res = (OOC_SSA__Result)i0;
                  i1 = i0!=(OOC_INT32)0;
                  if (i1) goto l46_loop;
l54:
                  return (ADT_Dictionary__Dictionary)i2;
                  ;
                }


              i0 = (OOC_INT32)jump;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32425))+4);
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32431))+44);
              i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32438)))), &_td_OOC_SSA_Allocator__BlockInfoDesc, 32438);
              di = (OOC_SSA_Allocator__BlockInfo)i0;
              i1 = *(OOC_INT32*)((_check_pointer(i0, 32470))+24);
              _assert((i1>0), 127, 32460);
              i1 = *(OOC_INT32*)((_check_pointer(i0, 32502))+24);
              *(OOC_INT32*)((_check_pointer(i0, 32502))+24) = (i1-1);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32525))+16);
              i1 = _check_pointer(i1, 32536);
              i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
              i3 = *(OOC_INT32*)((_check_pointer(i0, 32539))+24);
              i4 = (OOC_INT32)collect;
              *(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 32536))*4) = i4;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32573))+20);
              i1 = _check_pointer(i1, 32582);
              i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
              i3 = *(OOC_INT32*)((_check_pointer(i0, 32585))+24);
              i4 = (OOC_INT32)state;
              i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 32603)))), ADT_Dictionary__DictionaryDesc_Copy)),ADT_Dictionary__DictionaryDesc_Copy)((ADT_Dictionary__Dictionary)i4);
              *(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 32582))*4) = i4;
              i1 = *(OOC_INT32*)((_check_pointer(i0, 32629))+24);
              i1 = i1==0;
              if (!i1) goto l7;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32745))+8);
              i1 = i1!=(OOC_INT32)0;
              if (i1) goto l5;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32868))+20);
              i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 32877)), (OOC_INT32)0);
              _assert((i1==1), 127, 32853);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32919))+20);
              i1 = _check_pointer(i1, 32928);
              i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
              i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 32928))*4);
              *(OOC_INT32*)((_check_pointer(i0, 32902))+12) = i1;
              goto l6;
l5:
              i1 = (OOC_INT32)OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_UpdateTarget_MergeVariables((OOC_SSA_Allocator__BlockInfo)i0);
              *(OOC_INT32*)((_check_pointer(i0, 32786))+12) = i1;
l6:
              i0 = (OOC_INT32)di;
              i1 = (OOC_INT32)ready;
              *(OOC_INT32*)(_check_pointer(i0, 33016)) = i1;
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
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 33365));
              i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33351)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i2);
              if (!i0) goto l10;
              i0 = (OOC_INT32)registerMap;
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 33525));
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33514)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (Object__Object)i2);
              i2 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
              i2 = i0==i2;
              obj = (Object__Object)i0;
              if (i2) goto l8;
              i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33666)))), &_td_Object__StringDesc, 33666);
              defVar = (Object__String)i0;
              i2 = (OOC_INT32)state;
              i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33702)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (Object__Object)i0);
              _assert(i2, 127, 33689);
              i2 = (OOC_INT32)state;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33862)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i2, (Object__Object)i0);
              obj = (Object__Object)i0;
              i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33916)))), &_td_OOC_SSA__ResultDesc, 33916);
              currentValue = (OOC_SSA__Result)i0;
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 33961));
              i2 = i0!=i2;
              if (!i2) goto l10;
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33992))+12);
              i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33992))+12);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33999)))), OOC_SSA__ResultDesc_LogId)),OOC_SSA__ResultDesc_LogId)((OOC_SSA__Result)i3, "using instruction", 18);
              i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34082)))), OOC_SSA__OpndDesc_OpndIndex)),OOC_SSA__OpndDesc_OpndIndex)((OOC_SSA__Opnd)i1);
              Log__LongInt("  operand index", 16, i2);
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 34118));
              i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 34118));
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 34123)))), OOC_SSA__ResultDesc_LogId)),OOC_SSA__ResultDesc_LogId)((OOC_SSA__Result)i1, "  expected value", 17);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34181)))), OOC_SSA__ResultDesc_LogId)),OOC_SSA__ResultDesc_LogId)((OOC_SSA__Result)i0, "  actual value", 15);
              _assert(OOC_FALSE, 127, 34225);
              goto l10;
l8:
              i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 33606));
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33611))+8);
              OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpndList((OOC_SSA__Instr)i0);
l10:
              return;
              ;
            }

            
            void OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpndList(OOC_SSA__Instr instr) {
              register OOC_INT32 i0,i1;
              OOC_SSA__Opnd opnd;

              i0 = (OOC_INT32)instr;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34653))+24);
              opnd = (OOC_SSA__Opnd)i1;
              i0 = *(OOC_INT8*)((_check_pointer(i0, 34684))+36);
              i0 = i0==5;
              if (i0) goto l3;
              i0=i1;
              goto l4;
l3:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34929))+8);
              opnd = (OOC_SSA__Opnd)i0;
              
l4:
              i1 = i0!=(OOC_INT32)0;
              if (!i1) goto l15;
l7_loop:
              i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35007)))), OOC_SSA__OpndDesc_IsValueOpndHere)),OOC_SSA__OpndDesc_IsValueOpndHere)((OOC_SSA__Opnd)i0);
              if (!i1) goto l10;
              OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpnd((OOC_SSA__Opnd)i0);
l10:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35105))+8);
              opnd = (OOC_SSA__Opnd)i0;
              i1 = i0!=(OOC_INT32)0;
              if (i1) goto l7_loop;
l15:
              return;
              ;
            }


          collect = (OOC_SSA__Instr)(OOC_INT32)0;
          i0 = (OOC_INT32)bi;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35218))+4);
          b = (OOC_SSA_Schedule__Block)i0;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35241)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
          if (!i1) goto l3;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35303)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc, 35303)), 35315))+48);
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpnd((OOC_SSA__Opnd)i0);
l3:
          i0 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35364))+8);
          proxy = (OOC_SSA_Schedule__InstrProxy)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l32;
l6_loop:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35427))+12);
          i1 = *(OOC_INT8*)((_check_pointer(i1, 35434))+36);
          i1 = i1==6;
          if (i1) goto l12;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35606))+12);
          i1 = *(OOC_INT8*)((_check_pointer(i1, 35613))+36);
          i1 = i1==5;
          if (!i1) goto l13;
          i1 = (OOC_INT32)b;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35673))+8);
          _assert((i0==i1), 127, 35656);
          goto l13;
l12:
          i1 = (OOC_INT32)collect;
          _assert((i1==(OOC_INT32)0), 127, 35478);
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35527));
          _assert((i1==(OOC_INT32)0), 127, 35514);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35575))+12);
          collect = (OOC_SSA__Instr)i1;
l13:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35722))+12);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35729))+16);
          i2 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
          i1 = i1!=i2;
          if (!i1) goto l27;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35788))+12);
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpndList((OOC_SSA__Instr)i0);
          i0 = (OOC_INT32)proxy;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35835))+12);
          res = (OOC_SSA__Result)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l27;
          i1 = (OOC_INT32)state;
          
l18_loop:
          i2 = (OOC_INT32)registerMap;
          i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 36060)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (Object__Object)i0);
          if (!i2) goto l21;
          i2 = (OOC_INT32)registerMap;
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 36119)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i2, (Object__Object)i0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36101)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i1, (Object__Object)i2, (Object__Object)i0);
l21:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 36196));
          res = (OOC_SSA__Result)i0;
          i2 = i0!=(OOC_INT32)0;
          if (i2) goto l18_loop;
l27:
          i0 = (OOC_INT32)proxy;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 36277));
          proxy = (OOC_SSA_Schedule__InstrProxy)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l6_loop;
l32:
          i0 = (OOC_INT32)b;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36326)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
          if (!i1) goto l35;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36388)))), &_td_OOC_SSA_Schedule__BranchBlockDesc, 36388)), 36400))+52);
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpnd((OOC_SSA__Opnd)i0);
l35:
          i0 = (OOC_INT32)b;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36450)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
          if (i1) goto l57;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36535)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
          if (i1) goto l55;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36676)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
          if (i1) goto l45;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36827)))), &_td_OOC_SSA_Schedule__DeadEndBlockDesc);
          if (i1) goto l58;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36824)))), 36824);
          goto l58;
l45:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36732))+52);
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 36738)), (OOC_INT32)0);
          i0 = i0-1;
          i1 = 0<=i0;
          i = 0;
          if (!i1) goto l58;
          i1=0;
l48_loop:
          i2 = (OOC_INT32)b;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 36773))+52);
          i2 = _check_pointer(i2, 36779);
          i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
          i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 36779))*4);
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
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36586))+48);
          i1 = (OOC_INT32)collect;
          i2 = (OOC_INT32)state;
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_UpdateTarget((OOC_SSA_Schedule__Jump)i0, (ADT_Dictionary__Dictionary)i2, (OOC_SSA__Instr)i1);
          i0 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36636))+60);
          i1 = (OOC_INT32)state;
          i2 = (OOC_INT32)collect;
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_UpdateTarget((OOC_SSA_Schedule__Jump)i0, (ADT_Dictionary__Dictionary)i1, (OOC_SSA__Instr)i2);
          goto l58;
l57:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36499))+48);
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
      _assert((i0!=(OOC_INT32)0), 127, 37034);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 37075));
      _assert((i1==(OOC_INT32)0), 127, 37062);
      if (!(i0!=(OOC_INT32)0)) goto l8;
l3_loop:
      i1 = (OOC_INT32)ready;
      current = (OOC_SSA_Allocator__BlockInfo)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 37305));
      ready = (OOC_SSA_Allocator__BlockInfo)i2;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37353))+12);
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
          _failed_function(37663); return 0;
          ;
        }


      i0 = (OOC_INT32)ADT_Dictionary__New();
      inPlaceEval = (ADT_Dictionary__Dictionary)i0;
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38070))+8);
      i1 = i0!=(OOC_INT32)0;
      instr = (OOC_SSA__Instr)i0;
      if (!i1) goto l55;
l3_loop:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 38129))+5);
      i1 = i1!=0;
      if (i1) goto l6;
      i1=OOC_FALSE;
      goto l8;
l6:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38176))+16);
      i1 = i1!=(OOC_INT32)0;
      
l8:
      if (i1) goto l10;
      i0=OOC_FALSE;
      goto l11;
l10:
      i0 = *(OOC_INT8*)((_check_pointer(i0, 38222))+36);
      i0 = OOC_SSA_Allocator__AssignRegisters_InPlaceEval_FoldedOpcode(i0);
      
l11:
      i1 = (OOC_INT32)instr;
      if (!i0) goto l50;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38266))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38282)))), &_td_OOC_SSA_Schedule__InstrProxyDesc, 38282)), 38293))+8);
      instrBlock = (OOC_SSA_Schedule__Block)i0;
      insideUse = 0;
      outsideUse = 0;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38368))+12);
      use = (OOC_SSA__Opnd)i2;
      i3 = i2!=(OOC_INT32)0;
      if (i3) goto l16;
      i2=0;i3=0;
      goto l34;
l16:
      i3=0;i4=0;
l17_loop:
      i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 38428)))), OOC_SSA__OpndDesc_IsValueOpndHere)),OOC_SSA__OpndDesc_IsValueOpndHere)((OOC_SSA__Opnd)i2);
      if (!i5) goto l29;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 38482))+12);
      useInstr = (OOC_SSA__Instr)i5;
      i6 = *(OOC_INT8*)((_check_pointer(i5, 38517))+36);
      i6 = i6!=6;
      if (i6) goto l23;
      i5=OOC_FALSE;
      goto l25;
l23:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 38572))+16);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 38588)))), &_td_OOC_SSA_Schedule__InstrProxyDesc, 38588)), 38599))+8);
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 38770))+16);
      use = (OOC_SSA__Opnd)i2;
      i5 = i2!=(OOC_INT32)0;
      if (i5) goto l17_loop;
l33:
      i2=i3;i3=i4;
l34:
      i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38821)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (i4) goto l37;
      i0=OOC_FALSE;
      goto l39;
l37:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38882)))), &_td_OOC_SSA_Schedule__BranchBlockDesc, 38882)), 38894))+52);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 38905));
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39056)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
l50:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39126))+28);
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
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 41977));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 41991))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 42007)))), &_td_OOC_SSA_Schedule__InstrProxyDesc, 42007)), 42018))+8);
  exitBlock = (OOC_SSA_Schedule__Block)i2;
  i3 = (OOC_INT32)domRoot;
  enterBlock = (OOC_SSA_Schedule__Block)i3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 42060)))), OOC_SSA__ProcBlockDesc_SetMarkers)),OOC_SSA__ProcBlockDesc_SetMarkers)((OOC_SSA__ProcBlock)i1, (OOC_SSA__Node)(OOC_INT32)0, -1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 42095)))), OOC_SSA_Schedule__BlockDesc_SetInfo)),OOC_SSA_Schedule__BlockDesc_SetInfo)((OOC_SSA_Schedule__Block)i3, (OOC_SSA_Schedule__Info)(OOC_INT32)0);
  i1 = (OOC_INT32)OOC_SSA_Allocator__GetBlockList((OOC_SSA_Schedule__Block)i3, (OOC_SSA_Schedule__Block)i2);
  blockList = (OOC_SSA_Allocator__BlockList)i1;
  i0 = (OOC_INT32)OOC_SSA_Allocator__IdentifyResults((OOC_SSA_Allocator__BlockList)i1, (ADT_Dictionary__Dictionary)i0);
  rfs = (OOC_SSA_Allocator__RegisterFiles)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 42537)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l11;
  i2=0;
l3_loop:
  i4 = _check_pointer(i0, 42558);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 42558))*4);
  i4 = i4!=(OOC_INT32)0;
  if (!i4) goto l6;
  i4 = _check_pointer(i0, 42610);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 42610))*4);
  OOC_SSA_Allocator__CollectCrossLoopResults((OOC_SSA_Allocator__RegisterFile)i4, (OOC_SSA_Schedule__Block)i3, (OOC_SSA_Schedule__Block)(OOC_INT32)0);
l6:
  i2 = i2+1;
  i4 = i2<=i1;
  i = i2;
  if (i4) goto l3_loop;
l11:
  i1 = (OOC_INT32)ADT_Dictionary__New();
  registerMap = (ADT_Dictionary__Dictionary)i1;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 42901)), (OOC_INT32)0);
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l22;
  i1=0;
l14_loop:
  i2 = (OOC_INT32)rfs;
  i2 = _check_pointer(i2, 42922);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 42922))*4);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l17;
  i1 = (OOC_INT32)blockList;
  OOC_SSA_Allocator__AssignRegisters_ClearBlockInfo((OOC_SSA_Allocator__BlockList)i1);
  i1 = (OOC_INT32)rfs;
  i2 = _check_pointer(i1, 43005);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i4 = i;
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i4, i3, OOC_UINT32, 43005))*4);
  i3 = (OOC_INT32)enterBlock;
  i5 = (OOC_INT32)exitBlock;
  i6 = (OOC_INT32)registerMap;
  OOC_SSA_Allocator__AssignRegisterFile((OOC_SSA_Allocator__RegisterFile)i2, (OOC_SSA_Schedule__Block)i3, (OOC_SSA_Schedule__Block)i5, (ADT_Dictionary__Dictionary)i6);
  i2 = _check_pointer(i1, 43073);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i4, i3, OOC_UINT32, 43073))*4);
  i1 = _check_pointer(i1, 43095);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i4, i3, OOC_UINT32, 43095))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 43098))+20);
  i2 = *(OOC_INT8*)(_check_pointer(i2, 43076));
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
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43151)))), ADT_Dictionary__DictionaryDesc_Keys)),ADT_Dictionary__DictionaryDesc_Keys)((ADT_Dictionary__Dictionary)i0);
  keys = (Object__ObjectArrayPtr)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 43188)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  i3 = (OOC_INT32)registerMap;
  if (!i2) goto l30;
  i2=0;
l25_loop:
  i4 = _check_pointer(i0, 43224);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 43224))*4);
  i5 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 43213)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i3, (Object__Object)i4, (Object__Object)i5);
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
