#include "Integers.oh"
#include "RT0.oh"
#include "Language/String0.oh"
#define Integers__B 32768
#define Integers__positive 1
#define Integers__negative -1
static Integers__Integer Integers__ZERO;
static Integers__Integer Integers__ONE;
static Integers__Integer Integers__New(OOC_INT32 n);
static Integers__Integer Integers__Copy(OOC_INT16 s[], OOC_LEN s_0d, OOC_INT32 n);
static void Integers__Assign(OOC_INT16 w[], OOC_LEN w_0d, OOC_INT16 u[], OOC_LEN u_0d);
static Integers__Integer Integers__Sub(const OOC_INT16 x__ref[], OOC_LEN x_0d, OOC_INT16 y[], OOC_LEN y_0d);
static Integers__Integer Integers__Add(const OOC_INT16 x__ref[], OOC_LEN x_0d, OOC_INT16 y[], OOC_LEN y_0d);
static OOC_INT32 Integers__UCompare(OOC_INT16 x[], OOC_LEN x_0d, OOC_INT16 y[], OOC_LEN y_0d);
static void Integers__MultDigit(OOC_INT16 w[], OOC_LEN w_0d, OOC_INT16 u[], OOC_LEN u_0d, OOC_INT32 digit, OOC_INT16 *c);
static void Integers__MultAdd(OOC_INT16 w[], OOC_LEN w_0d, OOC_INT16 u[], OOC_LEN u_0d, OOC_INT16 v[], OOC_LEN v_0d, OOC_INT32 digit, OOC_INT16 *c);
static void Integers__DivDigit(OOC_INT16 w[], OOC_LEN w_0d, OOC_INT16 u[], OOC_LEN u_0d, OOC_INT32 digit, OOC_INT32 *r);
static void Integers__ModDigit(OOC_INT16 u[], OOC_LEN u_0d, OOC_INT32 digit, OOC_INT32 *r);
static void Integers__ToString(const OOC_INT16 x__ref[], OOC_LEN x_0d, OOC_CHAR8 s[], OOC_LEN s_0d, OOC_INT16 base);
static void Integers__Mult(OOC_INT16 w[], OOC_LEN w_0d, const OOC_INT16 u__ref[], OOC_LEN u_0d, const OOC_INT16 v__ref[], OOC_LEN v_0d);
static void Integers__QR(const OOC_INT16 u__ref[], OOC_LEN u_0d, const OOC_INT16 v__ref[], OOC_LEN v_0d, OOC_INT16 q[], OOC_LEN q_0d, OOC_INT16 r[], OOC_LEN r_0d);
static Integers__Integer Integers__gcd(const OOC_INT16 u__ref[], OOC_LEN u_0d, OOC_INT32 v);
static Integers__Integer Integers__mgcd(const OOC_INT16 u__ref[], OOC_LEN u_0d, const OOC_INT16 v__ref[], OOC_LEN v_0d, const OOC_INT16 t__ref[], OOC_LEN t_0d, const OOC_INT16 w__ref[], OOC_LEN w_0d);
static void Integers__IntPower(OOC_INT16 y[], OOC_LEN y_0d, const OOC_INT16 x__ref[], OOC_LEN x_0d, OOC_INT32 exp);
static OOC_INT32 Integers__ExtractDigit(const OOC_INT16 x__ref[], OOC_LEN x_0d, OOC_INT32 d);
static void Integers__Times10(OOC_INT16 r[], OOC_LEN r_0d, OOC_INT16 b);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Integers__Integer = { (RT0__Struct[]){&_td_Integers__IntegerDesc}, NULL, &_mid, "Integer", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Integers__IntegerDesc = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, "IntegerDesc", 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Integers__2050 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Integers__2564 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Integers__2931 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Integers__2956 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Integers__3448 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Integers__3473 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Integers__4078 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Integers__4714 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Integers__5073 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Integers__5434 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Integers__5760 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Integers__6083 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Integers__6108 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_Integers__7205 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Integers__7229 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Integers__8297 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Integers__8325 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Integers__10283 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Integers__10708 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Integers__10867 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 2, 1, RT0__strArray };
RT0__StructDesc _td_Integers__12236 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Integers__12257 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Integers__12570 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Integers__12871 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Integers__15715 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 130, 65, RT0__strArray };
RT0__StructDesc _td_Integers__16529 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 8, 4, RT0__strArray };
RT0__StructDesc _td_Integers__20265 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 4, 2, RT0__strArray };
RT0__StructDesc _td_Integers__24759 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 6, 3, RT0__strArray };
RT0__StructDesc _td_Integers__24786 = { (RT0__Struct[]){&RT0__integer}, NULL, &_mid, NULL, 2, 1, RT0__strArray };
RT0__StructDesc _td_Integers__25164 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_Integers__26451 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Integers", (RT0__Struct[]) { &_td_Integers__Integer, &_td_Integers__IntegerDesc, NULL } };

extern void OOC_Integers_init0() {
  RT0__RegisterModule(&_mid);
  OOC_Integers_init();
}

/* --- */
