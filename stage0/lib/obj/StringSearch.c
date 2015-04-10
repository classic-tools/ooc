#include "StringSearch.d"
#include "__oo2c.h"

void StringSearch__InitMatchObject(StringSearch__MatchObject m, OOC_INT32 pos, OOC_INT32 endpos, StringSearch__Matcher matcher, ADT_String__String string) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)m;
  ADT_Object__Init((ADT_Object__Object)i0);
  i1 = pos;
  *(OOC_INT32*)(_check_pointer(i0, 3894)) = i1;
  i1 = endpos;
  *(OOC_INT32*)((_check_pointer(i0, 3913))+4) = i1;
  i1 = (OOC_INT32)matcher;
  *(OOC_INT32*)((_check_pointer(i0, 3938))+8) = i1;
  i1 = (OOC_INT32)string;
  *(OOC_INT32*)((_check_pointer(i0, 3965))+12) = i1;
  return;
  ;
}

void StringSearch__MatchObjectDesc_Destroy(StringSearch__MatchObject m) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)m;
  ADT_Object__ObjectDesc_Destroy((ADT_Object__Object)i0);
  *(OOC_INT32*)(_check_pointer(i0, 4076)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4093))+4) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4113))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 4136))+12) = (OOC_INT32)0;
  return;
  ;
}

OOC_INT32 StringSearch__MatchObjectDesc_Start(StringSearch__MatchObject m, OOC_INT32 group) {

  _failed_function(4207); return 0;
  ;
}

OOC_INT32 StringSearch__MatchObjectDesc_End(StringSearch__MatchObject m, OOC_INT32 group) {

  _failed_function(5008); return 0;
  ;
}

void StringSearch__InitMatcher(StringSearch__Matcher matcher, ADT_String__String pattern, OOC_UINT32 flags, OOC_INT32 groups) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)matcher;
  ADT_Object__Init((ADT_Object__Object)i0);
  i1 = (OOC_INT32)pattern;
  *(OOC_INT32*)(_check_pointer(i0, 5311)) = i1;
  i1 = flags;
  *(OOC_UINT32*)((_check_pointer(i0, 5344))+4) = i1;
  i1 = groups;
  *(OOC_INT32*)((_check_pointer(i0, 5373))+8) = i1;
  return;
  ;
}

void StringSearch__MatcherDesc_Destroy(StringSearch__Matcher matcher) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)matcher;
  ADT_Object__ObjectDesc_Destroy((ADT_Object__Object)i0);
  *(OOC_INT32*)(_check_pointer(i0, 5494)) = (OOC_INT32)0;
  *(OOC_UINT32*)((_check_pointer(i0, 5523))+4) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 5549))+8) = 0;
  return;
  ;
}

StringSearch__MatchObject StringSearch__MatcherDesc_MatchChars(StringSearch__Matcher matcher, const OOC_CHAR8 string[], OOC_LEN string_0d, OOC_INT32 pos, OOC_INT32 endpos) {

  _failed_function(5620); return 0;
  ;
}

StringSearch__MatchObject StringSearch__MatcherDesc_Match(StringSearch__Matcher matcher, ADT_String__String string, OOC_INT32 pos, OOC_INT32 endpos) {

  _failed_function(6902); return 0;
  ;
}

StringSearch__MatchObject StringSearch__MatcherDesc_SearchChars(StringSearch__Matcher matcher, const OOC_CHAR8 string[], OOC_LEN string_0d, OOC_INT32 pos, OOC_INT32 endpos) {

  _failed_function(7121); return 0;
  ;
}

StringSearch__MatchObject StringSearch__MatcherDesc_Search(StringSearch__Matcher matcher, ADT_String__String string, OOC_INT32 pos, OOC_INT32 endpos) {

  _failed_function(7711); return 0;
  ;
}

void StringSearch__InitFactory(StringSearch__Factory f) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)f;
  ADT_Object__Init((ADT_Object__Object)i0);
  return;
  ;
}

void StringSearch__FactoryDesc_Destroy(StringSearch__Factory f) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)f;
  ADT_Object__ObjectDesc_Destroy((ADT_Object__Object)i0);
  return;
  ;
}

StringSearch__Matcher StringSearch__FactoryDesc_Compile(StringSearch__Factory f, ADT_String__String pattern, OOC_UINT32 flags) {

  _failed_function(8087); return 0;
  ;
}

void OOC_StringSearch_init(void) {

  return;
  ;
}

/* --- */
