#include "OOC/IA32/WriteAssembler.d"
#include "__oo2c.h"

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
      ADT_String__String s;
      auto void OOC_IA32_WriteAssembler__WriteInstrList_Value_Const(Language__Value value, OOC_SymbolTable__Type type);
        
        void OOC_IA32_WriteAssembler__WriteInstrList_Value_Const(Language__Value value, OOC_SymbolTable__Type type) {
          register OOC_INT32 i0,i1;
          ADT_String__String s;

          i0 = (OOC_INT32)value;
          i1 = i0==(OOC_INT32)0;
          if (i1) goto l35;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2645)))), &_td_Language_Boolean__ValueDesc);
          if (i1) goto l29;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2811)))), &_td_Language_String8__ValueDesc);
          if (i1) goto l23;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3130)))), &_td_Language_String16__ValueDesc);
          if (i1) goto l21;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3195)))), &_td_Language_Real__ValueDesc);
          if (i1) goto l19;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3256)))), &_td_Language_Integer__ValueDesc);
          if (i1) goto l17;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3400)))), &_td_Language_Set__ValueDesc);
          if (i1) goto l15;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3393)))), 3393);
          goto l36;
l15:
          _assert(OOC_FALSE, 127, 3427);
          goto l36;
l17:
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3297)))), Language_Integer__ValueDesc_ToString)),Language_Integer__ValueDesc_ToString)((Language_Integer__Value)i0);
          s = (ADT_String__String)i0;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3323)))), ADT_String__StringDesc_GetChars)),ADT_String__StringDesc_GetChars)((ADT_String__String)i0, (void*)(OOC_INT32)str, str_0d);
          Strings__Insert("$", 2, 0, (void*)(OOC_INT32)str, str_0d);
          goto l36;
l19:
          _assert(OOC_FALSE, 127, 3223);
          goto l36;
l21:
          _assert(OOC_FALSE, 127, 3162);
          goto l36;
l23:
          i1 = (OOC_INT32)type;
          i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2855)))), &_td_OOC_SymbolTable__PredefTypeDesc, 2855)), 2866))+32);
          i1 = i1==1;
          if (i1) goto l26;
          i1 = (OOC_INT32)w;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2995)))), OOC_IA32_Writer__WriterDesc_GetStringLabel)),OOC_IA32_Writer__WriterDesc_GetStringLabel)((OOC_IA32_Writer__Writer)i1, (Language_String__Value)i0);
          s = (ADT_String__String)i0;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3036)))), ADT_String__StringDesc_GetChars)),ADT_String__StringDesc_GetChars)((ADT_String__String)i0, (void*)(OOC_INT32)str, str_0d);
          goto l27;
l26:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2932))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2939))+4);
          i0 = _check_pointer(i0, 2946);
          i1 = OOC_ARRAY_LENGTH(i0, 0);
          i0 = *(OOC_UINT8*)(i0+(_check_index(0, i1, OOC_UINT8, 2946)));
          IntStr__IntToStr(i0, (void*)(OOC_INT32)str, str_0d);
l27:
          Strings__Insert("$", 2, 0, (void*)(OOC_INT32)str, str_0d);
          goto l36;
l29:
          i0 = *(OOC_UINT8*)((_check_pointer(i0, 2684))+4);
          if (i0) goto l32;
          _copy_8("$0",(OOC_INT32)str,str_0d);
          goto l36;
l32:
          _copy_8("$1",(OOC_INT32)str,str_0d);
          goto l36;
l35:
          _copy_8("$0",(OOC_INT32)str,str_0d);
l36:
          return;
          ;
        }


      i0 = (OOC_INT32)opnd;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3520));
      arg = (OOC_SSA__Result)i0;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3541)))), &_td_OOC_SSA__ConstDesc);
      if (i1) goto l11;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3615)))), &_td_OOC_SSA__AddressDesc);
      if (i1) goto l9;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3738))+8);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 3745))+36);
      switch (i1) {
      case 12:
        i0 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3851)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i0, "movswl 8(%ebp),%ebx", 20);
        _copy_8("%ebx",(OOC_INT32)str,str_0d);
        goto l12;
      default:
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3963))+8);
        Log__Type("arg.instr", 10, (void*)i1);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3986))+8);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3986))+8);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3993)))), OOC_SSA__InstrDesc_LogOpcode)),OOC_SSA__InstrDesc_LogOpcode)((OOC_SSA__Instr)i0, "opcode", 7);
        _assert(OOC_FALSE, 127, 4027);
        goto l12;
      }
l9:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3674))+44);
      i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
      s = (ADT_String__String)i0;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3692)))), ADT_String__StringDesc_GetChars)),ADT_String__StringDesc_GetChars)((ADT_String__String)i0, (void*)(OOC_INT32)str, str_0d);
      goto l12;
l11:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3574))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3586))+48);
      OOC_IA32_WriteAssembler__WriteInstrList_Value_Const((Language__Value)i1, (OOC_SymbolTable__Type)i0);
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4230)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i0, (void*)(OOC_INT32)str, 256);
      return;
      ;
    }

    
    OOC_INT32 OOC_IA32_WriteAssembler__WriteInstrList_PushList(OOC_SSA__Opnd opnd, OOC_INT8 _class) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)opnd;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 4379))+4);
      i2 = _class;
      i1 = i1==i2;
      if (i1) goto l3;
      return 0;
      goto l4;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4430))+8);
      i1 = OOC_IA32_WriteAssembler__WriteInstrList_PushList((OOC_SSA__Opnd)i1, i2);
      OOC_IA32_WriteAssembler__WriteInstrList_Push((OOC_SSA__Opnd)i0);
      return (i1+1);
l4:
      _failed_function(4272); return 0;
      ;
    }

    
    void OOC_IA32_WriteAssembler__WriteInstrList_Assert(OOC_SSA__Instr assert) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)assert;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4680))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4690))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4700))+8);
      OOC_IA32_WriteAssembler__WriteInstrList_Push((OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 4737))+40);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4720)))), OOC_IA32_Writer__WriterDesc_PushInt)),OOC_IA32_Writer__WriterDesc_PushInt)((OOC_IA32_Writer__Writer)i1, i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4752)))), OOC_IA32_Writer__WriterDesc_PushLabel)),OOC_IA32_Writer__WriterDesc_PushLabel)((OOC_IA32_Writer__Writer)i0, "_mid", 5);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4781)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i0, "call RT0__ErrorAssertionFailed", 31);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4832)))), OOC_IA32_Writer__WriterDesc_PopBytes)),OOC_IA32_Writer__WriterDesc_PopBytes)((OOC_IA32_Writer__Writer)i0, 12);
      return;
      ;
    }

    
    void OOC_IA32_WriteAssembler__WriteInstrList_Call(OOC_SSA__Instr call) {
      register OOC_INT32 i0,i1;
      OOC_INT32 len;
      OOC_IA32_WriteAssembler__Buffer str;

      i0 = (OOC_INT32)call;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4986))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4996))+8);
      i1 = OOC_IA32_WriteAssembler__WriteInstrList_PushList((OOC_SSA__Opnd)i1, 1);
      len = i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5036))+24);
      OOC_IA32_WriteAssembler__WriteInstrList_Value((OOC_SSA__Opnd)i0, (void*)(OOC_INT32)str, 256);
      Strings__Insert("call ", 6, 0, (void*)(OOC_INT32)str, 256);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5101)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i0, (void*)(OOC_INT32)str, 256);
      i0 = i1!=0;
      if (!i0) goto l4;
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5149)))), OOC_IA32_Writer__WriterDesc_PopBytes)),OOC_IA32_Writer__WriterDesc_PopBytes)((OOC_IA32_Writer__Writer)i0, (i1*4));
l4:
      return;
      ;
    }


  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5219))+8);
  i1 = i0!=(OOC_INT32)0;
  proxy = (OOC_SSA_Schedule__InstrProxy)i0;
  if (!i1) goto l26;
l3_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5279))+12);
  instr = (OOC_SSA__Instr)i0;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 5305))+36);
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
    _failed_case(i1, 5295);
    goto l21;
  }
l21:
  i0 = (OOC_INT32)proxy;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6157));
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
      i1 = *(OOC_INT32*)((_check_pointer(i0, 6333))+36);
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
  ADT_String__String name;
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6851))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6851))+24);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6865)))), StringSearch__MatcherDesc_MatchChars)),StringSearch__MatcherDesc_MatchChars)((StringSearch__Matcher)i0, (void*)(OOC_INT32)pre, pre_0d, 0, -1);
      i0 = i0!=(OOC_INT32)0;
      if (i0) goto l6;
      i0 = (OOC_INT32)t;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6913))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6913))+24);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6927)))), StringSearch__MatcherDesc_MatchChars)),StringSearch__MatcherDesc_MatchChars)((StringSearch__Matcher)i0, (void*)(OOC_INT32)post, post_0d, 0, -1);
      i0 = i0!=(OOC_INT32)0;
      
      goto l9;
l6:
      i0=OOC_TRUE;
l9:
      if (!i0) goto l11;
      Out__String("PROCEDURE ", 11);
      i0 = (OOC_INT32)pb;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7024))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7034))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7040))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7024))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7034))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7040))+12);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 7045)), 0);
      Out__String((void*)(_check_pointer(i1, 7045)), i0);
      Out__String("/", 2);
      Out__String((void*)(OOC_INT32)pre, pre_0d);
      Out__String("/", 2);
      Out__String((void*)(OOC_INT32)post, post_0d);
      Out__String(":", 2);
      Out__Ln();
      Out__Flush();
      i0 = (OOC_INT32)StdChannels__stdout;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7252)))), Channel__ChannelDesc_NewWriter)),Channel__ChannelDesc_NewWriter)((Channel__Channel)i0);
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
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7445))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7476))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 7482))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 7488))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7476))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 7482))+16);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 7488))+12);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 7493)), 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7445))+20);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 7458)))), StringSearch__MatcherDesc_MatchChars)),StringSearch__MatcherDesc_MatchChars)((StringSearch__Matcher)i2, (void*)(_check_pointer(i4, 7493)), i5, 0, -1);
  writeProc = (i2!=(OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7526));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7540))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 7550));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7555))+8);
  enter = (OOC_SSA__Instr)i2;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 7600));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7645))+8);
  i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i1, (OOC_SSA__Result)i2, (OOC_IR__StatementSeq)i0);
  s = (OOC_SSA__Result)i0;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7664));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7664));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7678)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 2);
  OOC_IA32_WriteAssembler__TranslatorDesc_WriteProcBody_Write("initial", 8, "dce-pre", 8);
  i0 = (OOC_INT32)pb;
  OOC_SSA_DeadCodeElimination__Transform((OOC_SSA__ProcBlock)i0);
  OOC_IA32_WriteAssembler__TranslatorDesc_WriteProcBody_Write("dce-post", 9, "destore-pre", 12);
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)OOC_SSA_Destore__New((OOC_SSA__ProcBlock)i0);
  destore = (OOC_SSA_Destore__State)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7947)))), OOC_SSA_Destore__StateDesc_Transform)),OOC_SSA_Destore__StateDesc_Transform)((OOC_SSA_Destore__State)i0);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8147))+24);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8147))+24);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8161)))), StringSearch__MatcherDesc_MatchChars)),StringSearch__MatcherDesc_MatchChars)((StringSearch__Matcher)i3, "schedule", 9, 0, -1);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l6;
  i1 = (OOC_INT32)StdChannels__stdout;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8299)))), Channel__ChannelDesc_NewWriter)),Channel__ChannelDesc_NewWriter)((Channel__Channel)i1);
  OOC_SSA_XML__WriteSchedule((Channel__Writer)i1, (OOC_SSA_Schedule__Block)i0);
  Out__Flush();
l6:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 8378));
  w = (OOC_IA32_Writer__Writer)i1;
  i3 = (OOC_INT32)proc;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8395))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 8401))+4);
  i4 = i4==(OOC_INT32)0;
  if (i4) goto l9;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8538))+4);
  i3 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i3);
  name = (ADT_String__String)i3;
  
  goto l10;
l9:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8462))+8);
  i3 = (OOC_INT32)OOC_C_Naming__NameOfModuleInit((OOC_SymbolTable__Module)i3, OOC_TRUE);
  name = (ADT_String__String)i3;
  
l10:
  i4 = *(OOC_INT32*)((_check_pointer(i2, 8578))+28);
  IntStr__IntToStr(i4, (void*)(OOC_INT32)lfe, 32);
  Strings__Insert(".Lfe", 5, 0, (void*)(OOC_INT32)lfe, 32);
  i4 = *(OOC_INT32*)((_check_pointer(i2, 8643))+28);
  *(OOC_INT32*)((_check_pointer(i2, 8643))+28) = (i4+1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8666)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i1, ".align 4", 9);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8693)))), OOC_IA32_Writer__WriterDesc_Write)),OOC_IA32_Writer__WriterDesc_Write)((OOC_IA32_Writer__Writer)i1, ".globl ", 8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8728))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8728))+4);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 8735)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8715)))), OOC_IA32_Writer__WriterDesc_Write)),OOC_IA32_Writer__WriterDesc_Write)((OOC_IA32_Writer__Writer)i1, (void*)(_check_pointer(i2, 8735)), i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8740)))), OOC_IA32_Writer__WriterDesc_Newline)),OOC_IA32_Writer__WriterDesc_Newline)((OOC_IA32_Writer__Writer)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8756)))), OOC_IA32_Writer__WriterDesc_Write)),OOC_IA32_Writer__WriterDesc_Write)((OOC_IA32_Writer__Writer)i1, "\011.type ", 8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8799))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8799))+4);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 8806)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8786)))), OOC_IA32_Writer__WriterDesc_Write)),OOC_IA32_Writer__WriterDesc_Write)((OOC_IA32_Writer__Writer)i1, (void*)(_check_pointer(i2, 8806)), i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8815)))), OOC_IA32_Writer__WriterDesc_Write)),OOC_IA32_Writer__WriterDesc_Write)((OOC_IA32_Writer__Writer)i1, ",@function", 11);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8840)))), OOC_IA32_Writer__WriterDesc_Newline)),OOC_IA32_Writer__WriterDesc_Newline)((OOC_IA32_Writer__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8869))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8869))+4);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 8876)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8856)))), OOC_IA32_Writer__WriterDesc_Label)),OOC_IA32_Writer__WriterDesc_Label)((OOC_IA32_Writer__Writer)i1, (void*)(_check_pointer(i2, 8876)), i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8885)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i1, "pushl %ebp", 11);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8914)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i1, "movl %esp,%ebp", 15);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8947)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i1, "pushl %ebx", 11);
  OOC_IA32_WriteAssembler__WriteBlocks((OOC_IA32_Writer__Writer)i1, (OOC_SSA_Schedule__Block)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9048)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i1, "pop %ebx", 9);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9112)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i1, "leave", 6);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9136)))), OOC_IA32_Writer__WriterDesc_Instr)),OOC_IA32_Writer__WriterDesc_Instr)((OOC_IA32_Writer__Writer)i1, "ret", 4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9158)))), OOC_IA32_Writer__WriterDesc_Label)),OOC_IA32_Writer__WriterDesc_Label)((OOC_IA32_Writer__Writer)i1, (void*)(OOC_INT32)lfe, 32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9178)))), OOC_IA32_Writer__WriterDesc_Write)),OOC_IA32_Writer__WriterDesc_Write)((OOC_IA32_Writer__Writer)i1, "\011.size ", 8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 9221))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 9221))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 9228)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9208)))), OOC_IA32_Writer__WriterDesc_Write)),OOC_IA32_Writer__WriterDesc_Write)((OOC_IA32_Writer__Writer)i1, (void*)(_check_pointer(i0, 9228)), i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9233)))), OOC_IA32_Writer__WriterDesc_Write)),OOC_IA32_Writer__WriterDesc_Write)((OOC_IA32_Writer__Writer)i1, ",", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9253)))), OOC_IA32_Writer__WriterDesc_Write)),OOC_IA32_Writer__WriterDesc_Write)((OOC_IA32_Writer__Writer)i1, (void*)(OOC_INT32)lfe, 32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9269)))), OOC_IA32_Writer__WriterDesc_Write)),OOC_IA32_Writer__WriterDesc_Write)((OOC_IA32_Writer__Writer)i1, "-", 2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 9298))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 9298))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 9305)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9285)))), OOC_IA32_Writer__WriterDesc_Write)),OOC_IA32_Writer__WriterDesc_Write)((OOC_IA32_Writer__Writer)i1, (void*)(_check_pointer(i0, 9305)), i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9310)))), OOC_IA32_Writer__WriterDesc_Newline)),OOC_IA32_Writer__WriterDesc_Newline)((OOC_IA32_Writer__Writer)i1);
  return;
  ;
}

void OOC_IA32_WriteAssembler__InitTranslator(OOC_IA32_WriteAssembler__Translator t, OOC_Repository__Module module, StringSearch__Matcher inspectProc, StringSearch__Matcher inspectStage) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)module;
  i1 = (OOC_INT32)t;
  OOC_Make_TranslateToIA32__InitTranslator((OOC_Make_TranslateToIA32__Translator)i1, (OOC_Repository__Module)i0);
  i0 = (OOC_INT32)inspectProc;
  *(OOC_INT32*)((_check_pointer(i1, 9544))+20) = i0;
  i0 = (OOC_INT32)inspectStage;
  *(OOC_INT32*)((_check_pointer(i1, 9579))+24) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 9616))+28) = 1;
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
