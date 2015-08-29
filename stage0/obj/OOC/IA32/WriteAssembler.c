#include <OOC/IA32/WriteAssembler.d>
#include <__oo2c.h>
#include <setjmp.h>

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
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2644)))), &_td_Object_Boxed__BooleanDesc);
          if (i1) goto l25;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2810)))), &_td_Object_Boxed__StringDesc);
          if (i1) goto l19;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3181)))), &_td_Object_Boxed__LongRealDesc);
          if (i1) goto l17;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3246)))), &_td_Object_BigInt__BigIntDesc);
          if (i1) goto l15;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3454)))), &_td_Object_Boxed__SetDesc);
          if (i1) goto l13;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3447)))), 3447);
          goto l32;
l13:
          _assert(OOC_FALSE, 127, 3481);
          goto l32;
l15:
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3292)))), Object_BigInt__BigIntDesc_ToString)),Object_BigInt__BigIntDesc_ToString)((Object_BigInt__BigInt)i0);
          string = (Object__String)i0;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3340)))), &_td_Object__String8Desc, 3340)), 3348)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3340)))), &_td_Object__String8Desc, 3340)));
          chars = (Object__CharsLatin1)i0;
          _copy_8((const void*)(_check_pointer(i0, 3386)),(void*)(OOC_INT32)str,str_0d);
          Strings__Insert("$", 2, (OOC_INT32)0, (void*)(OOC_INT32)str, str_0d);
          goto l32;
l17:
          _assert(OOC_FALSE, 127, 3213);
          goto l32;
l19:
          i1 = (OOC_INT32)type;
          i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2853)))), &_td_OOC_SymbolTable__PredefTypeDesc, 2853)), 2864))+32);
          i1 = i1==1;
          if (i1) goto l22;
          i1 = (OOC_INT32)w;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2990)))), OOC_IA32_Writer__WriterDesc_GetStringLabel)),OOC_IA32_Writer__WriterDesc_GetStringLabel)((OOC_IA32_Writer__Writer)i1, (Object_Boxed__String)i0);
          s = (Object__String)i0;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3048)))), &_td_Object__String8Desc, 3048)), 3056)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3048)))), &_td_Object__String8Desc, 3048)));
          chars = (Object__CharsLatin1)i0;
          _copy_8((const void*)(_check_pointer(i0, 3096)),(void*)(OOC_INT32)str,str_0d);
          goto l23;
l22:
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2928));
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2928));
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2934)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, 0);
          IntStr__IntToStr(i0, (void*)(OOC_INT32)str, str_0d);
l23:
          Strings__Insert("$", 2, (OOC_INT32)0, (void*)(OOC_INT32)str, str_0d);
          goto l32;
l25:
          i0 = *(OOC_UINT8*)(_check_pointer(i0, 2683));
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
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3574));
      arg = (OOC_SSA__Result)i0;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3595)))), &_td_OOC_SSA__ConstDesc);
      if (i1) goto l11;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3669)))), &_td_OOC_SSA__AddressDesc);
      if (i1) goto l9;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3842))+8);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 3849))+36);
      switch (i1) {
      case 12:
        i0 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3955)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i0, "movswl 8(%ebp),%ebx", 20);
        _copy_8((const void*)"%ebx",(void*)(OOC_INT32)str,str_0d);
        goto l12;
      default:
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4067))+8);
        Log__Type("arg.instr", 10, (void*)i1);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4090))+8);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4090))+8);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4097)))), OOC_SSA__InstrDesc_LogOpcode)),OOC_SSA__InstrDesc_LogOpcode)((OOC_SSA__Instr)i0, "opcode", 7);
        _assert(OOC_FALSE, 127, 4131);
        goto l12;
      }
l9:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3728))+44);
      i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
      s = (Object__String)i0;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3763)))), &_td_Object__String8Desc, 3763)), 3771)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3763)))), &_td_Object__String8Desc, 3763)));
      chars = (Object__CharsLatin1)i0;
      _copy_8((const void*)(_check_pointer(i0, 3805)),(void*)(OOC_INT32)str,str_0d);
      goto l12;
l11:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3628))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3640))+48);
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4334)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i0, (void*)(OOC_INT32)str, 256);
      return;
      ;
    }

    
    OOC_INT32 OOC_IA32_WriteAssembler__WriteInstrList_PushList(OOC_SSA__Opnd opnd, OOC_INT8 _class) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)opnd;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 4483))+4);
      i2 = _class;
      i1 = i1==i2;
      if (i1) goto l3;
      return 0;
      goto l4;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4534))+8);
      i1 = OOC_IA32_WriteAssembler__WriteInstrList_PushList((OOC_SSA__Opnd)i1, i2);
      OOC_IA32_WriteAssembler__WriteInstrList_Push((OOC_SSA__Opnd)i0);
      return (i1+1);
l4:
      _failed_function(4376); return 0;
      ;
    }

    
    void OOC_IA32_WriteAssembler__WriteInstrList_Assert(OOC_SSA__Instr assert) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)assert;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4784))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4794))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4804))+8);
      OOC_IA32_WriteAssembler__WriteInstrList_Push((OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 4841))+40);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4824)))), OOC_IA32_Writer__WriterDesc_PushInt)),OOC_IA32_Writer__WriterDesc_PushInt)((OOC_IA32_Writer__Writer)i1, i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4856)))), OOC_IA32_Writer__WriterDesc_PushLabel)),OOC_IA32_Writer__WriterDesc_PushLabel)((OOC_IA32_Writer__Writer)i0, "_mid", 5);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4885)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i0, "call RT0__ErrorAssertionFailed", 31);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4936)))), OOC_IA32_Writer__WriterDesc_PopBytes)),OOC_IA32_Writer__WriterDesc_PopBytes)((OOC_IA32_Writer__Writer)i0, 12);
      return;
      ;
    }

    
    void OOC_IA32_WriteAssembler__WriteInstrList_Call(OOC_SSA__Instr call) {
      register OOC_INT32 i0,i1;
      OOC_INT32 len;
      OOC_IA32_WriteAssembler__Buffer str;

      i0 = (OOC_INT32)call;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5090))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5100))+8);
      i1 = OOC_IA32_WriteAssembler__WriteInstrList_PushList((OOC_SSA__Opnd)i1, 1);
      len = i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5140))+24);
      OOC_IA32_WriteAssembler__WriteInstrList_Value((OOC_SSA__Opnd)i0, (void*)(OOC_INT32)str, 256);
      Strings__Insert("call ", 6, 0, (void*)(OOC_INT32)str, 256);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5205)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i0, (void*)(OOC_INT32)str, 256);
      i0 = i1!=0;
      if (!i0) goto l4;
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5253)))), OOC_IA32_Writer__WriterDesc_PopBytes)),OOC_IA32_Writer__WriterDesc_PopBytes)((OOC_IA32_Writer__Writer)i0, (i1*4));
l4:
      return;
      ;
    }


  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5323))+8);
  i1 = i0!=(OOC_INT32)0;
  proxy = (OOC_SSA_Schedule__InstrProxy)i0;
  if (!i1) goto l26;
l3_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5383))+12);
  instr = (OOC_SSA__Instr)i0;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 5409))+36);
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
  case 81:
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
    _failed_case(i1, 5399);
    goto l21;
  }
l21:
  i0 = (OOC_INT32)proxy;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6261));
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
      i1 = *(OOC_INT32*)((_check_pointer(i0, 6437))+36);
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

void OOC_IA32_WriteAssembler__TranslatorDesc_WriteProcBody(volatile OOC_IA32_WriteAssembler__Translator t, volatile OOC_IR__Procedure proc) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  volatile OOC_SSA__ProcBlock pb;
  volatile OOC_CHAR8 writeProc;
  volatile OOC_SSA__Instr enter;
  volatile OOC_SSA__Result s;
  volatile OOC_SSA_Destore__State destore;
  volatile OOC_SSA_Schedule__Block domRoot;
  volatile OOC_IA32_Writer__Writer w;
  volatile Object__String name;
  volatile OOC_CHAR8 lfe[32];
  auto void OOC_IA32_WriteAssembler__TranslatorDesc_WriteProcBody_Write(const OOC_CHAR8 pre__ref[], volatile OOC_LEN pre_0d, const OOC_CHAR8 post__ref[], volatile OOC_LEN post_0d);
  jmp_buf _target0;
  Exception__Context _context0;
    
    void OOC_IA32_WriteAssembler__TranslatorDesc_WriteProcBody_Write(const OOC_CHAR8 pre__ref[], volatile OOC_LEN pre_0d, const OOC_CHAR8 post__ref[], volatile OOC_LEN post_0d) {
      register OOC_INT32 i0,i1;
      OOC_ALLOCATE_VPAR(pre,OOC_CHAR8 ,pre_0d)
      OOC_ALLOCATE_VPAR(post,OOC_CHAR8 ,post_0d)
      jmp_buf _target0;
      Exception__Context _context0;

      OOC_INITIALIZE_VPAR(pre__ref,pre,OOC_CHAR8 ,pre_0d)
      OOC_INITIALIZE_VPAR(post__ref,post,OOC_CHAR8 ,post_0d)
      i0 = writeProc;
      if (i0) goto l3;
      i0=OOC_FALSE;
      goto l9;
l3:
      i0 = (OOC_INT32)t;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6948))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6948))+24);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6962)))), StringSearch__MatcherDesc_MatchChars)),StringSearch__MatcherDesc_MatchChars)((StringSearch__Matcher)i0, (void*)(OOC_INT32)pre, pre_0d, 0, -1);
      i0 = i0!=(OOC_INT32)0;
      if (i0) goto l6;
      i0 = (OOC_INT32)t;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7010))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7010))+24);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7024)))), StringSearch__MatcherDesc_MatchChars)),StringSearch__MatcherDesc_MatchChars)((StringSearch__Matcher)i0, (void*)(OOC_INT32)post, post_0d, 0, -1);
      i0 = i0!=(OOC_INT32)0;
      
      goto l9;
l6:
      i0=OOC_TRUE;
l9:
      if (!i0) goto l18;
      Out__String("PROCEDURE ", 11);
      i0 = (OOC_INT32)pb;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7121))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7131))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7137))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7121))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7131))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7137))+12);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 7142)), (OOC_INT32)0);
      Out__String((void*)(_check_pointer(i1, 7142)), i0);
      Out__String("/", 2);
      Out__String((void*)(OOC_INT32)pre, pre_0d);
      Out__String("/", 2);
      Out__String((void*)(OOC_INT32)post, post_0d);
      Out__String(":", 2);
      Out__Ln();
      Out__Flush();
      {
        if (!setjmp(_target0)) goto l16;
        Exception__PopContext(1);
        i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((Exception__Current()))), &_td_IO__ErrorDesc);
        if (i0) goto l15;
        Exception__ActivateContext();
l15:
        Exception__Clear();
        goto l17;
l16:
        Exception__PushContext(&_context0, &_target0);
        i0 = (OOC_INT32)IO_StdChannels__stdout;
        i1 = (OOC_INT32)pb;
        OOC_SSA_XML__Write((IO__ByteChannel)i0, (OOC_SSA__ProcBlock)i1, OOC_TRUE);
        Exception__PopContext(1);
l17:;
      }
      Out__Flush();
l18:
      return;
      ;
    }


  i0 = (OOC_INT32)proc;
  i1 = (OOC_INT32)OOC_SSA__NewProcBlock((OOC_IR__Procedure)i0);
  pb = (OOC_SSA__ProcBlock)i1;
  i2 = (OOC_INT32)t;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7580))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7611))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 7617))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 7623))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7611))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 7617))+16);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 7623))+12);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 7628)), (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7580))+20);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 7593)))), StringSearch__MatcherDesc_MatchChars)),StringSearch__MatcherDesc_MatchChars)((StringSearch__Matcher)i2, (void*)(_check_pointer(i4, 7628)), i5, 0, -1);
  writeProc = (i2!=(OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7661));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7675))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 7685));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7690))+8);
  enter = (OOC_SSA__Instr)i2;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 7735));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7780))+8);
  i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i1, (OOC_SSA__Result)i2, (OOC_IR__StatementSeq)i0);
  s = (OOC_SSA__Result)i0;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7799));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7799));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7813)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 2);
  OOC_IA32_WriteAssembler__TranslatorDesc_WriteProcBody_Write("initial", 8, "dce-pre", 8);
  i0 = (OOC_INT32)pb;
  OOC_SSA_DeadCodeElimination__Transform((OOC_SSA__ProcBlock)i0);
  OOC_IA32_WriteAssembler__TranslatorDesc_WriteProcBody_Write("dce-post", 9, "destore-pre", 12);
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)OOC_SSA_Destore__New((OOC_SSA__ProcBlock)i0);
  destore = (OOC_SSA_Destore__State)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8082)))), OOC_SSA_Destore__StateDesc_Transform)),OOC_SSA_Destore__StateDesc_Transform)((OOC_SSA_Destore__State)i0);
  OOC_IA32_WriteAssembler__TranslatorDesc_WriteProcBody_Write("destore-post", 13, "dce-pre", 8);
  i0 = (OOC_INT32)pb;
  OOC_SSA_DeadCodeElimination__Transform((OOC_SSA__ProcBlock)i0);
  OOC_IA32_WriteAssembler__TranslatorDesc_WriteProcBody_Write("dce-post", 9, "final", 6);
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)OOC_SSA_Schedule__Schedule((OOC_SSA__ProcBlock)i0);
  domRoot = (OOC_SSA_Schedule__Block)i0;
  i1 = writeProc;
  if (!i1) goto l13;
  i1 = (OOC_INT32)t;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8282))+24);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8282))+24);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8296)))), StringSearch__MatcherDesc_MatchChars)),StringSearch__MatcherDesc_MatchChars)((StringSearch__Matcher)i1, "schedule", 9, 0, -1);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l13;
  {
    if (!setjmp(_target0)) goto l10;
    Exception__PopContext(1);
    i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((Exception__Current()))), &_td_IO__ErrorDesc);
    if (i0) goto l9;
    Exception__ActivateContext();
l9:
    Exception__Clear();
    goto l11;
l10:
    Exception__PushContext(&_context0, &_target0);
    i1 = (OOC_INT32)IO_StdChannels__stdout;
    OOC_SSA_XML__WriteSchedule((IO__ByteChannel)i1, (OOC_SSA_Schedule__Block)i0);
    Exception__PopContext(1);
l11:;
  }
  Out__Flush();
l13:
  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8551));
  w = (OOC_IA32_Writer__Writer)i1;
  i2 = (OOC_INT32)proc;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8568))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8574))+4);
  i3 = i3==(OOC_INT32)0;
  if (i3) goto l16;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8711))+4);
  i2 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i2);
  name = (Object__String)i2;
  
  goto l17;
l16:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8635))+8);
  i2 = (OOC_INT32)OOC_C_Naming__NameOfModuleInit((OOC_SymbolTable__Module)i2, OOC_TRUE);
  name = (Object__String)i2;
  
l17:
  i3 = *(OOC_INT32*)((_check_pointer(i0, 8751))+28);
  IntStr__IntToStr(i3, (void*)(OOC_INT32)lfe, 32);
  Strings__Insert(".Lfe", 5, (OOC_INT32)0, (void*)(OOC_INT32)lfe, 32);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 8816))+28);
  *(OOC_INT32*)((_check_pointer(i0, 8816))+28) = (i3+1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8839)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i1, ".align 4", 9);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8866)))), OOC_IA32_Writer__WriterDesc_Write)),OOC_IA32_Writer__WriterDesc_Write)((OOC_IA32_Writer__Writer)i1, ".globl ", 8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8888)))), OOC_IA32_Writer__WriterDesc_WriteObject)),OOC_IA32_Writer__WriterDesc_WriteObject)((OOC_IA32_Writer__Writer)i1, (Object__String)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8911)))), OOC_IA32_Writer__WriterDesc_Newline)),OOC_IA32_Writer__WriterDesc_Newline)((OOC_IA32_Writer__Writer)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8927)))), OOC_IA32_Writer__WriterDesc_Write)),OOC_IA32_Writer__WriterDesc_Write)((OOC_IA32_Writer__Writer)i1, "\011.type ", 8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8957)))), OOC_IA32_Writer__WriterDesc_WriteObject)),OOC_IA32_Writer__WriterDesc_WriteObject)((OOC_IA32_Writer__Writer)i1, (Object__String)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8984)))), OOC_IA32_Writer__WriterDesc_Write)),OOC_IA32_Writer__WriterDesc_Write)((OOC_IA32_Writer__Writer)i1, ",@function", 11);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9009)))), OOC_IA32_Writer__WriterDesc_Newline)),OOC_IA32_Writer__WriterDesc_Newline)((OOC_IA32_Writer__Writer)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9025)))), OOC_IA32_Writer__WriterDesc_Label)),OOC_IA32_Writer__WriterDesc_Label)((OOC_IA32_Writer__Writer)i1, (Object__String)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9046)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i1, "pushl %ebp", 11);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9075)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i1, "movl %esp,%ebp", 15);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9108)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i1, "pushl %ebx", 11);
  i0 = (OOC_INT32)domRoot;
  OOC_IA32_WriteAssembler__WriteBlocks((OOC_IA32_Writer__Writer)i1, (OOC_SSA_Schedule__Block)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9209)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i1, "pop %ebx", 9);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9273)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i1, "leave", 6);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9297)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i1, "ret", 4);
  i0 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)lfe, 32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9319)))), OOC_IA32_Writer__WriterDesc_Label)),OOC_IA32_Writer__WriterDesc_Label)((OOC_IA32_Writer__Writer)i1, (Object__String)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9357)))), OOC_IA32_Writer__WriterDesc_Write)),OOC_IA32_Writer__WriterDesc_Write)((OOC_IA32_Writer__Writer)i1, "\011.size ", 8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9387)))), OOC_IA32_Writer__WriterDesc_WriteObject)),OOC_IA32_Writer__WriterDesc_WriteObject)((OOC_IA32_Writer__Writer)i1, (Object__String)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9410)))), OOC_IA32_Writer__WriterDesc_Write)),OOC_IA32_Writer__WriterDesc_Write)((OOC_IA32_Writer__Writer)i1, ",", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9430)))), OOC_IA32_Writer__WriterDesc_Write)),OOC_IA32_Writer__WriterDesc_Write)((OOC_IA32_Writer__Writer)i1, (void*)(OOC_INT32)lfe, 32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9446)))), OOC_IA32_Writer__WriterDesc_Write)),OOC_IA32_Writer__WriterDesc_Write)((OOC_IA32_Writer__Writer)i1, "-", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9462)))), OOC_IA32_Writer__WriterDesc_WriteObject)),OOC_IA32_Writer__WriterDesc_WriteObject)((OOC_IA32_Writer__Writer)i1, (Object__String)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9485)))), OOC_IA32_Writer__WriterDesc_Newline)),OOC_IA32_Writer__WriterDesc_Newline)((OOC_IA32_Writer__Writer)i1);
  return;
  ;
}

void OOC_IA32_WriteAssembler__InitTranslator(OOC_IA32_WriteAssembler__Translator t, OOC_Repository__Module module, StringSearch__Matcher inspectProc, StringSearch__Matcher inspectStage) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)module;
  i1 = (OOC_INT32)t;
  OOC_Make_TranslateToIA32__InitTranslator((OOC_Make_TranslateToIA32__Translator)i1, (OOC_Repository__Module)i0);
  i0 = (OOC_INT32)inspectProc;
  *(OOC_INT32*)((_check_pointer(i1, 9719))+20) = i0;
  i0 = (OOC_INT32)inspectStage;
  *(OOC_INT32*)((_check_pointer(i1, 9754))+24) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 9791))+28) = 1;
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
