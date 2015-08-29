#include <OOC/Config/Pragmas/StdPragmas.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_Config_Pragmas_StdPragmas__CreateVariables(OOC_Config_Pragmas__Section s) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)Config_Value_Boolean__New(1u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2722)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "Warnings", 9, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__warnings = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_Boolean__New(1u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2792)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "Assertions", 11, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__assertions = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_Boolean__New(0u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2944)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "StackCheck", 11, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__stackCheck = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_Boolean__New(0u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3022)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "ConformantMode", 15, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__conformantMode = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_Boolean__New(1u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3109)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "IndexCheck", 11, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__indexCheck = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_Boolean__New(1u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3183)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "DerefCheck", 11, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__derefCheck = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_Boolean__New(0u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3260)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "OverflowCheck", 14, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__overflowCheck = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_Boolean__New(1u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3345)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "CaseSelectCheck", 16, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__caseSelectCheck = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_Boolean__New(1u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3438)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "FunctResult", 12, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__functionResultCheck = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_Boolean__New(1u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3521)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "TypeGuard", 10, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__typeGuard = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_Boolean__New(0u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3593)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "RangeCheck", 11, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__rangeCheck = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_String__New("OOC", 4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3670)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "COMPILER", 9, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__compiler = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_String__New("2.0.8", 6);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3744)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "COMPILER_VERSION", 17, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__compilerVersion = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_Integer__New(2);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3831)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "COMPILER_MAJOR", 15, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__compilerMajor = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_Integer__New(0);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3915)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "COMPILER_MINOR", 15, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__compilerMinor = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_String__New("Unix", 5);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3999)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "TARGET_OS", 10, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__targetOS = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_String__New("gcc", 4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4069)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "TARGET_ARCH", 12, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__targetArch = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_String__New("", 1);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4148)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "TARGET_ARCH_MINOR", 18, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__targetArchMinor = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_Integer__New(64);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4236)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "TARGET_INTEGER", 15, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__targetInteger = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_Integer__New(32);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4320)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "TARGET_ADDRESS", 15, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__targetAddress = (Config_Section_Options__Option)i1;
  i1 = (OOC_INT32)Config_Value_String__New("unknown", 8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4406)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "TARGET_BYTE_ORDER", 18, (Config_Value__Value)i1);
  OOC_Config_Pragmas_StdPragmas__targetByteOrder = (Config_Section_Options__Option)i0;
  return;
  ;
}

void OOC_OOC_Config_Pragmas_StdPragmas_init(void) {

  return;
  ;
}

/* --- */
