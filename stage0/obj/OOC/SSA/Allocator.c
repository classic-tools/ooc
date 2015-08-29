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
  *(OOC_INT8*)(_check_pointer(i0, 3446)) = i1;
  i1 = (OOC_INT32)ADT_ArrayList__New(16);
  *(OOC_INT32*)((_check_pointer(i0, 3484))+4) = i1;
  i1 = (OOC_INT32)ADT_ArrayList__New(16);
  *(OOC_INT32*)((_check_pointer(i0, 3526))+8) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 3567))+12) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 3590))+16) = (-1);
  *(OOC_INT32*)((_check_pointer(i0, 3614))+20) = 0;
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
  *(OOC_INT32*)(_check_pointer(i0, 3823)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 3863))+4) = 0;
  i1 = (OOC_INT32)g;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3899)))), OOC_SSA_IGraph__GraphDesc_NewVector)),OOC_SSA_IGraph__GraphDesc_NewVector)((OOC_SSA_IGraph__Graph)i1);
  *(OOC_INT32*)((_check_pointer(i0, 3888))+8) = i1;
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
      i1=0u;
      goto l5;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4506))+44);
      i2 = (OOC_INT32)mark;
      i1 = i1!=i2;
      
l5:
      if (!i1) goto l33;
      i1 = (OOC_INT32)mark;
      *(OOC_INT32*)((_check_pointer(i0, 4535))+44) = i1;
      i1 = (OOC_INT32)al;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4562)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i0);
      i1 = (OOC_INT32)exitBlock;
      i1 = i0!=i1;
      if (!i1) goto l33;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4625)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (i1) goto l30;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4746)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
      if (i1) goto l28;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4822)))), &_td_OOC_SSA_Schedule__DeadEndBlockDesc);
      if (i1) goto l33;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4894)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
      if (i1) goto l17;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4891)))), 4891);
      goto l33;
l17:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4952))+52);
      i = 0;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4958)), 0);
      i2 = 0<i1;
      if (!i2) goto l33;
      i2=0;
l20_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4992))+52);
      i3 = _check_pointer(i3, 4998);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 4998))*4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5001))+4);
      OOC_SSA_Allocator__GetBlockList_ScanBlock((OOC_SSA_Schedule__Block)i3);
      i2 = i2+1;
      i = i2;
      i3 = i2<i1;
      if (i3) goto l20_loop;
      goto l33;
l28:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4794))+48);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4800))+4);
      OOC_SSA_Allocator__GetBlockList_ScanBlock((OOC_SSA_Schedule__Block)i0);
      goto l33;
l30:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4675))+60);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4685))+4);
      OOC_SSA_Allocator__GetBlockList_ScanBlock((OOC_SSA_Schedule__Block)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4718))+48);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4724))+4);
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5231))+4);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Allocator__BlockList.baseTypes[0], i1);
  bl = (OOC_SSA_Allocator__BlockList)i1;
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 5265)), 0);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = _check_pointer(i1, 5281);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5290));
  i6 = _check_pointer(i6, 5297);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 5297))*4);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 5281))*4) = (_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 5310)))), &_td_OOC_SSA_Schedule__BlockDesc, 5310));
  i4 = _check_pointer(i1, 5326);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 5326))*4);
  *(OOC_INT32*)((_check_pointer(i4, 5329))+44) = 0;
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
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
    return 4;
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
    _failed_case(i0, 5581);
    goto l15;
  }
l15:
  _failed_function(5432); return 0;
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
    _failed_case(i0, 6689);
    goto l7;
  }
l7:
  _failed_function(6347); return 0;
  ;
}

static OOC_SSA_Allocator__RegisterFiles OOC_SSA_Allocator__GetRegisterFiles() {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SSA_Allocator__RegisterFiles rfs;
  OOC_INT32 i;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Allocator__RegisterFiles.baseTypes[0], 15);
  rfs = (OOC_SSA_Allocator__RegisterFiles)i0;
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 7431)), 0);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = _check_pointer(i0, 7448);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 7448))*4) = (OOC_INT32)0;
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l3_loop;
l8:
  i1 = _check_pointer(i0, 7527);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = (OOC_INT32)OOC_SSA_Allocator__NewRegisterFile(4);
  *(OOC_INT32*)(i1+(_check_index(4, i2, OOC_UINT8, 7527))*4) = i3;
  i1 = _check_pointer(i0, 7594);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = (OOC_INT32)OOC_SSA_Allocator__NewRegisterFile(5);
  *(OOC_INT32*)(i1+(_check_index(5, i2, OOC_UINT8, 7594))*4) = i3;
  i1 = _check_pointer(i0, 7826);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = (OOC_INT32)OOC_SSA_Allocator__NewRegisterFile(13);
  *(OOC_INT32*)(i1+(_check_index(13, i2, OOC_UINT8, 7826))*4) = i3;
  i1 = _check_pointer(i0, 7893);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = (OOC_INT32)OOC_SSA_Allocator__NewRegisterFile(14);
  *(OOC_INT32*)(i1+(_check_index(14, i2, OOC_UINT8, 7893))*4) = i3;
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
          i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9269)))), OOC_SSA__InstrDesc_IsConst)),OOC_SSA__InstrDesc_IsConst)((OOC_SSA__Instr)i0);
          i1 = !i1;
          if (i1) goto l3;
          i1=0u;
          goto l5;
l3:
          i1 = *(OOC_INT8*)((_check_pointer(i0, 9301))+36);
          i1 = i1!=13;
          
l5:
          if (i1) goto l7;
          i0=0u;
          goto l8;
l7:
          i0 = *(OOC_INT8*)((_check_pointer(i0, 9343))+36);
          i0 = i0!=72;
          
l8:
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
          i3 = _check_pointer(i2, 9644);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i0, i4, OOC_UINT8, 9644))*4);
          *(OOC_INT32*)((_check_pointer(i1, 9631))+16) = i3;
          i3 = _check_pointer(i2, 9682);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i0, i4, OOC_UINT8, 9682))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 9689))+4);
          i3 = *(OOC_INT32*)((_check_pointer(i3, 9701))+4);
          *(OOC_INT32*)((_check_pointer(i1, 9667))+20) = i3;
          i3 = _check_pointer(i2, 9720);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i0, i4, OOC_UINT8, 9720))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 9727))+4);
          i2 = _check_pointer(i2, 9720);
          i4 = OOC_ARRAY_LENGTH(i2, 0);
          i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i0, i4, OOC_UINT8, 9720))*4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9727))+4);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9739)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (Object__Object)i1);
          i1 = (OOC_INT32)rfs;
          i2 = _check_pointer(i1, 9769);
          i3 = OOC_ARRAY_LENGTH(i2, 0);
          i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i0, i3, OOC_UINT8, 9769))*4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9776))+8);
          i1 = _check_pointer(i1, 9769);
          i3 = OOC_ARRAY_LENGTH(i1, 0);
          i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i3, OOC_UINT8, 9769))*4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9776))+8);
          i1 = (OOC_INT32)b;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9787)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i1);
          return;
          ;
        }


      i0 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9858))+8);
      proxy = (OOC_SSA_Schedule__InstrProxy)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l30;
l3_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9922))+12);
      instr = (OOC_SSA__Instr)i0;
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9952)))), OOC_SSA__InstrDesc_GetResultType)),OOC_SSA__InstrDesc_GetResultType)((OOC_SSA__Instr)i0);
      type = i1;
      i1 = i1!=0;
      if (i1) goto l6;
      i0=0u;
      goto l8;
l6:
      i0 = OOC_SSA_Allocator__IdentifyResults_ScanBlock_PassedThroughRegister((OOC_SSA__Instr)i0);
      
l8:
      if (!i0) goto l14;
      i0 = (OOC_INT32)inPlaceEval;
      i1 = (OOC_INT32)instr;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10077)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      if (i0) goto l12;
      i0 = type;
      i0 = OOC_SSA_Allocator__SubclassToBasicType(i0);
      OOC_SSA_Allocator__IdentifyResults_ScanBlock_RegisterResult((OOC_SSA__Result)i1, i0);
      goto l14;
l12:
      i0 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
      *(OOC_INT32*)((_check_pointer(i1, 10117))+16) = i0;
l14:
      i0 = (OOC_INT32)instr;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10267));
      res = (OOC_SSA__Result)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l25;
l17_loop:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 10327))+5);
      i1 = i1!=0;
      if (!i1) goto l20;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 10417))+5);
      i1 = OOC_SSA_Allocator__SubclassToBasicType(i1);
      OOC_SSA_Allocator__IdentifyResults_ScanBlock_RegisterResult((OOC_SSA__Result)i0, i1);
l20:
      i0 = (OOC_INT32)res;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10465));
      res = (OOC_SSA__Result)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l17_loop;
l25:
      i0 = (OOC_INT32)proxy;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10513));
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
  i = 0;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 10629)), 0);
  i1 = 0<i0;
  if (!i1) goto l8;
  i1=0;
l3_loop:
  i2 = (OOC_INT32)blockList;
  i2 = _check_pointer(i2, 10663);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 10663))*4);
  OOC_SSA_Allocator__IdentifyResults_ScanBlock((OOC_SSA_Schedule__Block)i1);
  i1 = i;
  i1 = i1+1;
  i = i1;
  i2 = i1<i0;
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10933))+8);
  loopStart = (OOC_SSA_Schedule__InstrProxy)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10966))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 10973))+36);
  i1 = i1!=10;
  if (!i1) goto l9;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11033));
  loopStart = (OOC_SSA_Schedule__InstrProxy)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10966))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 10973))+36);
  i1 = i1!=10;
  if (i1) goto l4_loop;
l9:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11083))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11083))+12);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11090)))), OOC_SSA__InstrDesc_GetBackwardFeed)),OOC_SSA__InstrDesc_GetBackwardFeed)((OOC_SSA__Instr)i0);
  backwardFeed = (OOC_SSA__Result)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11138))+8);
  collect = (OOC_SSA__Instr)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11166))+24);
  opnd = (OOC_SSA__Opnd)i1;
  i2 = i1!=0;
  if (i2) goto l12;
  i2=0u;
  goto l14;
l12:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11208));
  i3 = (OOC_INT32)res;
  i2 = i2!=i3;
  
l14:
  if (!i2) goto l26;
  i2 = (OOC_INT32)res;
  
l17_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11242))+8);
  opnd = (OOC_SSA__Opnd)i1;
  i3 = i1!=0;
  if (i3) goto l20;
  i3=0u;
  goto l22;
l20:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11208));
  i3 = i3!=i2;
  
l22:
  if (i3) goto l17_loop;
l26:
  i1 = i1==0;
  if (!i1) goto l29;
  i1 = (OOC_INT32)res;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11301)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 17);
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
          i1=0u;
          goto l5;
l3:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12289))+12);
          i2 = (OOC_INT32)instr;
          i1 = i1!=i2;
          
l5:
          if (!i1) goto l17;
          i1 = (OOC_INT32)instr;
          
l8_loop:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12333));
          proxy = (OOC_SSA_Schedule__InstrProxy)i0;
          i2 = i0!=(OOC_INT32)0;
          if (i2) goto l11;
          i2=0u;
          goto l13;
l11:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12289))+12);
          i2 = i2!=i1;
          
l13:
          if (i2) goto l8_loop;
l17:
          return (i0!=(OOC_INT32)0);
          ;
        }


      i0 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12445))+16);
      child = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3;
      i0=0u;
      goto l5;
l3:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12505))+8);
      i1 = (OOC_INT32)loopStart;
      i0 = OOC_SSA_Allocator__SweepLiveSet_GetLoop_ContainsInstr((OOC_SSA_Schedule__InstrProxy)i0, (OOC_SSA__Instr)i1);
      i0 = !i0;
      
l5:
      if (!i0) goto l16;
l7_loop:
      i0 = (OOC_INT32)child;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12554));
      child = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l10;
      i0=0u;
      goto l12;
l10:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12505))+8);
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
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12629))+4);
      i1 = (OOC_INT32)loopStart;
      i0 = (OOC_INT32)OOC_SSA_Allocator__SweepLiveSet_GetLoop((OOC_SSA_Schedule__Block)i0, (OOC_SSA__Instr)i1);
      return (OOC_SSA_Schedule__Block)i0;
l20:
      _failed_function(12047); return 0;
      ;
    }

    
    void OOC_SSA_Allocator__SweepLiveSet_MarkOpndAsLive(OOC_SSA__Instr instr, OOC_SSA_IGraph__Vector live) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SSA__Opnd opnd;

      i0 = (OOC_INT32)instr;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12840))+24);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l22;
      i1 = (OOC_INT32)live;
      
l3_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12896));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12901))+16);
      i3 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
      i2 = i2==i3;
      if (i2) goto l16;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12998));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13003))+16);
      i3 = (OOC_INT32)rf;
      i2 = i2==i3;
      if (i2) goto l8;
      i2=0u;
      goto l10;
l8:
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13022)))), OOC_SSA__OpndDesc_IsValueOpndHere)),OOC_SSA__OpndDesc_IsValueOpndHere)((OOC_SSA__Opnd)i0);
      
l10:
      if (!i2) goto l17;
      i2 = (OOC_INT32)iGraph;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13077));
      i3 = *(OOC_INT32*)((_check_pointer(i3, 13082))+20);
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13067)))), OOC_SSA_IGraph__GraphDesc_In)),OOC_SSA_IGraph__GraphDesc_In)((OOC_SSA_IGraph__Graph)i2, i3, (OOC_SSA_IGraph__Vector)i1);
      i2 = !i2;
      if (!i2) goto l17;
      i2 = (OOC_INT32)iGraph;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13361));
      i3 = *(OOC_INT32*)((_check_pointer(i3, 13366))+20);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13344)))), OOC_SSA_IGraph__GraphDesc_AddToLive)),OOC_SSA_IGraph__GraphDesc_AddToLive)((OOC_SSA_IGraph__Graph)i2, i3, (OOC_SSA_IGraph__Vector)i1);
      goto l17;
l16:
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12958));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12963))+8);
      OOC_SSA_Allocator__SweepLiveSet_MarkOpndAsLive((OOC_SSA__Instr)i2, (OOC_SSA_IGraph__Vector)i1);
l17:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13429))+8);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13564))+16);
      i2 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
      i1 = i1==i2;
      if (i1) goto l10;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13650))+16);
      i2 = (OOC_INT32)rf;
      i1 = i1==i2;
      if (i1) goto l5;
      i1=0u;
      goto l7;
l5:
      i1 = (OOC_INT32)iGraph;
      i2 = *(OOC_INT32*)((_check_pointer(i0, 13681))+20);
      i3 = (OOC_INT32)live;
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13672)))), OOC_SSA_IGraph__GraphDesc_In)),OOC_SSA_IGraph__GraphDesc_In)((OOC_SSA_IGraph__Graph)i1, i2, (OOC_SSA_IGraph__Vector)i3);
      i1 = !i1;
      
l7:
      if (!i1) goto l11;
      i1 = (OOC_INT32)iGraph;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 13732))+20);
      i2 = (OOC_INT32)live;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13716)))), OOC_SSA_IGraph__GraphDesc_AddToLive)),OOC_SSA_IGraph__GraphDesc_AddToLive)((OOC_SSA_IGraph__Graph)i1, i0, (OOC_SSA_IGraph__Vector)i2);
      goto l11;
l10:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13618))+8);
      i1 = (OOC_INT32)live;
      OOC_SSA_Allocator__SweepLiveSet_MarkOpndAsLive((OOC_SSA__Instr)i0, (OOC_SSA_IGraph__Vector)i1);
l11:
      return;
      ;
    }


  i0 = (OOC_INT32)rf;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14347))+12);
  iGraph = (OOC_SSA_IGraph__Graph)i0;
  i0 = (OOC_INT32)b;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14447)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
  if (!i1) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14613))+52);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14624));
  i1 = (OOC_INT32)live;
  OOC_SSA_Allocator__SweepLiveSet_AddResToLive((OOC_SSA__Result)i0, (OOC_SSA_IGraph__Vector)i1);
l3:
  loopEnd = (OOC_SSA_Schedule__InstrProxy)0;
  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14712))+12);
  proxy = (OOC_SSA_Schedule__InstrProxy)i0;
  i1 = i0!=0;
  if (!i1) goto l43;
l6_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14767))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 14774))+36);
  i1 = i1==11;
  if (!i1) goto l9;
  loopEnd = (OOC_SSA_Schedule__InstrProxy)i0;
l9:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14868))+12);
  res = (OOC_SSA__Result)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14890))+16);
  i3 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
  i2 = i2!=i3;
  if (!i2) goto l38;
  i2 = (OOC_INT32)live;
  i3 = i1!=0;
  if (!i3) goto l26;
  i3 = (OOC_INT32)iGraph;
  i4 = (OOC_INT32)rf;
  
l14_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14963))+16);
  i5 = i5==i4;
  if (i5) goto l17;
  i5=0u;
  goto l19;
l17:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14982))+12);
  i5 = i5==0;
  
l19:
  if (!i5) goto l21;
  i5 = *(OOC_INT32*)((_check_pointer(i1, 15411))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15395)))), OOC_SSA_IGraph__GraphDesc_AddToLive)),OOC_SSA_IGraph__GraphDesc_AddToLive)((OOC_SSA_IGraph__Graph)i3, i5, (OOC_SSA_IGraph__Vector)i2);
l21:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15463));
  res = (OOC_SSA__Result)i1;
  i5 = i1!=0;
  if (i5) goto l14_loop;
l26:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15599))+12);
  res = (OOC_SSA__Result)i1;
  i3 = i1!=0;
  if (!i3) goto l37;
  i3 = (OOC_INT32)iGraph;
  i4 = (OOC_INT32)rf;
  
l29_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15654))+16);
  i5 = i5==i4;
  if (!i5) goto l32;
  i5 = *(OOC_INT32*)((_check_pointer(i1, 15711))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15690)))), OOC_SSA_IGraph__GraphDesc_RemoveFromLive)),OOC_SSA_IGraph__GraphDesc_RemoveFromLive)((OOC_SSA_IGraph__Graph)i3, i5, (OOC_SSA_IGraph__Vector)i2);
l32:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15763));
  res = (OOC_SSA__Result)i1;
  i5 = i1!=0;
  if (i5) goto l29_loop;
l37:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16354))+12);
  OOC_SSA_Allocator__SweepLiveSet_MarkOpndAsLive((OOC_SSA__Instr)i0, (OOC_SSA_IGraph__Vector)i2);
l38:
  i0 = (OOC_INT32)proxy;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16408))+4);
  proxy = (OOC_SSA_Schedule__InstrProxy)i0;
  i1 = i0!=0;
  if (i1) goto l6_loop;
l43:
  i0 = (OOC_INT32)b;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16440)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
  if (!i1) goto l46;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16615))+48);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16621));
  i1 = (OOC_INT32)live;
  OOC_SSA_Allocator__SweepLiveSet_AddResToLive((OOC_SSA__Result)i0, (OOC_SSA_IGraph__Vector)i1);
l46:
  i0 = (OOC_INT32)loopEnd;
  i1 = i0!=0;
  if (i1) goto l49;
  return (OOC_SSA_Schedule__Block)0;
  goto l65;
l49:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16818))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16870))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16825))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16870))+12);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16877)))), OOC_SSA__InstrDesc_GetLoopStart)),OOC_SSA__InstrDesc_GetLoopStart)((OOC_SSA__Instr)i0);
  i0 = (OOC_INT32)OOC_SSA_Allocator__SweepLiveSet_GetLoop((OOC_SSA_Schedule__Block)i1, (OOC_SSA__Instr)i0);
  loopBlock = (OOC_SSA_Schedule__Block)i0;
  i1 = (OOC_INT32)rf;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16918))+4);
  i = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i2, 16930))+4);
  i3 = 0<i2;
  if (!i3) goto l64;
  i3 = (OOC_INT32)live;
  i4 = (OOC_INT32)iGraph;
  i5=0;
l52_loop:
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 16959)))), OOC_SSA_IGraph__GraphDesc_In)),OOC_SSA_IGraph__GraphDesc_In)((OOC_SSA_IGraph__Graph)i4, i5, (OOC_SSA_IGraph__Vector)i3);
  if (i6) goto l55;
  i6=0u;
  goto l57;
l55:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17021))+8);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 17032));
  i6 = _check_pointer(i6, 17039);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 17039))*4);
  i6 = OOC_SSA_Schedule__Dominates((OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__Block)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 17052)))), &_td_OOC_SSA_Schedule__BlockDesc, 17052)));
  i6 = !i6;
  
l57:
  if (!i6) goto l59;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17102))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 17114));
  i6 = _check_pointer(i6, 17121);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 17121))*4);
  OOC_SSA_Allocator__AddToCollect((OOC_SSA_Schedule__Block)i0, (OOC_SSA__Result)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 17129)))), &_td_OOC_SSA__ResultDesc, 17129)));
l59:
  i5 = i5+1;
  i = i5;
  i6 = i5<i2;
  if (i6) goto l52_loop;
l64:
  return (OOC_SSA_Schedule__Block)i0;
l65:
  _failed_function(11671); return 0;
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

      maxColor = (-1);
      i0 = (OOC_INT32)colors;
      i = 0;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 17873)), 0);
      i2 = 0<i1;
      if (i2) goto l3;
      i1=(-1);
      goto l13;
l3:
      i2=0;i3=(-1);
l4_loop:
      i4 = _check_pointer(i0, 17899);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = *(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 17899))*4);
      i4 = i4>i3;
      if (!i4) goto l8;
      i3 = _check_pointer(i0, 17948);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 17948))*4);
      maxColor = i3;
      
l8:
      i2 = i2+1;
      i = i2;
      i4 = i2<i1;
      if (i4) goto l4_loop;
l12:
      i1=i3;
l13:
      i2 = (OOC_INT32)rf;
      *(OOC_INT32*)((_check_pointer(i2, 17984))+16) = i1;
      i3 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Allocator__NameArray.baseTypes[0], (i1+1));
      names = (OOC_SSA_Allocator__NameArray)i3;
      i = 0;
      i4 = 0<=i1;
      if (!i4) goto l28;
      i4=0;
l16_loop:
      IntStr__IntToStr(i4, (void*)(OOC_INT32)str, 16);
      i5 = *(OOC_INT8*)(_check_pointer(i2, 18261));
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
        _failed_case(i5, 18254);
        goto l23;
      }
l23:
      i5 = _check_pointer(i3, 18727);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i7 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)str, 16);
      *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 18727))*4) = i7;
      i4 = i4+1;
      i = i4;
      i5 = i4<=i1;
      if (i5) goto l16_loop;
l28:
      *(OOC_INT32*)((_check_pointer(i2, 18776))+20) = i3;
      i = 0;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 18890)), 0);
      i4 = 0<i1;
      if (!i4) goto l36;
      i4 = (OOC_INT32)registerMap;
      i5=0;
l31_loop:
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18926))+4);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 18938));
      i6 = _check_pointer(i6, 18945);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 18945))*4);
      i7 = _check_pointer(i3, 18993);
      i8 = _check_pointer(i0, 19000);
      i9 = OOC_ARRAY_LENGTH(i8, 0);
      i8 = *(OOC_INT32*)(i8+(_check_index(i5, i9, OOC_UINT32, 19000))*4);
      i9 = OOC_ARRAY_LENGTH(i7, 0);
      i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i8, i9, OOC_UINT32, 18993))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 18917)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i4, (Object__Object)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 18953)))), &_td_OOC_SSA__ResultDesc, 18953)), (Object__Object)i7);
      i5 = i5+1;
      i = i5;
      i6 = i5<i1;
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
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l11;
l3_loop:
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 19907))+12);
          i1 = !i1;
          if (!i1) goto l6;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20004))+4);
          i2 = (OOC_INT32)b;
          _assert((i1==i2), 127, 19992);
          i1 = (OOC_INT32)rf;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20062))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20062))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20053));
          i5 = (OOC_INT32)live;
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20070)))), OOC_SSA_IGraph__GraphDesc_CopyVector)),OOC_SSA_IGraph__GraphDesc_CopyVector)((OOC_SSA_IGraph__Graph)i3, (OOC_SSA_IGraph__Vector)i5);
          OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks((OOC_SSA_Allocator__RegisterFile)i1, (OOC_SSA_Schedule__Block)i4, (OOC_SSA_IGraph__Vector)i2);
l6:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20129))+8);
          jump = (OOC_SSA_Schedule__Jump)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3_loop;
l11:
          i0 = (OOC_INT32)loopBlock;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l23;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20450))+32);
          loopTarget = (OOC_SSA_Schedule__Jump)i0;
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 20494))+12);
          i1 = !i1;
          if (!i1) goto l22;
l17_loop:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20550))+8);
          loopTarget = (OOC_SSA_Schedule__Jump)i0;
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 20494))+12);
          i1 = !i1;
          if (i1) goto l17_loop;
l22:
          i1 = (OOC_INT32)rf;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20631))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20631))+12);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20622));
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20639)))), OOC_SSA_IGraph__GraphDesc_NewVector)),OOC_SSA_IGraph__GraphDesc_NewVector)((OOC_SSA_IGraph__Graph)i3);
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20821))+4);
          i1 = *(OOC_UINT8*)((_check_pointer(i1, 20827))+28);
          if (i1) goto l5;
          i0=0u;
          goto l8;
l5:
          i0 = *(OOC_UINT8*)((_check_pointer(i0, 20846))+12);
          
          goto l8;
l7:
          i0=1u;
l8:
          return i0;
          ;
        }

        
        void OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_Merge(OOC_SSA_Allocator__LiveData ld) {
          register OOC_INT32 i0,i1,i2,i3,i4;

          i0 = (OOC_INT32)rf;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20947))+12);
          i2 = (OOC_INT32)ld;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20978))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20947))+12);
          i4 = (OOC_INT32)live;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20955)))), OOC_SSA_IGraph__GraphDesc_MergeVector)),OOC_SSA_IGraph__GraphDesc_MergeVector)((OOC_SSA_IGraph__Graph)i0, (OOC_SSA_IGraph__Vector)i4, (OOC_SSA_IGraph__Vector)i3);
          i0 = *(OOC_INT32*)((_check_pointer(i2, 21002))+4);
          *(OOC_INT32*)((_check_pointer(i2, 21002))+4) = (i0+1);
          i0 = *(OOC_INT32*)(_check_pointer(i2, 21053));
          i1 = *(OOC_INT32*)((_check_pointer(i2, 21035))+4);
          _assert((i1<=i0), 127, 21025);
          i0 = *(OOC_INT32*)((_check_pointer(i2, 21094))+4);
          i1 = *(OOC_INT32*)(_check_pointer(i2, 21111));
          i0 = i0==i1;
          if (!i0) goto l6;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 21153))+8);
          live = (OOC_SSA_IGraph__Vector)i0;
          i1 = (OOC_INT32)b;
          i2 = (OOC_INT32)rf;
          i0 = (OOC_INT32)OOC_SSA_Allocator__SweepLiveSet((OOC_SSA_Allocator__RegisterFile)i2, (OOC_SSA_Schedule__Block)i1, (OOC_SSA_IGraph__Vector)i0);
          loopBlock = (OOC_SSA_Schedule__Block)i0;
          i1 = (OOC_INT32)enterBlock;
          i2 = (OOC_INT32)b;
          i1 = i2!=i1;
          if (!i1) goto l5;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 21271))+32);
          OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_Propagate((OOC_SSA_Schedule__Jump)i1, (OOC_SSA_Schedule__Block)i0);
l5:
          i0 = (OOC_INT32)b;
          *(OOC_INT32*)((_check_pointer(i0, 21325))+44) = 0;
l6:
          return;
          ;
        }


      i0 = (OOC_INT32)b;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21817)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (i1) goto l25;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22257)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
      if (i1) goto l8;
      i1 = (OOC_INT32)live;
      i2 = (OOC_INT32)rf;
      i1 = (OOC_INT32)OOC_SSA_Allocator__SweepLiveSet((OOC_SSA_Allocator__RegisterFile)i2, (OOC_SSA_Schedule__Block)i0, (OOC_SSA_IGraph__Vector)i1);
      loopBlock = (OOC_SSA_Schedule__Block)i1;
      i2 = (OOC_INT32)enterBlock;
      i2 = i0!=i2;
      if (!i2) goto l36;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22835))+32);
      OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_Propagate((OOC_SSA_Schedule__Jump)i0, (OOC_SSA_Schedule__Block)i1);
      goto l36;
l8:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22296))+44);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l11;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22626))+44);
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22633)))), &_td_OOC_SSA_Allocator__LiveDataDesc, 22633);
      ld = (OOC_SSA_Allocator__LiveData)i0;
      
      goto l23;
l11:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22348))+52);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 22354)), 0);
      outgoingJumps = i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22388))+52);
      i = 0;
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 22394)), 0);
      i1 = 0<i0;
      if (!i1) goto l22;
      i1=0;
l14_loop:
      i2 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22432))+52);
      i2 = _check_pointer(i2, 22438);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 22438))*4);
      i1 = OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_BackedgeJump((OOC_SSA_Schedule__Jump)i1);
      if (!i1) goto l17;
      i1 = outgoingJumps;
      outgoingJumps = (i1-1);
l17:
      i1 = i;
      i1 = i1+1;
      i = i1;
      i2 = i1<i0;
      if (i2) goto l14_loop;
l22:
      i0 = (OOC_INT32)rf;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22546))+12);
      i1 = outgoingJumps;
      i0 = (OOC_INT32)OOC_SSA_Allocator__NewLiveData((OOC_SSA_IGraph__Graph)i0, i1);
      ld = (OOC_SSA_Allocator__LiveData)i0;
      i1 = (OOC_INT32)b;
      *(OOC_INT32*)((_check_pointer(i1, 22583))+44) = i0;
      
l23:
      OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_Merge((OOC_SSA_Allocator__LiveData)i0);
      goto l36;
l25:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21856))+44);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l28;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22196))+44);
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22203)))), &_td_OOC_SSA_Allocator__LiveDataDesc, 22203);
      ld = (OOC_SSA_Allocator__LiveData)i0;
      
      goto l35;
l28:
      outgoingJumps = 2;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21933))+60);
      i0 = OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_BackedgeJump((OOC_SSA_Schedule__Jump)i0);
      if (!i0) goto l31;
      i0 = outgoingJumps;
      outgoingJumps = (i0-1);
l31:
      i0 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22025))+48);
      i0 = OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_BackedgeJump((OOC_SSA_Schedule__Jump)i0);
      if (!i0) goto l34;
      i0 = outgoingJumps;
      outgoingJumps = (i0-1);
l34:
      i0 = (OOC_INT32)rf;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22116))+12);
      i1 = outgoingJumps;
      i0 = (OOC_INT32)OOC_SSA_Allocator__NewLiveData((OOC_SSA_IGraph__Graph)i0, i1);
      ld = (OOC_SSA_Allocator__LiveData)i0;
      i1 = (OOC_INT32)b;
      *(OOC_INT32*)((_check_pointer(i1, 22153))+44) = i0;
      
l35:
      OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks_Merge((OOC_SSA_Allocator__LiveData)i0);
l36:
      return;
      ;
    }


  i0 = (OOC_INT32)rf;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23574))+4);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 23586))+4);
  i1 = (OOC_INT32)OOC_SSA_IGraph__NewGraph(i1);
  *(OOC_INT32*)((_check_pointer(i0, 23543))+12) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23899))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23899))+12);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23907)))), OOC_SSA_IGraph__GraphDesc_NewVector)),OOC_SSA_IGraph__GraphDesc_NewVector)((OOC_SSA_IGraph__Graph)i2);
  live = (OOC_SSA_IGraph__Vector)i1;
  i2 = (OOC_INT32)exitBlock;
  OOC_SSA_Allocator__AssignRegisterFile_TraverseBlocks((OOC_SSA_Allocator__RegisterFile)i0, (OOC_SSA_Schedule__Block)i2, (OOC_SSA_IGraph__Vector)i1);
  i0 = (OOC_INT32)rf;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23970))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23970))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23978)))), OOC_SSA_IGraph__GraphDesc_SymmetricMatrix)),OOC_SSA_IGraph__GraphDesc_SymmetricMatrix)((OOC_SSA_IGraph__Graph)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24202))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24202))+12);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24210)))), OOC_SSA_IGraph__GraphDesc_ColorGraphSimple)),OOC_SSA_IGraph__GraphDesc_ColorGraphSimple)((OOC_SSA_IGraph__Graph)i2);
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
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 24552))+28);
  if (!i1) goto l3;
  closestLoop = (OOC_SSA_Schedule__Block)i0;
l3:
  i1 = (OOC_INT32)closestLoop;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l54;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24651))+8);
  proxy = (OOC_SSA_Schedule__InstrProxy)i3;
  i4 = i3!=(OOC_INT32)0;
  if (!i4) goto l54;
  i4 = (OOC_INT32)rf;
  
l8_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 24714))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 24721))+24);
  opnd = (OOC_SSA__Opnd)i5;
  i6 = i5!=(OOC_INT32)0;
  if (!i6) goto l48;
l11_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 24781));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 24786))+16);
  i6 = i6==i4;
  if (i6) goto l14;
  i6=0u;
  goto l16;
l14:
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 24805)))), OOC_SSA__OpndDesc_IsValueOpnd)),OOC_SSA__OpndDesc_IsValueOpnd)((OOC_SSA__Opnd)i5);
  
l16:
  if (!i6) goto l43;
  loop = (OOC_SSA_Schedule__Block)i1;
  if (i2) goto l20;
  i6=0u;
  goto l22;
l20:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 25157))+8);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 25168));
  i6 = _check_pointer(i6, 25175);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 25180));
  i7 = *(OOC_INT32*)((_check_pointer(i7, 25185))+20);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i7, i8, OOC_UINT32, 25175))*4);
  i6 = OOC_SSA_Schedule__Dominates((OOC_SSA_Schedule__Block)i1, (OOC_SSA_Schedule__Block)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 25204)))), &_td_OOC_SSA_Schedule__BlockDesc, 25204)));
  i6 = !i6;
  
l22:
  if (!i6) goto l43;
  i6=i1;
l24_loop:
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 25253));
  OOC_SSA_Allocator__AddToCollect((OOC_SSA_Schedule__Block)i6, (OOC_SSA__Result)i7);
  
l25_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 25310))+4);
  loop = (OOC_SSA_Schedule__Block)i6;
  i7 = i6==(OOC_INT32)0;
  if (i7) goto l28;
  i7 = *(OOC_UINT8*)((_check_pointer(i6, 25360))+28);
  
  goto l30;
l28:
  i7=1u;
l30:
  if (!i7) goto l25_loop;
l33:
  i7 = i6!=(OOC_INT32)0;
  if (i7) goto l36;
  i7=0u;
  goto l38;
l36:
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 25157))+8);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i7, 25168));
  i7 = _check_pointer(i7, 25175);
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 25180));
  i8 = *(OOC_INT32*)((_check_pointer(i8, 25185))+20);
  i9 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i8, i9, OOC_UINT32, 25175))*4);
  i7 = OOC_SSA_Schedule__Dominates((OOC_SSA_Schedule__Block)i6, (OOC_SSA_Schedule__Block)(_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 25204)))), &_td_OOC_SSA_Schedule__BlockDesc, 25204)));
  i7 = !i7;
  
l38:
  if (i7) goto l24_loop;
l43:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 25428))+8);
  opnd = (OOC_SSA__Opnd)i5;
  i6 = i5!=(OOC_INT32)0;
  if (i6) goto l11_loop;
l48:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 25475));
  proxy = (OOC_SSA_Schedule__InstrProxy)i3;
  i5 = i3!=(OOC_INT32)0;
  if (i5) goto l8_loop;
l54:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25527))+16);
  child = (OOC_SSA_Schedule__Block)i0;
  i2 = i0!=(OOC_INT32)0;
  if (!i2) goto l62;
  i2 = (OOC_INT32)rf;
  
l57_loop:
  OOC_SSA_Allocator__CollectCrossLoopResults((OOC_SSA_Allocator__RegisterFile)i2, (OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__Block)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25641));
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
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 26614)), 0);
      i1 = i1!=0;
      if (!i1) goto l14;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26636)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26656)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "register ", 10);
      i2 = registerType;
      i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i1, 26710))+24)+(_check_index(i2, 17, OOC_UINT8, 26721))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26694)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, (void*)((_check_pointer(i2, 26735))+1), 32);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26753)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 32u);
      i = 0;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 26805)), 0);
      i3 = 0<i2;
      if (!i3) goto l13;
      i3=0;
l5_loop:
      i4 = i3!=0;
      if (!i4) goto l8;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26852)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 44u);
l8:
      i4 = _check_pointer(i0, 26917);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 26917))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26897)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i4);
      i3 = i3+1;
      i = i3;
      i4 = i3<i2;
      if (i4) goto l5_loop;
l13:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26945)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 59u);
l14:
      return;
      ;
    }

    
    void OOC_SSA_Allocator__AssignRegisters_ClearBlockInfo(OOC_SSA_Allocator__BlockList blockList) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 i;

      i0 = (OOC_INT32)blockList;
      i = 0;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 27117)), 0);
      i2 = 0<i1;
      if (!i2) goto l8;
      i2=0;
l3_loop:
      i3 = _check_pointer(i0, 27142);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 27142))*4);
      *(OOC_INT32*)((_check_pointer(i3, 27145))+44) = (OOC_INT32)0;
      i2 = i2+1;
      i = i2;
      i3 = i2<i1;
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
              i1 = i0!=(OOC_INT32)0;
              if (!i1) goto l12;
              
l3_loop:
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27632))+12);
              i1 = *(OOC_INT8*)((_check_pointer(i1, 27639))+36);
              switch (i1) {
              case 5:
              case 10:
              case 11:
                i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27740))+12);
                return (OOC_SSA__Instr)i1;
                goto l7;
              default:
                goto l7;
              }
l7:
              i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 27809));
              proxy = (OOC_SSA_Schedule__InstrProxy)i0;
              i1 = i0!=(OOC_INT32)0;
              if (i1) goto l3_loop;
l12:
              return (OOC_SSA__Instr)(OOC_INT32)0;
              ;
            }


          i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Allocator__BlockInfo.baseTypes[0]);
          bi = (OOC_SSA_Allocator__BlockInfo)i0;
          OOC_SSA_Schedule__InitInfo((OOC_SSA_Schedule__Info)i0);
          *(OOC_INT32*)(_check_pointer(i0, 27962)) = 0;
          i1 = (OOC_INT32)b;
          *(OOC_INT32*)((_check_pointer(i0, 27991))+4) = i1;
          *(OOC_INT32*)((_check_pointer(i0, 28015))+12) = 0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28074))+8);
          i1 = (OOC_INT32)OOC_SSA_Allocator__AssignRegisters_CheckRegisters_ScanBlock_MergeInstr((OOC_SSA_Schedule__InstrProxy)i1);
          *(OOC_INT32*)((_check_pointer(i0, 28045))+8) = i1;
          i0 = (OOC_INT32)b;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28101))+4);
          i1 = i1==0;
          if (i1) goto l3;
          i1 = (OOC_INT32)bi;
          i2 = *(OOC_INT32*)((_check_pointer(i0, 28274))+36);
          *(OOC_INT32*)((_check_pointer(i1, 28261))+24) = i2;
          
          goto l4;
l3:
          i1 = (OOC_INT32)root;
          _assert((i0==i1), 127, 28178);
          i1 = (OOC_INT32)bi;
          i2 = *(OOC_INT32*)((_check_pointer(i0, 28222))+36);
          *(OOC_INT32*)((_check_pointer(i1, 28209))+24) = (i2-1);
          
l4:
          i2 = *(OOC_INT32*)((_check_pointer(i1, 28313))+24);
          i2 = i2>1;
          if (!i2) goto l7;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28352))+8);
          _assert((i2!=0), 127, 28342);
l7:
          i2 = *(OOC_INT32*)((_check_pointer(i1, 28416))+24);
          *(OOC_INT32*)((_check_pointer(i1, 28401))+16) = ((OOC_INT32)RT0__NewObject(_td_OOC_SSA_Allocator__3150.baseTypes[0], i2));
          i2 = *(OOC_INT32*)((_check_pointer(i1, 28455))+24);
          *(OOC_INT32*)((_check_pointer(i1, 28442))+20) = ((OOC_INT32)RT0__NewObject(_td_OOC_SSA_Allocator__3194.baseTypes[0], i2));
          i2 = *(OOC_INT32*)((_check_pointer(i1, 28489))+24);
          i2 = i2==0;
          if (!i2) goto l18;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28523))+4);
          i2 = i2==0;
          if (i2) goto l16;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28887))+16);
          i2 = i2==0;
          if (i2) goto l14;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28929))+16);
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 28939)))), &_td_OOC_SSA_Schedule__DeadEndBlockDesc);
          
          goto l15;
l14:
          i2=1u;
l15:
          _assert(i2, 127, 28877);
          goto l18;
l16:
          i2 = (OOC_INT32)ready;
          *(OOC_INT32*)(_check_pointer(i1, 28691)) = i2;
          ready = (OOC_SSA_Allocator__BlockInfo)i1;
          *(OOC_INT32*)((_check_pointer(i1, 28751))+16) = 0;
          *(OOC_INT32*)((_check_pointer(i1, 28785))+20) = 0;
          i2 = (OOC_INT32)ADT_Dictionary__New();
          *(OOC_INT32*)((_check_pointer(i1, 28817))+12) = i2;
l18:
          *(OOC_INT32*)((_check_pointer(i0, 29433))+44) = i1;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29466))+16);
          child = (OOC_SSA_Schedule__Block)i0;
          i1 = i0!=0;
          if (!i1) goto l26;
l21_loop:
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_ScanBlock((OOC_SSA_Schedule__Block)i0);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 29561));
          child = (OOC_SSA_Schedule__Block)i0;
          i1 = i0!=0;
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
                  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30755))+20);
                  i = 0;
                  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 30764)), 0);
                  i3 = 0<i2;
                  if (!i3) goto l16;
                  i3=0;
l3_loop:
                  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30796))+20);
                  i4 = _check_pointer(i4, 30805);
                  i5 = OOC_ARRAY_LENGTH(i4, 0);
                  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 30805))*4);
                  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30796))+20);
                  i5 = _check_pointer(i5, 30805);
                  i6 = OOC_ARRAY_LENGTH(i5, 0);
                  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 30805))*4);
                  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 30808)))), ADT_Dictionary__DictionaryDesc_Keys)),ADT_Dictionary__DictionaryDesc_Keys)((ADT_Dictionary__Dictionary)i5);
                  vars = (Object__ObjectArrayPtr)i4;
                  j = 0;
                  i5 = OOC_ARRAY_LENGTH((_check_pointer(i4, 30855)), 0);
                  i6 = 0<i5;
                  if (!i6) goto l11;
                  i6=0;
l6_loop:
                  i7 = _check_pointer(i4, 30900);
                  i8 = OOC_ARRAY_LENGTH(i7, 0);
                  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 30900))*4);
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30889)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i7, (Object__Object)(OOC_INT32)0);
                  i6 = i6+1;
                  j = i6;
                  i7 = i6<i5;
                  if (i7) goto l6_loop;
l11:
                  i3 = i3+1;
                  i = i3;
                  i4 = i3<i2;
                  if (i4) goto l3_loop;
l16:
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30977)))), ADT_Dictionary__DictionaryDesc_Keys)),ADT_Dictionary__DictionaryDesc_Keys)((ADT_Dictionary__Dictionary)i0);
                  vars = (Object__ObjectArrayPtr)i0;
                  i2 = (OOC_INT32)ADT_Dictionary__New();
                  outState = (ADT_Dictionary__Dictionary)i2;
                  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31075))+20);
                  i = 0;
                  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 31084)), 0);
                  i4 = 0<i3;
                  if (!i4) goto l43;
                  i4=0;
l19_loop:
                  j = 0;
                  i5 = OOC_ARRAY_LENGTH((_check_pointer(i0, 31129)), 0);
                  i6 = 0<i5;
                  if (!i6) goto l38;
                  i6=0;
l22_loop:
                  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31158))+20);
                  i7 = _check_pointer(i7, 31167);
                  i8 = OOC_ARRAY_LENGTH(i7, 0);
                  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 31167))*4);
                  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31158))+20);
                  i8 = _check_pointer(i8, 31167);
                  i9 = OOC_ARRAY_LENGTH(i8, 0);
                  i10 = _check_pointer(i0, 31184);
                  i11 = OOC_ARRAY_LENGTH(i10, 0);
                  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i4, i9, OOC_UINT32, 31167))*4);
                  i9 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i6, i11, OOC_UINT32, 31184))*4);
                  i7 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 31170)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i8, (Object__Object)i9);
                  if (i7) goto l25;
                  i7 = _check_pointer(i0, 31925);
                  i8 = OOC_ARRAY_LENGTH(i7, 0);
                  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 31925))*4);
                  i8 = (OOC_INT32)undefinedVar;
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31914)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i7, (Object__Object)i8);
                  goto l33;
l25:
                  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31298))+20);
                  i7 = _check_pointer(i7, 31307);
                  i8 = OOC_ARRAY_LENGTH(i7, 0);
                  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 31307))*4);
                  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31298))+20);
                  i8 = _check_pointer(i8, 31307);
                  i9 = OOC_ARRAY_LENGTH(i8, 0);
                  i10 = _check_pointer(i0, 31321);
                  i11 = OOC_ARRAY_LENGTH(i10, 0);
                  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i4, i9, OOC_UINT32, 31307))*4);
                  i9 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i6, i11, OOC_UINT32, 31321))*4);
                  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 31310)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i8, (Object__Object)i9);
                  value = (Object__Object)i7;
                  i8 = _check_pointer(i0, 31370);
                  i9 = OOC_ARRAY_LENGTH(i8, 0);
                  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i6, i9, OOC_UINT32, 31370))*4);
                  i8 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31356)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (Object__Object)i8);
                  if (i8) goto l28;
                  i8 = _check_pointer(i0, 31708);
                  i9 = OOC_ARRAY_LENGTH(i8, 0);
                  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i6, i9, OOC_UINT32, 31708))*4);
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31697)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i8, (Object__Object)i7);
                  goto l33;
l28:
                  i8 = _check_pointer(i0, 31423);
                  i9 = OOC_ARRAY_LENGTH(i8, 0);
                  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i6, i9, OOC_UINT32, 31423))*4);
                  i8 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31412)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i2, (Object__Object)i8);
                  i7 = i8!=i7;
                  if (!i7) goto l33;
                  i7 = _check_pointer(i0, 31561);
                  i8 = OOC_ARRAY_LENGTH(i7, 0);
                  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 31561))*4);
                  i8 = (OOC_INT32)undefinedVar;
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31550)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i7, (Object__Object)i8);
l33:
                  i6 = i6+1;
                  j = i6;
                  i7 = i6<i5;
                  if (i7) goto l22_loop;
l38:
                  i4 = i4+1;
                  i = i4;
                  i5 = i4<i3;
                  if (i5) goto l19_loop;
l43:
                  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32216))+8);
                  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 32228));
                  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 32240));
                  res = (OOC_SSA__Result)i0;
                  i1 = i0!=(OOC_INT32)0;
                  if (!i1) goto l54;
l46_loop:
                  i1 = *(OOC_INT8*)((_check_pointer(i0, 32312))+4);
                  _assert((i1==14), 127, 32301);
                  i1 = (OOC_INT32)registerMap;
                  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32371)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
                  if (!i0) goto l49;
                  i0 = (OOC_INT32)registerMap;
                  i1 = (OOC_INT32)res;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32433)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
                  i1 = (OOC_INT32)res;
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 32415)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i0, (Object__Object)i1);
l49:
                  i0 = (OOC_INT32)res;
                  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 32495));
                  res = (OOC_SSA__Result)i0;
                  i1 = i0!=(OOC_INT32)0;
                  if (i1) goto l46_loop;
l54:
                  return (ADT_Dictionary__Dictionary)i2;
                  ;
                }


              i0 = (OOC_INT32)jump;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32629))+4);
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32635))+44);
              i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32642)))), &_td_OOC_SSA_Allocator__BlockInfoDesc, 32642);
              di = (OOC_SSA_Allocator__BlockInfo)i0;
              i1 = *(OOC_INT32*)((_check_pointer(i0, 32674))+24);
              _assert((i1>0), 127, 32664);
              i1 = *(OOC_INT32*)((_check_pointer(i0, 32706))+24);
              *(OOC_INT32*)((_check_pointer(i0, 32706))+24) = (i1-1);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32729))+16);
              i1 = _check_pointer(i1, 32740);
              i2 = OOC_ARRAY_LENGTH(i1, 0);
              i3 = *(OOC_INT32*)((_check_pointer(i0, 32743))+24);
              i4 = (OOC_INT32)collect;
              *(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 32740))*4) = i4;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32777))+20);
              i1 = _check_pointer(i1, 32786);
              i2 = OOC_ARRAY_LENGTH(i1, 0);
              i3 = *(OOC_INT32*)((_check_pointer(i0, 32789))+24);
              i4 = (OOC_INT32)state;
              i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 32807)))), ADT_Dictionary__DictionaryDesc_Copy)),ADT_Dictionary__DictionaryDesc_Copy)((ADT_Dictionary__Dictionary)i4);
              *(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 32786))*4) = i4;
              i1 = *(OOC_INT32*)((_check_pointer(i0, 32833))+24);
              i1 = i1==0;
              if (!i1) goto l7;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32949))+8);
              i1 = i1!=(OOC_INT32)0;
              if (i1) goto l5;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33072))+20);
              i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 33081)), 0);
              _assert((i1==1), 127, 33057);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33123))+20);
              i1 = _check_pointer(i1, 33132);
              i2 = OOC_ARRAY_LENGTH(i1, 0);
              i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 33132))*4);
              *(OOC_INT32*)((_check_pointer(i0, 33106))+12) = i1;
              goto l6;
l5:
              i1 = (OOC_INT32)OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_UpdateTarget_MergeVariables((OOC_SSA_Allocator__BlockInfo)i0);
              *(OOC_INT32*)((_check_pointer(i0, 32990))+12) = i1;
l6:
              i0 = (OOC_INT32)di;
              i1 = (OOC_INT32)ready;
              *(OOC_INT32*)(_check_pointer(i0, 33220)) = i1;
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
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 33569));
              i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33555)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i2);
              if (!i0) goto l10;
              i0 = (OOC_INT32)registerMap;
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 33729));
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33718)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (Object__Object)i2);
              obj = (Object__Object)i0;
              i2 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
              i2 = i0==i2;
              if (i2) goto l8;
              i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33870)))), &_td_Object__StringDesc, 33870);
              defVar = (Object__String)i0;
              i2 = (OOC_INT32)state;
              i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33906)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (Object__Object)i0);
              _assert(i2, 127, 33893);
              i2 = (OOC_INT32)state;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 34066)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i2, (Object__Object)i0);
              obj = (Object__Object)i0;
              i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34120)))), &_td_OOC_SSA__ResultDesc, 34120);
              currentValue = (OOC_SSA__Result)i0;
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 34165));
              i2 = i0!=i2;
              if (!i2) goto l10;
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34196))+12);
              i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34196))+12);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 34203)))), OOC_SSA__ResultDesc_LogId)),OOC_SSA__ResultDesc_LogId)((OOC_SSA__Result)i3, "using instruction", 18);
              i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34286)))), OOC_SSA__OpndDesc_OpndIndex)),OOC_SSA__OpndDesc_OpndIndex)((OOC_SSA__Opnd)i1);
              Log__LongInt("  operand index", 16, i2);
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 34322));
              i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 34322));
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 34327)))), OOC_SSA__ResultDesc_LogId)),OOC_SSA__ResultDesc_LogId)((OOC_SSA__Result)i1, "  expected value", 17);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34385)))), OOC_SSA__ResultDesc_LogId)),OOC_SSA__ResultDesc_LogId)((OOC_SSA__Result)i0, "  actual value", 15);
              _assert(0u, 127, 34429);
              goto l10;
l8:
              i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 33810));
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33815))+8);
              OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpndList((OOC_SSA__Instr)i0);
l10:
              return;
              ;
            }

            
            void OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpndList(OOC_SSA__Instr instr) {
              register OOC_INT32 i0,i1;
              OOC_SSA__Opnd opnd;

              i0 = (OOC_INT32)instr;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34857))+24);
              opnd = (OOC_SSA__Opnd)i1;
              i0 = *(OOC_INT8*)((_check_pointer(i0, 34888))+36);
              i0 = i0==5;
              if (i0) goto l3;
              i0=i1;
              goto l4;
l3:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35133))+8);
              opnd = (OOC_SSA__Opnd)i0;
              
l4:
              i1 = i0!=(OOC_INT32)0;
              if (!i1) goto l15;
l7_loop:
              i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35211)))), OOC_SSA__OpndDesc_IsValueOpndHere)),OOC_SSA__OpndDesc_IsValueOpndHere)((OOC_SSA__Opnd)i0);
              if (!i1) goto l10;
              OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpnd((OOC_SSA__Opnd)i0);
l10:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35309))+8);
              opnd = (OOC_SSA__Opnd)i0;
              i1 = i0!=(OOC_INT32)0;
              if (i1) goto l7_loop;
l15:
              return;
              ;
            }


          collect = (OOC_SSA__Instr)(OOC_INT32)0;
          i0 = (OOC_INT32)bi;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35422))+4);
          b = (OOC_SSA_Schedule__Block)i0;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35445)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
          if (!i1) goto l3;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35507)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc, 35507)), 35519))+48);
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpnd((OOC_SSA__Opnd)i0);
l3:
          i0 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35568))+8);
          proxy = (OOC_SSA_Schedule__InstrProxy)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l33;
l6_loop:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35631))+12);
          i1 = *(OOC_INT8*)((_check_pointer(i1, 35638))+36);
          i1 = i1==6;
          if (i1) goto l12;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35810))+12);
          i1 = *(OOC_INT8*)((_check_pointer(i1, 35817))+36);
          i1 = i1==5;
          if (!i1) goto l13;
          i1 = (OOC_INT32)b;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35877))+8);
          _assert((i0==i1), 127, 35860);
          goto l13;
l12:
          i1 = (OOC_INT32)collect;
          _assert((i1==(OOC_INT32)0), 127, 35682);
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35731));
          _assert((i1==(OOC_INT32)0), 127, 35718);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35779))+12);
          collect = (OOC_SSA__Instr)i1;
l13:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35926))+12);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35933))+16);
          i2 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
          i1 = i1!=i2;
          if (!i1) goto l28;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35992))+12);
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpndList((OOC_SSA__Instr)i0);
          i0 = (OOC_INT32)proxy;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36039))+12);
          res = (OOC_SSA__Result)i1;
          i2 = i1!=(OOC_INT32)0;
          if (!i2) goto l28;
          i2 = (OOC_INT32)state;
          
l19_loop:
          i3 = (OOC_INT32)registerMap;
          i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 36264)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i3, (Object__Object)i1);
          if (!i3) goto l22;
          i3 = (OOC_INT32)registerMap;
          i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 36323)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i3, (Object__Object)i1);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 36305)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i3, (Object__Object)i1);
l22:
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 36400));
          res = (OOC_SSA__Result)i1;
          i3 = i1!=(OOC_INT32)0;
          if (i3) goto l19_loop;
l28:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 36481));
          proxy = (OOC_SSA_Schedule__InstrProxy)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l6_loop;
l33:
          i0 = (OOC_INT32)b;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36530)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
          if (!i1) goto l36;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36592)))), &_td_OOC_SSA_Schedule__BranchBlockDesc, 36592)), 36604))+52);
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_CheckOpnd((OOC_SSA__Opnd)i0);
l36:
          i0 = (OOC_INT32)b;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36654)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
          if (i1) goto l58;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36739)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
          if (i1) goto l56;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36880)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
          if (i1) goto l46;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37031)))), &_td_OOC_SSA_Schedule__DeadEndBlockDesc);
          if (i1) goto l59;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37028)))), 37028);
          goto l59;
l46:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36936))+52);
          i = 0;
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 36942)), 0);
          i1 = 0<i0;
          if (!i1) goto l59;
          i1=0;
l49_loop:
          i2 = (OOC_INT32)b;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 36977))+52);
          i2 = _check_pointer(i2, 36983);
          i3 = OOC_ARRAY_LENGTH(i2, 0);
          i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 36983))*4);
          i2 = (OOC_INT32)state;
          i3 = (OOC_INT32)collect;
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_UpdateTarget((OOC_SSA_Schedule__Jump)i1, (ADT_Dictionary__Dictionary)i2, (OOC_SSA__Instr)i3);
          i1 = i;
          i1 = i1+1;
          i = i1;
          i2 = i1<i0;
          if (i2) goto l49_loop;
          goto l59;
l56:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36790))+48);
          i1 = (OOC_INT32)collect;
          i2 = (OOC_INT32)state;
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_UpdateTarget((OOC_SSA_Schedule__Jump)i0, (ADT_Dictionary__Dictionary)i2, (OOC_SSA__Instr)i1);
          i0 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36840))+60);
          i1 = (OOC_INT32)state;
          i2 = (OOC_INT32)collect;
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_UpdateTarget((OOC_SSA_Schedule__Jump)i0, (ADT_Dictionary__Dictionary)i1, (OOC_SSA__Instr)i2);
          goto l59;
l58:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36703))+48);
          i1 = (OOC_INT32)collect;
          i2 = (OOC_INT32)state;
          OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock_UpdateTarget((OOC_SSA_Schedule__Jump)i0, (ADT_Dictionary__Dictionary)i2, (OOC_SSA__Instr)i1);
l59:
          return;
          ;
        }


      i0 = (OOC_INT32)OOC_SSA__NewResult((OOC_SSA__Instr)(OOC_INT32)0, (-1), (-1));
      undefinedVar = (OOC_SSA__Result)i0;
      ready = (OOC_SSA_Allocator__BlockInfo)(OOC_INT32)0;
      i0 = (OOC_INT32)root;
      OOC_SSA_Allocator__AssignRegisters_CheckRegisters_ScanBlock((OOC_SSA_Schedule__Block)i0);
      i0 = (OOC_INT32)ready;
      _assert((i0!=(OOC_INT32)0), 127, 37238);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 37279));
      _assert((i1==(OOC_INT32)0), 127, 37266);
      if (!(i0!=(OOC_INT32)0)) goto l8;
      i1=i0;
l3_loop:
      current = (OOC_SSA_Allocator__BlockInfo)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 37509));
      ready = (OOC_SSA_Allocator__BlockInfo)i2;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37557))+12);
      OOC_SSA_Allocator__AssignRegisters_CheckRegisters_CheckBlock((OOC_SSA_Allocator__BlockInfo)i1, (ADT_Dictionary__Dictionary)i2);
      i1 = (OOC_INT32)ready;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l3_loop;
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
            return 0u;
            goto l4;
          default:
            return 1u;
            goto l4;
          }
l4:
          _failed_function(37867); return 0;
          ;
        }


      i0 = (OOC_INT32)ADT_Dictionary__New();
      inPlaceEval = (ADT_Dictionary__Dictionary)i0;
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38274))+8);
      instr = (OOC_SSA__Instr)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l55;
l3_loop:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 38333))+5);
      i1 = i1!=0;
      if (i1) goto l6;
      i1=0u;
      goto l8;
l6:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38380))+16);
      i1 = i1!=(OOC_INT32)0;
      
l8:
      if (i1) goto l10;
      i0=0u;
      goto l11;
l10:
      i0 = *(OOC_INT8*)((_check_pointer(i0, 38426))+36);
      i0 = OOC_SSA_Allocator__AssignRegisters_InPlaceEval_FoldedOpcode(i0);
      
l11:
      i1 = (OOC_INT32)instr;
      if (!i0) goto l50;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38470))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38486)))), &_td_OOC_SSA_Schedule__InstrProxyDesc, 38486)), 38497))+8);
      instrBlock = (OOC_SSA_Schedule__Block)i0;
      insideUse = 0;
      outsideUse = 0;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38572))+12);
      use = (OOC_SSA__Opnd)i2;
      i3 = i2!=(OOC_INT32)0;
      if (i3) goto l16;
      i2=0;i3=0;
      goto l34;
l16:
      i3=0;i4=0;
l17_loop:
      i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 38632)))), OOC_SSA__OpndDesc_IsValueOpndHere)),OOC_SSA__OpndDesc_IsValueOpndHere)((OOC_SSA__Opnd)i2);
      if (!i5) goto l29;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 38686))+12);
      useInstr = (OOC_SSA__Instr)i5;
      i6 = *(OOC_INT8*)((_check_pointer(i5, 38721))+36);
      i6 = i6!=6;
      if (i6) goto l23;
      i5=0u;
      goto l25;
l23:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 38776))+16);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 38792)))), &_td_OOC_SSA_Schedule__InstrProxyDesc, 38792)), 38803))+8);
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 38974))+16);
      use = (OOC_SSA__Opnd)i2;
      i5 = i2!=(OOC_INT32)0;
      if (i5) goto l17_loop;
l33:
      i2=i3;i3=i4;
l34:
      i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39025)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (i4) goto l37;
      i0=0u;
      goto l39;
l37:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39086)))), &_td_OOC_SSA_Schedule__BranchBlockDesc, 39086)), 39098))+52);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 39109));
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
      i0=0u;
      goto l47;
l45:
      i0 = i0==1;
      
l47:
      if (!i0) goto l50;
      i0 = (OOC_INT32)inPlaceEval;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39260)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
l50:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39330))+28);
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
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 42181));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 42195))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 42211)))), &_td_OOC_SSA_Schedule__InstrProxyDesc, 42211)), 42222))+8);
  exitBlock = (OOC_SSA_Schedule__Block)i2;
  i3 = (OOC_INT32)domRoot;
  enterBlock = (OOC_SSA_Schedule__Block)i3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 42264)))), OOC_SSA__ProcBlockDesc_SetMarkers)),OOC_SSA__ProcBlockDesc_SetMarkers)((OOC_SSA__ProcBlock)i1, (OOC_SSA__Node)0, (-1));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 42299)))), OOC_SSA_Schedule__BlockDesc_SetInfo)),OOC_SSA_Schedule__BlockDesc_SetInfo)((OOC_SSA_Schedule__Block)i3, (OOC_SSA_Schedule__Info)0);
  i1 = (OOC_INT32)OOC_SSA_Allocator__GetBlockList((OOC_SSA_Schedule__Block)i3, (OOC_SSA_Schedule__Block)i2);
  blockList = (OOC_SSA_Allocator__BlockList)i1;
  i0 = (OOC_INT32)OOC_SSA_Allocator__IdentifyResults((OOC_SSA_Allocator__BlockList)i1, (ADT_Dictionary__Dictionary)i0);
  rfs = (OOC_SSA_Allocator__RegisterFiles)i0;
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 42741)), 0);
  i2 = 0<i1;
  if (!i2) goto l11;
  i2=0;
l3_loop:
  i4 = _check_pointer(i0, 42762);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 42762))*4);
  i4 = i4!=0;
  if (!i4) goto l6;
  i4 = _check_pointer(i0, 42814);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 42814))*4);
  OOC_SSA_Allocator__CollectCrossLoopResults((OOC_SSA_Allocator__RegisterFile)i4, (OOC_SSA_Schedule__Block)i3, (OOC_SSA_Schedule__Block)0);
l6:
  i2 = i2+1;
  i = i2;
  i4 = i2<i1;
  if (i4) goto l3_loop;
l11:
  i1 = (OOC_INT32)ADT_Dictionary__New();
  registerMap = (ADT_Dictionary__Dictionary)i1;
  i = 0;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 43105)), 0);
  i1 = 0<i0;
  if (!i1) goto l22;
  i1=0;
l14_loop:
  i2 = (OOC_INT32)rfs;
  i2 = _check_pointer(i2, 43126);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 43126))*4);
  i1 = i1!=0;
  if (!i1) goto l17;
  i1 = (OOC_INT32)blockList;
  OOC_SSA_Allocator__AssignRegisters_ClearBlockInfo((OOC_SSA_Allocator__BlockList)i1);
  i1 = (OOC_INT32)rfs;
  i2 = _check_pointer(i1, 43209);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = i;
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i4, i3, OOC_UINT32, 43209))*4);
  i3 = (OOC_INT32)enterBlock;
  i5 = (OOC_INT32)exitBlock;
  i6 = (OOC_INT32)registerMap;
  OOC_SSA_Allocator__AssignRegisterFile((OOC_SSA_Allocator__RegisterFile)i2, (OOC_SSA_Schedule__Block)i3, (OOC_SSA_Schedule__Block)i5, (ADT_Dictionary__Dictionary)i6);
  i2 = _check_pointer(i1, 43277);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i4, i3, OOC_UINT32, 43277))*4);
  i1 = _check_pointer(i1, 43299);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i4, i3, OOC_UINT32, 43299))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 43302))+20);
  i2 = *(OOC_INT8*)(_check_pointer(i2, 43280));
  i3 = (OOC_INT32)w;
  OOC_SSA_Allocator__AssignRegisters_WriteNames((OOC_C_DeclWriter__Writer)i3, i2, (OOC_SSA_Allocator__NameArray)i1);
l17:
  i1 = i;
  i1 = i1+1;
  i = i1;
  i2 = i1<i0;
  if (i2) goto l14_loop;
l22:
  i0 = (OOC_INT32)inPlaceEval;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43355)))), ADT_Dictionary__DictionaryDesc_Keys)),ADT_Dictionary__DictionaryDesc_Keys)((ADT_Dictionary__Dictionary)i0);
  keys = (Object__ObjectArrayPtr)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 43392)), 0);
  i = 0;
  i2 = (OOC_INT32)registerMap;
  i3 = 0<i1;
  if (!i3) goto l30;
  i3=0;
l25_loop:
  i4 = _check_pointer(i0, 43428);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 43428))*4);
  i5 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 43417)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i4, (Object__Object)i5);
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l25_loop;
l30:
  i0 = (OOC_INT32)domRoot;
  OOC_SSA_Allocator__AssignRegisters_CheckRegisters((OOC_SSA_Schedule__Block)i0, (ADT_Dictionary__Dictionary)i2);
  i0 = (OOC_INT32)registerMap;
  return (ADT_Dictionary__Dictionary)i0;
  ;
}

void OOC_OOC_SSA_Allocator_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)OOC_SSA__NewResult((OOC_SSA__Instr)(OOC_INT32)0, (-1), (-1));
  OOC_SSA_Allocator__markInPlace = (OOC_SSA__Result)i0;
  return;
  ;
}

/* --- */
