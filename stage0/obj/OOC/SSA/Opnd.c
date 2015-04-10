#include "OOC/SSA/Opnd.d"
#include "__oo2c.h"

void OOC_SSA_Opnd__GetName(OOC_INT8 _class, OOC_CHAR8 name[], OOC_LEN name_0d) {
  register OOC_INT32 i0;

  i0 = _class;
  switch (i0) {
  case 1:
    _copy_8("arg",(OOC_INT32)name,name_0d);
    goto l23;
  case 2:
    _copy_8("store",(OOC_INT32)name,name_0d);
    goto l23;
  case 3:
    _copy_8("proc-adr",(OOC_INT32)name,name_0d);
    goto l23;
  case 4:
    _copy_8("read-adr",(OOC_INT32)name,name_0d);
    goto l23;
  case 5:
    _copy_8("read-design",(OOC_INT32)name,name_0d);
    goto l23;
  case 6:
    _copy_8("write-adr",(OOC_INT32)name,name_0d);
    goto l23;
  case 7:
    _copy_8("write-design",(OOC_INT32)name,name_0d);
    goto l23;
  case 8:
    _copy_8("source-value",(OOC_INT32)name,name_0d);
    goto l23;
  case 9:
    _copy_8("function-result",(OOC_INT32)name,name_0d);
    goto l23;
  case 10:
    _copy_8("store-enter",(OOC_INT32)name,name_0d);
    goto l23;
  case 11:
    _copy_8("store-exit",(OOC_INT32)name,name_0d);
    goto l23;
  case 12:
    _copy_8("type",(OOC_INT32)name,name_0d);
    goto l23;
  case 13:
    _copy_8("backward-feed",(OOC_INT32)name,name_0d);
    goto l23;
  case 15:
    _copy_8("dimension",(OOC_INT32)name,name_0d);
    goto l23;
  case 16:
    _copy_8("labels",(OOC_INT32)name,name_0d);
    goto l23;
  case 17:
    _copy_8("loop-external-def",(OOC_INT32)name,name_0d);
    goto l23;
  case 18:
    _copy_8("anti-dependency",(OOC_INT32)name,name_0d);
    goto l23;
  case 20:
    _copy_8("region-dependency",(OOC_INT32)name,name_0d);
    goto l23;
  case 21:
    _copy_8("dgate-base",(OOC_INT32)name,name_0d);
    goto l23;
  case 22:
    _copy_8("dgate-ref",(OOC_INT32)name,name_0d);
    goto l23;
  default:
    _failed_case(i0, 5923);
    goto l23;
  }
l23:
  return;
  ;
}

void OOC_OOC_SSA_Opnd_init(void) {

  return;
  ;
}

/* --- */
