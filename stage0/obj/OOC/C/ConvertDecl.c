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
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1768)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i1) goto l3;
          i1=0u;
          goto l5;
l3:
          i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1793)))), &_td_OOC_SymbolTable__ArrayDesc, 1793)), 1799))+32);
          
l5:
          if (!i1) goto l7;
          i1 = (OOC_INT32)w;
          i2 = (OOC_INT32)param;
          i3 = dim;
          i2 = (OOC_INT32)OOC_C_Naming__NameOfLengthParam((OOC_SymbolTable__VarDecl)i2, i3);
          i4 = (OOC_INT32)w;
          i4 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i4, 2052))+24)+(_check_index(15, 17, OOC_UINT8, 2063))*4);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1839)))), OOC_C_DeclWriter__WriterDesc_NewDeclaration)),OOC_C_DeclWriter__WriterDesc_NewDeclaration)((OOC_C_DeclWriter__Writer)i1, (Object__String)i2, 0, 4, (OOC_C_DeclWriter__Type)i4);
          length = (OOC_C_DeclWriter__Declaration)i1;
          i2 = (OOC_INT32)fct;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2102)))), OOC_C_DeclWriter__FunctionDesc_AddParameter)),OOC_C_DeclWriter__FunctionDesc_AddParameter)((OOC_C_DeclWriter__Function)i2, (OOC_C_DeclWriter__Declaration)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2163)))), &_td_OOC_SymbolTable__ArrayDesc, 2163)), 2169))+36);
          OOC_C_ConvertDecl__ConvertType_ConvertParam_AddArrayLength((OOC_SymbolTable__Type)i0, (i3+1));
l7:
          return;
          ;
        }

        
        void OOC_C_ConvertDecl__ConvertType_ConvertParam_AddTypeTag(OOC_SymbolTable__VarDecl param) {
          register OOC_INT32 i0,i1,i2;
          OOC_C_DeclWriter__Declaration tag;

          i0 = (OOC_INT32)param;
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 2353))+50);
          if (i1) goto l3;
          i1=0u;
          goto l5;
l3:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2374))+40);
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2381)))), &_td_OOC_SymbolTable__RecordDesc);
          
l5:
          if (!i1) goto l7;
          i1 = (OOC_INT32)w;
          i0 = (OOC_INT32)OOC_C_Naming__NameOfTypeTagParam((OOC_SymbolTable__VarDecl)i0);
          i2 = (OOC_INT32)w;
          i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i2, 2619))+24)+(_check_index(16, 17, OOC_UINT8, 2630))*4);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2419)))), OOC_C_DeclWriter__WriterDesc_NewDeclaration)),OOC_C_DeclWriter__WriterDesc_NewDeclaration)((OOC_C_DeclWriter__Writer)i1, (Object__String)i0, 0, 4, (OOC_C_DeclWriter__Type)i2);
          tag = (OOC_C_DeclWriter__Declaration)i0;
          i1 = (OOC_INT32)fct;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2670)))), OOC_C_DeclWriter__FunctionDesc_AddParameter)),OOC_C_DeclWriter__FunctionDesc_AddParameter)((OOC_C_DeclWriter__Function)i1, (OOC_C_DeclWriter__Declaration)i0);
l7:
          return;
          ;
        }


      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)param;
      i0 = (OOC_INT32)OOC_C_ConvertDecl__ConvertDecl((OOC_C_DeclWriter__Writer)i0, (OOC_SymbolTable__Declaration)i1, 3);
      decl = (OOC_C_DeclWriter__Declaration)i0;
      i2 = (OOC_INT32)fct;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2810)))), OOC_C_DeclWriter__FunctionDesc_AddParameter)),OOC_C_DeclWriter__FunctionDesc_AddParameter)((OOC_C_DeclWriter__Function)i2, (OOC_C_DeclWriter__Declaration)i0);
      i0 = *(OOC_UINT8*)((_check_pointer(i1, 2847))+55);
      if (!i0) goto l4;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2898))+40);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3194)))), &_td_OOC_SymbolTable__RecordDesc, 3194)), 3201))+32);
      i2 = (OOC_INT32)_struct;
      i1 = OOC_C_ConvertDecl__ConvertType_AddFields((OOC_C_DeclWriter__Struct)i2, (OOC_SymbolTable__Type)i1);
      offset = i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3238)))), &_td_OOC_SymbolTable__RecordDesc, 3238)), 3245))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i3 = i0!=(OOC_INT32)0;
      if (i3) goto l6_loop;
      i0=i1;
      goto l23;
l6_loop:
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3307)))), &_td_OOC_SymbolTable__FieldDeclDesc);
      if (i3) goto l9;
      {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
      goto l18;
l9:
      i = i1;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 3360))+48);
      i3 = i1<i0;
      if (!i3) goto l17;
l12_loop:
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3394)))), OOC_C_DeclWriter__StructDesc_AddPadding)),OOC_C_DeclWriter__StructDesc_AddPadding)((OOC_C_DeclWriter__Struct)i2, (OOC_C_DeclWriter__Writer)i3, i1);
      i1 = i1+1;
      i = i1;
      i3 = i1<i0;
      if (i3) goto l12_loop;
l17:
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)ptr;
      i0 = (OOC_INT32)OOC_C_ConvertDecl__ConvertDecl((OOC_C_DeclWriter__Writer)i0, (OOC_SymbolTable__Declaration)i1, 3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3450)))), OOC_C_DeclWriter__StructDesc_AddMember)),OOC_C_DeclWriter__StructDesc_AddMember)((OOC_C_DeclWriter__Struct)i2, (OOC_C_DeclWriter__Declaration)i0);
      i0 = (OOC_INT32)ptr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3544))+40);
      i3 = *(OOC_INT32*)((_check_pointer(i0, 3532))+48);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 3550))+24);
      i1 = i3+i1;
      offset = i1;
      {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
l18:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3658));
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
      _failed_function(2984); return 0;
      ;
    }


  i0 = (OOC_INT32)type;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l83;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4150)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l65;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5172)))), &_td_OOC_SymbolTable__TypeNameDesc);
  if (i1) goto l51;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5744)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l40;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6172)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i1) goto l27;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7061)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l21;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7361)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l15;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7355)))), 7355);
  goto l84;
l15:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7393))+20);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l18;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7502))+20);
  i1 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i1);
  name = (Object__String)i1;
  
  goto l19;
l18:
  name = (Object__String)(OOC_INT32)0;
  i1=(OOC_INT32)0;
l19:
  i2 = (OOC_INT32)w;
  i3 = *(OOC_UINT8*)((_check_pointer(i0, 7566))+48);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7549)))), OOC_C_DeclWriter__WriterDesc_NewStruct)),OOC_C_DeclWriter__WriterDesc_NewStruct)((OOC_C_DeclWriter__Writer)i2, i3, (Object__String)i1);
  _struct = (OOC_C_DeclWriter__Struct)i1;
  i0 = OOC_C_ConvertDecl__ConvertType_AddFields((OOC_C_DeclWriter__Struct)i1, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)_struct;
  return (OOC_C_DeclWriter__Type)i0;
  goto l84;
l21:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 7091))+32);
  if (i1) goto l24;
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7269))+36);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7288))+40);
  i2 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 7315))+44);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7237)))), OOC_C_DeclWriter__WriterDesc_NewArray)),OOC_C_DeclWriter__WriterDesc_NewArray)((OOC_C_DeclWriter__Writer)i1, (OOC_C_DeclWriter__Type)i2, i0);
  return (OOC_C_DeclWriter__Type)i0;
  goto l84;
l24:
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7160))+36);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7179))+40);
  i0 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7128)))), OOC_C_DeclWriter__WriterDesc_NewArray)),OOC_C_DeclWriter__WriterDesc_NewArray)((OOC_C_DeclWriter__Writer)i1, (OOC_C_DeclWriter__Type)i0, (-1));
  return (OOC_C_DeclWriter__Type)i0;
  goto l84;
l27:
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6255))+36);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6273))+40);
  i2 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  i3 = *(OOC_UINT8*)((_check_pointer(i0, 6312))+48);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6208)))), OOC_C_DeclWriter__WriterDesc_NewFunction)),OOC_C_DeclWriter__WriterDesc_NewFunction)((OOC_C_DeclWriter__Writer)i1, (OOC_C_DeclWriter__Type)i2, i3);
  fct = (OOC_C_DeclWriter__Function)i1;
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 6362))+49);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6345)))), OOC_C_DeclWriter__FunctionDesc_SetNoReturn)),OOC_C_DeclWriter__FunctionDesc_SetNoReturn)((OOC_C_DeclWriter__Function)i1, i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6393))+8);
  ptr = (OOC_SymbolTable__Item)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l38;
l30_loop:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6455)))), &_td_OOC_SymbolTable__DeclarationDesc);
  if (!i1) goto l33;
  i1 = (OOC_INT32)fct;
  OOC_C_ConvertDecl__ConvertType_ConvertParam((OOC_C_DeclWriter__Function)i1, (OOC_SymbolTable__VarDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6556)))), &_td_OOC_SymbolTable__VarDeclDesc, 6556)));
l33:
  i0 = (OOC_INT32)ptr;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6666));
  ptr = (OOC_SymbolTable__Item)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l30_loop;
l38:
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)fct;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7001)))), OOC_C_DeclWriter__WriterDesc_NewPointer)),OOC_C_DeclWriter__WriterDesc_NewPointer)((OOC_C_DeclWriter__Writer)i0, 0, (OOC_C_DeclWriter__Type)i1);
  return (OOC_C_DeclWriter__Type)i0;
  goto l84;
l40:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5785))+32);
  baseType = (OOC_SymbolTable__Type)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5828))+36);
  srcCodeBaseType = (OOC_SymbolTable__Type)i0;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5871)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i2) goto l43;
  {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
  goto l49;
l43:
  i0=i1;
l44_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5930)))), &_td_OOC_SymbolTable__ArrayDesc, 5930)), 5936))+40);
  srcCodeBaseType = (OOC_SymbolTable__Type)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5993)))), &_td_OOC_SymbolTable__ArrayDesc, 5993)), 5999))+36);
  baseType = (OOC_SymbolTable__Type)i0;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5871)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i2) goto l44_loop;
l49:
  i2 = (OOC_INT32)w;
  i0 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i2, (OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6043)))), OOC_C_DeclWriter__WriterDesc_NewPointer)),OOC_C_DeclWriter__WriterDesc_NewPointer)((OOC_C_DeclWriter__Writer)i2, 0, (OOC_C_DeclWriter__Type)i0);
  return (OOC_C_DeclWriter__Type)i0;
  goto l84;
l51:
  i0 = (OOC_INT32)resolvedType;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5215)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l62;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5319)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l56;
  i1 = (OOC_INT32)w;
  i0 = (OOC_INT32)OOC_C_Naming__NameOfType((OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5606)))), OOC_C_DeclWriter__WriterDesc_NewTypeRef)),OOC_C_DeclWriter__WriterDesc_NewTypeRef)((OOC_C_DeclWriter__Writer)i1, 0, (Object__String)i0);
  return (OOC_C_DeclWriter__Type)i0;
  goto l84;
l56:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 5360))+48);
  if (i1) goto l59;
  trefClass = 1;
  i1=1;
  goto l60;
l59:
  trefClass = 2;
  i1=2;
l60:
  i2 = (OOC_INT32)w;
  i0 = (OOC_INT32)OOC_C_Naming__NameOfType((OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5515)))), OOC_C_DeclWriter__WriterDesc_NewTypeRef)),OOC_C_DeclWriter__WriterDesc_NewTypeRef)((OOC_C_DeclWriter__Writer)i2, i1, (Object__String)i0);
  return (OOC_C_DeclWriter__Type)i0;
  goto l84;
l62:
  i1 = (OOC_INT32)w;
  i0 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i1, (OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i0);
  return (OOC_C_DeclWriter__Type)i0;
  goto l84;
l65:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 4187))+32);
  switch (i0) {
  case 0:
    i0 = (OOC_INT32)w;
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 4239))+24)+(_check_index(10, 17, OOC_UINT8, 4250))*4);
    return (OOC_C_DeclWriter__Type)i0;
    goto l84;
  case 1:
    i0 = (OOC_INT32)w;
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 4310))+24)+(_check_index(10, 17, OOC_UINT8, 4321))*4);
    return (OOC_C_DeclWriter__Type)i0;
    goto l84;
  case 2:
    i0 = (OOC_INT32)w;
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 4385))+24)+(_check_index(11, 17, OOC_UINT8, 4396))*4);
    return (OOC_C_DeclWriter__Type)i0;
    goto l84;
  case 3:
    i0 = (OOC_INT32)w;
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 4461))+24)+(_check_index(12, 17, OOC_UINT8, 4472))*4);
    return (OOC_C_DeclWriter__Type)i0;
    goto l84;
  case 4:
    i0 = (OOC_INT32)w;
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 4537))+24)+(_check_index(2, 17, OOC_UINT8, 4548))*4);
    return (OOC_C_DeclWriter__Type)i0;
    goto l84;
  case 5:
    i0 = (OOC_INT32)w;
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 4610))+24)+(_check_index(3, 17, OOC_UINT8, 4621))*4);
    return (OOC_C_DeclWriter__Type)i0;
    goto l84;
  case 6:
    i0 = (OOC_INT32)w;
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 4684))+24)+(_check_index(4, 17, OOC_UINT8, 4695))*4);
    return (OOC_C_DeclWriter__Type)i0;
    goto l84;
  case 7:
    i0 = (OOC_INT32)w;
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 4758))+24)+(_check_index(5, 17, OOC_UINT8, 4769))*4);
    return (OOC_C_DeclWriter__Type)i0;
    goto l84;
  case 8:
    i0 = (OOC_INT32)w;
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 4829))+24)+(_check_index(13, 17, OOC_UINT8, 4840))*4);
    return (OOC_C_DeclWriter__Type)i0;
    goto l84;
  case 9:
    i0 = (OOC_INT32)w;
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 4905))+24)+(_check_index(14, 17, OOC_UINT8, 4916))*4);
    return (OOC_C_DeclWriter__Type)i0;
    goto l84;
  case 10:
    i0 = (OOC_INT32)w;
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 4976))+24)+(_check_index(8, 17, OOC_UINT8, 4987))*4);
    return (OOC_C_DeclWriter__Type)i0;
    goto l84;
  case 11:
    i0 = (OOC_INT32)w;
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 5049))+24)+(_check_index(10, 17, OOC_UINT8, 5060))*4);
    return (OOC_C_DeclWriter__Type)i0;
    goto l84;
  case 12:
    i0 = (OOC_INT32)w;
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 5119))+24)+(_check_index(1, 17, OOC_UINT8, 5130))*4);
    return (OOC_C_DeclWriter__Type)i0;
    goto l84;
  default:
    _failed_case(i0, 4178);
    goto l84;
  }
l83:
  i0 = (OOC_INT32)w;
  i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 4097))+24)+(_check_index(0, 17, OOC_UINT8, 4108))*4);
  return (OOC_C_DeclWriter__Type)i0;
l84:
  _failed_function(456); return 0;
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8010)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i1) goto l71;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9157)))), &_td_OOC_SymbolTable__ConstDeclDesc);
  if (i1) goto l69;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9294)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i1) goto l15;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10972)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i1) goto l13;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11205)))), &_td_OOC_SymbolTable__TypeDeclDesc);
  if (i1) goto l11;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11199)))), 11199);
  goto l100;
l11:
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11445))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11457))+44);
  i0 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i1, (OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11237)))), OOC_C_DeclWriter__WriterDesc_NewDeclaration)),OOC_C_DeclWriter__WriterDesc_NewDeclaration)((OOC_C_DeclWriter__Writer)i1, (Object__String)i2, 0, 1, (OOC_C_DeclWriter__Type)i0);
  return (OOC_C_DeclWriter__Declaration)i0;
  goto l100;
l13:
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11159))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11171))+44);
  i0 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i1, (OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11005)))), OOC_C_DeclWriter__WriterDesc_NewDeclaration)),OOC_C_DeclWriter__WriterDesc_NewDeclaration)((OOC_C_DeclWriter__Writer)i1, (Object__String)i2, 0, 0, (OOC_C_DeclWriter__Type)i0);
  return (OOC_C_DeclWriter__Declaration)i0;
  goto l100;
l15:
  tq = 0;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 9355))+48);
  if (i1) goto l30;
  i1 = mode;
  i1 = i1==0;
  if (i1) goto l28;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 9772))+24);
  i1 = i1==0;
  if (i1) goto l22;
  i1=0u;
  goto l24;
l22:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9829))+4);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9838)))), &_td_OOC_SymbolTable__ModuleDesc);
  
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
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 9424))+50);
  i1 = !i1;
  if (i1) goto l33;
  i1=0u;
  goto l35;
l33:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 9443))+51);
  
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10047))+40);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10059))+44);
  i6 = (OOC_INT32)w;
  i4 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i6, (OOC_SymbolTable__Type)i4, (OOC_SymbolTable__Type)i5);
  ctype = (OOC_C_DeclWriter__Type)i4;
  i5 = mode;
  i5 = i5==3;
  if (i5) goto l42;
  i5=0u;
  goto l44;
l42:
  i5 = *(OOC_UINT8*)((_check_pointer(i0, 10119))+48);
  
l44:
  if (i5) goto l46;
  i0=i3;i3=i4;
  goto l67;
l46:
  i5 = *(OOC_UINT8*)((_check_pointer(i0, 10154))+50);
  i5 = !i5;
  if (i5) goto l49;
  i5=0u;
  goto l51;
l49:
  i5 = *(OOC_UINT8*)((_check_pointer(i0, 10172))+51);
  
l51:
  if (i5) goto l53;
  i5=0u;
  goto l55;
l53:
  i5 = *(OOC_UINT8*)((_check_pointer(i0, 10198))+52);
  
l55:
  if (!i5) goto l58;
  i5 = (OOC_INT32)Object__NewLatin1("__ref", 6);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 10503)))), Object__StringDesc_Concat)),Object__StringDesc_Concat)((Object__String)i3, (Object__String)i5);
  name = (Object__String)i3;
  
l58:
  i5 = *(OOC_UINT8*)((_check_pointer(i0, 10585))+51);
  if (i5) goto l61;
  i0=0u;
  goto l63;
l61:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10614))+40);
  i0 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10621)))), &_td_OOC_SymbolTable__ArrayDesc));
  
l63:
  if (i0) goto l65;
  i0=i4;
  goto l66;
l65:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 10836)))), OOC_C_DeclWriter__WriterDesc_NewPointer)),OOC_C_DeclWriter__WriterDesc_NewPointer)((OOC_C_DeclWriter__Writer)i6, 0, (OOC_C_DeclWriter__Type)i4);
  ctype = (OOC_C_DeclWriter__Type)i0;
  
l66:
  {register OOC_INT32 h0=i0;i0=i3;i3=h0;}
l67:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 10922)))), OOC_C_DeclWriter__WriterDesc_NewDeclaration)),OOC_C_DeclWriter__WriterDesc_NewDeclaration)((OOC_C_DeclWriter__Writer)i6, (Object__String)i0, i1, i2, (OOC_C_DeclWriter__Type)i3);
  return (OOC_C_DeclWriter__Declaration)i0;
  goto l100;
l69:
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9267))+40);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9190)))), OOC_C_DeclWriter__WriterDesc_NewDefine)),OOC_C_DeclWriter__WriterDesc_NewDefine)((OOC_C_DeclWriter__Writer)i1, (Object__String)i2, (Object_Boxed__Object)i0);
  return (OOC_C_DeclWriter__Declaration)i0;
  goto l100;
l71:
  i1 = mode;
  switch (i1) {
  case 0:
    sc = 2;
    goto l93;
  case 1:
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8150))+4);
    i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8159)))), &_td_OOC_SymbolTable__ProcDeclDesc);
    if (i2) goto l77;
    sc = 3;
    
    goto l93;
l77:
    sc = 6;
    
    goto l93;
  case 2:
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8361))+4);
    i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8370)))), &_td_OOC_SymbolTable__ProcDeclDesc);
    if (i2) goto l90;
    i2 = *(OOC_INT8*)((_check_pointer(i0, 8482))+24);
    i2 = i2==0;
    if (i2) goto l84;
    i2=0u;
    goto l86;
l84:
    i2 = *(OOC_UINT8*)((_check_pointer(i0, 8525))+40);
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
    _failed_case(i1, 8034);
    goto l93;
  }
l93:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8684))+52);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8702))+52);
  i4 = (OOC_INT32)w;
  i2 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i4, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  fpars = (OOC_C_DeclWriter__Type)i2;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8749)))), &_td_OOC_C_DeclWriter__PointerDesc, 8749)), 8757))+4);
  fpars = (OOC_C_DeclWriter__Type)i2;
  i3 = *(OOC_UINT8*)((_check_pointer(i0, 8785))+64);
  if (!i3) goto l96;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8828)))), &_td_OOC_C_DeclWriter__FunctionDesc, 8828)), 8837)))), OOC_C_DeclWriter__FunctionDesc_MakeParametersVolatile)),OOC_C_DeclWriter__FunctionDesc_MakeParametersVolatile)((OOC_C_DeclWriter__Function)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8828)))), &_td_OOC_C_DeclWriter__FunctionDesc, 8828)));
l96:
  i1 = i1!=0;
  if (!i1) goto l99;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8988)))), &_td_OOC_C_DeclWriter__FunctionDesc, 8988)), 8997)))), OOC_C_DeclWriter__FunctionDesc_SetNoReturn)),OOC_C_DeclWriter__FunctionDesc_SetNoReturn)((OOC_C_DeclWriter__Function)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8988)))), &_td_OOC_C_DeclWriter__FunctionDesc, 8988)), 0u);
l99:
  i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  i1 = sc;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9050)))), OOC_C_DeclWriter__WriterDesc_NewDeclaration)),OOC_C_DeclWriter__WriterDesc_NewDeclaration)((OOC_C_DeclWriter__Writer)i4, (Object__String)i0, 0, i1, (OOC_C_DeclWriter__Type)i2);
  return (OOC_C_DeclWriter__Declaration)i0;
l100:
  _failed_function(7697); return 0;
  ;
}

void OOC_C_ConvertDecl__ConvertSymTab(OOC_C_DeclWriter__Writer w, OOC_Repository__Module m, OOC_SymbolTable__Module symTab, ADT_Dictionary__Dictionary exports, OOC_CHAR8 writeExported) {
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
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12606)))), &_td_OOC_SymbolTable__VarDeclDesc);
          if (i1) goto l3;
          return 0u;
          goto l4;
l3:
          i0 = *(OOC_INT8*)((_check_pointer(i0, 12844))+24);
          return (i0!=0);
l4:
          _failed_function(12536); return 0;
          ;
        }

        
        void OOC_C_ConvertDecl__ConvertSymTab_ConvertTopLevel_AddTypeBoundHelpers(OOC_C_DeclWriter__Writer w, OOC_SymbolTable__ProcDecl proc) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_C_DeclWriter__Declaration d;

          i0 = (OOC_INT32)w;
          i1 = (OOC_INT32)proc;
          i2 = (OOC_INT32)OOC_C_Naming__NameOfTypeBoundIndex((OOC_SymbolTable__ProcDecl)i1);
          i3 = *(OOC_INT32*)((_check_pointer(i1, 13202))+44);
          i3 = (OOC_INT32)Object_BigInt__NewInt(i3);
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13108)))), OOC_C_DeclWriter__WriterDesc_NewDefine)),OOC_C_DeclWriter__WriterDesc_NewDefine)((OOC_C_DeclWriter__Writer)i0, (Object__String)i2, (Object_Boxed__Object)i3);
          d = (OOC_C_DeclWriter__Declaration)i2;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13228)))), OOC_C_DeclWriter__WriterDesc_AddDeclaration)),OOC_C_DeclWriter__WriterDesc_AddDeclaration)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Declaration)i2);
          i2 = (OOC_INT32)OOC_C_Naming__NameOfTypeBoundSignature((OOC_SymbolTable__ProcDecl)i1);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13480))+52);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13543))+52);
          i1 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i0, (OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i1);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13265)))), OOC_C_DeclWriter__WriterDesc_NewDeclaration)),OOC_C_DeclWriter__WriterDesc_NewDeclaration)((OOC_C_DeclWriter__Writer)i0, (Object__String)i2, 0, 1, (OOC_C_DeclWriter__Type)i1);
          d = (OOC_C_DeclWriter__Declaration)i1;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13568)))), OOC_C_DeclWriter__WriterDesc_AddDeclaration)),OOC_C_DeclWriter__WriterDesc_AddDeclaration)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Declaration)i1);
          return;
          ;
        }


      i0 = (OOC_INT32)root;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13653))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l42;
l3_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13711)))), &_td_OOC_SymbolTable__DeclarationDesc);
      if (!i1) goto l37;
      i1 = (OOC_INT32)exports;
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13753)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
      i2 = mode;
      i1 = i1==(i2==0);
      if (i1) goto l8;
      i0 = OOC_C_ConvertDecl__ConvertSymTab_ConvertTopLevel_ExportedVarDecl((OOC_SymbolTable__Item)i0);
      
      goto l10;
l8:
      i0=1u;
l10:
      if (!i0) goto l37;
      i0 = (OOC_INT32)ptr;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13861)))), &_td_OOC_SymbolTable__ImportDesc);
      if (i1) goto l31;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14114)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l16;
      i1=0u;
      goto l18;
l16:
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14141)))), &_td_OOC_SymbolTable__ProcDeclDesc, 14141)), 14150))+41);
      
l18:
      if (i1) goto l37;
      i1 = mode;
      i2 = (OOC_INT32)w;
      i1 = (OOC_INT32)OOC_C_ConvertDecl__ConvertDecl((OOC_C_DeclWriter__Writer)i2, (OOC_SymbolTable__Declaration)i0, i1);
      decl = (OOC_C_DeclWriter__Declaration)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14337))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14337))+8);
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14343)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i3, 0);
      i2 = i2!=40u;
      if (!i2) goto l37;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14803)))), OOC_C_DeclWriter__WriterDesc_AddDeclaration)),OOC_C_DeclWriter__WriterDesc_AddDeclaration)((OOC_C_DeclWriter__Writer)i2, (OOC_C_DeclWriter__Declaration)i1);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14854)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l24;
      i1=0u;
      goto l26;
l24:
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14902)))), &_td_OOC_SymbolTable__ProcDeclDesc, 14902)), 14911))+40);
      
l26:
      if (!i1) goto l37;
      i1 = (OOC_INT32)w;
      OOC_C_ConvertDecl__ConvertSymTab_ConvertTopLevel_AddTypeBoundHelpers((OOC_C_DeclWriter__Writer)i1, (OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14982)))), &_td_OOC_SymbolTable__ProcDeclDesc, 14982)));
      goto l37;
l31:
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13898)))), OOC_SymbolTable__ImportDesc_IsInternalImport)),OOC_SymbolTable__ImportDesc_IsInternalImport)((OOC_SymbolTable__Import)i0);
      i1 = !i1;
      if (!i1) goto l37;
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)m;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14035))+40);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 14046))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14035))+40);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14046))+12);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 14050)), 0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14013)))), OOC_Repository__ModuleDesc_GetImportedModule)),OOC_Repository__ModuleDesc_GetImportedModule)((OOC_Repository__Module)i2, (void*)(_check_pointer(i3, 14050)), i0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13959)))), OOC_C_DeclWriter__WriterDesc_NewIncludeModule)),OOC_C_DeclWriter__WriterDesc_NewIncludeModule)((OOC_C_DeclWriter__Writer)i1, (OOC_Repository__Module)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13941)))), OOC_C_DeclWriter__WriterDesc_AddDeclaration)),OOC_C_DeclWriter__WriterDesc_AddDeclaration)((OOC_C_DeclWriter__Writer)i1, (OOC_C_DeclWriter__Declaration)i0);
l37:
      i0 = (OOC_INT32)ptr;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15192));
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15587))+8);
      ptr = (OOC_SymbolTable__Item)i1;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l17;
      i2 = (OOC_INT32)topLevel;
      i0 = i0!=i2;
      
l3_loop:
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15645)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i3) goto l11;
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15722)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (!i3) goto l12;
      if (!i0) goto l12;
      i3 = mode;
      i4 = (OOC_INT32)w;
      i3 = (OOC_INT32)OOC_C_ConvertDecl__ConvertDecl((OOC_C_DeclWriter__Writer)i4, (OOC_SymbolTable__Declaration)i1, i3);
      decl = (OOC_C_DeclWriter__Declaration)i3;
      i4 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15837)))), OOC_C_DeclWriter__WriterDesc_AddDeclaration)),OOC_C_DeclWriter__WriterDesc_AddDeclaration)((OOC_C_DeclWriter__Writer)i4, (OOC_C_DeclWriter__Declaration)i3);
      goto l12;
l11:
      OOC_C_ConvertDecl__ConvertSymTab_ConvertNestedTypes((OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Item)i1);
l12:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15978));
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
  i3 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 16413))+24)+(_check_index(0, 17, OOC_UINT8, 16424))*4);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16397)))), OOC_C_DeclWriter__WriterDesc_NewFunction)),OOC_C_DeclWriter__WriterDesc_NewFunction)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i3, 0u);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16249)))), OOC_C_DeclWriter__WriterDesc_NewDeclaration)),OOC_C_DeclWriter__WriterDesc_NewDeclaration)((OOC_C_DeclWriter__Writer)i0, (Object__String)i2, 0, 2, (OOC_C_DeclWriter__Type)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16220)))), OOC_C_DeclWriter__WriterDesc_AddDeclaration)),OOC_C_DeclWriter__WriterDesc_AddDeclaration)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Declaration)i2);
  i1 = (OOC_INT32)OOC_C_Naming__NameOfModuleInit((OOC_SymbolTable__Module)i1, 1u);
  i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 16652))+24)+(_check_index(0, 17, OOC_UINT8, 16663))*4);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16636)))), OOC_C_DeclWriter__WriterDesc_NewFunction)),OOC_C_DeclWriter__WriterDesc_NewFunction)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i2, 0u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16489)))), OOC_C_DeclWriter__WriterDesc_NewDeclaration)),OOC_C_DeclWriter__WriterDesc_NewDeclaration)((OOC_C_DeclWriter__Writer)i0, (Object__String)i1, 0, 2, (OOC_C_DeclWriter__Type)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16460)))), OOC_C_DeclWriter__WriterDesc_AddDeclaration)),OOC_C_DeclWriter__WriterDesc_AddDeclaration)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Declaration)i1);
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
  _failed_function(16785); return 0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17720))+20);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17749)))), &_td_OOC_SymbolTable__PredefTypeDesc));
  
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)w;
  i0 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i1, (OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i0);
  return (OOC_C_DeclWriter__Type)i0;
  goto l8;
l7:
  i1 = (OOC_INT32)w;
  i0 = (OOC_INT32)OOC_C_Naming__NameOfType((OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17787)))), OOC_C_DeclWriter__WriterDesc_NewTypeRef)),OOC_C_DeclWriter__WriterDesc_NewTypeRef)((OOC_C_DeclWriter__Writer)i1, 0, (Object__String)i0);
  return (OOC_C_DeclWriter__Type)i0;
l8:
  _failed_function(17543); return 0;
  ;
}

OOC_C_DeclWriter__Declaration OOC_C_ConvertDecl__GetPointerDecl(OOC_C_DeclWriter__Writer w, OOC_SymbolTable__VarDecl paramDecl) {
  register OOC_INT32 i0,i1,i2;
  OOC_SymbolTable__Type elemType;

  i0 = (OOC_INT32)paramDecl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18327))+40);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18334)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18460))+40);
  elemType = (OOC_SymbolTable__Type)i1;
  
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18380))+40);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18380))+40);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18391)))), &_td_OOC_SymbolTable__ArrayDesc, 18391)), 18397)))), OOC_SymbolTable__ArrayDesc_GetNonOpenElementType)),OOC_SymbolTable__ArrayDesc_GetNonOpenElementType)((OOC_SymbolTable__Array)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18391)))), &_td_OOC_SymbolTable__ArrayDesc, 18391)));
  elemType = (OOC_SymbolTable__Type)i1;
  
l4:
  i2 = (OOC_INT32)w;
  i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  i1 = (OOC_INT32)OOC_C_ConvertDecl__GetTypeRef((OOC_C_DeclWriter__Writer)i2, (OOC_SymbolTable__Type)i1);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18624)))), OOC_C_DeclWriter__WriterDesc_NewPointer)),OOC_C_DeclWriter__WriterDesc_NewPointer)((OOC_C_DeclWriter__Writer)i2, 0, (OOC_C_DeclWriter__Type)i1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18494)))), OOC_C_DeclWriter__WriterDesc_NewDeclaration)),OOC_C_DeclWriter__WriterDesc_NewDeclaration)((OOC_C_DeclWriter__Writer)i2, (Object__String)i0, 0, 4, (OOC_C_DeclWriter__Type)i1);
  return (OOC_C_DeclWriter__Declaration)i0;
  ;
}

void OOC_OOC_C_ConvertDecl_init(void) {

  return;
  ;
}

/* --- */
