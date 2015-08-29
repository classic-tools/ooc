#include <OOC/IA32/WriteAssembler.d>
#include <__oo2c.h>

static void OOC_IA32_WriteAssembler__WriteInstrList(OOC_IA32_Writer__Writer w, OOC_SSA_Schedule__Block b) {
  register OOC_INT32 i0,i1;
  OOC_SSA_Schedule__InstrProxy proxy;
  OOC_SSA__Instr instr;
  auto void OOC_IA32_WriteAssembler__WriteInstrList_Value(OOC_SSA__Opnd opnd, OOC_CHAR8 str[], OOC_LEN str_0d);
  auto void OOC_IA32_WriteAssembler__WriteInstrList_Push(OOC_SSA__Opnd opnd);
  auto OOC_INT32 OOC_IA32_WriteAssembler__WriteInstrList_PushList(OOC_SSA__Opnd opnd, OOC_INT8 _class);
  auto void OOC_IA32_WriteAssembler__WriteInstrList_Assert(OOC_SSA__Instr assert);
  auto void OOC_IA32_WriteAssembler__WriteInstrList_Call(OOC_SSA__Instr call);
    
    void OOC_IA32_WriteAssembler__WriteInstrList_Value(OOC_SSA__Opnd opnd, OOC_CHAR8 str[], OOC_LEN str_0d) {
      register OOC_INT32 i0,i1;
      OOC_SSA__Result arg;
      Object__String s;
      Object__CharsLatin1 chars;
      auto void OOC_IA32_WriteAssembler__WriteInstrList_Value_Const(Object_Boxed__Object value, OOC_SymbolTable__Type type);
        
        void OOC_IA32_WriteAssembler__WriteInstrList_Value_Const(Object_Boxed__Object value, OOC_SymbolTable__Type type) {
          register OOC_INT32 i0,i1;
          Object__String s;
          Object__CharsLatin1 chars;
          Object__String string;

          i0 = (OOC_INT32)value;
          i1 = i0==(OOC_INT32)0;
          if (i1) goto l31;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2632)))), &_td_Object_Boxed__BooleanDesc);
          if (i1) goto l25;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2798)))), &_td_Object_Boxed__StringDesc);
          if (i1) goto l19;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3169)))), &_td_Object_Boxed__LongRealDesc);
          if (i1) goto l17;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3234)))), &_td_Object_BigInt__BigIntDesc);
          if (i1) goto l15;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3442)))), &_td_Object_Boxed__SetDesc);
          if (i1) goto l13;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3435)))), 3435);
          goto l32;
l13:
          _assert(OOC_FALSE, 127, 3469);
          goto l32;
l15:
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3280)))), Object_BigInt__BigIntDesc_ToString)),Object_BigInt__BigIntDesc_ToString)((Object_BigInt__BigInt)i0);
          string = (Object__String)i0;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3328)))), &_td_Object__String8Desc, 3328)), 3336)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3328)))), &_td_Object__String8Desc, 3328)));
          chars = (Object__CharsLatin1)i0;
          _copy_8((const void*)(_check_pointer(i0, 3374)),(void*)(OOC_INT32)str,str_0d);
          Strings__Insert("$", 2, (OOC_INT32)0, (void*)(OOC_INT32)str, str_0d);
          goto l32;
l17:
          _assert(OOC_FALSE, 127, 3201);
          goto l32;
l19:
          i1 = (OOC_INT32)type;
          i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2841)))), &_td_OOC_SymbolTable__PredefTypeDesc, 2841)), 2852))+32);
          i1 = i1==1;
          if (i1) goto l22;
          i1 = (OOC_INT32)w;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2978)))), OOC_IA32_Writer__WriterDesc_GetStringLabel)),OOC_IA32_Writer__WriterDesc_GetStringLabel)((OOC_IA32_Writer__Writer)i1, (Object_Boxed__String)i0);
          s = (Object__String)i0;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3036)))), &_td_Object__String8Desc, 3036)), 3044)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3036)))), &_td_Object__String8Desc, 3036)));
          chars = (Object__CharsLatin1)i0;
          _copy_8((const void*)(_check_pointer(i0, 3084)),(void*)(OOC_INT32)str,str_0d);
          goto l23;
l22:
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2916));
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2916));
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2922)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, 0);
          IntStr__IntToStr(i0, (void*)(OOC_INT32)str, str_0d);
l23:
          Strings__Insert("$", 2, (OOC_INT32)0, (void*)(OOC_INT32)str, str_0d);
          goto l32;
l25:
          i0 = *(OOC_UINT8*)(_check_pointer(i0, 2671));
          if (i0) goto l28;
          _copy_8((const void*)"$0",(void*)(OOC_INT32)str,str_0d);
          goto l32;
l28:
          _copy_8((const void*)"$1",(void*)(OOC_INT32)str,str_0d);
          goto l32;
l31:
          _copy_8((const void*)"$0",(void*)(OOC_INT32)str,str_0d);
l32:
          return;
          ;
        }


      i0 = (OOC_INT32)opnd;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3562));
      arg = (OOC_SSA__Result)i0;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3583)))), &_td_OOC_SSA__ConstDesc);
      if (i1) goto l11;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3657)))), &_td_OOC_SSA__AddressDesc);
      if (i1) goto l9;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3830))+8);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 3837))+36);
      switch (i1) {
      case 12:
        i0 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3943)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i0, "movswl 8(%ebp),%ebx", 20);
        _copy_8((const void*)"%ebx",(void*)(OOC_INT32)str,str_0d);
        goto l12;
      default:
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4055))+8);
        Log__Type("arg.instr", 10, (void*)i1);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4078))+8);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4078))+8);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4085)))), OOC_SSA__InstrDesc_LogOpcode)),OOC_SSA__InstrDesc_LogOpcode)((OOC_SSA__Instr)i0, "opcode", 7);
        _assert(OOC_FALSE, 127, 4119);
        goto l12;
      }
l9:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3716))+44);
      i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
      s = (Object__String)i0;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3751)))), &_td_Object__String8Desc, 3751)), 3759)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3751)))), &_td_Object__String8Desc, 3751)));
      chars = (Object__CharsLatin1)i0;
      _copy_8((const void*)(_check_pointer(i0, 3793)),(void*)(OOC_INT32)str,str_0d);
      goto l12;
l11:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3616))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3628))+48);
      OOC_IA32_WriteAssembler__WriteInstrList_Value_Const((Object_Boxed__Object)i1, (OOC_SymbolTable__Type)i0);
l12:
      return;
      ;
    }

    
    void OOC_IA32_WriteAssembler__WriteInstrList_Push(OOC_SSA__Opnd opnd) {
      register OOC_INT32 i0;
      OOC_IA32_WriteAssembler__Buffer str;

      i0 = (OOC_INT32)opnd;
      OOC_IA32_WriteAssembler__WriteInstrList_Value((OOC_SSA__Opnd)i0, (void*)(OOC_INT32)str, 256);
      Strings__Insert("pushl ", 7, 0, (void*)(OOC_INT32)str, 256);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4322)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i0, (void*)(OOC_INT32)str, 256);
      return;
      ;
    }

    
    OOC_INT32 OOC_IA32_WriteAssembler__WriteInstrList_PushList(OOC_SSA__Opnd opnd, OOC_INT8 _class) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)opnd;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 4471))+4);
      i2 = _class;
      i1 = i1==i2;
      if (i1) goto l3;
      return 0;
      goto l4;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4522))+8);
      i1 = OOC_IA32_WriteAssembler__WriteInstrList_PushList((OOC_SSA__Opnd)i1, i2);
      OOC_IA32_WriteAssembler__WriteInstrList_Push((OOC_SSA__Opnd)i0);
      return (i1+1);
l4:
      _failed_function(4364); return 0;
      ;
    }

    
    void OOC_IA32_WriteAssembler__WriteInstrList_Assert(OOC_SSA__Instr assert) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)assert;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4772))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4782))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4792))+8);
      OOC_IA32_WriteAssembler__WriteInstrList_Push((OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 4829))+40);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4812)))), OOC_IA32_Writer__WriterDesc_PushInt)),OOC_IA32_Writer__WriterDesc_PushInt)((OOC_IA32_Writer__Writer)i1, i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4844)))), OOC_IA32_Writer__WriterDesc_PushLabel)),OOC_IA32_Writer__WriterDesc_PushLabel)((OOC_IA32_Writer__Writer)i0, "_mid", 5);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4873)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i0, "call RT0__ErrorAssertionFailed", 31);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4924)))), OOC_IA32_Writer__WriterDesc_PopBytes)),OOC_IA32_Writer__WriterDesc_PopBytes)((OOC_IA32_Writer__Writer)i0, 12);
      return;
      ;
    }

    
    void OOC_IA32_WriteAssembler__WriteInstrList_Call(OOC_SSA__Instr call) {
      register OOC_INT32 i0,i1;
      OOC_INT32 len;
      OOC_IA32_WriteAssembler__Buffer str;

      i0 = (OOC_INT32)call;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5078))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5088))+8);
      i1 = OOC_IA32_WriteAssembler__WriteInstrList_PushList((OOC_SSA__Opnd)i1, 1);
      len = i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5128))+24);
      OOC_IA32_WriteAssembler__WriteInstrList_Value((OOC_SSA__Opnd)i0, (void*)(OOC_INT32)str, 256);
      Strings__Insert("call ", 6, 0, (void*)(OOC_INT32)str, 256);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5193)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i0, (void*)(OOC_INT32)str, 256);
      i0 = i1!=0;
      if (!i0) goto l4;
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5241)))), OOC_IA32_Writer__WriterDesc_PopBytes)),OOC_IA32_Writer__WriterDesc_PopBytes)((OOC_IA32_Writer__Writer)i0, (i1*4));
l4:
      return;
      ;
    }


  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5311))+8);
  i1 = i0!=(OOC_INT32)0;
  proxy = (OOC_SSA_Schedule__InstrProxy)i0;
  if (!i1) goto l26;
l3_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5371))+12);
  instr = (OOC_SSA__Instr)i0;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 5397))+36);
  switch (i1) {
  case 0:
    goto l21;
  case 1:
    goto l21;
  case 2:
    goto l21;
  case 3:
    goto l21;
  case 12:
    goto l21;
  case 4:
    goto l21;
  case 5:
    goto l21;
  case 74:
    goto l21;
  case 22:
    goto l21;
  case 57:
    goto l21;
  case 58:
    goto l21;
  case 7:
    goto l21;
  case 8:
    goto l21;
  case 64:
    OOC_IA32_WriteAssembler__WriteInstrList_Assert((OOC_SSA__Instr)i0);
    goto l21;
  case 55:
    OOC_IA32_WriteAssembler__WriteInstrList_Call((OOC_SSA__Instr)i0);
    goto l21;
  default:
    _failed_case(i1, 5387);
    goto l21;
  }
l21:
  i0 = (OOC_INT32)proxy;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6249));
  proxy = (OOC_SSA_Schedule__InstrProxy)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l26:
  return;
  ;
}

static void OOC_IA32_WriteAssembler__WriteBlocks(OOC_IA32_Writer__Writer w, OOC_SSA_Schedule__Block domRoot) {
  register OOC_INT32 i0;
  auto void OOC_IA32_WriteAssembler__WriteBlocks_WriteBlock(OOC_SSA_Schedule__Block b);
    
    void OOC_IA32_WriteAssembler__WriteBlocks_WriteBlock(OOC_SSA_Schedule__Block b) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)b;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 6425))+36);
      i1 = i1!=0;
      if (!i1) goto l4;
      i1 = (OOC_INT32)w;
      OOC_IA32_WriteAssembler__WriteInstrList((OOC_IA32_Writer__Writer)i1, (OOC_SSA_Schedule__Block)i0);
l4:
      return;
      ;
    }


  i0 = (OOC_INT32)domRoot;
  OOC_IA32_WriteAssembler__WriteBlocks_WriteBlock((OOC_SSA_Schedule__Block)i0);
  return;
  ;
}

void OOC_IA32_WriteAssembler__TranslatorDesc_WriteProcBody(OOC_IA32_WriteAssembler__Translator t, OOC_IR__Procedure proc) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_SSA__ProcBlock pb;
  OOC_CHAR8 writeProc;
  OOC_SSA__Instr enter;
  OOC_SSA__Result s;
  OOC_SSA_Destore__State destore;
  OOC_SSA_Schedule__Block domRoot;
  OOC_IA32_Writer__Writer w;
  Object__String name;
  OOC_CHAR8 lfe[32];
  auto void OOC_IA32_WriteAssembler__TranslatorDesc_WriteProcBody_Write(const OOC_CHAR8 pre__ref[], OOC_LEN pre_0d, const OOC_CHAR8 post__ref[], OOC_LEN post_0d);
    
    void OOC_IA32_WriteAssembler__TranslatorDesc_WriteProcBody_Write(const OOC_CHAR8 pre__ref[], OOC_LEN pre_0d, const OOC_CHAR8 post__ref[], OOC_LEN post_0d) {
      register OOC_INT32 i0,i1;
      OOC_ALLOCATE_VPAR(pre,OOC_CHAR8 ,pre_0d)
      OOC_ALLOCATE_VPAR(post,OOC_CHAR8 ,post_0d)

      OOC_INITIALIZE_VPAR(pre__ref,pre,OOC_CHAR8 ,pre_0d)
      OOC_INITIALIZE_VPAR(post__ref,post,OOC_CHAR8 ,post_0d)
      i0 = writeProc;
      if (i0) goto l3;
      i0=OOC_FALSE;
      goto l9;
l3:
      i0 = (OOC_INT32)t;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6936))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6936))+24);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6950)))), StringSearch__MatcherDesc_MatchChars)),StringSearch__MatcherDesc_MatchChars)((StringSearch__Matcher)i0, (void*)(OOC_INT32)pre, pre_0d, 0, -1);
      i0 = i0!=(OOC_INT32)0;
      if (i0) goto l6;
      i0 = (OOC_INT32)t;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6998))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6998))+24);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7012)))), StringSearch__MatcherDesc_MatchChars)),StringSearch__MatcherDesc_MatchChars)((StringSearch__Matcher)i0, (void*)(OOC_INT32)post, post_0d, 0, -1);
      i0 = i0!=(OOC_INT32)0;
      
      goto l9;
l6:
      i0=OOC_TRUE;
l9:
      if (!i0) goto l11;
      Out__String("PROCEDURE ", 11);
      i0 = (OOC_INT32)pb;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7109))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7119))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7125))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7109))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7119))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7125))+12);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 7130)), (OOC_INT32)0);
      Out__String((void*)(_check_pointer(i1, 7130)), i0);
      Out__String("/", 2);
      Out__String((void*)(OOC_INT32)pre, pre_0d);
      Out__String("/", 2);
      Out__String((void*)(OOC_INT32)post, post_0d);
      Out__String(":", 2);
      Out__Ln();
      Out__Flush();
      i0 = (OOC_INT32)StdChannels__stdout;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7337)))), Channel__ChannelDesc_NewWriter)),Channel__ChannelDesc_NewWriter)((Channel__Channel)i0);
      i1 = (OOC_INT32)pb;
      OOC_SSA_XML__Write((Channel__Writer)i0, (OOC_SSA__ProcBlock)i1, OOC_TRUE);
      Out__Flush();
l11:
      return;
      ;
    }


  i0 = (OOC_INT32)proc;
  i1 = (OOC_INT32)OOC_SSA__NewProcBlock((OOC_IR__Procedure)i0);
  pb = (OOC_SSA__ProcBlock)i1;
  i2 = (OOC_INT32)t;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7530))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7561))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 7567))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 7573))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7561))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 7567))+16);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 7573))+12);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 7578)), (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7530))+20);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 7543)))), StringSearch__MatcherDesc_MatchChars)),StringSearch__MatcherDesc_MatchChars)((StringSearch__Matcher)i2, (void*)(_check_pointer(i4, 7578)), i5, 0, -1);
  writeProc = (i2!=(OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7611));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7625))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 7635));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7640))+8);
  enter = (OOC_SSA__Instr)i2;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 7685));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7730))+8);
  i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i1, (OOC_SSA__Result)i2, (OOC_IR__StatementSeq)i0);
  s = (OOC_SSA__Result)i0;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7749));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7749));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7763)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 2);
  OOC_IA32_WriteAssembler__TranslatorDesc_WriteProcBody_Write("initial", 8, "dce-pre", 8);
  i0 = (OOC_INT32)pb;
  OOC_SSA_DeadCodeElimination__Transform((OOC_SSA__ProcBlock)i0);
  OOC_IA32_WriteAssembler__TranslatorDesc_WriteProcBody_Write("dce-post", 9, "destore-pre", 12);
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)OOC_SSA_Destore__New((OOC_SSA__ProcBlock)i0);
  destore = (OOC_SSA_Destore__State)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8032)))), OOC_SSA_Destore__StateDesc_Transform)),OOC_SSA_Destore__StateDesc_Transform)((OOC_SSA_Destore__State)i0);
  OOC_IA32_WriteAssembler__TranslatorDesc_WriteProcBody_Write("destore-post", 13, "dce-pre", 8);
  i0 = (OOC_INT32)pb;
  OOC_SSA_DeadCodeElimination__Transform((OOC_SSA__ProcBlock)i0);
  OOC_IA32_WriteAssembler__TranslatorDesc_WriteProcBody_Write("dce-post", 9, "final", 6);
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)OOC_SSA_Schedule__Schedule((OOC_SSA__ProcBlock)i0);
  domRoot = (OOC_SSA_Schedule__Block)i0;
  i1 = writeProc;
  i2 = (OOC_INT32)t;
  if (!i1) goto l6;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8232))+24);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8232))+24);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8246)))), StringSearch__MatcherDesc_MatchChars)),StringSearch__MatcherDesc_MatchChars)((StringSearch__Matcher)i3, "schedule", 9, 0, -1);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l6;
  i1 = (OOC_INT32)StdChannels__stdout;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8384)))), Channel__ChannelDesc_NewWriter)),Channel__ChannelDesc_NewWriter)((Channel__Channel)i1);
  OOC_SSA_XML__WriteSchedule((Channel__Writer)i1, (OOC_SSA_Schedule__Block)i0);
  Out__Flush();
l6:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 8463));
  w = (OOC_IA32_Writer__Writer)i1;
  i3 = (OOC_INT32)proc;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8480))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 8486))+4);
  i4 = i4==(OOC_INT32)0;
  if (i4) goto l9;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8623))+4);
  i3 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i3);
  name = (Object__String)i3;
  
  goto l10;
l9:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8547))+8);
  i3 = (OOC_INT32)OOC_C_Naming__NameOfModuleInit((OOC_SymbolTable__Module)i3, OOC_TRUE);
  name = (Object__String)i3;
  
l10:
  i4 = *(OOC_INT32*)((_check_pointer(i2, 8663))+28);
  IntStr__IntToStr(i4, (void*)(OOC_INT32)lfe, 32);
  Strings__Insert(".Lfe", 5, (OOC_INT32)0, (void*)(OOC_INT32)lfe, 32);
  i4 = *(OOC_INT32*)((_check_pointer(i2, 8728))+28);
  *(OOC_INT32*)((_check_pointer(i2, 8728))+28) = (i4+1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8751)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i1, ".align 4", 9);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8778)))), OOC_IA32_Writer__WriterDesc_Write)),OOC_IA32_Writer__WriterDesc_Write)((OOC_IA32_Writer__Writer)i1, ".globl ", 8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8800)))), OOC_IA32_Writer__WriterDesc_WriteStr)),OOC_IA32_Writer__WriterDesc_WriteStr)((OOC_IA32_Writer__Writer)i1, (Object__String)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8820)))), OOC_IA32_Writer__WriterDesc_Newline)),OOC_IA32_Writer__WriterDesc_Newline)((OOC_IA32_Writer__Writer)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8836)))), OOC_IA32_Writer__WriterDesc_Write)),OOC_IA32_Writer__WriterDesc_Write)((OOC_IA32_Writer__Writer)i1, "\011.type ", 8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8866)))), OOC_IA32_Writer__WriterDesc_WriteStr)),OOC_IA32_Writer__WriterDesc_WriteStr)((OOC_IA32_Writer__Writer)i1, (Object__String)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8890)))), OOC_IA32_Writer__WriterDesc_Write)),OOC_IA32_Writer__WriterDesc_Write)((OOC_IA32_Writer__Writer)i1, ",@function", 11);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8915)))), OOC_IA32_Writer__WriterDesc_Newline)),OOC_IA32_Writer__WriterDesc_Newline)((OOC_IA32_Writer__Writer)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8931)))), OOC_IA32_Writer__WriterDesc_Label)),OOC_IA32_Writer__WriterDesc_Label)((OOC_IA32_Writer__Writer)i1, (Object__String)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8952)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i1, "pushl %ebp", 11);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8981)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i1, "movl %esp,%ebp", 15);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9014)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i1, "pushl %ebx", 11);
  OOC_IA32_WriteAssembler__WriteBlocks((OOC_IA32_Writer__Writer)i1, (OOC_SSA_Schedule__Block)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9115)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i1, "pop %ebx", 9);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9179)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i1, "leave", 6);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9203)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i1, "ret", 4);
  i0 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)lfe, 32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9225)))), OOC_IA32_Writer__WriterDesc_Label)),OOC_IA32_Writer__WriterDesc_Label)((OOC_IA32_Writer__Writer)i1, (Object__String)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9263)))), OOC_IA32_Writer__WriterDesc_Write)),OOC_IA32_Writer__WriterDesc_Write)((OOC_IA32_Writer__Writer)i1, "\011.size ", 8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9293)))), OOC_IA32_Writer__WriterDesc_WriteStr)),OOC_IA32_Writer__WriterDesc_WriteStr)((OOC_IA32_Writer__Writer)i1, (Object__String)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9313)))), OOC_IA32_Writer__WriterDesc_Write)),OOC_IA32_Writer__WriterDesc_Write)((OOC_IA32_Writer__Writer)i1, ",", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9333)))), OOC_IA32_Writer__WriterDesc_Write)),OOC_IA32_Writer__WriterDesc_Write)((OOC_IA32_Writer__Writer)i1, (void*)(OOC_INT32)lfe, 32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9349)))), OOC_IA32_Writer__WriterDesc_Write)),OOC_IA32_Writer__WriterDesc_Write)((OOC_IA32_Writer__Writer)i1, "-", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9365)))), OOC_IA32_Writer__WriterDesc_WriteStr)),OOC_IA32_Writer__WriterDesc_WriteStr)((OOC_IA32_Writer__Writer)i1, (Object__String)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9385)))), OOC_IA32_Writer__WriterDesc_Newline)),OOC_IA32_Writer__WriterDesc_Newline)((OOC_IA32_Writer__Writer)i1);
  return;
  ;
}

void OOC_IA32_WriteAssembler__InitTranslator(OOC_IA32_WriteAssembler__Translator t, OOC_Repository__Module module, StringSearch__Matcher inspectProc, StringSearch__Matcher inspectStage) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)module;
  i1 = (OOC_INT32)t;
  OOC_Make_TranslateToIA32__InitTranslator((OOC_Make_TranslateToIA32__Translator)i1, (OOC_Repository__Module)i0);
  i0 = (OOC_INT32)inspectProc;
  *(OOC_INT32*)((_check_pointer(i1, 9619))+20) = i0;
  i0 = (OOC_INT32)inspectStage;
  *(OOC_INT32*)((_check_pointer(i1, 9654))+24) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 9691))+28) = 1;
  return;
  ;
}

OOC_IA32_WriteAssembler__Translator OOC_IA32_WriteAssembler__NewTranslator(OOC_Repository__Module module, StringSearch__Matcher inspectProc, StringSearch__Matcher inspectStage) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IA32_WriteAssembler__Translator.baseTypes[0]);
  i1 = (OOC_INT32)module;
  i2 = (OOC_INT32)inspectProc;
  i3 = (OOC_INT32)inspectStage;
  OOC_IA32_WriteAssembler__InitTranslator((OOC_IA32_WriteAssembler__Translator)i0, (OOC_Repository__Module)i1, (StringSearch__Matcher)i2, (StringSearch__Matcher)i3);
  return (OOC_IA32_WriteAssembler__Translator)i0;
  ;
}

void OOC_OOC_IA32_WriteAssembler_init(void) {

  return;
  ;
}

/* --- */
