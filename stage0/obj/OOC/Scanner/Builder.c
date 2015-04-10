#include "OOC/Scanner/Builder.d"
#include "__oo2c.h"

void OOC_Scanner_Builder__Init(OOC_Scanner_Builder__Builder b, OOC_Scanner_InputBuffer__Buffer buffer) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)buffer;
  *(OOC_INT32*)(_check_pointer(i0, 3605)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 3635))+4) = (OOC_INT32)0;
  return;
  ;
}

void OOC_Scanner_Builder__BuilderDesc_AddSymbol(OOC_Scanner_Builder__Builder b, OOC_INT8 id, OOC_INT32 cstart, OOC_INT32 cend, OOC_INT32 line, OOC_INT32 column) {

  return;
  ;
}

void OOC_Scanner_Builder__BuilderDesc_SetPragmaHistory(OOC_Scanner_Builder__Builder b, OOC_Config_Pragmas__History pragmaHistory) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)pragmaHistory;
  *(OOC_INT32*)((_check_pointer(i0, 4658))+4) = i1;
  return;
  ;
}

void OOC_OOC_Scanner_Builder_init(void) {

  return;
  ;
}

/* --- */
