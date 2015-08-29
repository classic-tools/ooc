#include <OOC/C/ConvertDecl.d>
#include <__oo2c.h>
#include <setjmp.h>

OOC_C_DeclWriter__Type OOC_C_ConvertDecl__ConvertType(OOC_C_DeclWriter__Writer w, OOC_SymbolTable__Type resolvedType, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT8 trefClass;
  OOC_SymbolTable__Type baseType;
  OOC_SymbolTable__Type srcCodeBaseType;
  OOC_C_DeclWriter__Function fct;
  OOC_SymbolTable__Item ptr;
  Object__String name;
  OOC_C_DeclWriter__Struct _struct;
  auto void OOC_C_ConvertDecl__ConvertType_ConvertParam(OOC_C_DeclWriter__Function fct, OOC_SymbolTable__VarDecl param);
  auto OOC_INT32 OOC_C_ConvertDecl__ConvertType_AddFields(OOC_C_DeclWriter__Struct _struct, OOC_SymbolTable__Type type);
    
    void OOC_C_ConvertDecl__ConvertType_ConvertParam(OOC_C_DeclWriter__Function fct, OOC_SymbolTable__VarDecl param) {
      register OOC_INT32 i0,i1,i2;
      OOC_C_DeclWriter__Declaration decl;
      auto void OOC_C_ConvertDecl__ConvertType_ConvertParam_AddArrayLength(OOC_SymbolTable__Type type, OOC_INT32 dim);
      auto void OOC_C_ConvertDecl__ConvertType_ConvertParam_AddTypeTag(OOC_SymbolTable__VarDecl param);
        
        void OOC_C_ConvertDecl__ConvertType_ConvertParam_AddArrayLength(OOC_SymbolTable__Type type, OOC_INT32 dim) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_C_DeclWriter__Declaration length;

          i0 = (OOC_INT32)type;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1785)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i1) goto l3;
          i1=0u;
          goto l5;
l3:
          i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1810)))), &_td_OOC_SymbolTable__ArrayDesc, 1810)), 1816))+36);
          
l5:
          if (!i1) goto l7;
          i1 = (OOC_INT32)w;
          i2 = (OOC_INT32)param;
          i3 = dim;
          i2 = (OOC_INT32)OOC_C_Naming__NameOfLengthParam((OOC_SymbolTable__VarDecl)i2, i3);
          i4 = (OOC_INT32)w;
          i4 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i4, 2069))+24)+(_check_index(15, 17, OOC_UINT8, 2080))*4);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1856)))), OOC_C_DeclWriter__WriterDesc_NewDeclaration)),OOC_C_DeclWriter__WriterDesc_NewDeclaration)((OOC_C_DeclWriter__Writer)i1, (Object__String)i2, 0, 4, (OOC_C_DeclWriter__Type)i4);
          length = (OOC_C_DeclWriter__Declaration)i1;
          i2 = (OOC_INT32)fct;
          OOC_C_DeclWriter__FunctionDesc_AddParameter((OOC_C_DeclWriter__Function)i2, (OOC_C_DeclWriter__Declaration)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2180)))), &_td_OOC_SymbolTable__ArrayDesc, 2180)), 2186))+40);
          OOC_C_ConvertDecl__ConvertType_ConvertParam_AddArrayLength((OOC_SymbolTable__Type)i0, (i3+1));
l7:
          return;
          ;
        }

        
        void OOC_C_ConvertDecl__ConvertType_ConvertParam_AddTypeTag(OOC_SymbolTable__VarDecl param) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)param;
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 2370))+55);
          if (i1) goto l3;
          i1=0u;
          goto l5;
l3:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2391))+44);
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2398)))), &_td_OOC_SymbolTable__RecordDesc);
          
l5:
          if (!i1) goto l7;
          i1 = (OOC_INT32)w;
          i0 = (OOC_INT32)OOC_C_Naming__NameOfTypeTagParam((OOC_SymbolTable__VarDecl)i0);
          i2 = (OOC_INT32)w;
          i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i2, 2636))+24)+(_check_index(16, 17, OOC_UINT8, 2647))*4);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2436)))), OOC_C_DeclWriter__WriterDesc_NewDeclaration)),OOC_C_DeclWriter__WriterDesc_NewDeclaration)((OOC_C_DeclWriter__Writer)i1, (Object__String)i0, 0, 4, (OOC_C_DeclWriter__Type)i2);
          i1 = (OOC_INT32)fct;
          OOC_C_DeclWriter__FunctionDesc_AddParameter((OOC_C_DeclWriter__Function)i1, (OOC_C_DeclWriter__Declaration)i0);
l7:
          return;
          ;
        }


      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)param;
      i0 = (OOC_INT32)OOC_C_ConvertDecl__ConvertDecl((OOC_C_DeclWriter__Writer)i0, (OOC_SymbolTable__Declaration)i1, 3);
      decl = (OOC_C_DeclWriter__Declaration)i0;
      i2 = (OOC_INT32)fct;
      OOC_C_DeclWriter__FunctionDesc_AddParameter((OOC_C_DeclWriter__Function)i2, (OOC_C_DeclWriter__Declaration)i0);
      i0 = *(OOC_UINT8*)((_check_pointer(i1, 2864))+60);
      if (!i0) goto l4;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2915))+44);
      OOC_C_ConvertDecl__ConvertType_ConvertParam_AddArrayLength((OOC_SymbolTable__Type)i0, 0);
      i0 = (OOC_INT32)param;
      OOC_C_ConvertDecl__ConvertType_ConvertParam_AddTypeTag((OOC_SymbolTable__VarDecl)i0);
l4:
      return;
      ;
    }

    
    OOC_INT32 OOC_C_ConvertDecl__ConvertType_AddFields(OOC_C_DeclWriter__Struct _struct, OOC_SymbolTable__Type type) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT32 offset;
      OOC_INT32 i;

      i0 = (OOC_INT32)type;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l24;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3185)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
      type = (OOC_SymbolTable__Type)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3243)))), &_td_OOC_SymbolTable__RecordDesc, 3243)), 3250))+36);
      i2 = (OOC_INT32)_struct;
      i1 = OOC_C_ConvertDecl__ConvertType_AddFields((OOC_C_DeclWriter__Struct)i2, (OOC_SymbolTable__Type)i1);
      offset = i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3287)))), &_td_OOC_SymbolTable__RecordDesc, 3287)), 3294))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i3 = i0!=(OOC_INT32)0;
      if (i3) goto l6_loop;
      i0=i1;
      goto l23;
l6_loop:
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3356)))), &_td_OOC_SymbolTable__FieldDeclDesc);
      if (i3) goto l9;
      {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
      goto l18;
l9:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3406))+44);
      OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)ptr;
      i = i1;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 3448))+52);
      i3 = i1<i0;
      if (!i3) goto l17;
l12_loop:
      i3 = (OOC_INT32)w;
      OOC_C_DeclWriter__StructDesc_AddPadding((OOC_C_DeclWriter__Struct)i2, (OOC_C_DeclWriter__Writer)i3, i1);
      i1 = i1+1;
      i = i1;
      i3 = i1<i0;
      if (i3) goto l12_loop;
l17:
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)ptr;
      i0 = (OOC_INT32)OOC_C_ConvertDecl__ConvertDecl((OOC_C_DeclWriter__Writer)i0, (OOC_SymbolTable__Declaration)i1, 3);
      OOC_C_DeclWriter__StructDesc_AddMember((OOC_C_DeclWriter__Struct)i2, (OOC_C_DeclWriter__Declaration)i0);
      i0 = (OOC_INT32)ptr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3632))+44);
      i3 = *(OOC_INT32*)((_check_pointer(i0, 3620))+52);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 3638))+28);
      i1 = i3+i1;
      offset = i1;
      {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
l18:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3746));
      ptr = (OOC_SymbolTable__Item)i1;
      i3 = i1!=(OOC_INT32)0;
      if (!i3) goto l23;
      {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
      goto l6_loop;
l23:
      return i0;
      goto l25;
l24:
      return 0;
l25:
      _failed_function(3001); return 0;
      ;
    }


  i0 = (OOC_INT32)type;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l91;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4238)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l73;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5260)))), &_td_OOC_SymbolTable__TypeNameDesc);
  if (i1) goto l59;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5832)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l48;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6260)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i1) goto l35;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7132)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l29;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7432)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l23;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7734)))), &_td_OOC_SymbolTable__TypeVarDesc);
  if (i1) goto l21;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7813)))), &_td_OOC_SymbolTable__QualTypeDesc);
  if (i1) goto l19;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7807)))), 7807);
  goto l92;
l19:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7865))+36);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7880))+40);
  i2 = (OOC_INT32)w;
  i0 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i2, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_C_DeclWriter__Type)i0;
  goto l92;
l21:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7785))+36);
  i2 = (OOC_INT32)w;
  i0 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i2, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_C_DeclWriter__Type)i0;
  goto l92;
l23:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7464))+20);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l26;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7573))+20);
  i1 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i1);
  name = (Object__String)i1;
  
  goto l27;
l26:
  name = (Object__String)(OOC_INT32)0;
  i1=(OOC_INT32)0;
l27:
  i2 = (OOC_INT32)w;
  i3 = *(OOC_UINT8*)((_check_pointer(i0, 7637))+52);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7620)))), OOC_C_DeclWriter__WriterDesc_NewStruct)),OOC_C_DeclWriter__WriterDesc_NewStruct)((OOC_C_DeclWriter__Writer)i2, i3, (Object__String)i1);
  _struct = (OOC_C_DeclWriter__Struct)i1;
  i0 = OOC_C_ConvertDecl__ConvertType_AddFields((OOC_C_DeclWriter__Struct)i1, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)_struct;
  return (OOC_C_DeclWriter__Type)i0;
  goto l92;
l29:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 7162))+36);
  if (i1) goto l32;
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7340))+40);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7359))+44);
  i2 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 7386))+48);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7308)))), OOC_C_DeclWriter__WriterDesc_NewArray)),OOC_C_DeclWriter__WriterDesc_NewArray)((OOC_C_DeclWriter__Writer)i1, (OOC_C_DeclWriter__Type)i2, i0);
  return (OOC_C_DeclWriter__Type)i0;
  goto l92;
l32:
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7231))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7250))+44);
  i0 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7199)))), OOC_C_DeclWriter__WriterDesc_NewArray)),OOC_C_DeclWriter__WriterDesc_NewArray)((OOC_C_DeclWriter__Writer)i1, (OOC_C_DeclWriter__Type)i0, (-1));
  return (OOC_C_DeclWriter__Type)i0;
  goto l92;
l35:
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6343))+40);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6361))+44);
  i2 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  i3 = *(OOC_UINT8*)((_check_pointer(i0, 6400))+52);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6296)))), OOC_C_DeclWriter__WriterDesc_NewFunction)),OOC_C_DeclWriter__WriterDesc_NewFunction)((OOC_C_DeclWriter__Writer)i1, (OOC_C_DeclWriter__Type)i2, i3);
  fct = (OOC_C_DeclWriter__Function)i1;
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 6450))+53);
  OOC_C_DeclWriter__FunctionDesc_SetNoReturn((OOC_C_DeclWriter__Function)i1, i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6481))+8);
  ptr = (OOC_SymbolTable__Item)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l46;
l38_loop:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6543)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (!i1) goto l41;
  i1 = (OOC_INT32)fct;
  OOC_C_ConvertDecl__ConvertType_ConvertParam((OOC_C_DeclWriter__Function)i1, (OOC_SymbolTable__VarDecl)i0);
l41:
  i0 = (OOC_INT32)ptr;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6737));
  ptr = (OOC_SymbolTable__Item)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l38_loop;
l46:
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)fct;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7072)))), OOC_C_DeclWriter__WriterDesc_NewPointer)),OOC_C_DeclWriter__WriterDesc_NewPointer)((OOC_C_DeclWriter__Writer)i0, 0, (OOC_C_DeclWriter__Type)i1);
  return (OOC_C_DeclWriter__Type)i0;
  goto l92;
l48:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5873))+36);
  baseType = (OOC_SymbolTable__Type)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5916))+40);
  srcCodeBaseType = (OOC_SymbolTable__Type)i0;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5959)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i2) goto l51;
  {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
  goto l57;
l51:
  i0=i1;
l52_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6018)))), &_td_OOC_SymbolTable__ArrayDesc, 6018)), 6024))+44);
  srcCodeBaseType = (OOC_SymbolTable__Type)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6081)))), &_td_OOC_SymbolTable__ArrayDesc, 6081)), 6087))+40);
  baseType = (OOC_SymbolTable__Type)i0;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5959)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i2) goto l52_loop;
l57:
  i2 = (OOC_INT32)w;
  i0 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i2, (OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6131)))), OOC_C_DeclWriter__WriterDesc_NewPointer)),OOC_C_DeclWriter__WriterDesc_NewPointer)((OOC_C_DeclWriter__Writer)i2, 0, (OOC_C_DeclWriter__Type)i0);
  return (OOC_C_DeclWriter__Type)i0;
  goto l92;
l59:
  i0 = (OOC_INT32)resolvedType;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5303)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l70;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5407)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l64;
  i1 = (OOC_INT32)w;
  i0 = (OOC_INT32)OOC_C_Naming__NameOfType((OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5694)))), OOC_C_DeclWriter__WriterDesc_NewTypeRef)),OOC_C_DeclWriter__WriterDesc_NewTypeRef)((OOC_C_DeclWriter__Writer)i1, 0, (Object__String)i0);
  return (OOC_C_DeclWriter__Type)i0;
  goto l92;
l64:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 5448))+52);
  if (i1) goto l67;
  trefClass = 1;
  i1=1;
  goto l68;
l67:
  trefClass = 2;
  i1=2;
l68:
  i2 = (OOC_INT32)w;
  i0 = (OOC_INT32)OOC_C_Naming__NameOfType((OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5603)))), OOC_C_DeclWriter__WriterDesc_NewTypeRef)),OOC_C_DeclWriter__WriterDesc_NewTypeRef)((OOC_C_DeclWriter__Writer)i2, i1, (Object__String)i0);
  return (OOC_C_DeclWriter__Type)i0;
  goto l92;
l70:
  i1 = (OOC_INT32)w;
  i0 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i1, (OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i0);
  return (OOC_C_DeclWriter__Type)i0;
  goto l92;
l73:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 4275))+36);
  switch (i0) {
  case 0:
    i0 = (OOC_INT32)w;
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 4327))+24)+(_check_index(10, 17, OOC_UINT8, 4338))*4);
    return (OOC_C_DeclWriter__Type)i0;
    goto l92;
  case 1:
    i0 = (OOC_INT32)w;
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 4398))+24)+(_check_index(10, 17, OOC_UINT8, 4409))*4);
    return (OOC_C_DeclWriter__Type)i0;
    goto l92;
  case 2:
    i0 = (OOC_INT32)w;
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 4473))+24)+(_check_index(11, 17, OOC_UINT8, 4484))*4);
    return (OOC_C_DeclWriter__Type)i0;
    goto l92;
  case 3:
    i0 = (OOC_INT32)w;
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 4549))+24)+(_check_index(12, 17, OOC_UINT8, 4560))*4);
    return (OOC_C_DeclWriter__Type)i0;
    goto l92;
  case 4:
    i0 = (OOC_INT32)w;
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 4625))+24)+(_check_index(2, 17, OOC_UINT8, 4636))*4);
    return (OOC_C_DeclWriter__Type)i0;
    goto l92;
  case 5:
    i0 = (OOC_INT32)w;
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 4698))+24)+(_check_index(3, 17, OOC_UINT8, 4709))*4);
    return (OOC_C_DeclWriter__Type)i0;
    goto l92;
  case 6:
    i0 = (OOC_INT32)w;
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 4772))+24)+(_check_index(4, 17, OOC_UINT8, 4783))*4);
    return (OOC_C_DeclWriter__Type)i0;
    goto l92;
  case 7:
    i0 = (OOC_INT32)w;
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 4846))+24)+(_check_index(5, 17, OOC_UINT8, 4857))*4);
    return (OOC_C_DeclWriter__Type)i0;
    goto l92;
  case 8:
    i0 = (OOC_INT32)w;
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 4917))+24)+(_check_index(13, 17, OOC_UINT8, 4928))*4);
    return (OOC_C_DeclWriter__Type)i0;
    goto l92;
  case 9:
    i0 = (OOC_INT32)w;
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 4993))+24)+(_check_index(14, 17, OOC_UINT8, 5004))*4);
    return (OOC_C_DeclWriter__Type)i0;
    goto l92;
  case 10:
    i0 = (OOC_INT32)w;
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 5064))+24)+(_check_index(8, 17, OOC_UINT8, 5075))*4);
    return (OOC_C_DeclWriter__Type)i0;
    goto l92;
  case 11:
    i0 = (OOC_INT32)w;
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 5137))+24)+(_check_index(10, 17, OOC_UINT8, 5148))*4);
    return (OOC_C_DeclWriter__Type)i0;
    goto l92;
  case 12:
    i0 = (OOC_INT32)w;
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 5207))+24)+(_check_index(1, 17, OOC_UINT8, 5218))*4);
    return (OOC_C_DeclWriter__Type)i0;
    goto l92;
  default:
    _failed_case(i0, 4266);
    goto l92;
  }
l91:
  i0 = (OOC_INT32)w;
  i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 4185))+24)+(_check_index(0, 17, OOC_UINT8, 4196))*4);
  return (OOC_C_DeclWriter__Type)i0;
l92:
  _failed_function(473); return 0;
  ;
}

static OOC_C_DeclWriter__Declaration OOC_C_ConvertDecl__ConvertDecl(OOC_C_DeclWriter__Writer w, OOC_SymbolTable__Declaration item, OOC_INT8 mode) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT8 sc;
  OOC_C_DeclWriter__Type fpars;
  OOC_INT8 tq;
  Object__String name;
  OOC_C_DeclWriter__Type ctype;

  i0 = (OOC_INT32)item;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8260)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i1) goto l71;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9406)))), &_td_OOC_SymbolTable__ConstDeclDesc);
  if (i1) goto l69;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9543)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i1) goto l15;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11221)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i1) goto l13;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11454)))), &_td_OOC_SymbolTable__TypeDeclDesc);
  if (i1) goto l11;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11448)))), 11448);
  goto l100;
l11:
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11694))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11706))+48);
  i0 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i1, (OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11486)))), OOC_C_DeclWriter__WriterDesc_NewDeclaration)),OOC_C_DeclWriter__WriterDesc_NewDeclaration)((OOC_C_DeclWriter__Writer)i1, (Object__String)i2, 0, 1, (OOC_C_DeclWriter__Type)i0);
  return (OOC_C_DeclWriter__Declaration)i0;
  goto l100;
l13:
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11408))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11420))+48);
  i0 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i1, (OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11254)))), OOC_C_DeclWriter__WriterDesc_NewDeclaration)),OOC_C_DeclWriter__WriterDesc_NewDeclaration)((OOC_C_DeclWriter__Writer)i1, (Object__String)i2, 0, 0, (OOC_C_DeclWriter__Type)i0);
  return (OOC_C_DeclWriter__Declaration)i0;
  goto l100;
l15:
  tq = 0;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 9604))+52);
  if (i1) goto l30;
  i1 = mode;
  i1 = i1==0;
  if (i1) goto l28;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 10021))+24);
  i1 = i1==0;
  if (i1) goto l22;
  i1=0u;
  goto l24;
l22:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10078))+4);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10087)))), &_td_OOC_SymbolTable__ModuleDesc);
  
l24:
  if (i1) goto l26;
  sc = 4;
  i1=4;
  goto l29;
l26:
  sc = 3;
  i1=3;
  goto l29;
l28:
  sc = 2;
  i1=2;
l29:
  i2=i1;i1=0;
  goto l39;
l30:
  sc = 4;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 9673))+55);
  i1 = !i1;
  if (i1) goto l33;
  i1=0u;
  goto l35;
l33:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 9692))+56);
  
l35:
  if (i1) goto l37;
  i1=0;
  goto l38;
l37:
  tq = 1;
  i1=1;
l38:
  i2=4;
l39:
  i3 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  name = (Object__String)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10296))+44);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10308))+48);
  i6 = (OOC_INT32)w;
  i4 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i6, (OOC_SymbolTable__Type)i4, (OOC_SymbolTable__Type)i5);
  ctype = (OOC_C_DeclWriter__Type)i4;
  i5 = mode;
  i5 = i5==3;
  if (i5) goto l42;
  i5=0u;
  goto l44;
l42:
  i5 = *(OOC_UINT8*)((_check_pointer(i0, 10368))+52);
  
l44:
  if (i5) goto l46;
  i0=i3;i3=i4;
  goto l67;
l46:
  i5 = *(OOC_UINT8*)((_check_pointer(i0, 10403))+55);
  i5 = !i5;
  if (i5) goto l49;
  i5=0u;
  goto l51;
l49:
  i5 = *(OOC_UINT8*)((_check_pointer(i0, 10421))+56);
  
l51:
  if (i5) goto l53;
  i5=0u;
  goto l55;
l53:
  i5 = *(OOC_UINT8*)((_check_pointer(i0, 10447))+57);
  
l55:
  if (!i5) goto l58;
  i5 = (OOC_INT32)Object__NewLatin1("__ref", 6);
  i3 = (OOC_INT32)Object__StringDesc_Concat((Object__String)i3, (Object__String)i5);
  name = (Object__String)i3;
  
l58:
  i5 = *(OOC_UINT8*)((_check_pointer(i0, 10834))+56);
  if (i5) goto l61;
  i0=0u;
  goto l63;
l61:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10863))+44);
  i0 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10870)))), &_td_OOC_SymbolTable__ArrayDesc));
  
l63:
  if (i0) goto l65;
  i0=i4;
  goto l66;
l65:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 11085)))), OOC_C_DeclWriter__WriterDesc_NewPointer)),OOC_C_DeclWriter__WriterDesc_NewPointer)((OOC_C_DeclWriter__Writer)i6, 0, (OOC_C_DeclWriter__Type)i4);
  ctype = (OOC_C_DeclWriter__Type)i0;
  
l66:
  {register OOC_INT32 h0=i0;i0=i3;i3=h0;}
l67:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 11171)))), OOC_C_DeclWriter__WriterDesc_NewDeclaration)),OOC_C_DeclWriter__WriterDesc_NewDeclaration)((OOC_C_DeclWriter__Writer)i6, (Object__String)i0, i1, i2, (OOC_C_DeclWriter__Type)i3);
  return (OOC_C_DeclWriter__Declaration)i0;
  goto l100;
l69:
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9516))+44);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9439)))), OOC_C_DeclWriter__WriterDesc_NewDefine)),OOC_C_DeclWriter__WriterDesc_NewDefine)((OOC_C_DeclWriter__Writer)i1, (Object__String)i2, (Object_Boxed__Object)i0);
  return (OOC_C_DeclWriter__Declaration)i0;
  goto l100;
l71:
  i1 = mode;
  switch (i1) {
  case 0:
    sc = 2;
    goto l93;
  case 1:
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8400))+4);
    i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8409)))), &_td_OOC_SymbolTable__ProcDeclDesc);
    if (i2) goto l77;
    sc = 3;
    
    goto l93;
l77:
    sc = 6;
    
    goto l93;
  case 2:
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8611))+4);
    i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8620)))), &_td_OOC_SymbolTable__ProcDeclDesc);
    if (i2) goto l90;
    i2 = *(OOC_INT8*)((_check_pointer(i0, 8732))+24);
    i2 = i2==0;
    if (i2) goto l84;
    i2=0u;
    goto l86;
l84:
    i2 = OOC_SymbolTable__ProcDeclDesc_IsTypeBound((OOC_SymbolTable__ProcDecl)i0);
    i2 = !i2;
    
l86:
    if (i2) goto l88;
    sc = 4;
    
    goto l93;
l88:
    sc = 3;
    
    goto l93;
l90:
    sc = 4;
    
    goto l93;
  default:
    _failed_case(i1, 8284);
    goto l93;
  }
l93:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8933))+60);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8951))+60);
  i4 = (OOC_INT32)w;
  i2 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i4, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  fpars = (OOC_C_DeclWriter__Type)i2;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8998)))), &_td_OOC_C_DeclWriter__PointerDesc, 8998)), 9006))+4);
  fpars = (OOC_C_DeclWriter__Type)i2;
  i3 = *(OOC_UINT8*)((_check_pointer(i0, 9034))+72);
  if (!i3) goto l96;
  OOC_C_DeclWriter__FunctionDesc_MakeParametersVolatile((OOC_C_DeclWriter__Function)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9077)))), &_td_OOC_C_DeclWriter__FunctionDesc, 9077)));
l96:
  i1 = i1!=0;
  if (!i1) goto l99;
  OOC_C_DeclWriter__FunctionDesc_SetNoReturn((OOC_C_DeclWriter__Function)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9237)))), &_td_OOC_C_DeclWriter__FunctionDesc, 9237)), 0u);
l99:
  i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  i1 = sc;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9299)))), OOC_C_DeclWriter__WriterDesc_NewDeclaration)),OOC_C_DeclWriter__WriterDesc_NewDeclaration)((OOC_C_DeclWriter__Writer)i4, (Object__String)i0, 0, i1, (OOC_C_DeclWriter__Type)i2);
  return (OOC_C_DeclWriter__Declaration)i0;
l100:
  _failed_function(7947); return 0;
  ;
}

void OOC_C_ConvertDecl__ConvertSymTab(OOC_C_DeclWriter__Writer w, OOC_Repository__Module m, OOC_SymbolTable__Module symTab, ADT_Dictionary_AddressKey__Dictionary exports, OOC_CHAR8 writeExported) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT8 mode;
  auto void OOC_C_ConvertDecl__ConvertSymTab_ConvertTopLevel(OOC_SymbolTable__Item root, OOC_Repository__Module m, OOC_INT8 mode);
  auto void OOC_C_ConvertDecl__ConvertSymTab_ConvertNestedTypes(OOC_SymbolTable__Item topLevel, OOC_SymbolTable__Item root);
    
    void OOC_C_ConvertDecl__ConvertSymTab_ConvertTopLevel(OOC_SymbolTable__Item root, OOC_Repository__Module m, OOC_INT8 mode) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SymbolTable__Item ptr;
      OOC_C_DeclWriter__Declaration decl;
      auto OOC_CHAR8 OOC_C_ConvertDecl__ConvertSymTab_ConvertTopLevel_ExportedVarDecl(OOC_SymbolTable__Item ptr);
      auto void OOC_C_ConvertDecl__ConvertSymTab_ConvertTopLevel_AddTypeBoundHelpers(OOC_C_DeclWriter__Writer w, OOC_SymbolTable__ProcDecl proc);
        
        OOC_CHAR8 OOC_C_ConvertDecl__ConvertSymTab_ConvertTopLevel_ExportedVarDecl(OOC_SymbolTable__Item ptr) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)ptr;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12845)))), &_td_OOC_SymbolTable__VarDeclDesc);
          if (i1) goto l3;
          return 0u;
          goto l4;
l3:
          i0 = *(OOC_INT8*)((_check_pointer(i0, 13083))+24);
          return (i0!=0);
l4:
          _failed_function(12775); return 0;
          ;
        }

        
        void OOC_C_ConvertDecl__ConvertSymTab_ConvertTopLevel_AddTypeBoundHelpers(OOC_C_DeclWriter__Writer w, OOC_SymbolTable__ProcDecl proc) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_C_DeclWriter__Declaration d;

          i0 = (OOC_INT32)w;
          i1 = (OOC_INT32)proc;
          i2 = (OOC_INT32)OOC_C_Naming__NameOfTypeBoundIndex((OOC_SymbolTable__ProcDecl)i1);
          i3 = *(OOC_INT32*)((_check_pointer(i1, 13441))+52);
          i3 = (OOC_INT32)Object_BigInt__NewInt(i3);
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13347)))), OOC_C_DeclWriter__WriterDesc_NewDefine)),OOC_C_DeclWriter__WriterDesc_NewDefine)((OOC_C_DeclWriter__Writer)i0, (Object__String)i2, (Object_Boxed__Object)i3);
          d = (OOC_C_DeclWriter__Declaration)i2;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13467)))), OOC_C_DeclWriter__WriterDesc_AddDeclaration)),OOC_C_DeclWriter__WriterDesc_AddDeclaration)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Declaration)i2);
          i2 = (OOC_INT32)OOC_C_Naming__NameOfTypeBoundSignature((OOC_SymbolTable__ProcDecl)i1);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13719))+60);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13782))+60);
          i1 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i0, (OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i1);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13504)))), OOC_C_DeclWriter__WriterDesc_NewDeclaration)),OOC_C_DeclWriter__WriterDesc_NewDeclaration)((OOC_C_DeclWriter__Writer)i0, (Object__String)i2, 0, 1, (OOC_C_DeclWriter__Type)i1);
          d = (OOC_C_DeclWriter__Declaration)i1;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13807)))), OOC_C_DeclWriter__WriterDesc_AddDeclaration)),OOC_C_DeclWriter__WriterDesc_AddDeclaration)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Declaration)i1);
          return;
          ;
        }


      i0 = (OOC_INT32)root;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13892))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l42;
l3_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13950)))), &_td_OOC_SymbolTable__DeclarationDesc);
      if (!i1) goto l37;
      i1 = (OOC_INT32)exports;
      i1 = ADT_Dictionary_AddressKey__DictionaryDesc_HasKey((ADT_Dictionary_AddressKey__Dictionary)i1, (Object__Object)i0);
      i2 = mode;
      i1 = i1==(i2==0);
      if (i1) goto l8;
      i1 = OOC_C_ConvertDecl__ConvertSymTab_ConvertTopLevel_ExportedVarDecl((OOC_SymbolTable__Item)i0);
      
      goto l10;
l8:
      i1=1u;
l10:
      if (!i1) goto l37;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14100)))), &_td_OOC_SymbolTable__ImportDesc);
      if (i1) goto l31;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14353)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l16;
      i1=0u;
      goto l18;
l16:
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14380)))), &_td_OOC_SymbolTable__ProcDeclDesc, 14380)), 14389))+45);
      
l18:
      if (i1) goto l37;
      i1 = (OOC_INT32)w;
      i1 = (OOC_INT32)OOC_C_ConvertDecl__ConvertDecl((OOC_C_DeclWriter__Writer)i1, (OOC_SymbolTable__Declaration)i0, i2);
      decl = (OOC_C_DeclWriter__Declaration)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14576))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14576))+8);
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14582)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i3, 0);
      i2 = i2!=40u;
      if (!i2) goto l37;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15042)))), OOC_C_DeclWriter__WriterDesc_AddDeclaration)),OOC_C_DeclWriter__WriterDesc_AddDeclaration)((OOC_C_DeclWriter__Writer)i2, (OOC_C_DeclWriter__Declaration)i1);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15093)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l24;
      i1=0u;
      goto l26;
l24:
      i1 = OOC_SymbolTable__ProcDeclDesc_IsTypeBound((OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15141)))), &_td_OOC_SymbolTable__ProcDeclDesc, 15141)));
      
l26:
      if (!i1) goto l37;
      i1 = (OOC_INT32)w;
      OOC_C_ConvertDecl__ConvertSymTab_ConvertTopLevel_AddTypeBoundHelpers((OOC_C_DeclWriter__Writer)i1, (OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15222)))), &_td_OOC_SymbolTable__ProcDeclDesc, 15222)));
      goto l37;
l31:
      i1 = OOC_SymbolTable__ImportDesc_IsInternalImport((OOC_SymbolTable__Import)i0);
      i1 = !i1;
      if (!i1) goto l37;
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)m;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14274))+44);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 14285))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14274))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14285))+12);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 14289)), 0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14252)))), OOC_Repository__ModuleDesc_GetImportedModule)),OOC_Repository__ModuleDesc_GetImportedModule)((OOC_Repository__Module)i2, (void*)(_check_pointer(i3, 14289)), i0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14198)))), OOC_C_DeclWriter__WriterDesc_NewIncludeModule)),OOC_C_DeclWriter__WriterDesc_NewIncludeModule)((OOC_C_DeclWriter__Writer)i1, (OOC_Repository__Module)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14180)))), OOC_C_DeclWriter__WriterDesc_AddDeclaration)),OOC_C_DeclWriter__WriterDesc_AddDeclaration)((OOC_C_DeclWriter__Writer)i1, (OOC_C_DeclWriter__Declaration)i0);
l37:
      i0 = (OOC_INT32)ptr;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15432));
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l42:
      return;
      ;
    }

    
    void OOC_C_ConvertDecl__ConvertSymTab_ConvertNestedTypes(OOC_SymbolTable__Item topLevel, OOC_SymbolTable__Item root) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_SymbolTable__Item ptr;
      OOC_C_DeclWriter__Declaration decl;

      i0 = (OOC_INT32)root;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15827))+8);
      ptr = (OOC_SymbolTable__Item)i1;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l17;
      i2 = (OOC_INT32)topLevel;
      i0 = i0!=i2;
      
l3_loop:
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15885)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i3) goto l11;
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15962)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (!i3) goto l12;
      if (!i0) goto l12;
      i3 = mode;
      i4 = (OOC_INT32)w;
      i3 = (OOC_INT32)OOC_C_ConvertDecl__ConvertDecl((OOC_C_DeclWriter__Writer)i4, (OOC_SymbolTable__Declaration)i1, i3);
      decl = (OOC_C_DeclWriter__Declaration)i3;
      i4 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 16077)))), OOC_C_DeclWriter__WriterDesc_AddDeclaration)),OOC_C_DeclWriter__WriterDesc_AddDeclaration)((OOC_C_DeclWriter__Writer)i4, (OOC_C_DeclWriter__Declaration)i3);
      goto l12;
l11:
      OOC_C_ConvertDecl__ConvertSymTab_ConvertNestedTypes((OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Item)i1);
l12:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 16218));
      ptr = (OOC_SymbolTable__Item)i1;
      i3 = i1!=(OOC_INT32)0;
      if (i3) goto l3_loop;
l17:
      return;
      ;
    }


  i0 = writeExported;
  if (i0) goto l3;
  mode = 1;
  i0=1;
  goto l4;
l3:
  mode = 0;
  i0=0;
l4:
  i1 = (OOC_INT32)symTab;
  i2 = (OOC_INT32)m;
  OOC_C_ConvertDecl__ConvertSymTab_ConvertTopLevel((OOC_SymbolTable__Item)i1, (OOC_Repository__Module)i2, i0);
  i0 = writeExported;
  if (i0) goto l7;
  i0 = (OOC_INT32)symTab;
  OOC_C_ConvertDecl__ConvertSymTab_ConvertNestedTypes((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i0);
  goto l8;
l7:
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)symTab;
  i2 = (OOC_INT32)OOC_C_Naming__NameOfModuleInit((OOC_SymbolTable__Module)i1, 0u);
  i3 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 16653))+24)+(_check_index(0, 17, OOC_UINT8, 16664))*4);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16637)))), OOC_C_DeclWriter__WriterDesc_NewFunction)),OOC_C_DeclWriter__WriterDesc_NewFunction)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i3, 0u);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16489)))), OOC_C_DeclWriter__WriterDesc_NewDeclaration)),OOC_C_DeclWriter__WriterDesc_NewDeclaration)((OOC_C_DeclWriter__Writer)i0, (Object__String)i2, 0, 2, (OOC_C_DeclWriter__Type)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16460)))), OOC_C_DeclWriter__WriterDesc_AddDeclaration)),OOC_C_DeclWriter__WriterDesc_AddDeclaration)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Declaration)i2);
  i1 = (OOC_INT32)OOC_C_Naming__NameOfModuleInit((OOC_SymbolTable__Module)i1, 1u);
  i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 16892))+24)+(_check_index(0, 17, OOC_UINT8, 16903))*4);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16876)))), OOC_C_DeclWriter__WriterDesc_NewFunction)),OOC_C_DeclWriter__WriterDesc_NewFunction)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i2, 0u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16729)))), OOC_C_DeclWriter__WriterDesc_NewDeclaration)),OOC_C_DeclWriter__WriterDesc_NewDeclaration)((OOC_C_DeclWriter__Writer)i0, (Object__String)i1, 0, 2, (OOC_C_DeclWriter__Type)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16700)))), OOC_C_DeclWriter__WriterDesc_AddDeclaration)),OOC_C_DeclWriter__WriterDesc_AddDeclaration)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Declaration)i1);
l8:
  return;
  ;
}

OOC_C_DeclWriter__Declaration OOC_C_ConvertDecl__GetProc(OOC_C_DeclWriter__Writer w, OOC_SymbolTable__ProcDecl procDecl, OOC_CHAR8 nestedPrototype) {
  register OOC_INT32 i0,i1;

  i0 = nestedPrototype;
  if (i0) goto l3;
  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)w;
  i0 = (OOC_INT32)OOC_C_ConvertDecl__ConvertDecl((OOC_C_DeclWriter__Writer)i1, (OOC_SymbolTable__Declaration)i0, 2);
  return (OOC_C_DeclWriter__Declaration)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)w;
  i0 = (OOC_INT32)OOC_C_ConvertDecl__ConvertDecl((OOC_C_DeclWriter__Writer)i1, (OOC_SymbolTable__Declaration)i0, 1);
  return (OOC_C_DeclWriter__Declaration)i0;
l4:
  _failed_function(17025); return 0;
  ;
}

OOC_C_DeclWriter__Declaration OOC_C_ConvertDecl__GetDecl(OOC_C_DeclWriter__Writer w, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)decl;
  i0 = (OOC_INT32)OOC_C_ConvertDecl__ConvertDecl((OOC_C_DeclWriter__Writer)i0, (OOC_SymbolTable__Declaration)i1, 2);
  return (OOC_C_DeclWriter__Declaration)i0;
  ;
}

OOC_C_DeclWriter__Type OOC_C_ConvertDecl__GetTypeRef(OOC_C_DeclWriter__Writer w, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17960))+20);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17989)))), &_td_OOC_SymbolTable__PredefTypeDesc));
  
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)w;
  i0 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i1, (OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i0);
  return (OOC_C_DeclWriter__Type)i0;
  goto l8;
l7:
  i1 = (OOC_INT32)w;
  i0 = (OOC_INT32)OOC_C_Naming__NameOfType((OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18027)))), OOC_C_DeclWriter__WriterDesc_NewTypeRef)),OOC_C_DeclWriter__WriterDesc_NewTypeRef)((OOC_C_DeclWriter__Writer)i1, 0, (Object__String)i0);
  return (OOC_C_DeclWriter__Type)i0;
l8:
  _failed_function(17783); return 0;
  ;
}

OOC_C_DeclWriter__Declaration OOC_C_ConvertDecl__GetPointerDecl(OOC_C_DeclWriter__Writer w, OOC_SymbolTable__VarDecl paramDecl) {
  register OOC_INT32 i0,i1,i2;
  OOC_SymbolTable__Type elemType;

  i0 = (OOC_INT32)paramDecl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18567))+44);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18574)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18700))+44);
  elemType = (OOC_SymbolTable__Type)i1;
  
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18620))+44);
  i1 = (OOC_INT32)OOC_SymbolTable__ArrayDesc_GetNonOpenElementType((OOC_SymbolTable__Array)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18631)))), &_td_OOC_SymbolTable__ArrayDesc, 18631)));
  elemType = (OOC_SymbolTable__Type)i1;
  
l4:
  i2 = (OOC_INT32)w;
  i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  i1 = (OOC_INT32)OOC_C_ConvertDecl__GetTypeRef((OOC_C_DeclWriter__Writer)i2, (OOC_SymbolTable__Type)i1);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18864)))), OOC_C_DeclWriter__WriterDesc_NewPointer)),OOC_C_DeclWriter__WriterDesc_NewPointer)((OOC_C_DeclWriter__Writer)i2, 0, (OOC_C_DeclWriter__Type)i1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18734)))), OOC_C_DeclWriter__WriterDesc_NewDeclaration)),OOC_C_DeclWriter__WriterDesc_NewDeclaration)((OOC_C_DeclWriter__Writer)i2, (Object__String)i0, 0, 4, (OOC_C_DeclWriter__Type)i1);
  return (OOC_C_DeclWriter__Declaration)i0;
  ;
}

void OOC_OOC_C_ConvertDecl_init(void) {

  return;
  ;
}

/* --- */
