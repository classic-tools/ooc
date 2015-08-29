#include <OOC/Config/Pragmas/StdPragmas.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_Config_Pragmas_StdPragmas__CreateVariables(OOC_Config_Pragmas__Section s) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)Config_Value_Boolean__New(1u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2155)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "Warnings", 9, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__warnings = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_Boolean__New(1u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2225)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "Assertions", 11, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__assertions = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_Boolean__New(1u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2299)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "IndexCheck", 11, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__indexCheck = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_Boolean__New(1u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2373)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "DerefCheck", 11, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__derefCheck = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_Boolean__New(0u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2450)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "OverflowCheck", 14, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__overflowCheck = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_Boolean__New(1u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2535)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "CaseSelectCheck", 16, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__caseSelectCheck = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_Boolean__New(1u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2628)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "FunctResult", 12, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__functionResultCheck = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_Boolean__New(1u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2711)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "TypeGuard", 10, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__typeGuard = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_Boolean__New(0u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2787)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "ConformantMode", 15, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__conformantMode = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_String__New("2.0.6", 6);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2875)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "COMPILER_VERSION", 17, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__compilerVersion = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_Integer__New(2);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2962)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "COMPILER_MAJOR", 15, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__compilerMajor = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_Integer__New(0);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3046)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "COMPILER_MINOR", 15, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__compilerMinor = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_Integer__New(64);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3135)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "TARGET_INTEGER", 15, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__targetInteger = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_Integer__New(32);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3219)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "TARGET_ADDRESS", 15, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__targetAddress = (Config_Section_Options__Option)i0;
  return;
  ;
}

void OOC_OOC_Config_Pragmas_StdPragmas_init(void) {

  return;
  ;
}

/* --- */
