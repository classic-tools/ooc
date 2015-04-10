#include "OOC/SSA/Allocator.d"
#include "__oo2c.h"

static OOC_SSA_Allocator__RegisterFile OOC_SSA_Allocator__NewRegisterFile(OOC_INT8 registerType) {
  register OOC_INT32 i0,i1;
  OOC_SSA_Allocator__RegisterFile rf;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Allocator__RegisterFile.baseTypes[0]);
  rf = (OOC_SSA_Allocator__RegisterFile)i0;
  OOC_SSA__InitNode((OOC_SSA__Node)i0);
  i1 = registerType;
  *(OOC_INT8*)(_check_pointer(i0, 3470)) = i1;
  i1 = (OOC_INT32)ADT_ArrayList__New(16);
  *(OOC_INT32*)((_check_pointer(i0, 3508))+4) = i1;
  i1 = (OOC_INT32)ADT_ArrayList__New(16);
  *(OOC_INT32*)((_check_pointer(i0, 3550))+8) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 3591))+12) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 3614))+16) = -1;
  *(OOC_INT32*)((_check_pointer(i0, 3638))+20) = (OOC_INT32)0;
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
  *(OOC_INT32*)(_check_pointer(i0, 3847)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 3887))+4) = 0;
  i1 = (OOC_INT32)g;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3923)))), OOC_SSA_IGraph__GraphDesc_NewVector)),OOC_SSA_IGraph__GraphDesc_NewVector)((OOC_SSA_IGraph__Graph)i1);
  *(OOC_INT32*)((_check_pointer(i0, 3912))+8) = i1;
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4530))+44);
      i2 = (OOC_INT32)mark;
      i1 = i1!=i2;
      
l5:
      if (!i1) goto l33;
      i1 = (OOC_INT32)mark;
      *(OOC_INT32*)((_check_pointer(i0, 4559))+44) = i1;
      i1 = (OOC_INT32)al;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4586)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (ADT_Object__Object)i0);
      i1 = (OOC_INT32)exitBlock;
      i1 = i0!=i1;
      if (!i1) goto l33;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4649)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (i1) goto l30;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4770)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
      if (i1) goto l28;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4846)))), &_td_OOC_SSA_Schedule__DeadEndBlockDesc);
      if (i1) goto l33;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4918)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
      if (i1) goto l17;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4915)))), 4915);
      goto l33;
l17:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4976))+52);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4982)), 0);
      i1 = i1-1;
      i2 = 0<=i1;
      i = 0;
      if (!i2) goto l33;
      i2=0;
l20_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5016))+52);
      i3 = _check_pointer(i3, 5022);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 5022))*4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5025))+4);
      OOC_SSA_Allocator__GetBlockList_ScanBlock((OOC_SSA_Schedule__Block)i3);
      i2 = i2+1;
      i3 = i2<=i1;
      i = i2;
      if (i3) goto l20_loop;
      goto l33;
l28:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4818))+48);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4824))+4);
      OOC_SSA_Allocator__GetBlockList_ScanBlock((OOC_SSA_Schedule__Block)i0);
      goto l33;
l30:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4699))+60);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4709))+4);
      OOC_SSA_Allocator__GetBlockList_ScanBlock((OOC_SSA_Schedule__Block)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4742))+48);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4748))+4);
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5255))+4);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Allocator__BlockList.baseTypes[0], i1);
  bl = (OOC_SSA_Allocator__BlockList)i1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 5289)), 0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = _check_pointer(i1, 5305);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5314));
  i6 = _check_pointer(i6, 5321);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 5321))*4);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 5305))*4) = (_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 5334)))), &_td_OOC_SSA_Schedule__BlockDesc, 5334));
  i4 = _check_pointer(i1, 5350);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 5350))*4);
  *(OOC_INT32*)((_check_pointer(i4, 5353))+44) = (OOC_INT32)0;
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
    return 12;
    goto l15;
  case 11:
    return 13;
    goto l15;
  default:
    _failed_case(i0, 5608);
    goto l15;
  }
l15:
  _failed_function(5456); return 0;
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
  case 12:
    return 12;
    goto l7;
  case 13:
    return 13;
    goto l7;
  default:
    _failed_case(i0, 6600);
    goto l7;
  }
l7:
  _failed_function(6258); return 0;
  ;
}

static OOC_SSA_Allocator__RegisterFiles OOC_SSA_Allocator__GetRegisterFiles() {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SSA_Allocator__RegisterFiles rfs;
  OOC_INT32 i;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Allocator__RegisterFiles.baseTypes[0], 14);
  rfs = (OOC_SSA_Allocator__RegisterFiles)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 7342)), 0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = _check_pointer(i0, 7359);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 7359))*4) = (OOC_INT32)0;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l3_loop;
l8:
  i1 = _check_pointer(i0, 7438);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = (OOC_INT32)OOC_SSA_Allocator__NewRegisterFile(4);
  *(OOC_INT32*)(i1+(_check_index(4, i2, OOC_UINT8, 7438))*4) = i3;
  i1 = _check_pointer(i0, 7505);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = (OOC_INT32)OOC_SSA_Allocator__NewRegisterFile(5);
  *(OOC_INT32*)(i1+(_check_index(5, i2, OOC_UINT8, 7505))*4) = i3;
  i1 = _check_pointer(i0, 7737);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = (OOC_INT32)OOC_SSA_Allocator__NewRegisterFile(12);
  *(OOC_INT32*)(i1+(_check_index(12, i2, OOC_UINT8, 7737))*4) = i3;
  i1 = _check_pointer(i0, 7804);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = (OOC_INT32)OOC_SSA_Allocator__NewRegisterFile(13);
  *(OOC_INT32*)(i1+(_check_index(13, i2, OOC_UINT8, 7804))*4) = i3;
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
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9180)))), OOC_SSA__InstrDesc_IsConst)),OOC_SSA__InstrDesc_IsConst)((OOC_SSA__Instr)i0);
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
          i3 = _check_pointer(i2, 9466);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i0, i4, OOC_UINT8, 9466))*4);
          *(OOC_INT32*)((_check_pointer(i1, 9453))+16) = i3;
          i3 = _check_pointer(i2, 9504);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i0, i4, OOC_UINT8, 9504))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 9511))+4);
          i3 = *(OOC_INT32*)((_check_pointer(i3, 9523))+4);
          *(OOC_INT32*)((_check_pointer(i1, 9489))+20) = i3;
          i3 = _check_pointer(i2, 9542);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i0, i4, OOC_UINT8, 9542))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 9549))+4);
          i2 = _check_pointer(i2, 9542);
          i4 = OOC_ARRAY_LENGTH(i2, 0);
          i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i0, i4, OOC_UINT8, 9542))*4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9549))+4);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9561)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (ADT_Object__Object)i1);
          i1 = (OOC_INT32)rfs;
          i2 = _check_pointer(i1, 9591);
          i3 = OOC_ARRAY_LENGTH(i2, 0);
          i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i0, i3, OOC_UINT8, 9591))*4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9598))+8);
          i1 = _check_pointer(i1, 9591);
          i3 = OOC_ARRAY_LENGTH(i1, 0);
          i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i3, OOC_UINT8, 9591))*4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9598))+8);
          i1 = (OOC_INT32)b;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9609)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (ADT_Object__Object)i1);
          return;
          ;
        }


      i0 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9680))+8);
      i1 = i0!=(OOC_INT32)0;
      proxy = (OOC_SSA_Schedule__InstrProxy)i0;
      if (!i1) goto l30;
l3_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9744))+12);
      instr = (OOC_SSA__Instr)i0;
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9774)))), OOC_SSA__InstrDesc_GetResultType)),OOC_SSA__InstrDesc_GetResultType)((OOC_SSA__Instr)i0);
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
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9899)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (ADT_Object__Object)i1);
      if (i0) goto l12;
      i0 = type;
      i0 = OOC_SSA_Allocator__SubclassToBasicType(i0);
      OOC_SSA_Allocator__IdentifyResults_ScanBlock_RegisterResult((OOC_SSA__Result)i1, i0);
      goto l14;
l12:
      i0 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
      *(OOC_INT32*)((_check_pointer(i1, 9939))+16) = i0;
l14:
      i0 = (OOC_INT32)instr;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10089));
      res = (OOC_SSA__Result)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l25;
l17_loop:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 10149))+5);
      i1 = i1!=0;
      if (!i1) goto l20;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 10239))+5);
      i1 = OOC_SSA_Allocator__SubclassToBasicType(i1);
      OOC_SSA_Allocator__IdentifyResults_ScanBlock_RegisterResult((OOC_SSA__Result)i0, i1);
l20:
      i0 = (OOC_INT32)res;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10287));
      res = (OOC_SSA__Result)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l17_loop;
l25:
      i0 = (OOC_INT32)proxy;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10335));
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
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 10451)), 0);
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l8;
  i1=0;
l3_loop:
  i2 = (OOC_INT32)blockList;
  i2 = _check_pointer(i2, 10485);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 10485))*4);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10755))+8);
  loopStart = (OOC_SSA_Schedule__InstrProxy)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10788))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 10795))+36);
  i1 = i1!=10;
  if (!i1) goto l9;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10855));
  loopStart = (OOC_SSA_Schedule__InstrProxy)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10788))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 10795))+36);
  i1 = i1!=10;
  if (i1) goto l4_loop;
l9:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10905))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10905))+12);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10912)))), OOC_SSA__InstrDesc_GetBackwardFeed)),OOC_SSA__InstrDesc_GetBackwardFeed)((OOC_SSA__Instr)i0);
  backwardFeed = (OOC_SSA__Result)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10960))+8);
  collect = (OOC_SSA__Instr)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10988))+24);
  i2 = i1!=(OOC_INT32)0;
  opnd = (OOC_SSA__Opnd)i1;
  if (i2) goto l12;
  i2=OOC_FALSE;
  goto l14;
l12:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11030));
  i3 = (OOC_INT32)res;
  i2 = i2!=i3;
  
l14:
  if (!i2) goto l26;
  i2 = (OOC_INT32)res;
  
l17_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11064))+8);
  opnd = (OOC_SSA__Opnd)i1;
  i3 = i1!=(OOC_INT32)0;
  if (i3) goto l20;
  i3=OOC_FALSE;
  goto l22;
l20:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11030));
  i3 = i3!=i2;
  
l22:
  if (i3) goto l17_loop;
l26:
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l29;
  i1 = (OOC_INT32)res;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11123)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 17);
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
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12111))+12);
          i1 = (OOC_INT32)instr;
          i0 = i0!=i1;
          
l5:
          if (!i0) goto l16;
          i0 = (OOC_INT32)instr;
l7_loop:
          i1 = (OOC_INT32)proxy;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12155));
          proxy = (OOC_SSA_Schedule__InstrProxy)i1;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l10;
          i1=OOC_FALSE;
          goto l12;
l10:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12111))+12);
          i1 = i1!=i0;
          
l12:
          if (i1) goto l7_loop;
l16:
          i0 = (OOC_INT32)proxy;
          return (i0!=(OOC_INT32)0);
          ;
        }


      i0 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12267))+16);
      i1 = i0!=(OOC_INT32)0;
      child = (OOC_SSA_Schedule__Block)i0;
      if (i1) goto l3;
      i0=OOC_FALSE;
      goto l5;
l3:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12327))+8);
      i1 = (OOC_INT32)loopStart;
      i0 = OOC_SSA_Allocator__SweepLiveSet_GetLoop_ContainsInstr((OOC_SSA_Schedule__InstrProxy)i0, (OOC_SSA__Instr)i1);
      i0 = !i0;
      
l5:
      if (!i0) goto l16;
l7_loop:
      i0 = (OOC_INT32)child;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12376));
      child = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l10;
      i0=OOC_FALSE;
      goto l12;
l10:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12327))+8);
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
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12451))+4);
      i1 = (OOC_INT32)loopStart;
      i0 = (OOC_INT32)OOC_SSA_Allocator__SweepLiveSet_GetLoop((OOC_SSA_Schedule__Block)i0, (OOC_SSA__Instr)i1);
      return (OOC_SSA_Schedule__Block)i0;
l20:
      _failed_function(11869); return 0;
      ;
    }

    
    void OOC_SSA_Allocator__SweepLiveSet_MarkOpndAsLive(OOC_SSA__Instr instr, OOC_SSA_IGraph__Vector live) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SSA__Opnd opnd;

      i0 = (OOC_INT32)instr;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12662))+24);
      i1 = i0!=(OOC_INT32)0;
      opnd = (OOC_SSA__Opnd)i0;
      if (!i1) goto l22;
      i1 = (OOC_INT32)live;
      
l3_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12718));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12723))+16);
      i3 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
      i2 = i2==i3;
      if (i2) goto l16;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12820));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12825))+16);
      i3 = (OOC_INT32)rf;
      i2 = i2==i3;
      if (i2) goto l8;
      i2=OOC_FALSE;
      goto l10;
l8:
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12844)))), OOC_SSA__OpndDesc_IsValueOpndHere)),OOC_SSA__OpndDesc_IsValueOpndHere)((OOC_SSA__Opnd)i0);
      
l10:
      if (!i2) goto l17;
      i2 = (OOC_INT32)iGraph;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12899));
      i3 = *(OOC_INT32*)((_check_pointer(i3, 12904))+20);
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12889)))), OOC_SSA_IGraph__GraphDesc_In)),OOC_SSA_IGraph__GraphDesc_In)((OOC_SSA_IGraph__Graph)i2, i3, (OOC_SSA_IGraph__Vector)i1);
      i2 = !i2;
      if (!i2) goto l17;
      i2 = (OOC_INT32)iGraph;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13183));
      i3 = *(OOC_INT32*)((_check_pointer(i3, 13188))+20);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13166)))), OOC_SSA_IGraph__GraphDesc_AddToLive)),OOC_SSA_IGraph__GraphDesc_AddToLive)((OOC_SSA_IGraph__Graph)i2, i3, (OOC_SSA_IGraph__Vector)i1);
      goto l17;
l16:
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12780));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12785))+8);
      OOC_SSA_Allocator__SweepLiveSet_MarkOpndAsLive((OOC_SSA__Instr)i2, (OOC_SSA_IGraph__Vector)i1);
l17:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13251))+8);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13386))+16);
      i2 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
      i1 = i1==i2;
      if (i1) goto l10;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13472))+16);
      i2 = (OOC_INT32)rf;
      i1 = i1==i2;
      if (i1) goto l5;
      i1=OOC_FALSE;
      goto l7;
l5:
      i1 = (OOC_INT32)iGraph;
      i2 = *(OOC_INT32*)((_check_pointer(i0, 13503))+20);
      i3 = (OOC_INT32)live;
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13494)))), OOC_SSA_IGraph__GraphDesc_In)),OOC_SSA_IGraph__GraphDesc_In)((OOC_SSA_IGraph__Graph)i1, i2, (OOC_SSA_IGraph__Vector)i3);
      i1 = !i1;
      
l7:
      if (!i1) goto l11;
      i1 = (OOC_INT32)iGraph;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 13554))+20);
      i2 = (OOC_INT32)live;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13538)))), OOC_SSA_IGraph__GraphDesc_AddToLive)),OOC_SSA_IGraph__GraphDesc_AddToLive)((OOC_SSA_IGraph__Graph)i1, i0, (OOC_SSA_IGraph__Vector)i2);
      goto l11;
l10:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13440))+8);
      i1 = (OOC_INT32)live;
      OOC_SSA_Allocator__SweepLiveSet_MarkOpndAsLive((OOC_SSA__Instr)i0, (OOC_SSA_IGraph__Vector)i1);
l11:
      return;
      ;
    }


  i0 = (OOC_INT32)rf;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14169))+12);
  iGraph = (OOC_SSA_IGraph__Graph)i0;
  i0 = (OOC_INT32)b;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14269)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
  if (!i1) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14435))+52);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14446));
  i1 = (OOC_INT32)live;
  OOC_SSA_Allocator__SweepLiveSet_AddResToLive((OOC_SSA__Result)i0, (OOC_SSA_IGraph__Vector)i1);
l3:
  loopEnd = (OOC_SSA_Schedule__InstrProxy)(OOC_INT32)0;
  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14534))+12);
  proxy = (OOC_SSA_Schedule__InstrProxy)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l43;
l6_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14589))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 14596))+36);
  i1 = i1==11;
  if (!i1) goto l9;
  loopEnd = (OOC_SSA_Schedule__InstrProxy)i0;
l9:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14690))+12);
  res = (OOC_SSA__Result)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14712))+16);
  i3 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
  i2 = i2!=i3;
  if (!i2) goto l38;
  i2 = i1!=(OOC_INT32)0;
  i3 = (OOC_INT32)live;
  if (!i2) goto l26;
  i2 = (OOC_INT32)iGraph;
  i4 = (OOC_INT32)rf;
  
l14_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14785))+16);
  i5 = i5==i4;
  if (i5) goto l17;
  i5=OOC_FALSE;
  goto l19;
l17:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14804))+12);
  i5 = i5==(OOC_INT32)0;
  
l19:
  if (!i5) goto l21;
  i5 = *(OOC_INT32*)((_check_pointer(i1, 15233))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15217)))), OOC_SSA_IGraph__GraphDesc_AddToLive)),OOC_SSA_IGraph__GraphDesc_AddToLive)((OOC_SSA_IGraph__Graph)i2, i5, (OOC_SSA_IGraph__Vector)i3);
l21:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15285));
  res = (OOC_SSA__Result)i1;
  i5 = i1!=(OOC_INT32)0;
  if (i5) goto l14_loop;
l26:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15421))+12);
  res = (OOC_SSA__Result)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l37;
  i2 = (OOC_INT32)iGraph;
  i4 = (OOC_INT32)rf;
  
l29_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15476))+16);
  i5 = i5==i4;
  if (!i5) goto l32;
  i5 = *(OOC_INT32*)((_check_pointer(i1, 15533))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15512)))), OOC_SSA_IGraph__GraphDesc_RemoveFromLive)),OOC_SSA_IGraph__GraphDesc_RemoveFromLive)((OOC_SSA_IGraph__Graph)i2, i5, (OOC_SSA_IGraph__Vector)i3);
l32:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15585));
  res = (OOC_SSA__Result)i1;
  i5 = i1!=(OOC_INT32)0;
  if (i5) goto l29_loop;
l37:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16176))+12);
  OOC_SSA_Allocator__SweepLiveSet_MarkOpndAsLive((OOC_SSA__Instr)i0, (OOC_SSA_IGraph__Vector)i3);
l38:
  i0 = (OOC_INT32)proxy;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16230))+4);
  proxy = (OOC_SSA_Schedule__InstrProxy)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l6_loop;
l43:
  i0 = (OOC_INT32)b;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16262)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
  if (!i1) goto l46;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16437))+48);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16443));
  i1 = (OOC_INT32)live;
  OOC_SSA_Allocator__SweepLiveSet_AddResToLive((OOC_SSA__Result)i0, (OOC_SSA_IGraph__Vector)i1);
l46:
  i0 = (OOC_INT32)loopEnd;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l49;
  return (OOC_SSA_Schedule__Block)(OOC_INT32)0;
  goto l65;
l49:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16640))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16692))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16647))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16692))+12);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16699)))), OOC_SSA__InstrDesc_GetLoopStart)),OOC_SSA__InstrDesc_GetLoopStart)((OOC_SSA__Instr)i0);
  i0 = (OOC_INT32)OOC_SSA_Allocator__SweepLiveSet_GetLoop((OOC_SSA_Schedule__Block)i1, (OOC_SSA__Instr)i0);
  loopBlock = (OOC_SSA_Schedule__Block)i0;
  i1 = (OOC_INT32)rf;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16740))+4);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 16752))+4);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l64;
  i3 = (OOC_INT32)live;
  i4 = (OOC_INT32)iGraph;
  i5=0;
l52_loop:
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 16781)))), OOC_SSA_IGraph__GraphDesc_In)),OOC_SSA_IGraph__GraphDesc_In)((OOC_SSA_IGraph__Graph)i4, i5, (OOC_SSA_IGraph__Vector)i3);
  if (i6) goto l55;
  i6=OOC_FALSE;
  goto l57;
l55:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16843))+8);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 16854));
  i6 = _check_pointer(i6, 16861);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 16861))*4);
  i6 = OOC_SSA_Schedule__Dominates((OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__Block)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 16874)))), &_td_OOC_SSA_Schedule__BlockDesc, 16874)));
  i6 = !i6;
  
l57:
  if (!i6) goto l59;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16924))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 16936));
  i6 = _check_pointer(i6, 16943);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 16943))*4);
  OOC_SSA_Allocator__AddToCollect((OOC_SSA_Schedule__Block)i0, (OOC_SSA__Result)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 16951)))), &_td_OOC_SSA__ResultDesc, 16951)));
l59:
  i5 = i5+1;
  i6 = i5<=i2;
  i = i5;
  if (i6) goto l52_loop;
l64:
  return (OOC_SSA_Schedule__Block)i0;
l65:
  _failed_function(11493); return 0;
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
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 17695)), 0);
      i1 = i1-1;
      i2 = 0<=i1;
      i = 0;
      if (i2) goto l3;
      i1=-1;
      goto l13;
l3:
      i2=0;i3=-1;
l4_loop:
      i4 = _check_pointer(i0, 17721);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = *(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 17721))*4);
      i4 = i4>i3;
      if (!i4) goto l8;
      i3 = _check_pointer(i0, 17770);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 17770))*4);
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
      *(OOC_INT32*)((_check_pointer(i2, 17806))+16) = i1;
      i3 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Allocator__NameArray.baseTypes[0], (i1+1));
      names = (OOC_SSA_Allocator__NameArray)i3;
      i4 = 0<=i1;
      i = 0;
      if (!i4) goto l28;
      i4=0;
l16_loop:
      IntStr__IntToStr(i4, (void*)(OOC_INT32)str, 16);
      i5 = *(OOC_INT8*)(_check_pointer(i2, 18083));
      switch (i5) {
      case 4:
        Strings__Insert("i", 2, 0, (void*)(OOC_INT32)str, 16);
        goto l23;
      case 5:
        Strings__Insert("w", 2, 0, (void*)(OOC_INT32)str, 16);
        goto l23;
      case 12:
        Strings__Insert("f", 2, 0, (void*)(OOC_INT32)str, 16);
        goto l23;
      case 13:
        Strings__Insert("d", 2, 0, (void*)(OOC_INT32)str, 16);
        goto l23;
      default:
        _failed_case(i5, 18076);
        goto l23;
      }
l23:
      i5 = _check_pointer(i3, 18549);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i7 = (OOC_INT32)ADT_String__New((void*)(OOC_INT32)str, 16);
      *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 18549))*4) = i7;
      i4 = i4+1;
      i5 = i4<=i1;
      i = i4;
      if (i5) goto l16_loop;
l28:
      *(OOC_INT32*)((_check_pointer(i2, 18593))+20) = i3;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 18707)), 0);
      i1 = i1-1;
      i4 = 0<=i1;
      i = 0;
      if (!i4) goto l36;
      i4 = (OOC_INT32)registerMap;
      i5=0;
l31_loop:
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18743))+4);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 18755));
      i6 = _check_pointer(i6, 18762);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 18762))*4);
      i7 = _check_pointer(i3, 18810);
      i8 = _check_pointer(i0, 18817);
      i9 = OOC_ARRAY_LENGTH(i8, 0);
      i8 = *(OOC_INT32*)(i8+(_check_index(i5, i9, OOC_UINT32, 18817))*4);
      i9 = OOC_ARRAY_LENGTH(i7, 0);
      i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i8, i9, OOC_UINT32, 18810))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 18734)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i4, (ADT_Object__Object)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 18770)))), &_td_OOC_SSA__ResultDesc, 18770)), (ADT_Object__Object)i7);
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
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 19724))+12);
          i1 = !i1;
          if (!i1) goto l6;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19821))+4);
          i2 = (OOC_INT32)b;
          _assert((i1==i2), 127, 19809);
          i1 = (OOC_INT32)rf;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19879))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19879))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19870));
          i5 = (OOC_INT32)live;
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19887)))), OOC_SSA_IGraph__GraphDesc_CopyVector)),OOC_SSA_IGraph__GraphDesc_CopyVector)((OOC_SSA_IGraph__Graph)i3, (OOC_SSA_IGraph__Vector)i5);
          OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks((OOC_SSA_Allocator__RegisterFile)i1, (OOC_SSA_Schedule__Block)i4, (OOC_SSA_IGraph__Vector)i2);
l6:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19946))+8);
          jump = (OOC_SSA_Schedule__Jump)i0;
          i0 = i0!=(OOC_INT32)0;
          if (i0) goto l3_loop;
l11:
          i0 = (OOC_INT32)loopBlock;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l23;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20267))+32);
          loopTarget = (OOC_SSA_Schedule__Jump)i0;
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 20311))+12);
          i1 = !i1;
          if (!i1) goto l22;
l17_loop:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20367))+8);
          loopTarget = (OOC_SSA_Schedule__Jump)i0;
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 20311))+12);
          i1 = !i1;
          if (i1) goto l17_loop;
l22:
          i1 = (OOC_INT32)rf;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20448))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20448))+12);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20439));
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20456)))), OOC_SSA_IGraph__GraphDesc_NewVector)),OOC_SSA_IGraph__GraphDesc_NewVector)((OOC_SSA_IGraph__Graph)i3);
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20638))+4);
          i1 = *(OOC_UINT8*)((_check_pointer(i1, 20644))+28);
          if (i1) goto l5;
          i0=OOC_FALSE;
          goto l8;
l5:
          i0 = *(OOC_UINT8*)((_check_pointer(i0, 20663))+12);
          
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20764))+12);
          i2 = (OOC_INT32)ld;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20795))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20764))+12);
          i4 = (OOC_INT32)live;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20772)))), OOC_SSA_IGraph__GraphDesc_MergeVector)),OOC_SSA_IGraph__GraphDesc_MergeVector)((OOC_SSA_IGraph__Graph)i0, (OOC_SSA_IGraph__Vector)i4, (OOC_SSA_IGraph__Vector)i3);
          i0 = *(OOC_INT32*)((_check_pointer(i2, 20819))+4);
          *(OOC_INT32*)((_check_pointer(i2, 20819))+4) = (i0+1);
          i0 = *(OOC_INT32*)(_check_pointer(i2, 20870));
          i1 = *(OOC_INT32*)((_check_pointer(i2, 20852))+4);
          _assert((i1<=i0), 127, 20842);
          i0 = *(OOC_INT32*)((_check_pointer(i2, 20911))+4);
          i1 = *(OOC_INT32*)(_check_pointer(i2, 20928));
          i0 = i0==i1;
          if (!i0) goto l6;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20970))+8);
          live = (OOC_SSA_IGraph__Vector)i0;
          i1 = (OOC_INT32)b;
          i2 = (OOC_INT32)rf;
          i0 = (OOC_INT32)OOC_SSA_Allocator__SweepLiveSet((OOC_SSA_Allocator__RegisterFile)i2, (OOC_SSA_Schedule__Block)i1, (OOC_SSA_IGraph__Vector)i0);
          i1 = (OOC_INT32)enterBlock;
          i2 = (OOC_INT32)b;
          i1 = i2!=i1;
          loopBlock = (OOC_SSA_Schedule__Block)i0;
          if (!i1) goto l5;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 21088))+32);
          OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_Propagate((OOC_SSA_Schedule__Jump)i1, (OOC_SSA_Schedule__Block)i0);
l5:
          i0 = (OOC_INT32)b;
          *(OOC_INT32*)((_check_pointer(i0, 21142))+44) = (OOC_INT32)0;
l6:
          return;
          ;
        }


      i0 = (OOC_INT32)b;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21634)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (i1) goto l25;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22074)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
      if (i1) goto l8;
      i1 = (OOC_INT32)live;
      i2 = (OOC_INT32)rf;
      i1 = (OOC_INT32)OOC_SSA_Allocator__SweepLiveSet((OOC_SSA_Allocator__RegisterFile)i2, (OOC_SSA_Schedule__Block)i0, (OOC_SSA_IGraph__Vector)i1);
      i2 = (OOC_INT32)enterBlock;
      i2 = i0!=i2;
      loopBlock = (OOC_SSA_Schedule__Block)i1;
      if (!i2) goto l36;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22652))+32);
      OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_Propagate((OOC_SSA_Schedule__Jump)i0, (OOC_SSA_Schedule__Block)i1);
      goto l36;
l8:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22113))+44);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l11;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22443))+44);
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22450)))), &_td_OOC_SSA_Allocator__LiveDataDesc, 22450);
      ld = (OOC_SSA_Allocator__LiveData)i0;
      
      goto l23;
l11:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22165))+52);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 22171)), 0);
      outgoingJumps = i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22205))+52);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 22211)), 0);
      i0 = i0-1;
      i1 = 0<=i0;
      i = 0;
      if (!i1) goto l22;
      i1=0;
l14_loop:
      i2 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22249))+52);
      i2 = _check_pointer(i2, 22255);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 22255))*4);
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
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22363))+12);
      i1 = outgoingJumps;
      i0 = (OOC_INT32)OOC_SSA_Allocator__NewLiveData((OOC_SSA_IGraph__Graph)i0, i1);
      ld = (OOC_SSA_Allocator__LiveData)i0;
      i1 = (OOC_INT32)b;
      *(OOC_INT32*)((_check_pointer(i1, 22400))+44) = i0;
      
l23:
      OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_Merge((OOC_SSA_Allocator__LiveData)i0);
      goto l36;
l25:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21673))+44);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l28;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22013))+44);
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22020)))), &_td_OOC_SSA_Allocator__LiveDataDesc, 22020);
      ld = (OOC_SSA_Allocator__LiveData)i0;
      
      goto l35;
l28:
      outgoingJumps = 2;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21750))+60);
      i0 = OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_BackedgeJump((OOC_SSA_Schedule__Jump)i0);
      if (!i0) goto l31;
      i0 = outgoingJumps;
      outgoingJumps = (i0-1);
l31:
      i0 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21842))+48);
      i0 = OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_BackedgeJump((OOC_SSA_Schedule__Jump)i0);
      if (!i0) goto l34;
      i0 = outgoingJumps;
      outgoingJumps = (i0-1);
l34:
      i0 = (OOC_INT32)rf;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21933))+12);
      i1 = outgoingJumps;
      i0 = (OOC_INT32)OOC_SSA_Allocator__NewLiveData((OOC_SSA_IGraph__Graph)i0, i1);
      ld = (OOC_SSA_Allocator__LiveData)i0;
      i1 = (OOC_INT32)b;
      *(OOC_INT32*)((_check_pointer(i1, 21970))+44) = i0;
      
l35:
      OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_Merge((OOC_SSA_Allocator__LiveData)i0);
l36:
      return;
      ;
    }


  i0 = (OOC_INT32)rf;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23391))+4);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 23403))+4);
  i1 = (OOC_INT32)OOC_SSA_IGraph__NewGraph(i1);
  *(OOC_INT32*)((_check_pointer(i0, 23360))+12) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23716))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23716))+12);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23724)))), OOC_SSA_IGraph__GraphDesc_NewVector)),OOC_SSA_IGraph__GraphDesc_NewVector)((OOC_SSA_IGraph__Graph)i2);
  live = (OOC_SSA_IGraph__Vector)i1;
  i2 = (OOC_INT32)exitBlock;
  OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks((OOC_SSA_Allocator__RegisterFile)i0, (OOC_SSA_Schedule__Block)i2, (OOC_SSA_IGraph__Vector)i1);
  i0 = (OOC_INT32)rf;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23787))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23787))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23795)))), OOC_SSA_IGraph__GraphDesc_SymmetricMatrix)),OOC_SSA_IGraph__GraphDesc_SymmetricMatrix)((OOC_SSA_IGraph__Graph)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24019))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24019))+12);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24027)))), OOC_SSA_IGraph__GraphDesc_ColorGraphSimple)),OOC_SSA_IGraph__GraphDesc_ColorGraphSimple)((OOC_SSA_IGraph__Graph)i2);
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
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 24369))+28);
  if (!i1) goto l3;
  closestLoop = (OOC_SSA_Schedule__Block)i0;
l3:
  i1 = (OOC_INT32)closestLoop;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l54;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24468))+8);
  proxy = (OOC_SSA_Schedule__InstrProxy)i3;
  i4 = i3!=(OOC_INT32)0;
  if (!i4) goto l54;
  i4 = (OOC_INT32)rf;
  
l8_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 24531))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 24538))+24);
  opnd = (OOC_SSA__Opnd)i5;
  i6 = i5!=(OOC_INT32)0;
  if (!i6) goto l48;
l11_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 24598));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 24603))+16);
  i6 = i6==i4;
  if (i6) goto l14;
  i6=OOC_FALSE;
  goto l16;
l14:
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 24622)))), OOC_SSA__OpndDesc_IsValueOpnd)),OOC_SSA__OpndDesc_IsValueOpnd)((OOC_SSA__Opnd)i5);
  
l16:
  if (!i6) goto l43;
  loop = (OOC_SSA_Schedule__Block)i1;
  if (i2) goto l20;
  i6=OOC_FALSE;
  goto l22;
l20:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 24974))+8);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 24985));
  i6 = _check_pointer(i6, 24992);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 24997));
  i7 = *(OOC_INT32*)((_check_pointer(i7, 25002))+20);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i7, i8, OOC_UINT32, 24992))*4);
  i6 = OOC_SSA_Schedule__Dominates((OOC_SSA_Schedule__Block)i1, (OOC_SSA_Schedule__Block)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 25021)))), &_td_OOC_SSA_Schedule__BlockDesc, 25021)));
  i6 = !i6;
  
l22:
  if (!i6) goto l43;
  i6=i1;
l24_loop:
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 25070));
  OOC_SSA_Allocator__AddToCollect((OOC_SSA_Schedule__Block)i6, (OOC_SSA__Result)i7);
  
l25_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 25127))+4);
  loop = (OOC_SSA_Schedule__Block)i6;
  i7 = i6==(OOC_INT32)0;
  if (i7) goto l28;
  i7 = *(OOC_UINT8*)((_check_pointer(i6, 25177))+28);
  
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
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 24974))+8);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i7, 24985));
  i7 = _check_pointer(i7, 24992);
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 24997));
  i8 = *(OOC_INT32*)((_check_pointer(i8, 25002))+20);
  i9 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i8, i9, OOC_UINT32, 24992))*4);
  i7 = OOC_SSA_Schedule__Dominates((OOC_SSA_Schedule__Block)i6, (OOC_SSA_Schedule__Block)(_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 25021)))), &_td_OOC_SSA_Schedule__BlockDesc, 25021)));
  i7 = !i7;
  
l38:
  if (i7) goto l24_loop;
l43:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 25245))+8);
  opnd = (OOC_SSA__Opnd)i5;
  i6 = i5!=(OOC_INT32)0;
  if (i6) goto l11_loop;
l48:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 25292));
  proxy = (OOC_SSA_Schedule__InstrProxy)i3;
  i5 = i3!=(OOC_INT32)0;
  if (i5) goto l8_loop;
l54:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25344))+16);
  child = (OOC_SSA_Schedule__Block)i0;
  i2 = i0!=(OOC_INT32)0;
  if (!i2) goto l62;
  i2 = (OOC_INT32)rf;
  
l57_loop:
  OOC_SSA_Allocator__CollectCrossLoopResults((OOC_SSA_Allocator__RegisterFile)i2, (OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__Block)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25458));
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
  ADT_Object__ObjectArrayPtr keys;
  auto void OOC_SSA_Allocator__AssignRegisters_WriteNames(OOC_C_DeclWriter__Writer w, OOC_INT8 registerType, OOC_SSA_Allocator__NameArray names);
  auto void OOC_SSA_Allocator__AssignRegisters_ClearBlockInfo(OOC_SSA_Allocator__BlockList blockList);
  auto void OOC_SSA_Allocator__AssignRegisters_CheckRegisters(OOC_SSA_Schedule__Block root, ADT_Dictionary__Dictionary registerMap);
  auto ADT_Dictionary__Dictionary OOC_SSA_Allocator__AssignRegisters_InPlaceEval(OOC_SSA__ProcBlock pb);
    
    void OOC_SSA_Allocator__AssignRegisters_WriteNames(OOC_C_DeclWriter__Writer w, OOC_INT8 registerType, OOC_SSA_Allocator__NameArray names) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_INT32 i;

      i0 = (OOC_INT32)names;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 26431)), 0);
      i1 = i1!=0;
      if (!i1) goto l14;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26453)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26473)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "register ", 10);
      i2 = registerType;
      i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i1, 26527))+24)+(_check_index(i2, 16, OOC_UINT8, 26538))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26511)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, (void*)((_check_pointer(i2, 26552))+1), 32);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26570)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, (OOC_CHAR8)' ');
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 26622)), 0);
      i2 = i2-1;
      i3 = 0<=i2;
      i = 0;
      if (!i3) goto l13;
      i3=0;
l5_loop:
      i4 = i3!=0;
      if (!i4) goto l8;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26669)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, (OOC_CHAR8)',');
l8:
      i4 = _check_pointer(i0, 26734);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 26734))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 26737))+4);
      i5 = _check_pointer(i0, 26734);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 26734))*4);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 26737))+4);
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 26744)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26714)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, (void*)(_check_pointer(i4, 26744)), i5);
      i3 = i3+1;
      i4 = i3<=i2;
      i = i3;
      if (i4) goto l5_loop;
l13:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26770)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, (OOC_CHAR8)';');
l14:
      return;
      ;
    }

    
    void OOC_SSA_Allocator__AssignRegisters_ClearBlockInfo(OOC_SSA_Allocator__BlockList blockList) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 i;

      i0 = (OOC_INT32)blockList;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 26942)), 0);
      i1 = i1-1;
      i2 = 0<=i1;
      i = 0;
      if (!i2) goto l8;
      i2=0;
l3_loop:
      i3 = _check_pointer(i0, 26967);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 26967))*4);
      *(OOC_INT32*)((_check_pointer(i3, 26970))+44) = (OOC_INT32)0;
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
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27457))+12);
              i1 = *(OOC_INT8*)((_check_pointer(i1, 27464))+36);
              switch (i1) {
              case 5:
              case 10:
              case 11:
                i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27565))+12);
                return (OOC_SSA__Instr)i1;
                goto l7;
              default:
                goto l7;
              }
l7:
              i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 27634));
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
          *(OOC_INT32*)(_check_pointer(i0, 27787)) = (OOC_INT32)0;
          i1 = (OOC_INT32)b;
          *(OOC_INT32*)((_check_pointer(i0, 27816))+4) = i1;
          *(OOC_INT32*)((_check_pointer(i0, 27840))+12) = (OOC_INT32)0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27899))+8);
          i1 = (OOC_INT32)OOC_SSA_Allocator__AssignRegisters_CheckRegisters_ScanBlock_MergeInstr((OOC_SSA_Schedule__InstrProxy)i1);
          *(OOC_INT32*)((_check_pointer(i0, 27870))+8) = i1;
          i0 = (OOC_INT32)b;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27926))+4);
          i1 = i1==(OOC_INT32)0;
          i2 = (OOC_INT32)bi;
          if (i1) goto l3;
          i1 = *(OOC_INT32*)((_check_pointer(i0, 28099))+36);
          *(OOC_INT32*)((_check_pointer(i2, 28086))+24) = i1;
          goto l4;
l3:
          i1 = (OOC_INT32)root;
          _assert((i0==i1), 127, 28003);
          i1 = *(OOC_INT32*)((_check_pointer(i0, 28047))+36);
          *(OOC_INT32*)((_check_pointer(i2, 28034))+24) = (i1-1);
l4:
          i1 = *(OOC_INT32*)((_check_pointer(i2, 28138))+24);
          i1 = i1>1;
          if (!i1) goto l7;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 28177))+8);
          _assert((i1!=(OOC_INT32)0), 127, 28167);
l7:
          i1 = *(OOC_INT32*)((_check_pointer(i2, 28241))+24);
          *(OOC_INT32*)((_check_pointer(i2, 28226))+16) = ((OOC_INT32)RT0__NewObject(_td_OOC_SSA_Allocator__3174.baseTypes[0], i1));
          i1 = *(OOC_INT32*)((_check_pointer(i2, 28280))+24);
          *(OOC_INT32*)((_check_pointer(i2, 28267))+20) = ((OOC_INT32)RT0__NewObject(_td_OOC_SSA_Allocator__3218.baseTypes[0], i1));
          i1 = *(OOC_INT32*)((_check_pointer(i2, 28314))+24);
          i1 = i1==0;
          if (!i1) goto l18;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28348))+4);
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l16;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28712))+16);
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l14;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28754))+16);
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28764)))), &_td_OOC_SSA_Schedule__DeadEndBlockDesc);
          
          goto l15;
l14:
          i1=OOC_TRUE;
l15:
          _assert(i1, 127, 28702);
          goto l18;
l16:
          i1 = (OOC_INT32)ready;
          *(OOC_INT32*)(_check_pointer(i2, 28516)) = i1;
          ready = (OOC_SSA_Allocator__BlockInfo)i2;
          *(OOC_INT32*)((_check_pointer(i2, 28576))+16) = (OOC_INT32)0;
          *(OOC_INT32*)((_check_pointer(i2, 28610))+20) = (OOC_INT32)0;
          i1 = (OOC_INT32)ADT_Dictionary__New();
          *(OOC_INT32*)((_check_pointer(i2, 28642))+12) = i1;
l18:
          *(OOC_INT32*)((_check_pointer(i0, 29258))+44) = i2;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29291))+16);
          child = (OOC_SSA_Schedule__Block)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l26;
l21_loop:
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_ScanBlock((OOC_SSA_Schedule__Block)i0);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 29386));
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
                  ADT_Object__ObjectArrayPtr vars;
                  OOC_INT32 j;
                  ADT_Dictionary__Dictionary outState;
                  ADT_Object__Object value;

                  i0 = (OOC_INT32)ADT_Dictionary__New();
                  allVarsMap = (ADT_Dictionary__Dictionary)i0;
                  i1 = (OOC_INT32)di;
                  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30580))+20);
                  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 30589)), 0);
                  i2 = i2-1;
                  i3 = 0<=i2;
                  i = 0;
                  if (!i3) goto l16;
                  i3=0;
l3_loop:
                  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30621))+20);
                  i4 = _check_pointer(i4, 30630);
                  i5 = OOC_ARRAY_LENGTH(i4, 0);
                  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 30630))*4);
                  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30621))+20);
                  i5 = _check_pointer(i5, 30630);
                  i6 = OOC_ARRAY_LENGTH(i5, 0);
                  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 30630))*4);
                  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 30633)))), ADT_Dictionary__DictionaryDesc_Keys)),ADT_Dictionary__DictionaryDesc_Keys)((ADT_Dictionary__Dictionary)i5);
                  vars = (ADT_Object__ObjectArrayPtr)i4;
                  i5 = OOC_ARRAY_LENGTH((_check_pointer(i4, 30680)), 0);
                  i5 = i5-1;
                  i6 = 0<=i5;
                  j = 0;
                  if (!i6) goto l11;
                  i6=0;
l6_loop:
                  i7 = _check_pointer(i4, 30725);
                  i8 = OOC_ARRAY_LENGTH(i7, 0);
                  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 30725))*4);
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30714)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (ADT_Object__Object)i7, (ADT_Object__Object)(OOC_INT32)0);
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
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30802)))), ADT_Dictionary__DictionaryDesc_Keys)),ADT_Dictionary__DictionaryDesc_Keys)((ADT_Dictionary__Dictionary)i0);
                  vars = (ADT_Object__ObjectArrayPtr)i0;
                  i2 = (OOC_INT32)ADT_Dictionary__New();
                  outState = (ADT_Dictionary__Dictionary)i2;
                  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30900))+20);
                  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 30909)), 0);
                  i3 = i3-1;
                  i4 = 0<=i3;
                  i = 0;
                  if (!i4) goto l43;
                  i4=0;
l19_loop:
                  i5 = OOC_ARRAY_LENGTH((_check_pointer(i0, 30954)), 0);
                  i5 = i5-1;
                  i6 = 0<=i5;
                  j = 0;
                  if (!i6) goto l38;
                  i6=0;
l22_loop:
                  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30983))+20);
                  i7 = _check_pointer(i7, 30992);
                  i8 = OOC_ARRAY_LENGTH(i7, 0);
                  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 30992))*4);
                  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30983))+20);
                  i8 = _check_pointer(i8, 30992);
                  i9 = OOC_ARRAY_LENGTH(i8, 0);
                  i10 = _check_pointer(i0, 31009);
                  i11 = OOC_ARRAY_LENGTH(i10, 0);
                  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i4, i9, OOC_UINT32, 30992))*4);
                  i9 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i6, i11, OOC_UINT32, 31009))*4);
                  i7 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 30995)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i8, (ADT_Object__Object)i9);
                  if (i7) goto l25;
                  i7 = _check_pointer(i0, 31750);
                  i8 = OOC_ARRAY_LENGTH(i7, 0);
                  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 31750))*4);
                  i8 = (OOC_INT32)undefinedVar;
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31739)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (ADT_Object__Object)i7, (ADT_Object__Object)i8);
                  goto l33;
l25:
                  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31123))+20);
                  i7 = _check_pointer(i7, 31132);
                  i8 = OOC_ARRAY_LENGTH(i7, 0);
                  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 31132))*4);
                  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31123))+20);
                  i8 = _check_pointer(i8, 31132);
                  i9 = OOC_ARRAY_LENGTH(i8, 0);
                  i10 = _check_pointer(i0, 31146);
                  i11 = OOC_ARRAY_LENGTH(i10, 0);
                  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i4, i9, OOC_UINT32, 31132))*4);
                  i9 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i6, i11, OOC_UINT32, 31146))*4);
                  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 31135)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i8, (ADT_Object__Object)i9);
                  value = (ADT_Object__Object)i7;
                  i8 = _check_pointer(i0, 31195);
                  i9 = OOC_ARRAY_LENGTH(i8, 0);
                  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i6, i9, OOC_UINT32, 31195))*4);
                  i8 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31181)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (ADT_Object__Object)i8);
                  if (i8) goto l28;
                  i8 = _check_pointer(i0, 31533);
                  i9 = OOC_ARRAY_LENGTH(i8, 0);
                  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i6, i9, OOC_UINT32, 31533))*4);
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31522)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (ADT_Object__Object)i8, (ADT_Object__Object)i7);
                  goto l33;
l28:
                  i8 = _check_pointer(i0, 31248);
                  i9 = OOC_ARRAY_LENGTH(i8, 0);
                  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i6, i9, OOC_UINT32, 31248))*4);
                  i8 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31237)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i2, (ADT_Object__Object)i8);
                  i7 = i8!=i7;
                  if (!i7) goto l33;
                  i7 = _check_pointer(i0, 31386);
                  i8 = OOC_ARRAY_LENGTH(i7, 0);
                  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 31386))*4);
                  i8 = (OOC_INT32)undefinedVar;
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31375)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (ADT_Object__Object)i7, (ADT_Object__Object)i8);
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
                  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32041))+8);
                  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 32053));
                  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 32065));
                  res = (OOC_SSA__Result)i0;
                  i1 = i0!=(OOC_INT32)0;
                  if (!i1) goto l54;
l46_loop:
                  i1 = *(OOC_INT8*)((_check_pointer(i0, 32137))+4);
                  _assert((i1==14), 127, 32126);
                  i1 = (OOC_INT32)registerMap;
                  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32196)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i1, (ADT_Object__Object)i0);
                  if (!i0) goto l49;
                  i0 = (OOC_INT32)registerMap;
                  i1 = (OOC_INT32)res;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32258)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (ADT_Object__Object)i1);
                  i1 = (OOC_INT32)res;
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 32240)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (ADT_Object__Object)i0, (ADT_Object__Object)i1);
l49:
                  i0 = (OOC_INT32)res;
                  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 32320));
                  res = (OOC_SSA__Result)i0;
                  i1 = i0!=(OOC_INT32)0;
                  if (i1) goto l46_loop;
l54:
                  return (ADT_Dictionary__Dictionary)i2;
                  ;
                }


              i0 = (OOC_INT32)jump;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32454))+4);
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32460))+44);
              i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32467)))), &_td_OOC_SSA_Allocator__BlockInfoDesc, 32467);
              di = (OOC_SSA_Allocator__BlockInfo)i0;
              i1 = *(OOC_INT32*)((_check_pointer(i0, 32499))+24);
              _assert((i1>0), 127, 32489);
              i1 = *(OOC_INT32*)((_check_pointer(i0, 32531))+24);
              *(OOC_INT32*)((_check_pointer(i0, 32531))+24) = (i1-1);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32554))+16);
              i1 = _check_pointer(i1, 32565);
              i2 = OOC_ARRAY_LENGTH(i1, 0);
              i3 = *(OOC_INT32*)((_check_pointer(i0, 32568))+24);
              i4 = (OOC_INT32)collect;
              *(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 32565))*4) = i4;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32602))+20);
              i1 = _check_pointer(i1, 32611);
              i2 = OOC_ARRAY_LENGTH(i1, 0);
              i3 = *(OOC_INT32*)((_check_pointer(i0, 32614))+24);
              i4 = (OOC_INT32)state;
              i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 32632)))), ADT_Dictionary__DictionaryDesc_Copy)),ADT_Dictionary__DictionaryDesc_Copy)((ADT_Dictionary__Dictionary)i4);
              *(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 32611))*4) = i4;
              i1 = *(OOC_INT32*)((_check_pointer(i0, 32658))+24);
              i1 = i1==0;
              if (!i1) goto l7;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32774))+8);
              i1 = i1!=(OOC_INT32)0;
              if (i1) goto l5;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32897))+20);
              i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 32906)), 0);
              _assert((i1==1), 127, 32882);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32948))+20);
              i1 = _check_pointer(i1, 32957);
              i2 = OOC_ARRAY_LENGTH(i1, 0);
              i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 32957))*4);
              *(OOC_INT32*)((_check_pointer(i0, 32931))+12) = i1;
              goto l6;
l5:
              i1 = (OOC_INT32)OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_UpdateTarget_MergeVariables((OOC_SSA_Allocator__BlockInfo)i0);
              *(OOC_INT32*)((_check_pointer(i0, 32815))+12) = i1;
l6:
              i0 = (OOC_INT32)di;
              i1 = (OOC_INT32)ready;
              *(OOC_INT32*)(_check_pointer(i0, 33045)) = i1;
              ready = (OOC_SSA_Allocator__BlockInfo)i0;
l7:
              return;
              ;
            }

            
            void OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpnd(OOC_SSA__Opnd opnd) {
              register OOC_INT32 i0,i1,i2,i3;
              ADT_Object__Object obj;
              ADT_String__String defVar;
              OOC_SSA__Result currentValue;

              i0 = (OOC_INT32)registerMap;
              i1 = (OOC_INT32)opnd;
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 33401));
              i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33387)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (ADT_Object__Object)i2);
              if (!i0) goto l10;
              i0 = (OOC_INT32)registerMap;
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 33561));
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33550)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (ADT_Object__Object)i2);
              i2 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
              i2 = i0==i2;
              obj = (ADT_Object__Object)i0;
              if (i2) goto l8;
              i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33709)))), &_td_ADT_String__StringDesc, 33709);
              defVar = (ADT_String__String)i0;
              i2 = (OOC_INT32)state;
              i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33745)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (ADT_Object__Object)i0);
              _assert(i2, 127, 33732);
              i2 = (OOC_INT32)state;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33905)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i2, (ADT_Object__Object)i0);
              obj = (ADT_Object__Object)i0;
              i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33959)))), &_td_OOC_SSA__ResultDesc, 33959);
              currentValue = (OOC_SSA__Result)i0;
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 34004));
              i2 = i0!=i2;
              if (!i2) goto l10;
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34035))+12);
              i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34035))+12);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 34042)))), OOC_SSA__ResultDesc_LogId)),OOC_SSA__ResultDesc_LogId)((OOC_SSA__Result)i3, "using instruction", 18);
              i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34125)))), OOC_SSA__OpndDesc_OpndIndex)),OOC_SSA__OpndDesc_OpndIndex)((OOC_SSA__Opnd)i1);
              Log__LongInt("  operand index", 16, i2);
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 34161));
              i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 34161));
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 34166)))), OOC_SSA__ResultDesc_LogId)),OOC_SSA__ResultDesc_LogId)((OOC_SSA__Result)i1, "  expected value", 17);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34224)))), OOC_SSA__ResultDesc_LogId)),OOC_SSA__ResultDesc_LogId)((OOC_SSA__Result)i0, "  actual value", 15);
              _assert(OOC_FALSE, 127, 34268);
              goto l10;
l8:
              i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 33642));
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33647))+8);
              OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpndList((OOC_SSA__Instr)i0);
l10:
              return;
              ;
            }

            
            void OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpndList(OOC_SSA__Instr instr) {
              register OOC_INT32 i0,i1;
              OOC_SSA__Opnd opnd;

              i0 = (OOC_INT32)instr;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34696))+24);
              opnd = (OOC_SSA__Opnd)i1;
              i0 = *(OOC_INT8*)((_check_pointer(i0, 34727))+36);
              i0 = i0==5;
              if (i0) goto l3;
              i0=i1;
              goto l4;
l3:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34972))+8);
              opnd = (OOC_SSA__Opnd)i0;
              
l4:
              i1 = i0!=(OOC_INT32)0;
              if (!i1) goto l15;
l7_loop:
              i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35050)))), OOC_SSA__OpndDesc_IsValueOpndHere)),OOC_SSA__OpndDesc_IsValueOpndHere)((OOC_SSA__Opnd)i0);
              if (!i1) goto l10;
              OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpnd((OOC_SSA__Opnd)i0);
l10:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35148))+8);
              opnd = (OOC_SSA__Opnd)i0;
              i1 = i0!=(OOC_INT32)0;
              if (i1) goto l7_loop;
l15:
              return;
              ;
            }


          collect = (OOC_SSA__Instr)(OOC_INT32)0;
          i0 = (OOC_INT32)bi;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35261))+4);
          b = (OOC_SSA_Schedule__Block)i0;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35284)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
          if (!i1) goto l3;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35346)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc, 35346)), 35358))+48);
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpnd((OOC_SSA__Opnd)i0);
l3:
          i0 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35407))+8);
          proxy = (OOC_SSA_Schedule__InstrProxy)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l32;
l6_loop:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35470))+12);
          i1 = *(OOC_INT8*)((_check_pointer(i1, 35477))+36);
          i1 = i1==6;
          if (i1) goto l12;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35649))+12);
          i1 = *(OOC_INT8*)((_check_pointer(i1, 35656))+36);
          i1 = i1==5;
          if (!i1) goto l13;
          i1 = (OOC_INT32)b;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35716))+8);
          _assert((i0==i1), 127, 35699);
          goto l13;
l12:
          i1 = (OOC_INT32)collect;
          _assert((i1==(OOC_INT32)0), 127, 35521);
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35570));
          _assert((i1==(OOC_INT32)0), 127, 35557);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35618))+12);
          collect = (OOC_SSA__Instr)i1;
l13:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35765))+12);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35772))+16);
          i2 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
          i1 = i1!=i2;
          if (!i1) goto l27;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35831))+12);
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpndList((OOC_SSA__Instr)i0);
          i0 = (OOC_INT32)proxy;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35878))+12);
          res = (OOC_SSA__Result)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l27;
          i1 = (OOC_INT32)state;
          
l18_loop:
          i2 = (OOC_INT32)registerMap;
          i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 36103)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (ADT_Object__Object)i0);
          if (!i2) goto l21;
          i2 = (OOC_INT32)registerMap;
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 36162)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i2, (ADT_Object__Object)i0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36144)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i1, (ADT_Object__Object)i2, (ADT_Object__Object)i0);
l21:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 36239));
          res = (OOC_SSA__Result)i0;
          i2 = i0!=(OOC_INT32)0;
          if (i2) goto l18_loop;
l27:
          i0 = (OOC_INT32)proxy;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 36320));
          proxy = (OOC_SSA_Schedule__InstrProxy)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l6_loop;
l32:
          i0 = (OOC_INT32)b;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36369)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
          if (!i1) goto l35;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36431)))), &_td_OOC_SSA_Schedule__BranchBlockDesc, 36431)), 36443))+52);
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpnd((OOC_SSA__Opnd)i0);
l35:
          i0 = (OOC_INT32)b;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36493)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
          if (i1) goto l57;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36578)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
          if (i1) goto l55;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36719)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
          if (i1) goto l45;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36870)))), &_td_OOC_SSA_Schedule__DeadEndBlockDesc);
          if (i1) goto l58;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36867)))), 36867);
          goto l58;
l45:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36775))+52);
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 36781)), 0);
          i0 = i0-1;
          i1 = 0<=i0;
          i = 0;
          if (!i1) goto l58;
          i1=0;
l48_loop:
          i2 = (OOC_INT32)b;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 36816))+52);
          i2 = _check_pointer(i2, 36822);
          i3 = OOC_ARRAY_LENGTH(i2, 0);
          i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 36822))*4);
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
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36629))+48);
          i1 = (OOC_INT32)collect;
          i2 = (OOC_INT32)state;
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_UpdateTarget((OOC_SSA_Schedule__Jump)i0, (ADT_Dictionary__Dictionary)i2, (OOC_SSA__Instr)i1);
          i0 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36679))+60);
          i1 = (OOC_INT32)state;
          i2 = (OOC_INT32)collect;
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_UpdateTarget((OOC_SSA_Schedule__Jump)i0, (ADT_Dictionary__Dictionary)i1, (OOC_SSA__Instr)i2);
          goto l58;
l57:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36542))+48);
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
      _assert((i0!=(OOC_INT32)0), 127, 37077);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 37118));
      _assert((i1==(OOC_INT32)0), 127, 37105);
      if (!(i0!=(OOC_INT32)0)) goto l8;
l3_loop:
      i1 = (OOC_INT32)ready;
      current = (OOC_SSA_Allocator__BlockInfo)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 37348));
      ready = (OOC_SSA_Allocator__BlockInfo)i2;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37396))+12);
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
          _failed_function(37706); return 0;
          ;
        }


      i0 = (OOC_INT32)ADT_Dictionary__New();
      inPlaceEval = (ADT_Dictionary__Dictionary)i0;
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38113))+8);
      i1 = i0!=(OOC_INT32)0;
      instr = (OOC_SSA__Instr)i0;
      if (!i1) goto l55;
l3_loop:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 38172))+5);
      i1 = i1!=0;
      if (i1) goto l6;
      i1=OOC_FALSE;
      goto l8;
l6:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38219))+16);
      i1 = i1!=(OOC_INT32)0;
      
l8:
      if (i1) goto l10;
      i0=OOC_FALSE;
      goto l11;
l10:
      i0 = *(OOC_INT8*)((_check_pointer(i0, 38265))+36);
      i0 = OOC_SSA_Allocator__AssignRegisters_InPlaceEval_FoldedOpcode(i0);
      
l11:
      i1 = (OOC_INT32)instr;
      if (!i0) goto l50;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38309))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38325)))), &_td_OOC_SSA_Schedule__InstrProxyDesc, 38325)), 38336))+8);
      instrBlock = (OOC_SSA_Schedule__Block)i0;
      insideUse = 0;
      outsideUse = 0;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38411))+12);
      use = (OOC_SSA__Opnd)i2;
      i3 = i2!=(OOC_INT32)0;
      if (i3) goto l16;
      i2=0;i3=0;
      goto l34;
l16:
      i3=0;i4=0;
l17_loop:
      i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 38471)))), OOC_SSA__OpndDesc_IsValueOpndHere)),OOC_SSA__OpndDesc_IsValueOpndHere)((OOC_SSA__Opnd)i2);
      if (!i5) goto l29;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 38525))+12);
      useInstr = (OOC_SSA__Instr)i5;
      i6 = *(OOC_INT8*)((_check_pointer(i5, 38560))+36);
      i6 = i6!=6;
      if (i6) goto l23;
      i5=OOC_FALSE;
      goto l25;
l23:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 38615))+16);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 38631)))), &_td_OOC_SSA_Schedule__InstrProxyDesc, 38631)), 38642))+8);
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 38813))+16);
      use = (OOC_SSA__Opnd)i2;
      i5 = i2!=(OOC_INT32)0;
      if (i5) goto l17_loop;
l33:
      i2=i3;i3=i4;
l34:
      i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38864)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (i4) goto l37;
      i0=OOC_FALSE;
      goto l39;
l37:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38925)))), &_td_OOC_SSA_Schedule__BranchBlockDesc, 38925)), 38937))+52);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 38948));
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39099)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (ADT_Object__Object)i1, (ADT_Object__Object)(OOC_INT32)0);
l50:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39169))+28);
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
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 42020));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 42034))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 42050)))), &_td_OOC_SSA_Schedule__InstrProxyDesc, 42050)), 42061))+8);
  exitBlock = (OOC_SSA_Schedule__Block)i2;
  i3 = (OOC_INT32)domRoot;
  enterBlock = (OOC_SSA_Schedule__Block)i3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 42103)))), OOC_SSA__ProcBlockDesc_SetMarkers)),OOC_SSA__ProcBlockDesc_SetMarkers)((OOC_SSA__ProcBlock)i1, (OOC_SSA__Node)(OOC_INT32)0, -1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 42138)))), OOC_SSA_Schedule__BlockDesc_SetInfo)),OOC_SSA_Schedule__BlockDesc_SetInfo)((OOC_SSA_Schedule__Block)i3, (OOC_SSA_Schedule__Info)(OOC_INT32)0);
  i1 = (OOC_INT32)OOC_SSA_Allocator__GetBlockList((OOC_SSA_Schedule__Block)i3, (OOC_SSA_Schedule__Block)i2);
  blockList = (OOC_SSA_Allocator__BlockList)i1;
  i0 = (OOC_INT32)OOC_SSA_Allocator__IdentifyResults((OOC_SSA_Allocator__BlockList)i1, (ADT_Dictionary__Dictionary)i0);
  rfs = (OOC_SSA_Allocator__RegisterFiles)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 42580)), 0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l11;
  i2=0;
l3_loop:
  i4 = _check_pointer(i0, 42601);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 42601))*4);
  i4 = i4!=(OOC_INT32)0;
  if (!i4) goto l6;
  i4 = _check_pointer(i0, 42653);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 42653))*4);
  OOC_SSA_Allocator__CollectCrossLoopResults((OOC_SSA_Allocator__RegisterFile)i4, (OOC_SSA_Schedule__Block)i3, (OOC_SSA_Schedule__Block)(OOC_INT32)0);
l6:
  i2 = i2+1;
  i4 = i2<=i1;
  i = i2;
  if (i4) goto l3_loop;
l11:
  i1 = (OOC_INT32)ADT_Dictionary__New();
  registerMap = (ADT_Dictionary__Dictionary)i1;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 42944)), 0);
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l22;
  i1=0;
l14_loop:
  i2 = (OOC_INT32)rfs;
  i2 = _check_pointer(i2, 42965);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 42965))*4);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l17;
  i1 = (OOC_INT32)blockList;
  OOC_SSA_Allocator__AssignRegisters_ClearBlockInfo((OOC_SSA_Allocator__BlockList)i1);
  i1 = (OOC_INT32)rfs;
  i2 = _check_pointer(i1, 43048);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = i;
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i4, i3, OOC_UINT32, 43048))*4);
  i3 = (OOC_INT32)enterBlock;
  i5 = (OOC_INT32)exitBlock;
  i6 = (OOC_INT32)registerMap;
  OOC_SSA_Allocator__AssignRegisterFile((OOC_SSA_Allocator__RegisterFile)i2, (OOC_SSA_Schedule__Block)i3, (OOC_SSA_Schedule__Block)i5, (ADT_Dictionary__Dictionary)i6);
  i2 = _check_pointer(i1, 43116);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i4, i3, OOC_UINT32, 43116))*4);
  i1 = _check_pointer(i1, 43138);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i4, i3, OOC_UINT32, 43138))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 43141))+20);
  i2 = *(OOC_INT8*)(_check_pointer(i2, 43119));
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
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43194)))), ADT_Dictionary__DictionaryDesc_Keys)),ADT_Dictionary__DictionaryDesc_Keys)((ADT_Dictionary__Dictionary)i0);
  keys = (ADT_Object__ObjectArrayPtr)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 43231)), 0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  i3 = (OOC_INT32)registerMap;
  if (!i2) goto l30;
  i2=0;
l25_loop:
  i4 = _check_pointer(i0, 43267);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 43267))*4);
  i5 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 43256)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i3, (ADT_Object__Object)i4, (ADT_Object__Object)i5);
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
