#include "Time.oh"
#include "RT0.oh"
#include "Language/String0.oh"

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Time__TimeStamp = { (RT0__Struct[]){&_td_Time__TimeStamp}, (void*[]){(void*)Time__TimeStamp_Add,(void*)Time__TimeStamp_Cmp,(void*)Time__TimeStamp_Delta,(void*)Time__TimeStamp_Sub}, &_mid, "TimeStamp", 8, 0, RT0__strRecord };
RT0__StructDesc _td_Time__Interval = { (RT0__Struct[]){&_td_Time__Interval}, (void*[]){(void*)Time__Interval_Add,(void*)Time__Interval_Cmp,(void*)Time__Interval_Fraction,(void*)Time__Interval_Scale,(void*)Time__Interval_Sub}, &_mid, "Interval", 8, 0, RT0__strRecord };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Time", (RT0__Struct[]) { &_td_Time__TimeStamp, &_td_Time__Interval, NULL } };

extern void OOC_Time_init0() {
  RT0__RegisterModule(&_mid);
  OOC_Time_init();
}

/* --- */
