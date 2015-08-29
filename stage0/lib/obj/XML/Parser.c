#include "XML/Parser.d"
#include "__oo2c.h"

static OOC_CHAR8 XML_Parser__IsCharUCS4(OOC_INT32 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = 32<=i0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = i0<=55295;
  
l5:
  if (i1) goto l7;
  i1 = i0==9;
  
  goto l9;
l7:
  i1=OOC_TRUE;
l9:
  if (i1) goto l11;
  i1 = i0==10;
  
  goto l13;
l11:
  i1=OOC_TRUE;
l13:
  if (i1) goto l15;
  i1 = i0==13;
  
  goto l17;
l15:
  i1=OOC_TRUE;
l17:
  if (i1) goto l23;
  i1 = 57344<=i0;
  if (i1) goto l21;
  i1=OOC_FALSE;
  goto l25;
l21:
  i1 = i0<=65533;
  
  goto l25;
l23:
  i1=OOC_TRUE;
l25:
  if (i1) goto l31;
  i1 = 65536<=i0;
  if (i1) goto l29;
  i0=OOC_FALSE;
  goto l32;
l29:
  i0 = i0<=1114111;
  
  goto l32;
l31:
  i0=OOC_TRUE;
l32:
  return i0;
  ;
}

static OOC_CHAR8 XML_Parser__IsDigit(OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = i0<(OOC_CHAR16)256;
  if (i1) goto l6;
  switch (i0) {
  case (OOC_CHAR16)1632 ... (OOC_CHAR16)1641:
  case (OOC_CHAR16)1776 ... (OOC_CHAR16)1785:
  case (OOC_CHAR16)2406 ... (OOC_CHAR16)2415:
  case (OOC_CHAR16)2534 ... (OOC_CHAR16)2543:
  case (OOC_CHAR16)2662 ... (OOC_CHAR16)2671:
  case (OOC_CHAR16)2790 ... (OOC_CHAR16)2799:
  case (OOC_CHAR16)2918 ... (OOC_CHAR16)2927:
  case (OOC_CHAR16)3047 ... (OOC_CHAR16)3055:
  case (OOC_CHAR16)3174 ... (OOC_CHAR16)3183:
  case (OOC_CHAR16)3302 ... (OOC_CHAR16)3311:
  case (OOC_CHAR16)3430 ... (OOC_CHAR16)3439:
  case (OOC_CHAR16)3664 ... (OOC_CHAR16)3673:
  case (OOC_CHAR16)3792 ... (OOC_CHAR16)3801:
  case (OOC_CHAR16)3872 ... (OOC_CHAR16)3881:
    return OOC_TRUE;
    goto l11;
  default:
    return OOC_FALSE;
    goto l11;
  }
l6:
  i1 = (OOC_CHAR8)'0'<=i0;
  if (i1) goto l9;
  i0=OOC_FALSE;
  goto l10;
l9:
  i0 = i0<=(OOC_CHAR8)'9';
  
l10:
  return i0;
l11:
  _failed_function(9280); return 0;
  ;
}

static OOC_CHAR8 XML_Parser__IsBaseChar(OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = i0<(OOC_CHAR16)256;
  if (i1) goto l41;
  i1 = i0<(OOC_CHAR16)1024;
  if (i1) goto l36;
  i1 = i0<(OOC_CHAR16)2048;
  if (i1) goto l31;
  i1 = i0<(OOC_CHAR16)3072;
  if (i1) goto l26;
  i1 = i0<(OOC_CHAR16)4096;
  if (i1) goto l21;
  i1 = i0<(OOC_CHAR16)5120;
  if (i1) goto l16;
  switch (i0) {
  case (OOC_CHAR16)7680 ... (OOC_CHAR16)7835:
  case (OOC_CHAR16)7840 ... (OOC_CHAR16)7929:
  case (OOC_CHAR16)7936 ... (OOC_CHAR16)7957:
  case (OOC_CHAR16)7960 ... (OOC_CHAR16)7965:
  case (OOC_CHAR16)7968 ... (OOC_CHAR16)8005:
  case (OOC_CHAR16)8008 ... (OOC_CHAR16)8013:
  case (OOC_CHAR16)8016 ... (OOC_CHAR16)8023:
  case (OOC_CHAR16)8025:
  case (OOC_CHAR16)8027:
  case (OOC_CHAR16)8029:
  case (OOC_CHAR16)8031 ... (OOC_CHAR16)8061:
  case (OOC_CHAR16)8064 ... (OOC_CHAR16)8116:
  case (OOC_CHAR16)8118 ... (OOC_CHAR16)8124:
  case (OOC_CHAR16)8126:
  case (OOC_CHAR16)8130 ... (OOC_CHAR16)8132:
  case (OOC_CHAR16)8134 ... (OOC_CHAR16)8140:
  case (OOC_CHAR16)8144 ... (OOC_CHAR16)8147:
  case (OOC_CHAR16)8150 ... (OOC_CHAR16)8155:
  case (OOC_CHAR16)8160 ... (OOC_CHAR16)8172:
  case (OOC_CHAR16)8178 ... (OOC_CHAR16)8180:
  case (OOC_CHAR16)8182 ... (OOC_CHAR16)8188:
  case (OOC_CHAR16)8486:
  case (OOC_CHAR16)8490 ... (OOC_CHAR16)8491:
  case (OOC_CHAR16)8494:
  case (OOC_CHAR16)8576 ... (OOC_CHAR16)8578:
  case (OOC_CHAR16)12353 ... (OOC_CHAR16)12436:
  case (OOC_CHAR16)12449 ... (OOC_CHAR16)12538:
  case (OOC_CHAR16)12549 ... (OOC_CHAR16)12588:
  case (OOC_CHAR16)44032 ... (OOC_CHAR16)55203:
    return OOC_TRUE;
    goto l45;
  default:
    return OOC_FALSE;
    goto l45;
  }
l16:
  switch (i0) {
  case (OOC_CHAR16)4256 ... (OOC_CHAR16)4293:
  case (OOC_CHAR16)4304 ... (OOC_CHAR16)4342:
  case (OOC_CHAR16)4352:
  case (OOC_CHAR16)4354 ... (OOC_CHAR16)4355:
  case (OOC_CHAR16)4357 ... (OOC_CHAR16)4359:
  case (OOC_CHAR16)4361:
  case (OOC_CHAR16)4363 ... (OOC_CHAR16)4364:
  case (OOC_CHAR16)4366 ... (OOC_CHAR16)4370:
  case (OOC_CHAR16)4412:
  case (OOC_CHAR16)4414:
  case (OOC_CHAR16)4416:
  case (OOC_CHAR16)4428:
  case (OOC_CHAR16)4430:
  case (OOC_CHAR16)4432:
  case (OOC_CHAR16)4436 ... (OOC_CHAR16)4437:
  case (OOC_CHAR16)4441:
  case (OOC_CHAR16)4447 ... (OOC_CHAR16)4449:
  case (OOC_CHAR16)4451:
  case (OOC_CHAR16)4453:
  case (OOC_CHAR16)4455:
  case (OOC_CHAR16)4457:
  case (OOC_CHAR16)4461 ... (OOC_CHAR16)4462:
  case (OOC_CHAR16)4466 ... (OOC_CHAR16)4467:
  case (OOC_CHAR16)4469:
  case (OOC_CHAR16)4510:
  case (OOC_CHAR16)4520:
  case (OOC_CHAR16)4523:
  case (OOC_CHAR16)4526 ... (OOC_CHAR16)4527:
  case (OOC_CHAR16)4535 ... (OOC_CHAR16)4536:
  case (OOC_CHAR16)4538:
  case (OOC_CHAR16)4540 ... (OOC_CHAR16)4546:
  case (OOC_CHAR16)4587:
  case (OOC_CHAR16)4592:
  case (OOC_CHAR16)4601:
    return OOC_TRUE;
    goto l45;
  default:
    return OOC_FALSE;
    goto l45;
  }
l21:
  switch (i0) {
  case (OOC_CHAR16)3077 ... (OOC_CHAR16)3084:
  case (OOC_CHAR16)3086 ... (OOC_CHAR16)3088:
  case (OOC_CHAR16)3090 ... (OOC_CHAR16)3112:
  case (OOC_CHAR16)3114 ... (OOC_CHAR16)3123:
  case (OOC_CHAR16)3125 ... (OOC_CHAR16)3129:
  case (OOC_CHAR16)3168 ... (OOC_CHAR16)3169:
  case (OOC_CHAR16)3205 ... (OOC_CHAR16)3212:
  case (OOC_CHAR16)3214 ... (OOC_CHAR16)3216:
  case (OOC_CHAR16)3218 ... (OOC_CHAR16)3240:
  case (OOC_CHAR16)3242 ... (OOC_CHAR16)3251:
  case (OOC_CHAR16)3253 ... (OOC_CHAR16)3257:
  case (OOC_CHAR16)3294:
  case (OOC_CHAR16)3296 ... (OOC_CHAR16)3297:
  case (OOC_CHAR16)3333 ... (OOC_CHAR16)3340:
  case (OOC_CHAR16)3342 ... (OOC_CHAR16)3344:
  case (OOC_CHAR16)3346 ... (OOC_CHAR16)3368:
  case (OOC_CHAR16)3370 ... (OOC_CHAR16)3385:
  case (OOC_CHAR16)3424 ... (OOC_CHAR16)3425:
  case (OOC_CHAR16)3585 ... (OOC_CHAR16)3630:
  case (OOC_CHAR16)3632:
  case (OOC_CHAR16)3634 ... (OOC_CHAR16)3635:
  case (OOC_CHAR16)3648 ... (OOC_CHAR16)3653:
  case (OOC_CHAR16)3713 ... (OOC_CHAR16)3714:
  case (OOC_CHAR16)3716:
  case (OOC_CHAR16)3719 ... (OOC_CHAR16)3720:
  case (OOC_CHAR16)3722:
  case (OOC_CHAR16)3725:
  case (OOC_CHAR16)3732 ... (OOC_CHAR16)3735:
  case (OOC_CHAR16)3737 ... (OOC_CHAR16)3743:
  case (OOC_CHAR16)3745 ... (OOC_CHAR16)3747:
  case (OOC_CHAR16)3749:
  case (OOC_CHAR16)3751:
  case (OOC_CHAR16)3754 ... (OOC_CHAR16)3755:
  case (OOC_CHAR16)3757 ... (OOC_CHAR16)3758:
  case (OOC_CHAR16)3760:
  case (OOC_CHAR16)3762 ... (OOC_CHAR16)3763:
  case (OOC_CHAR16)3773:
  case (OOC_CHAR16)3776 ... (OOC_CHAR16)3780:
  case (OOC_CHAR16)3904 ... (OOC_CHAR16)3911:
  case (OOC_CHAR16)3913 ... (OOC_CHAR16)3945:
    return OOC_TRUE;
    goto l45;
  default:
    return OOC_FALSE;
    goto l45;
  }
l26:
  switch (i0) {
  case (OOC_CHAR16)2309 ... (OOC_CHAR16)2361:
  case (OOC_CHAR16)2365:
  case (OOC_CHAR16)2392 ... (OOC_CHAR16)2401:
  case (OOC_CHAR16)2437 ... (OOC_CHAR16)2444:
  case (OOC_CHAR16)2447 ... (OOC_CHAR16)2448:
  case (OOC_CHAR16)2451 ... (OOC_CHAR16)2472:
  case (OOC_CHAR16)2474 ... (OOC_CHAR16)2480:
  case (OOC_CHAR16)2482:
  case (OOC_CHAR16)2486 ... (OOC_CHAR16)2489:
  case (OOC_CHAR16)2524 ... (OOC_CHAR16)2525:
  case (OOC_CHAR16)2527 ... (OOC_CHAR16)2529:
  case (OOC_CHAR16)2544 ... (OOC_CHAR16)2545:
  case (OOC_CHAR16)2565 ... (OOC_CHAR16)2570:
  case (OOC_CHAR16)2575 ... (OOC_CHAR16)2576:
  case (OOC_CHAR16)2579 ... (OOC_CHAR16)2600:
  case (OOC_CHAR16)2602 ... (OOC_CHAR16)2608:
  case (OOC_CHAR16)2610 ... (OOC_CHAR16)2611:
  case (OOC_CHAR16)2613 ... (OOC_CHAR16)2614:
  case (OOC_CHAR16)2616 ... (OOC_CHAR16)2617:
  case (OOC_CHAR16)2649 ... (OOC_CHAR16)2652:
  case (OOC_CHAR16)2654:
  case (OOC_CHAR16)2674 ... (OOC_CHAR16)2676:
  case (OOC_CHAR16)2693 ... (OOC_CHAR16)2699:
  case (OOC_CHAR16)2701:
  case (OOC_CHAR16)2703 ... (OOC_CHAR16)2705:
  case (OOC_CHAR16)2707 ... (OOC_CHAR16)2728:
  case (OOC_CHAR16)2730 ... (OOC_CHAR16)2736:
  case (OOC_CHAR16)2738 ... (OOC_CHAR16)2739:
  case (OOC_CHAR16)2741 ... (OOC_CHAR16)2745:
  case (OOC_CHAR16)2749:
  case (OOC_CHAR16)2784:
  case (OOC_CHAR16)2821 ... (OOC_CHAR16)2828:
  case (OOC_CHAR16)2831 ... (OOC_CHAR16)2832:
  case (OOC_CHAR16)2835 ... (OOC_CHAR16)2856:
  case (OOC_CHAR16)2858 ... (OOC_CHAR16)2864:
  case (OOC_CHAR16)2866 ... (OOC_CHAR16)2867:
  case (OOC_CHAR16)2870 ... (OOC_CHAR16)2873:
  case (OOC_CHAR16)2877:
  case (OOC_CHAR16)2908 ... (OOC_CHAR16)2909:
  case (OOC_CHAR16)2911 ... (OOC_CHAR16)2913:
  case (OOC_CHAR16)2949 ... (OOC_CHAR16)2954:
  case (OOC_CHAR16)2958 ... (OOC_CHAR16)2960:
  case (OOC_CHAR16)2962 ... (OOC_CHAR16)2965:
  case (OOC_CHAR16)2969 ... (OOC_CHAR16)2970:
  case (OOC_CHAR16)2972:
  case (OOC_CHAR16)2974 ... (OOC_CHAR16)2975:
  case (OOC_CHAR16)2979 ... (OOC_CHAR16)2980:
  case (OOC_CHAR16)2984 ... (OOC_CHAR16)2986:
  case (OOC_CHAR16)2990 ... (OOC_CHAR16)2997:
  case (OOC_CHAR16)2999 ... (OOC_CHAR16)3001:
    return OOC_TRUE;
    goto l45;
  default:
    return OOC_FALSE;
    goto l45;
  }
l31:
  switch (i0) {
  case (OOC_CHAR16)1025 ... (OOC_CHAR16)1036:
  case (OOC_CHAR16)1038 ... (OOC_CHAR16)1103:
  case (OOC_CHAR16)1105 ... (OOC_CHAR16)1116:
  case (OOC_CHAR16)1118 ... (OOC_CHAR16)1153:
  case (OOC_CHAR16)1168 ... (OOC_CHAR16)1220:
  case (OOC_CHAR16)1223 ... (OOC_CHAR16)1224:
  case (OOC_CHAR16)1227 ... (OOC_CHAR16)1228:
  case (OOC_CHAR16)1232 ... (OOC_CHAR16)1259:
  case (OOC_CHAR16)1262 ... (OOC_CHAR16)1269:
  case (OOC_CHAR16)1272 ... (OOC_CHAR16)1273:
  case (OOC_CHAR16)1329 ... (OOC_CHAR16)1366:
  case (OOC_CHAR16)1369:
  case (OOC_CHAR16)1377 ... (OOC_CHAR16)1414:
  case (OOC_CHAR16)1488 ... (OOC_CHAR16)1514:
  case (OOC_CHAR16)1520 ... (OOC_CHAR16)1522:
  case (OOC_CHAR16)1569 ... (OOC_CHAR16)1594:
  case (OOC_CHAR16)1601 ... (OOC_CHAR16)1610:
  case (OOC_CHAR16)1649 ... (OOC_CHAR16)1719:
  case (OOC_CHAR16)1722 ... (OOC_CHAR16)1726:
  case (OOC_CHAR16)1728 ... (OOC_CHAR16)1742:
  case (OOC_CHAR16)1744 ... (OOC_CHAR16)1747:
  case (OOC_CHAR16)1749:
  case (OOC_CHAR16)1765 ... (OOC_CHAR16)1766:
    return OOC_TRUE;
    goto l45;
  default:
    return OOC_FALSE;
    goto l45;
  }
l36:
  switch (i0) {
  case (OOC_CHAR16)256 ... (OOC_CHAR16)305:
  case (OOC_CHAR16)308 ... (OOC_CHAR16)318:
  case (OOC_CHAR16)321 ... (OOC_CHAR16)328:
  case (OOC_CHAR16)330 ... (OOC_CHAR16)382:
  case (OOC_CHAR16)384 ... (OOC_CHAR16)451:
  case (OOC_CHAR16)461 ... (OOC_CHAR16)496:
  case (OOC_CHAR16)500 ... (OOC_CHAR16)501:
  case (OOC_CHAR16)506 ... (OOC_CHAR16)535:
  case (OOC_CHAR16)592 ... (OOC_CHAR16)680:
  case (OOC_CHAR16)699 ... (OOC_CHAR16)705:
  case (OOC_CHAR16)902:
  case (OOC_CHAR16)904 ... (OOC_CHAR16)906:
  case (OOC_CHAR16)908:
  case (OOC_CHAR16)910 ... (OOC_CHAR16)929:
  case (OOC_CHAR16)931 ... (OOC_CHAR16)974:
  case (OOC_CHAR16)976 ... (OOC_CHAR16)982:
  case (OOC_CHAR16)986:
  case (OOC_CHAR16)988:
  case (OOC_CHAR16)990:
  case (OOC_CHAR16)992:
  case (OOC_CHAR16)994 ... (OOC_CHAR16)1011:
    return OOC_TRUE;
    goto l45;
  default:
    return OOC_FALSE;
    goto l45;
  }
l41:
  switch (i0) {
  case (OOC_CHAR8)'A' ... (OOC_CHAR8)'Z':
  case (OOC_CHAR8)'a' ... (OOC_CHAR8)'z':
  case (OOC_CHAR8)'\300' ... (OOC_CHAR8)'\326':
  case (OOC_CHAR8)'\330' ... (OOC_CHAR8)'\366':
  case (OOC_CHAR8)'\370' ... (OOC_CHAR8)'\377':
    return OOC_TRUE;
    goto l45;
  default:
    return OOC_FALSE;
    goto l45;
  }
l45:
  _failed_function(9766); return 0;
  ;
}

static OOC_CHAR8 XML_Parser__IsIdeographic(OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = (OOC_CHAR16)19968<=i0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = i0<=(OOC_CHAR16)40869;
  
l5:
  if (i1) goto l7;
  i1 = i0==(OOC_CHAR16)12295;
  
  goto l9;
l7:
  i1=OOC_TRUE;
l9:
  if (i1) goto l15;
  i1 = (OOC_CHAR16)12321<=i0;
  if (i1) goto l13;
  i0=OOC_FALSE;
  goto l16;
l13:
  i0 = i0<=(OOC_CHAR16)12329;
  
  goto l16;
l15:
  i0=OOC_TRUE;
l16:
  return i0;
  ;
}

static OOC_CHAR8 XML_Parser__IsCombiningChar(OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = i0<(OOC_CHAR16)768;
  if (i1) goto l31;
  i1 = i0<(OOC_CHAR16)2560;
  if (i1) goto l26;
  i1 = i0<(OOC_CHAR16)3328;
  if (i1) goto l21;
  i1 = i0<(OOC_CHAR16)4096;
  if (i1) goto l16;
  i1 = i0<(OOC_CHAR16)8192;
  if (i1) goto l14;
  switch (i0) {
  case (OOC_CHAR16)8400 ... (OOC_CHAR16)8412:
  case (OOC_CHAR16)8417:
  case (OOC_CHAR16)12330 ... (OOC_CHAR16)12335:
  case (OOC_CHAR16)12441:
  case (OOC_CHAR16)12442:
    return OOC_TRUE;
    goto l32;
  default:
    return OOC_FALSE;
    goto l32;
  }
l14:
  return OOC_FALSE;
  goto l32;
l16:
  switch (i0) {
  case (OOC_CHAR16)3330 ... (OOC_CHAR16)3331:
  case (OOC_CHAR16)3390 ... (OOC_CHAR16)3395:
  case (OOC_CHAR16)3398 ... (OOC_CHAR16)3400:
  case (OOC_CHAR16)3402 ... (OOC_CHAR16)3405:
  case (OOC_CHAR16)3415:
  case (OOC_CHAR16)3633:
  case (OOC_CHAR16)3636 ... (OOC_CHAR16)3642:
  case (OOC_CHAR16)3655 ... (OOC_CHAR16)3662:
  case (OOC_CHAR16)3761:
  case (OOC_CHAR16)3764 ... (OOC_CHAR16)3769:
  case (OOC_CHAR16)3771 ... (OOC_CHAR16)3772:
  case (OOC_CHAR16)3784 ... (OOC_CHAR16)3789:
  case (OOC_CHAR16)3864 ... (OOC_CHAR16)3865:
  case (OOC_CHAR16)3893:
  case (OOC_CHAR16)3895:
  case (OOC_CHAR16)3897:
  case (OOC_CHAR16)3902:
  case (OOC_CHAR16)3903:
  case (OOC_CHAR16)3953 ... (OOC_CHAR16)3972:
  case (OOC_CHAR16)3974 ... (OOC_CHAR16)3979:
  case (OOC_CHAR16)3984 ... (OOC_CHAR16)3989:
  case (OOC_CHAR16)3991:
  case (OOC_CHAR16)3993 ... (OOC_CHAR16)4013:
  case (OOC_CHAR16)4017 ... (OOC_CHAR16)4023:
  case (OOC_CHAR16)4025:
    return OOC_TRUE;
    goto l32;
  default:
    return OOC_FALSE;
    goto l32;
  }
l21:
  switch (i0) {
  case (OOC_CHAR16)2562:
  case (OOC_CHAR16)2620:
  case (OOC_CHAR16)2622:
  case (OOC_CHAR16)2623:
  case (OOC_CHAR16)2624 ... (OOC_CHAR16)2626:
  case (OOC_CHAR16)2631 ... (OOC_CHAR16)2632:
  case (OOC_CHAR16)2635 ... (OOC_CHAR16)2637:
  case (OOC_CHAR16)2672 ... (OOC_CHAR16)2673:
  case (OOC_CHAR16)2689 ... (OOC_CHAR16)2691:
  case (OOC_CHAR16)2748:
  case (OOC_CHAR16)2750 ... (OOC_CHAR16)2757:
  case (OOC_CHAR16)2759 ... (OOC_CHAR16)2761:
  case (OOC_CHAR16)2763 ... (OOC_CHAR16)2765:
  case (OOC_CHAR16)2817 ... (OOC_CHAR16)2819:
  case (OOC_CHAR16)2876:
  case (OOC_CHAR16)2878 ... (OOC_CHAR16)2883:
  case (OOC_CHAR16)2887 ... (OOC_CHAR16)2888:
  case (OOC_CHAR16)2891 ... (OOC_CHAR16)2893:
  case (OOC_CHAR16)2902 ... (OOC_CHAR16)2903:
  case (OOC_CHAR16)2946 ... (OOC_CHAR16)2947:
  case (OOC_CHAR16)3006 ... (OOC_CHAR16)3010:
  case (OOC_CHAR16)3014 ... (OOC_CHAR16)3016:
  case (OOC_CHAR16)3018 ... (OOC_CHAR16)3021:
  case (OOC_CHAR16)3031:
  case (OOC_CHAR16)3073 ... (OOC_CHAR16)3075:
  case (OOC_CHAR16)3134 ... (OOC_CHAR16)3140:
  case (OOC_CHAR16)3142 ... (OOC_CHAR16)3144:
  case (OOC_CHAR16)3146 ... (OOC_CHAR16)3149:
  case (OOC_CHAR16)3157 ... (OOC_CHAR16)3158:
  case (OOC_CHAR16)3202 ... (OOC_CHAR16)3203:
  case (OOC_CHAR16)3262 ... (OOC_CHAR16)3268:
  case (OOC_CHAR16)3270 ... (OOC_CHAR16)3272:
  case (OOC_CHAR16)3274 ... (OOC_CHAR16)3277:
  case (OOC_CHAR16)3285 ... (OOC_CHAR16)3286:
    return OOC_TRUE;
    goto l32;
  default:
    return OOC_FALSE;
    goto l32;
  }
l26:
  switch (i0) {
  case (OOC_CHAR16)768 ... (OOC_CHAR16)837:
  case (OOC_CHAR16)864 ... (OOC_CHAR16)865:
  case (OOC_CHAR16)1155 ... (OOC_CHAR16)1158:
  case (OOC_CHAR16)1425 ... (OOC_CHAR16)1441:
  case (OOC_CHAR16)1443 ... (OOC_CHAR16)1465:
  case (OOC_CHAR16)1467 ... (OOC_CHAR16)1469:
  case (OOC_CHAR16)1471:
  case (OOC_CHAR16)1473 ... (OOC_CHAR16)1474:
  case (OOC_CHAR16)1476:
  case (OOC_CHAR16)1611 ... (OOC_CHAR16)1618:
  case (OOC_CHAR16)1648:
  case (OOC_CHAR16)1750 ... (OOC_CHAR16)1756:
  case (OOC_CHAR16)1757 ... (OOC_CHAR16)1759:
  case (OOC_CHAR16)1760 ... (OOC_CHAR16)1764:
  case (OOC_CHAR16)1767 ... (OOC_CHAR16)1768:
  case (OOC_CHAR16)1770 ... (OOC_CHAR16)1773:
  case (OOC_CHAR16)2305 ... (OOC_CHAR16)2307:
  case (OOC_CHAR16)2364:
  case (OOC_CHAR16)2366 ... (OOC_CHAR16)2380:
  case (OOC_CHAR16)2381:
  case (OOC_CHAR16)2385 ... (OOC_CHAR16)2388:
  case (OOC_CHAR16)2402 ... (OOC_CHAR16)2403:
  case (OOC_CHAR16)2433 ... (OOC_CHAR16)2435:
  case (OOC_CHAR16)2492:
  case (OOC_CHAR16)2494:
  case (OOC_CHAR16)2495:
  case (OOC_CHAR16)2496 ... (OOC_CHAR16)2500:
  case (OOC_CHAR16)2503 ... (OOC_CHAR16)2504:
  case (OOC_CHAR16)2507 ... (OOC_CHAR16)2509:
  case (OOC_CHAR16)2519:
  case (OOC_CHAR16)2530 ... (OOC_CHAR16)2531:
    return OOC_TRUE;
    goto l32;
  default:
    return OOC_FALSE;
    goto l32;
  }
l31:
  return OOC_FALSE;
l32:
  _failed_function(13942); return 0;
  ;
}

static OOC_CHAR8 XML_Parser__IsExtender(OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = i0==(OOC_CHAR8)'\267';
  if (i1) goto l10;
  i1 = i0>=(OOC_CHAR16)720;
  if (i1) goto l5;
  return OOC_FALSE;
  goto l11;
l5:
  switch (i0) {
  case (OOC_CHAR16)720:
  case (OOC_CHAR16)721:
  case (OOC_CHAR16)903:
  case (OOC_CHAR16)1600:
  case (OOC_CHAR16)3654:
  case (OOC_CHAR16)3782:
  case (OOC_CHAR16)12293:
  case (OOC_CHAR16)12337 ... (OOC_CHAR16)12341:
  case (OOC_CHAR16)12445 ... (OOC_CHAR16)12446:
  case (OOC_CHAR16)12540 ... (OOC_CHAR16)12542:
    return OOC_TRUE;
    goto l11;
  default:
    return OOC_FALSE;
    goto l11;
  }
l10:
  return OOC_TRUE;
l11:
  _failed_function(15980); return 0;
  ;
}

static OOC_CHAR8 XML_Parser__IsLetter(OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = XML_Parser__IsBaseChar(i0);
  if (i1) goto l3;
  i0 = XML_Parser__IsIdeographic(i0);
  
  goto l4;
l3:
  i0=OOC_TRUE;
l4:
  return i0;
  ;
}

OOC_CHAR8 XML_Parser__IsNameChar(OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = XML_Parser__IsLetter(i0);
  if (i1) goto l3;
  i1 = XML_Parser__IsDigit(i0);
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (i1) goto l7;
  i1 = i0==(OOC_CHAR8)'.';
  
  goto l9;
l7:
  i1=OOC_TRUE;
l9:
  if (i1) goto l11;
  i1 = i0==(OOC_CHAR8)'-';
  
  goto l13;
l11:
  i1=OOC_TRUE;
l13:
  if (i1) goto l15;
  i1 = i0==(OOC_CHAR8)'_';
  
  goto l17;
l15:
  i1=OOC_TRUE;
l17:
  if (i1) goto l19;
  i1 = i0==(OOC_CHAR8)':';
  
  goto l21;
l19:
  i1=OOC_TRUE;
l21:
  if (i1) goto l23;
  i1 = XML_Parser__IsCombiningChar(i0);
  
  goto l25;
l23:
  i1=OOC_TRUE;
l25:
  if (i1) goto l27;
  i0 = XML_Parser__IsExtender(i0);
  
  goto l28;
l27:
  i0=OOC_TRUE;
l28:
  return i0;
  ;
}

OOC_CHAR8 XML_Parser__IsNameChar0(OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = XML_Parser__IsLetter(i0);
  if (i1) goto l3;
  i1 = i0==(OOC_CHAR8)'_';
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (i1) goto l7;
  i0 = i0==(OOC_CHAR8)':';
  
  goto l8;
l7:
  i0=OOC_TRUE;
l8:
  return i0;
  ;
}

static OOC_CHAR8 XML_Parser__IsPubidChar(OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1,i2;

  i0 = ch;
  i1 = _cap(i0);
  i2 = (OOC_CHAR8)'A'<=i1;
  if (i2) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = i1<=(OOC_CHAR8)'Z';
  
l5:
  if (i1) goto l11;
  i1 = (OOC_CHAR8)'0'<=i0;
  if (i1) goto l9;
  i1=OOC_FALSE;
  goto l13;
l9:
  i1 = i0<=(OOC_CHAR8)'9';
  
  goto l13;
l11:
  i1=OOC_TRUE;
l13:
  if (i1) goto l15;
  i1 = i0==(OOC_CHAR8)' ';
  
  goto l17;
l15:
  i1=OOC_TRUE;
l17:
  if (i1) goto l19;
  i1 = i0==(OOC_CHAR8)'\015';
  
  goto l21;
l19:
  i1=OOC_TRUE;
l21:
  if (i1) goto l23;
  i1 = i0==(OOC_CHAR8)'\012';
  
  goto l25;
l23:
  i1=OOC_TRUE;
l25:
  if (i1) goto l44;
  i1 = *(OOC_UINT16*)((OOC_INT32)XML_Parser__suplPubidChar+(_check_index(0, 32, OOC_UINT32, 17131))*2);
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l29;
  i1=OOC_FALSE;
  goto l31;
l29:
  i1 = *(OOC_UINT16*)((OOC_INT32)XML_Parser__suplPubidChar+(_check_index(0, 32, OOC_UINT32, 17157))*2);
  i1 = i1!=i0;
  
l31:
  if (i1) goto l33;
  i0=0;
  goto l43;
l33:
  i1=0;
l34_loop:
  i1 = i1+1;
  i2 = *(OOC_UINT16*)((OOC_INT32)XML_Parser__suplPubidChar+(_check_index(i1, 32, OOC_UINT32, 17131))*2);
  i2 = i2!=(OOC_CHAR8)'\000';
  if (i2) goto l37;
  i2=OOC_FALSE;
  goto l39;
l37:
  i2 = *(OOC_UINT16*)((OOC_INT32)XML_Parser__suplPubidChar+(_check_index(i1, 32, OOC_UINT32, 17157))*2);
  i2 = i2!=i0;
  
l39:
  if (i2) goto l34_loop;
l42:
  i0=i1;
l43:
  i0 = *(OOC_UINT16*)((OOC_INT32)XML_Parser__suplPubidChar+(_check_index(i0, 32, OOC_UINT32, 17224))*2);
  return (i0!=(OOC_CHAR8)'\000');
  goto l45;
l44:
  return OOC_TRUE;
l45:
  _failed_function(16849); return 0;
  ;
}

static OOC_CHAR8 XML_Parser__IsVersionNumChar(OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1,i2;

  i0 = ch;
  i1 = _cap(i0);
  i2 = (OOC_CHAR8)'A'<=i1;
  if (i2) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = i1<=(OOC_CHAR8)'Z';
  
l5:
  if (i1) goto l11;
  i1 = (OOC_CHAR8)'0'<=i0;
  if (i1) goto l9;
  i1=OOC_FALSE;
  goto l13;
l9:
  i1 = i0<=(OOC_CHAR8)'9';
  
  goto l13;
l11:
  i1=OOC_TRUE;
l13:
  if (i1) goto l15;
  i1 = i0==(OOC_CHAR8)'_';
  
  goto l17;
l15:
  i1=OOC_TRUE;
l17:
  if (i1) goto l19;
  i1 = i0==(OOC_CHAR8)'.';
  
  goto l21;
l19:
  i1=OOC_TRUE;
l21:
  if (i1) goto l23;
  i1 = i0==(OOC_CHAR8)':';
  
  goto l25;
l23:
  i1=OOC_TRUE;
l25:
  if (i1) goto l27;
  i0 = i0==(OOC_CHAR8)'-';
  
  goto l28;
l27:
  i0=OOC_TRUE;
l28:
  return i0;
  ;
}

static OOC_CHAR8 XML_Parser__IsEncNameChar(OOC_CHAR16 ch, OOC_CHAR8 first) {
  register OOC_INT32 i0,i1,i2;

  i0 = ch;
  i1 = _cap(i0);
  i2 = (OOC_CHAR8)'A'<=i1;
  if (i2) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = i1<=(OOC_CHAR8)'Z';
  
l5:
  if (i1) goto l27;
  i1 = first;
  i1 = !i1;
  if (i1) goto l9;
  return OOC_FALSE;
  goto l28;
l9:
  i1 = (OOC_CHAR8)'0'<=i0;
  if (i1) goto l12;
  i1=OOC_FALSE;
  goto l14;
l12:
  i1 = i0<=(OOC_CHAR8)'9';
  
l14:
  if (i1) goto l16;
  i1 = i0==(OOC_CHAR8)'.';
  
  goto l18;
l16:
  i1=OOC_TRUE;
l18:
  if (i1) goto l20;
  i1 = i0==(OOC_CHAR8)'_';
  
  goto l22;
l20:
  i1=OOC_TRUE;
l22:
  if (i1) goto l24;
  i0 = i0==(OOC_CHAR8)'-';
  
  goto l25;
l24:
  i0=OOC_TRUE;
l25:
  return i0;
  goto l28;
l27:
  return OOC_TRUE;
l28:
  _failed_function(17516); return 0;
  ;
}

Msg__Msg XML_Parser__ErrorListenerDesc_Error(XML_Parser__ErrorListener el, XML_Error__Context context, OOC_INT32 code, OOC_CHAR8 fatalError, const struct XML_Locator__Position *pos__ref) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(pos,XML_Locator__Position ,1)
  XML_Parser__Parser p;
  Msg__Msg err;

  OOC_INITIALIZE_VPAR(pos__ref,pos,XML_Locator__Position ,20)
  i0 = (OOC_INT32)el;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18177));
  p = (XML_Parser__Parser)i0;
  i1 = (OOC_INT32)context;
  i2 = code;
  i1 = (OOC_INT32)XML_Error__New((XML_Error__Context)i1, i2);
  err = (Msg__Msg)i1;
  i2 = *(OOC_INT32*)(OOC_INT32)pos;
  i3 = XML_Error__errMsgCharPosBase;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18227)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "char", 5, (i2+i3));
  i2 = *(OOC_INT32*)((OOC_INT32)pos+4);
  i3 = XML_Error__errMsgLineBase;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18299)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "line", 5, (i2+i3));
  i2 = *(OOC_INT32*)((OOC_INT32)pos+8);
  i3 = XML_Error__errMsgColumnBase;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18363)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "column", 7, (i2+i3));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18482))+56);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18494))+36);
  i2 = (OOC_INT32)URI__NewURIAttribute("baseURI", 8, (URI__URI)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18433)))), Msg__MsgDesc_SetAttribute)),Msg__MsgDesc_SetAttribute)((Msg__Msg)i1, (Msg__Attribute)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)pos+16);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)pos+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18662))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)pos+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 18662))+4);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 18668)), (OOC_INT32)0);
  i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 18668)), i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18558)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i1, "entity_name", 12, (Msg__LStringPtr)i2);
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18686));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18686));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18695)))), Msg__MsgListDesc_Append)),Msg__MsgListDesc_Append)((Msg__MsgList)i3, (Msg__Msg)i1);
  i2 = fatalError;
  if (i2) goto l6;
  i2=OOC_FALSE;
  goto l8;
l6:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18746))+40);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18733))+44);
  i2 = i3==i2;
  
l8:
  if (!i2) goto l10;
  i2 = (OOC_INT32)XML_Builder__New();
  *(OOC_INT32*)((_check_pointer(i0, 18776))+44) = i2;
l10:
  return (Msg__Msg)i1;
  ;
}

void XML_Parser__ParserDesc_ParseDocument(XML_Parser__Parser p) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  XML_UnicodeBuffer__CharArray chars;
  XML_DTD__Builder dtd;
  OOC_INT32 cpos;
  OOC_INT32 cstart;
  OOC_INT32 cdelta;
  auto void XML_Parser__ParserDesc_ParseDocument_DecLength(struct XML_Locator__Position *pos, RT0__Struct pos__tag, OOC_INT32 len);
  auto void XML_Parser__ParserDesc_ParseDocument_StorePosition(struct XML_Locator__Position *pos, RT0__Struct pos__tag);
  auto void XML_Parser__ParserDesc_ParseDocument_ResetLocator();
  auto void XML_Parser__ParserDesc_ParseDocument_SetFileEntity(XML_DTD__ExternalEntity _new);
  auto void XML_Parser__ParserDesc_ParseDocument_ErrPosNF(OOC_INT32 code, struct XML_Locator__Position *pos, RT0__Struct pos__tag);
  auto void XML_Parser__ParserDesc_ParseDocument_ErrPos(OOC_INT32 code, struct XML_Locator__Position *pos, RT0__Struct pos__tag);
  auto void XML_Parser__ParserDesc_ParseDocument_WriteBuffer(const OOC_CHAR8 msg__ref[], OOC_LEN msg_0d);
  auto void XML_Parser__ParserDesc_ParseDocument_ErrNF(OOC_INT32 code);
  auto void XML_Parser__ParserDesc_ParseDocument_Err(OOC_INT32 code);
  auto XML_UnicodeBuffer__CharArray XML_Parser__ParserDesc_ParseDocument_Clone(XML_UnicodeBuffer__CharArray string);
  auto XML_UnicodeBuffer__CharArray XML_Parser__ParserDesc_ParseDocument_GetString(OOC_INT32 start, OOC_INT32 end);
  auto XML_UnicodeBuffer__Input XML_Parser__ParserDesc_ParseDocument_GetBuffer(XML_DTD__ExternalEntity entity);
  auto void XML_Parser__ParserDesc_ParseDocument_CheckInvalidChars();
  auto XML_UnicodeBuffer__CharArray XML_Parser__ParserDesc_ParseDocument_Internalize(XML_DTD__ExternalEntity entity);
  auto void XML_Parser__ParserDesc_ParseDocument_PushEntity(XML_DTD__Entity entity, OOC_CHAR8 syncEntity);
  auto void XML_Parser__ParserDesc_ParseDocument_PopEntity();
  auto void XML_Parser__ParserDesc_ParseDocument_NextBlock();
  auto void XML_Parser__ParserDesc_ParseDocument_DiscardPreviousInput();
  auto void XML_Parser__ParserDesc_ParseDocument_EndOfLine();
  auto void XML_Parser__ParserDesc_ParseDocument_Tab();
  auto OOC_CHAR8 XML_Parser__ParserDesc_ParseDocument_LookingAtS();
  auto OOC_CHAR8 XML_Parser__ParserDesc_ParseDocument_LookingAtSnoPE();
  auto OOC_CHAR8 XML_Parser__ParserDesc_ParseDocument_LookingAt(const OOC_CHAR8 str__ref[], OOC_LEN str_0d, OOC_INT8 followedBy);
  auto void XML_Parser__ParserDesc_ParseDocument_NextChar();
  auto XML_UnicodeBuffer__CharArray XML_Parser__ParserDesc_ParseDocument_Nmtoken(OOC_CHAR8 checkForQName, OOC_CHAR8 noColon);
  auto XML_UnicodeBuffer__CharArray XML_Parser__ParserDesc_ParseDocument_Name(OOC_CHAR8 noColon);
  auto void XML_Parser__ParserDesc_ParseDocument_CheckChar(OOC_CHAR8 ch);
  auto void XML_Parser__ParserDesc_ParseDocument_XMLDecl(XML_DTD__ExternalEntity entity);
  auto void XML_Parser__ParserDesc_ParseDocument_extSubsetDecl();
  auto void XML_Parser__ParserDesc_ParseDocument_SkippedEntity(XML_UnicodeBuffer__CharArray name);
  auto void XML_Parser__ParserDesc_ParseDocument_PEReference(OOC_CHAR8 declSep);
  auto void XML_Parser__ParserDesc_ParseDocument_OptS(OOC_CHAR8 noPE);
  auto void XML_Parser__ParserDesc_ParseDocument_S();
  auto void XML_Parser__ParserDesc_ParseDocument_SnoPE();
  auto void XML_Parser__ParserDesc_ParseDocument_ControlChar(OOC_CHAR16 eolReplacement);
  auto XML_UnicodeBuffer__CharArray XML_Parser__ParserDesc_ParseDocument_String(OOC_INT8 type);
  auto void XML_Parser__ParserDesc_ParseDocument_Eq();
  auto void XML_Parser__ParserDesc_ParseDocument_XMLDecl(XML_DTD__ExternalEntity entity);
  auto XML_DTD__Entity XML_Parser__ParserDesc_ParseDocument_CurrentEntity();
  auto void XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity(XML_DTD__Entity reference);
  auto void XML_Parser__ParserDesc_ParseDocument_PI();
  auto void XML_Parser__ParserDesc_ParseDocument_Comment();
  auto void XML_Parser__ParserDesc_ParseDocument_CDSect();
  auto void XML_Parser__ParserDesc_ParseDocument_CharRef();
  auto XML_DTD__EntityRef XML_Parser__ParserDesc_ParseDocument_EntityRef(OOC_CHAR8 enforceDecl, OOC_CHAR8 permitExternal);
  auto XML_DTD__AttValue XML_Parser__ParserDesc_ParseDocument_AttValue(OOC_CHAR8 isAttDecl);
  auto void XML_Parser__ParserDesc_ParseDocument_Expand(XML_DTD__AttValue attValue);
  auto void XML_Parser__ParserDesc_ParseDocument_element();
  auto void XML_Parser__ParserDesc_ParseDocument_content();
  auto void XML_Parser__ParserDesc_ParseDocument_element();
  auto void XML_Parser__ParserDesc_ParseDocument_MiscRep();
  auto void XML_Parser__ParserDesc_ParseDocument_ExternalID(OOC_CHAR8 optionJustPubid, XML_UnicodeBuffer__CharArray *_public, XML_UnicodeBuffer__CharArray *system, URI__URI *baseURI);
  auto void XML_Parser__ParserDesc_ParseDocument_markupdecl();
  auto void XML_Parser__ParserDesc_ParseDocument_extSubsetDecl();
  auto void XML_Parser__ParserDesc_ParseDocument_prolog();
    
    void XML_Parser__ParserDesc_ParseDocument_DecLength(struct XML_Locator__Position *pos, RT0__Struct pos__tag, OOC_INT32 len) {
      register OOC_INT32 i0,i1;

      i0 = *(OOC_INT32*)(OOC_INT32)pos;
      i1 = len;
      *(OOC_INT32*)(OOC_INT32)pos = (i0-i1);
      i0 = *(OOC_INT32*)((OOC_INT32)pos+8);
      *(OOC_INT32*)((OOC_INT32)pos+8) = (i0-i1);
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_StorePosition(struct XML_Locator__Position *pos, RT0__Struct pos__tag) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 i;

      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21225))+36);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21249))+36);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21253))+20);
      i2 = (OOC_INT32)chars;
      i1 = i2==i1;
      
l5:
      if (i1) goto l23;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21581))+36);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l18;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 21644))+88);
      i1 = i1-1;
      i = i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21678))+84);
      i2 = _check_pointer(i2, 21687);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21704))+36);
      i2 = (OOC_INT32)*(OOC_INT32*)(i2+((_check_index(i1, i3, OOC_UINT32, 21687))*28));
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21708))+20);
      i2 = i2!=i3;
      if (!i2) goto l19;
l12_loop:
      i1 = i1-1;
      i = i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21678))+84);
      i2 = _check_pointer(i2, 21687);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21704))+36);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21708))+20);
      i2 = (OOC_INT32)*(OOC_INT32*)(i2+((_check_index(i1, i3, OOC_UINT32, 21687))*28));
      i2 = i2!=i4;
      if (i2) goto l12_loop;
      goto l19;
l18:
      i = 0;
      i1=0;
l19:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21794))+84);
      i2 = _check_pointer(i2, 21803);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21817))+84);
      i4 = _check_pointer(i4, 21826);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i1, i5, OOC_UINT32, 21826))*28))+24);
      i2 = *(OOC_INT32*)((i2+((_check_index(i1, i3, OOC_UINT32, 21803))*28))+4);
      i3 = *(OOC_INT32*)((_check_pointer(i4, 21833))+24);
      *(OOC_INT32*)(OOC_INT32)pos = (i2+i3);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 21873))+92);
      *(OOC_INT32*)((OOC_INT32)pos+4) = i2;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21909))+84);
      i2 = _check_pointer(i2, 21918);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i4 = *(OOC_INT32*)((_check_pointer(i0, 21958))+96);
      i2 = *(OOC_INT32*)((i2+((_check_index(i1, i3, OOC_UINT32, 21918))*28))+4);
      i3 = *(OOC_INT32*)((_check_pointer(i0, 21973))+100);
      *(OOC_INT32*)((OOC_INT32)pos+8) = ((i2-i4)+i3);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22001))+84);
      i2 = _check_pointer(i2, 22010);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i1, i3, OOC_UINT32, 22010))*28))+20);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22021))+4);
      i2 = i2!=(OOC_INT32)0;
      if (!i2) goto l24;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22087))+84);
      i2 = _check_pointer(i2, 22096);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i1, i3, OOC_UINT32, 22096))*28))+20);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22107))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22087))+84);
      i0 = _check_pointer(i0, 22096);
      i3 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)((i0+((_check_index(i1, i3, OOC_UINT32, 22096))*28))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22107))+4);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 22113)), (OOC_INT32)0);
      i0 = LongStrings__Length((void*)(_check_pointer(i2, 22113)), i0);
      XML_Parser__ParserDesc_ParseDocument_DecLength((void*)(OOC_INT32)pos, (RT0__Struct)((OOC_INT32)pos__tag), (i0+2));
      goto l24;
l23:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21299))+36);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 21303))+24);
      i2 = cpos;
      *(OOC_INT32*)(OOC_INT32)pos = (i2+i1);
      i1 = *(OOC_INT32*)((_check_pointer(i0, 21343))+92);
      *(OOC_INT32*)((OOC_INT32)pos+4) = i1;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 21384))+96);
      i0 = *(OOC_INT32*)((_check_pointer(i0, 21399))+100);
      *(OOC_INT32*)((OOC_INT32)pos+8) = ((i2-i1)+i0);
l24:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_ResetLocator() {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)p;
      *(OOC_INT32*)((_check_pointer(i0, 22210))+92) = 0;
      *(OOC_INT32*)((_check_pointer(i0, 22234))+96) = 0;
      *(OOC_INT32*)((_check_pointer(i0, 22261))+100) = 0;
      cpos = 0;
      cdelta = 0;
      cstart = 0;
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_SetFileEntity(XML_DTD__ExternalEntity _new) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)_new;
      *(OOC_INT32*)((_check_pointer(i0, 22430))+56) = i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22458))+4);
      *(OOC_INT32*)((_check_pointer(i0, 22461))+12) = i1;
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_ErrPosNF(OOC_INT32 code, struct XML_Locator__Position *pos, RT0__Struct pos__tag) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 i;

      i0 = (OOC_INT32)p;
      i1 = code;
      i2 = (OOC_INT32)XML_Parser__parserContext;
      i1 = (OOC_INT32)XML_Error__New((XML_Error__Context)i2, i1);
      *(OOC_INT32*)((_check_pointer(i0, 22618))+104) = i1;
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22673))+104);
      i2 = *(OOC_INT32*)(OOC_INT32)pos;
      i3 = XML_Error__errMsgCharPosBase;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22673))+104);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22684)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "char", 5, (i2+i3));
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22756))+104);
      i2 = *(OOC_INT32*)((OOC_INT32)pos+4);
      i3 = XML_Error__errMsgLineBase;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22756))+104);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22767)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, (i2+i3));
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22831))+104);
      i2 = *(OOC_INT32*)((OOC_INT32)pos+8);
      i3 = XML_Error__errMsgColumnBase;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22831))+104);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22842)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, (i2+i3));
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22912))+104);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22972))+56);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22984))+36);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22912))+104);
      i2 = (OOC_INT32)URI__NewURIAttribute("baseURI", 8, (URI__URI)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22923)))), Msg__MsgDesc_SetAttribute)),Msg__MsgDesc_SetAttribute)((Msg__Msg)i0, (Msg__Attribute)i2);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23016))+36);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23020))+20);
      i2 = (OOC_INT32)chars;
      i1 = i2!=i1;
      if (!i1) goto l4;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 23048))+88);
      i1 = i1-1;
      i = i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23073))+104);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23170))+84);
      i3 = _check_pointer(i3, 23179);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)((i3+((_check_index(i1, i4, OOC_UINT32, 23179))*28))+20);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 23190))+4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23170))+84);
      i4 = _check_pointer(i4, 23179);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i1, i5, OOC_UINT32, 23179))*28))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23190))+4);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 23196)), (OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23073))+104);
      i1 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i3, 23196)), i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23084)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "entity_name", 12, (Msg__LStringPtr)i1);
l4:
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 23218));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23238))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 23218));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23227)))), Msg__MsgListDesc_Append)),Msg__MsgListDesc_Append)((Msg__MsgList)i0, (Msg__Msg)i2);
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_ErrPos(OOC_INT32 code, struct XML_Locator__Position *pos, RT0__Struct pos__tag) {
      register OOC_INT32 i0,i1,i2;

      i0 = code;
      XML_Parser__ParserDesc_ParseDocument_ErrPosNF(i0, (void*)(OOC_INT32)pos, (RT0__Struct)((OOC_INT32)pos__tag));
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23387))+44);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23400))+40);
      i1 = i1==i2;
      if (!i1) goto l4;
      i1 = (OOC_INT32)XML_Builder__New();
      *(OOC_INT32*)((_check_pointer(i0, 23432))+44) = i1;
l4:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_WriteBuffer(const OOC_CHAR8 msg__ref[], OOC_LEN msg_0d) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_ALLOCATE_VPAR(msg,OOC_CHAR8 ,msg_0d)
      OOC_INT32 end;
      OOC_INT32 i;

      i0 = cpos;
      i1 = i0+80;
      OOC_INITIALIZE_VPAR(msg__ref,msg,OOC_CHAR8 ,msg_0d)
      end = i1;
      i = i0;
      Out__Ln();
      Out__String("### buffer contents ", 21);
      Out__String((void*)(OOC_INT32)msg, msg_0d);
      Out__String(" ###", 5);
      Out__Ln();
      i2 = (OOC_INT32)chars;
      i2 = _check_pointer(i2, 23761);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i2 = *(OOC_UINT16*)(i2+(_check_index(i0, i3, OOC_UINT32, 23761))*2);
      i2 = i2<(OOC_CHAR16)65534;
      if (i2) goto l3;
      i2=OOC_FALSE;
      goto l5;
l3:
      i2 = i0<=i1;
      
l5:
      if (!i2) goto l20;
l7_loop:
      i2 = (OOC_INT32)chars;
      i3 = _check_pointer(i2, 23818);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = *(OOC_UINT16*)(i3+(_check_index(i0, i4, OOC_UINT32, 23818))*2);
      i3 = i3>(OOC_CHAR8)'\377';
      if (i3) goto l10;
      i2 = _check_pointer(i2, 23903);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i2 = *(OOC_UINT16*)(i2+(_check_index(i0, i3, OOC_UINT32, 23903))*2);
      Out__Char(i2);
      goto l11;
l10:
      Out__Char((OOC_CHAR8)'?');
l11:
      i0 = i0+1;
      i = i0;
      i2 = (OOC_INT32)chars;
      i2 = _check_pointer(i2, 23761);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i2 = *(OOC_UINT16*)(i2+(_check_index(i0, i3, OOC_UINT32, 23761))*2);
      i2 = i2<(OOC_CHAR16)65534;
      if (i2) goto l14;
      i2=OOC_FALSE;
      goto l16;
l14:
      i2 = i0<=i1;
      
l16:
      if (i2) goto l7_loop;
l20:
      Out__Ln();
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_ErrNF(OOC_INT32 code) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)p;
      i1 = _check_pointer(i0, 24121);
      i1 = (OOC_INT32)&_td_XML_Locator__Position;
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)((_check_pointer(i0, 24121))+12), (RT0__Struct)i1);
      i0 = (OOC_INT32)p;
      i2 = _check_pointer(i0, 24157);
      i2 = code;
      XML_Parser__ParserDesc_ParseDocument_ErrPosNF(i2, (void*)((_check_pointer(i0, 24157))+12), (RT0__Struct)i1);
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_Err(OOC_INT32 code) {
      register OOC_INT32 i0,i1,i2;

      i0 = code;
      XML_Parser__ParserDesc_ParseDocument_ErrNF(i0);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24264))+44);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24277))+40);
      i1 = i1==i2;
      if (!i1) goto l4;
      i1 = (OOC_INT32)XML_Builder__New();
      *(OOC_INT32*)((_check_pointer(i0, 24309))+44) = i1;
l4:
      return;
      ;
    }

    
    XML_UnicodeBuffer__CharArray XML_Parser__ParserDesc_ParseDocument_Clone(XML_UnicodeBuffer__CharArray string) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      XML_UnicodeBuffer__CharArray clone;
      OOC_INT32 i;

      i0 = (OOC_INT32)string;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 24586)), (OOC_INT32)0);
      i1 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], i1);
      clone = (XML_UnicodeBuffer__CharArray)i1;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 24622)), (OOC_INT32)0);
      i2 = i2-1;
      i3 = 0<=i2;
      i = 0;
      if (!i3) goto l8;
      i3=0;
l3_loop:
      i4 = _check_pointer(i1, 24643);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i6 = _check_pointer(i0, 24656);
      i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
      i6 = *(OOC_UINT16*)(i6+(_check_index(i3, i7, OOC_UINT32, 24656))*2);
      *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 24643))*2) = i6;
      i3 = i3+1;
      i4 = i3<=i2;
      i = i3;
      if (i4) goto l3_loop;
l8:
      return (XML_UnicodeBuffer__CharArray)i1;
      ;
    }

    
    XML_UnicodeBuffer__CharArray XML_Parser__ParserDesc_ParseDocument_GetString(OOC_INT32 start, OOC_INT32 end) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
      XML_UnicodeBuffer__CharArray string;
      OOC_INT32 i;

      i0 = start;
      i1 = end;
      i2 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], ((i1-i0)+1));
      string = (XML_UnicodeBuffer__CharArray)i2;
      i0 = i0!=i1;
      i = 0;
      if (i0) goto l3;
      i0=0;
      goto l9;
l3:
      i0 = (OOC_INT32)chars;
      i3=0;
l4_loop:
      i4 = _check_pointer(i2, 24925);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i6 = _check_pointer(i0, 24937);
      i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
      i8 = start;
      i6 = *(OOC_UINT16*)(i6+(_check_index(i8, i7, OOC_UINT32, 24937))*2);
      *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 24925))*2) = i6;
      i4 = i8+1;
      start = i4;
      i3 = i3+1;
      i4 = i4!=i1;
      i = i3;
      if (i4) goto l4_loop;
l8:
      i0=i3;
l9:
      i1 = _check_pointer(i2, 24998);
      i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      *(OOC_UINT16*)(i1+(_check_index(i0, i3, OOC_UINT32, 24998))*2) = (OOC_CHAR8)'\000';
      return (XML_UnicodeBuffer__CharArray)i2;
      ;
    }

    
    XML_UnicodeBuffer__Input XML_Parser__ParserDesc_ParseDocument_GetBuffer(XML_DTD__ExternalEntity entity) {
      register OOC_INT32 i0,i1,i2;
      Channel__Channel ch;
      Msg__Msg res;
      OOC_CHAR8 str[2048];
      XML_UnicodeBuffer__Input in;

      i0 = (OOC_INT32)entity;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25255))+36);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l7;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25327))+36);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25327))+36);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25336)))), URI__URIDesc_GetChannel)),URI__URIDesc_GetChannel)((URI__URI)i2, 2, (void*)(OOC_INT32)&res);
      ch = (Channel__Channel)i1;
      i2 = i1==(OOC_INT32)0;
      if (i2) goto l5;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25675)))), Channel__ChannelDesc_NewReader)),Channel__ChannelDesc_NewReader)((Channel__Channel)i1);
      i2 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 25696));
      i1 = (OOC_INT32)XML_UnicodeBuffer__NewInput((Channel__Reader)i1, (XML_UnicodeCodec__Factory)(OOC_INT32)0, (Msg__MsgList)i2);
      in = (XML_UnicodeBuffer__Input)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25745))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25724)))), XML_DTD__ExternalEntityDesc_SetCodecFactory)),XML_DTD__ExternalEntityDesc_SetCodecFactory)((XML_DTD__ExternalEntity)i0, (XML_UnicodeCodec__Factory)i2);
      return (XML_UnicodeBuffer__Input)i1;
      goto l8;
l5:
      XML_Parser__ParserDesc_ParseDocument_Err(303);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25444))+36);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25444))+36);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25453)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)str, 2048);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25483))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25483))+104);
      i2 = (OOC_INT32)Msg__GetStringPtr((void*)(OOC_INT32)str, 2048);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25494)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "uri", 4, (Msg__StringPtr)i2);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25556))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25556))+104);
      i2 = (OOC_INT32)res;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25567)))), Msg__MsgDesc_SetMsgAttrib)),Msg__MsgDesc_SetMsgAttrib)((Msg__Msg)i0, "channel_error", 14, (Msg__Msg)i2);
      return (XML_UnicodeBuffer__Input)(OOC_INT32)0;
      goto l8;
l7:
      return (XML_UnicodeBuffer__Input)(OOC_INT32)0;
l8:
      _failed_function(25063); return 0;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_CheckInvalidChars() {
      register OOC_INT32 i0,i1,i2;
      OOC_CHAR8 str[2048];

      i0 = (OOC_INT32)p;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25919))+36);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25923))+12);
      i0 = *(OOC_INT32*)(_check_pointer(i0, 25930));
      i0 = i0!=0;
      if (!i0) goto l4;
      XML_Parser__ParserDesc_ParseDocument_Err(27);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26005))+56);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26017))+36);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26005))+56);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26017))+36);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26026)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)str, 2048);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26054))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26054))+104);
      i2 = (OOC_INT32)Msg__GetStringPtr((void*)(OOC_INT32)str, 2048);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26065)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "uri", 4, (Msg__StringPtr)i2);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26125))+104);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26166))+36);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 26170))+12);
      i2 = *(OOC_INT32*)(_check_pointer(i2, 26177));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26125))+104);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26136)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "encodings", 10, i2);
l4:
      return;
      ;
    }

    
    XML_UnicodeBuffer__CharArray XML_Parser__ParserDesc_ParseDocument_Internalize(XML_DTD__ExternalEntity entity) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
      XML_UnicodeBuffer__Input in;
      OOC_INT32 len;
      OOC_INT32 i;
      OOC_INT32 delta;
      XML_UnicodeBuffer__CharArray str;

      i0 = (OOC_INT32)entity;
      i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_GetBuffer((XML_DTD__ExternalEntity)i0);
      i2 = i1!=(OOC_INT32)0;
      in = (XML_UnicodeBuffer__Input)i1;
      if (i2) goto l3;
      i1 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], 2);
      str = (XML_UnicodeBuffer__CharArray)i1;
      len = 0;
      i2=0;
      goto l36;
l3:
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26474)))), XML_UnicodeBuffer__InputDesc_NextBlock)),XML_UnicodeBuffer__InputDesc_NextBlock)((XML_UnicodeBuffer__Input)i1);
      if (!i2) goto l10;
l5_loop:
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26474)))), XML_UnicodeBuffer__InputDesc_NextBlock)),XML_UnicodeBuffer__InputDesc_NextBlock)((XML_UnicodeBuffer__Input)i1);
      if (i2) goto l5_loop;
l10:
      i2 = *(OOC_INT32*)((_check_pointer(i1, 26553))+28);
      len = i2;
      i = 0;
      i3 = 0!=i2;
      delta = 0;
      if (i3) goto l13;
      i3=0;
      goto l27;
l13:
      i3=0;i4=0;
l14_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26640))+20);
      i5 = _check_pointer(i5, 26647);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i5 = *(OOC_UINT16*)(i5+(_check_index(i3, i6, OOC_UINT32, 26647))*2);
      switch (i5) {
      case (OOC_CHAR8)'\015':
        i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26690))+20);
        i5 = _check_pointer(i5, 26697);
        i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
        *(OOC_UINT16*)(i5+(_check_index((i3-i4), i6, OOC_UINT32, 26697))*2) = (OOC_CHAR8)'\012';
        i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26738))+20);
        i5 = _check_pointer(i5, 26745);
        i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
        i5 = *(OOC_UINT16*)(i5+(_check_index((i3+1), i6, OOC_UINT32, 26745))*2);
        i5 = i5==(OOC_CHAR8)'\012';
        if (i5) goto l19;
        {register OOC_INT32 h0=i3;i3=i4;i4=h0;}
        goto l22;
l19:
        i4 = i4+1;
        delta = i4;
        i3 = i3+1;
        {register OOC_INT32 h0=i3;i3=i4;i4=h0;}
        goto l22;
      default:
        i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26848))+20);
        i5 = _check_pointer(i5, 26855);
        i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
        i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26870))+20);
        i7 = _check_pointer(i7, 26877);
        i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
        i7 = *(OOC_UINT16*)(i7+(_check_index(i3, i8, OOC_UINT32, 26877))*2);
        *(OOC_UINT16*)(i5+(_check_index((i3-i4), i6, OOC_UINT32, 26855))*2) = i7;
        {register OOC_INT32 h0=i3;i3=i4;i4=h0;}
        goto l22;
      }
l22:
      i4 = i4+1;
      i5 = i4!=i2;
      i = i4;
      if (!i5) goto l27;
      {register OOC_INT32 h0=i3;i3=i4;i4=h0;}
      goto l14_loop;
l27:
      i2 = i2-i3;
      len = i2;
      i3 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], (i2+2));
      i4 = i2-1;
      str = (XML_UnicodeBuffer__CharArray)i3;
      i5 = 0<=i4;
      i = 0;
      if (!i5) goto l35;
      i5=0;
l30_loop:
      i6 = _check_pointer(i3, 27024);
      i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
      i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27033))+20);
      i8 = _check_pointer(i8, 27040);
      i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
      i8 = *(OOC_UINT16*)(i8+(_check_index(i5, i9, OOC_UINT32, 27040))*2);
      *(OOC_UINT16*)(i6+(_check_index(i5, i7, OOC_UINT32, 27024))*2) = i8;
      i5 = i5+1;
      i6 = i5<=i4;
      i = i5;
      if (i6) goto l30_loop;
l35:
      XML_Parser__ParserDesc_ParseDocument_CheckInvalidChars();
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27094)))), XML_UnicodeBuffer__InputDesc_Close)),XML_UnicodeBuffer__InputDesc_Close)((XML_UnicodeBuffer__Input)i1);
      i1=i3;
l36:
      i0 = *(OOC_INT8*)((_check_pointer(i0, 27180))+8);
      switch (i0) {
      case 2:
        i0 = _check_pointer(i1, 27236);
        i3 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
        *(OOC_UINT16*)(i0+(_check_index(i2, i3, OOC_UINT32, 27236))*2) = (OOC_CHAR16)65535;
        goto l41;
      case 3:
        i0 = _check_pointer(i1, 27310);
        i3 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
        *(OOC_UINT16*)(i0+(_check_index(i2, i3, OOC_UINT32, 27310))*2) = (OOC_CHAR16)65534;
        goto l41;
      default:
        _failed_case(i0, 27169);
        goto l41;
      }
l41:
      return (XML_UnicodeBuffer__CharArray)i1;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_PushEntity(XML_DTD__Entity entity, OOC_CHAR8 syncEntity) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
      XML_Parser__PEInfoList newList;
      OOC_INT32 i;

      i0 = (OOC_INT32)entity;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l3;
      *(OOC_UINT8*)((_check_pointer(i0, 27786))+17) = OOC_TRUE;
l3:
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27856))+84);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 27835))+88);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 27865)), (OOC_INT32)0);
      i2 = i3==i2;
      if (!i2) goto l14;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27902))+84);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 27911)), (OOC_INT32)0);
      i2 = (OOC_INT32)RT0__NewObject(_td_XML_Parser__PEInfoList.baseTypes[0], (i2+4));
      newList = (XML_Parser__PEInfoList)i2;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27956))+84);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 27965)), (OOC_INT32)0);
      i3 = i3-1;
      i4 = 0<=i3;
      i = 0;
      if (!i4) goto l13;
      i4=0;
l8_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27998))+84);
      i5 = _check_pointer(i5, 28007);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i7 = _check_pointer(i2, 27990);
      i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
      _copy_block((i5+((_check_index(i4, i6, OOC_UINT32, 28007))*28)),(i7+((_check_index(i4, i8, OOC_UINT32, 27990))*28)),28);
      i4 = i4+1;
      i5 = i4<=i3;
      i = i4;
      if (i5) goto l8_loop;
l13:
      *(OOC_INT32*)((_check_pointer(i1, 28033))+84) = i2;
l14:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28072))+84);
      i2 = _check_pointer(i2, 28081);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 28083))+88);
      i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      *(OOC_INT32*)((i2+((_check_index(i3, i4, OOC_UINT32, 28081))*28))+20) = i0;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28123))+84);
      i2 = _check_pointer(i2, 28132);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 28134))+88);
      i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i5 = (OOC_INT32)chars;
      *(OOC_INT32*)(i2+((_check_index(i3, i4, OOC_UINT32, 28132))*28)) = i5;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28175))+84);
      i2 = _check_pointer(i2, 28184);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 28186))+88);
      i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i5 = cpos;
      *(OOC_INT32*)((i2+((_check_index(i3, i4, OOC_UINT32, 28184))*28))+4) = i5;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28225))+84);
      i2 = _check_pointer(i2, 28234);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 28236))+88);
      i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i5 = *(OOC_INT32*)((_check_pointer(i1, 28267))+92);
      *(OOC_INT32*)((i2+((_check_index(i3, i4, OOC_UINT32, 28234))*28))+8) = i5;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28286))+84);
      i2 = _check_pointer(i2, 28295);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 28297))+88);
      i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i5 = *(OOC_INT32*)((_check_pointer(i1, 28331))+96);
      *(OOC_INT32*)((i2+((_check_index(i3, i4, OOC_UINT32, 28295))*28))+12) = i5;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28353))+84);
      i2 = _check_pointer(i2, 28362);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 28364))+88);
      i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i5 = *(OOC_INT32*)((_check_pointer(i1, 28398))+100);
      *(OOC_INT32*)((i2+((_check_index(i3, i4, OOC_UINT32, 28362))*28))+16) = i5;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28420))+84);
      i2 = _check_pointer(i2, 28429);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 28431))+88);
      i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28453))+36);
      *(OOC_INT32*)((i2+((_check_index(i3, i4, OOC_UINT32, 28429))*28))+24) = i5;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 28471))+88);
      *(OOC_INT32*)((_check_pointer(i1, 28471))+88) = (i2+1);
      i2 = syncEntity;
      if (i2) goto l17;
      i3=OOC_FALSE;
      goto l19;
l17:
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28523)))), &_td_XML_DTD__ExternalEntityDesc);
      
l19:
      if (i3) goto l47;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29182)))), &_td_XML_DTD__ExternalEntityDesc);
      if (i1) goto l23;
      i1=OOC_FALSE;
      goto l25;
l23:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29214))+12);
      i1 = i1==(OOC_INT32)0;
      
l25:
      if (!i1) goto l27;
      i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Internalize((XML_DTD__ExternalEntity)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29298)))), &_td_XML_DTD__ExternalEntityDesc, 29298)));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29256)))), XML_DTD__EntityDesc_SetEntityValue)),XML_DTD__EntityDesc_SetEntityValue)((XML_DTD__Entity)i0, (XML_UnicodeBuffer__CharArray)i1);
l27:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29359))+12);
      i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Clone((XML_UnicodeBuffer__CharArray)i1);
      chars = (XML_UnicodeBuffer__CharArray)i1;
      i3 = *(OOC_INT8*)((_check_pointer(i0, 29403))+8);
      switch (i3) {
      case 0:
      case 2:
        i2 = _check_pointer(i1, 29492);
        i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 29503)), (OOC_INT32)0);
        i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
        *(OOC_UINT16*)(i2+(_check_index((i1-2), i3, OOC_UINT32, 29492))*2) = (OOC_CHAR16)65535;
        goto l39;
      case 1:
      case 3:
        i3 = _check_pointer(i1, 29612);
        i4 = OOC_ARRAY_LENGTH((_check_pointer(i1, 29623)), (OOC_INT32)0);
        i5 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
        *(OOC_UINT16*)(i3+(_check_index((i4-2), i5, OOC_UINT32, 29612))*2) = (OOC_CHAR16)65534;
        i3 = (OOC_INT32)p;
        i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 30017))+72);
        i3 = i3==(OOC_INT32)0;
        if (!i3) goto l39;
        i3 = _check_pointer(i1, 30064);
        i4 = OOC_ARRAY_LENGTH((_check_pointer(i1, 30075)), (OOC_INT32)0);
        i5 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
        *(OOC_UINT16*)(i3+(_check_index((i4-2), i5, OOC_UINT32, 30064))*2) = (OOC_CHAR8)' ';
        if (i2) goto l35;
        i2 = _check_pointer(i1, 30212);
        i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 30223)), (OOC_INT32)0);
        i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
        *(OOC_UINT16*)(i2+(_check_index((i1-1), i3, OOC_UINT32, 30212))*2) = (OOC_CHAR16)65534;
        goto l39;
l35:
        i2 = _check_pointer(i1, 30139);
        i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 30150)), (OOC_INT32)0);
        i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
        *(OOC_UINT16*)(i2+(_check_index((i1-1), i3, OOC_UINT32, 30139))*2) = (OOC_CHAR16)65535;
        goto l39;
      default:
        _failed_case(i3, 29392);
        goto l39;
      }
l39:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 30319))+8);
      i1 = i1==0;
      if (i1) goto l42;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 30376))+8);
      i1 = i1==1;
      
      goto l44;
l42:
      i1=OOC_TRUE;
l44:
      if (!i1) goto l52;
      i1 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30430))+4);
      *(OOC_INT32*)((_check_pointer(i1, 30433))+16) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30466)))), &_td_XML_DTD__InternalEntityDesc, 30466));
      goto l52;
l47:
      i2 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_GetBuffer((XML_DTD__ExternalEntity)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28635)))), &_td_XML_DTD__ExternalEntityDesc, 28635)));
      *(OOC_INT32*)((_check_pointer(i1, 28605))+36) = i2;
      XML_Parser__ParserDesc_ParseDocument_SetFileEntity((XML_DTD__ExternalEntity)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28687)))), &_td_XML_DTD__ExternalEntityDesc, 28687)));
      XML_Parser__ParserDesc_ParseDocument_ResetLocator();
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28740))+36);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l50;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28904))+36);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28908))+20);
      chars = (XML_UnicodeBuffer__CharArray)i0;
      goto l52;
l50:
      i0 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], 2);
      chars = (XML_UnicodeBuffer__CharArray)i0;
      i0 = _check_pointer(i0, 28847);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      *(OOC_UINT16*)(i0+(_check_index(0, i1, OOC_UINT8, 28847))*2) = (OOC_CHAR16)65535;
l52:
      cpos = 0;
      cdelta = 0;
      cstart = 0;
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_PopEntity() {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_INT32 i;

      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30640))+72);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30812))+72);
      i2 = (OOC_INT32)dtd;
      i3 = cdelta;
      i4 = cpos;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30812))+72);
      i5 = cstart;
      i6 = (OOC_INT32)chars;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 30842)))), XML_DTD__BuilderDesc_NewCharacters)),XML_DTD__BuilderDesc_NewCharacters)((XML_DTD__Builder)i2, (XML_UnicodeBuffer__CharArray)i6, i5, (i4-i3), OOC_TRUE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30829)))), XML_DTD__AttValueDesc_Append)),XML_DTD__AttValueDesc_Append)((XML_DTD__AttValue)i0, (XML_DTD__Fragment)i2);
l3:
      i0 = (OOC_INT32)p;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 30924))+88);
      *(OOC_INT32*)((_check_pointer(i0, 30924))+88) = (i1-1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30950))+36);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l6;
      i0=OOC_FALSE;
      goto l8;
l6:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30974))+84);
      i1 = _check_pointer(i1, 30983);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 30985))+88);
      i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 30983))*28))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30966))+36);
      i0 = i0!=i1;
      
l8:
      if (!i0) goto l10;
      XML_Parser__ParserDesc_ParseDocument_CheckInvalidChars();
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31045))+36);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31045))+36);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31049)))), XML_UnicodeBuffer__InputDesc_Close)),XML_UnicodeBuffer__InputDesc_Close)((XML_UnicodeBuffer__Input)i0);
l10:
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31139))+84);
      i1 = _check_pointer(i1, 31148);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 31150))+88);
      i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i1+((_check_index(i2, i3, OOC_UINT32, 31148))*28));
      chars = (XML_UnicodeBuffer__CharArray)i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31190))+84);
      i1 = _check_pointer(i1, 31199);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 31201))+88);
      i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = *(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 31199))*28))+4);
      cpos = i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31247))+84);
      i1 = _check_pointer(i1, 31256);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 31258))+88);
      i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = *(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 31256))*28))+8);
      *(OOC_INT32*)((_check_pointer(i0, 31232))+92) = i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31311))+84);
      i1 = _check_pointer(i1, 31320);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 31322))+88);
      i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = *(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 31320))*28))+12);
      *(OOC_INT32*)((_check_pointer(i0, 31293))+96) = i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31378))+84);
      i1 = _check_pointer(i1, 31387);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 31389))+88);
      i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = *(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 31387))*28))+16);
      *(OOC_INT32*)((_check_pointer(i0, 31360))+100) = i1;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 31432))+88);
      i1 = i1-1;
      i2 = i1>=0;
      i = i1;
      if (i2) goto l13;
      i2=OOC_FALSE;
      goto l15;
l13:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31474))+84);
      i2 = _check_pointer(i2, 31483);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i1, i3, OOC_UINT32, 31483))*28))+20);
      i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31495)))), &_td_XML_DTD__ExternalEntityDesc));
      
l15:
      if (!i2) goto l27;
l18_loop:
      i1 = i1-1;
      i = i1;
      i2 = i1>=0;
      if (i2) goto l21;
      i2=OOC_FALSE;
      goto l23;
l21:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31474))+84);
      i2 = _check_pointer(i2, 31483);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i1, i3, OOC_UINT32, 31483))*28))+20);
      i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31495)))), &_td_XML_DTD__ExternalEntityDesc));
      
l23:
      if (i2) goto l18_loop;
l27:
      i2 = i1>=0;
      if (i2) goto l30;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31672))+52);
      XML_Parser__ParserDesc_ParseDocument_SetFileEntity((XML_DTD__ExternalEntity)i0);
      goto l31;
l30:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31595))+84);
      i0 = _check_pointer(i0, 31604);
      i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)((i0+((_check_index(i1, i2, OOC_UINT32, 31604))*28))+20);
      XML_Parser__ParserDesc_ParseDocument_SetFileEntity((XML_DTD__ExternalEntity)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31620)))), &_td_XML_DTD__ExternalEntityDesc, 31620)));
l31:
      i0 = (OOC_INT32)p;
      i2 = *(OOC_INT32*)((_check_pointer(i0, 31723))+88);
      i1 = i1!=(i2-1);
      if (i1) goto l34;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31964))+4);
      *(OOC_INT32*)((_check_pointer(i1, 31967))+16) = (OOC_INT32)0;
      goto l35;
l34:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31824))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31850))+84);
      i2 = _check_pointer(i2, 31859);
      i3 = *(OOC_INT32*)((_check_pointer(i0, 31861))+88);
      i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index((i3-1), i4, OOC_UINT32, 31859))*28))+20);
      *(OOC_INT32*)((_check_pointer(i1, 31827))+16) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31889)))), &_td_XML_DTD__InternalEntityDesc, 31889));
l35:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32027))+84);
      i1 = _check_pointer(i1, 32036);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 32038))+88);
      i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 32036))*28))+24);
      *(OOC_INT32*)((_check_pointer(i0, 32018))+36) = i1;
      i1 = cpos;
      cstart = i1;
      cdelta = 0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32110))+84);
      i1 = _check_pointer(i1, 32119);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 32121))+88);
      i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 32119))*28))+20);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l38;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32164))+84);
      i1 = _check_pointer(i1, 32173);
      i0 = *(OOC_INT32*)((_check_pointer(i0, 32175))+88);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index(i0, i2, OOC_UINT32, 32173))*28))+20);
      *(OOC_UINT8*)((_check_pointer(i0, 32196))+17) = OOC_FALSE;
l38:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_NextBlock() {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT32 oldOffset;
      OOC_CHAR8 res;

      i0 = (OOC_INT32)chars;
      i1 = _check_pointer(i0, 32362);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 32362))*2);
      _assert((i1==(OOC_CHAR16)65534), 127, 32349);
      i1 = (OOC_INT32)p;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 32401))+88);
      i2 = i2!=0;
      if (i2) goto l3;
      i2=OOC_FALSE;
      goto l5;
l3:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32423))+36);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 32427))+20);
      i2 = i2!=i0;
      
l5:
      if (i2) goto l7;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32949))+36);
      i0 = *(OOC_INT32*)((_check_pointer(i0, 32953))+24);
      oldOffset = i0;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32987))+36);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32987))+36);
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 32991)))), XML_UnicodeBuffer__InputDesc_NextBlock)),XML_UnicodeBuffer__InputDesc_NextBlock)((XML_UnicodeBuffer__Input)i1);
      res = i1;
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33024))+36);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 33028))+20);
      chars = (XML_UnicodeBuffer__CharArray)i2;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33057))+36);
      i2 = *(OOC_INT32*)((_check_pointer(i2, 33061))+24);
      i3 = cpos;
      cpos = (i3-(i2-i0));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33112))+36);
      i2 = *(OOC_INT32*)((_check_pointer(i2, 33116))+24);
      i3 = cstart;
      cstart = (i3-(i2-i0));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33175))+36);
      i2 = *(OOC_INT32*)((_check_pointer(i2, 33179))+24);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 33159))+96);
      *(OOC_INT32*)((_check_pointer(i1, 33159))+96) = (i3-(i2-i0));
      goto l11;
l7:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32565))+72);
      i1 = i1==(OOC_INT32)0;
      if (!i1) goto l10;
      i1 = _check_pointer(i0, 32618);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 32629)), (OOC_INT32)0);
      i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = *(OOC_UINT16*)(i1+(_check_index((i2-2), i3, OOC_UINT32, 32618))*2);
      _assert((i1==(OOC_CHAR8)' '), 127, 32605);
      i1 = _check_pointer(i0, 32658);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 32669)), (OOC_INT32)0);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      *(OOC_UINT16*)(i1+(_check_index((i0-2), i2, OOC_UINT32, 32658))*2) = (OOC_CHAR16)65534;
l10:
      XML_Parser__ParserDesc_ParseDocument_PopEntity();
l11:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_DiscardPreviousInput() {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33295))+36);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33299))+20);
      i2 = (OOC_INT32)chars;
      i1 = i1==i2;
      if (!i1) goto l4;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33330))+36);
      i1 = cpos;
      *(OOC_INT32*)((_check_pointer(i0, 33334))+32) = i1;
      cstart = i1;
l4:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_EndOfLine() {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33573))+36);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33577))+20);
      i2 = (OOC_INT32)chars;
      i1 = i2==i1;
      if (!i1) goto l4;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 33605))+92);
      *(OOC_INT32*)((_check_pointer(i0, 33605))+92) = (i1+1);
      i1 = cpos;
      *(OOC_INT32*)((_check_pointer(i0, 33627))+96) = i1;
      *(OOC_INT32*)((_check_pointer(i0, 33659))+100) = 0;
l4:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_Tab() {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT32 currColumn;

      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33878))+36);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33882))+20);
      i2 = (OOC_INT32)chars;
      i1 = i2==i1;
      if (!i1) goto l4;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 33924))+96);
      i2 = cpos;
      i3 = *(OOC_INT32*)((_check_pointer(i0, 33939))+100);
      i1 = (i2-i1)+i3;
      currColumn = i1;
      i2 = *(OOC_INT32*)((_check_pointer(i0, 33968))+100);
      *(OOC_INT32*)((_check_pointer(i0, 33968))+100) = (i2+((8-(_mod(i1,8)))-1));
l4:
      return;
      ;
    }

    
    OOC_CHAR8 XML_Parser__ParserDesc_ParseDocument_LookingAtS() {
      register OOC_INT32 i0,i1,i2,i3,i4;

      i0 = (OOC_INT32)chars;
      i1 = _check_pointer(i0, 34139);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 34139))*2);
      i1 = i1<=(OOC_CHAR8)' ';
      if (i1) goto l23;
      i1 = (OOC_INT32)p;
      i2 = *(OOC_UINT8*)((_check_pointer(i1, 34193))+67);
      if (i2) goto l5;
      i2 = *(OOC_UINT8*)((_check_pointer(i1, 34216))+68);
      
      goto l7;
l5:
      i2=OOC_TRUE;
l7:
      if (i2) goto l9;
      i2=OOC_FALSE;
      goto l11;
l9:
      i2 = _check_pointer(i0, 34256);
      i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i2 = *(OOC_UINT16*)(i2+(_check_index(i3, i4, OOC_UINT32, 34256))*2);
      i2 = i2==(OOC_CHAR8)'%';
      
l11:
      if (i2) goto l13;
      return OOC_FALSE;
      goto l24;
l13:
      i2 = _check_pointer(i0, 34291);
      i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i2 = *(OOC_UINT16*)(i2+(_check_index((i3+1), i4, OOC_UINT32, 34291))*2);
      i2 = i2==(OOC_CHAR16)65534;
      if (i2) goto l16;
      i0 = _check_pointer(i0, 34633);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i0 = *(OOC_UINT16*)(i0+(_check_index((i3+1), i1, OOC_UINT32, 34633))*2);
      i0 = XML_Parser__IsNameChar(i0);
      return i0;
      goto l24;
l16:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34347))+36);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34351))+20);
      i0 = i0==i1;
      if (i0) goto l19;
      return OOC_FALSE;
      goto l24;
l19:
      cpos = (i3+1);
      XML_Parser__ParserDesc_ParseDocument_NextBlock();
      i0 = cpos;
      i0 = i0-1;
      cpos = i0;
      i1 = (OOC_INT32)chars;
      i1 = _check_pointer(i1, 34527);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i0 = *(OOC_UINT16*)(i1+(_check_index((i0+1), i2, OOC_UINT32, 34527))*2);
      i0 = XML_Parser__IsNameChar(i0);
      return i0;
      goto l24;
l23:
      return OOC_TRUE;
l24:
      _failed_function(34057); return 0;
      ;
    }

    
    OOC_CHAR8 XML_Parser__ParserDesc_ParseDocument_LookingAtSnoPE() {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 34821);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 34821))*2);
      return (i0<=(OOC_CHAR8)' ');
      ;
    }

    
    OOC_CHAR8 XML_Parser__ParserDesc_ParseDocument_LookingAt(const OOC_CHAR8 str__ref[], OOC_LEN str_0d, OOC_INT8 followedBy) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)
      OOC_INT32 i;

      OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
      i = 0;
      i0 = followedBy;
      i1=0;
l1_loop:
      i2 = (OOC_INT32)chars;
      i3 = _check_pointer(i2, 35694);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i5 = cpos;
      i3 = *(OOC_UINT16*)(i3+(_check_index(i5, i4, OOC_UINT32, 35694))*2);
      i3 = i3==(OOC_CHAR16)65534;
      if (i3) goto l17;
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 36004)));
      i3 = i3==(OOC_CHAR8)'\000';
      if (i3) goto l10;
      i2 = _check_pointer(i2, 36245);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 36234)));
      i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i3, OOC_UINT32, 36245))*2);
      i2 = i4==i2;
      if (i2) goto l8;
      i2 = i5-i1;
      cpos = i2;
      return OOC_FALSE;
      {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
      goto l9;
l8:
      i1 = i1+1;
      i = i1;
      i2 = i5+1;
      cpos = i2;
      {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
l9:
      i1=i2;
      goto l1_loop;
l10:
      i3 = i5-i1;
      cpos = i3;
      switch (i0) {
      case 1:
        i2 = _check_pointer(i2, 36141);
        i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
        i2 = *(OOC_UINT16*)(i2+(_check_index((i3+i1), i4, OOC_UINT32, 36141))*2);
        i2 = XML_Parser__IsNameChar(i2);
        return (!i2);
        goto l1_loop;
      case 0:
        return OOC_TRUE;
        goto l1_loop;
      default:
        _failed_case(i0, 36054);
        goto l1_loop;
      }
l17:
      i3 = (OOC_INT32)p;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 35749))+36);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 35753))+20);
      i2 = i2==i3;
      if (!i2) goto l19;
      goto l20;
l19:
      cpos = (i5-i1);
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 35962)));
      return (i2==(OOC_CHAR8)'\000');
      goto l1_loop;
l20:
      XML_Parser__ParserDesc_ParseDocument_NextBlock();
      goto l1_loop;
l24:
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_NextChar() {
      register OOC_INT32 i0,i1,i2,i3;

      i0 = (OOC_INT32)chars;
      i1 = _check_pointer(i0, 36440);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 36440))*2);
      i1 = i1!=(OOC_CHAR16)65535;
      if (!i1) goto l6;
      i1 = i3+1;
      cpos = i1;
      i0 = _check_pointer(i0, 36509);
      i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i0 = *(OOC_UINT16*)(i0+(_check_index(i1, i2, OOC_UINT32, 36509))*2);
      i0 = i0==(OOC_CHAR16)65534;
      if (!i0) goto l6;
      XML_Parser__ParserDesc_ParseDocument_NextBlock();
l6:
      return;
      ;
    }

    
    XML_UnicodeBuffer__CharArray XML_Parser__ParserDesc_ParseDocument_Nmtoken(OOC_CHAR8 checkForQName, OOC_CHAR8 noColon) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_INT32 colon;
      XML_UnicodeBuffer__CharArray string;

      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 36811);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 36811))*2);
      i0 = XML_Parser__IsNameChar(i0);
      if (i0) goto l3;
      XML_Parser__ParserDesc_ParseDocument_Err(11);
      XML_Parser__ParserDesc_ParseDocument_NextChar();
      i0 = (OOC_INT32)XML_Parser__noName;
      return (XML_UnicodeBuffer__CharArray)i0;
      goto l49;
l3:
      i0 = cpos;
      cstart = i0;
      i1 = (OOC_INT32)chars;
      i1 = _check_pointer(i1, 36865);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = *(OOC_UINT16*)(i1+(_check_index(i0, i2, OOC_UINT32, 36865))*2);
      i1 = i1==(OOC_CHAR8)':';
      i2 = checkForQName;
      i3 = noColon;
      if (i1) goto l6;
      colon = -1;
      i0=-1;
      goto l13;
l6:
      colon = i0;
      if (!i2) goto l13;
      if (i3) goto l10;
      XML_Parser__ParserDesc_ParseDocument_Err(31);
      goto l13;
l10:
      XML_Parser__ParserDesc_ParseDocument_Err(30);
l13:
      i1 = cpos;
      cpos = (i1+1);
      
l14_loop:
      i1 = (OOC_INT32)chars;
      i4 = _check_pointer(i1, 37272);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i6 = cpos;
      i4 = *(OOC_UINT16*)(i4+(_check_index(i6, i5, OOC_UINT32, 37272))*2);
      i4 = i4==(OOC_CHAR16)65534;
      if (i4) goto l35;
      i4 = _check_pointer(i1, 37551);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = *(OOC_UINT16*)(i4+(_check_index(i6, i5, OOC_UINT32, 37551))*2);
      i4 = i4==(OOC_CHAR8)':';
      if (i4) goto l19;
      i4=OOC_FALSE;
      goto l21;
l19:
      i4=i2;
l21:
      if (i4) goto l27;
      i1 = _check_pointer(i1, 37890);
      i4 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = *(OOC_UINT16*)(i1+(_check_index(i6, i4, OOC_UINT32, 37890))*2);
      i1 = XML_Parser__IsNameChar(i1);
      if (!i1) goto l24;
      goto l25;
l24:
      i0 = cpos;
      i1 = cstart;
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_GetString(i1, i0);
      string = (XML_UnicodeBuffer__CharArray)i0;
      
      goto l42;
l25:
      i1 = cpos;
      cpos = (i1+1);
      goto l14_loop;
l27:
      if (i3) goto l32;
      i0 = i0>=0;
      if (i0) goto l30;
      goto l33;
l30:
      XML_Parser__ParserDesc_ParseDocument_Err(31);
      goto l33;
l32:
      XML_Parser__ParserDesc_ParseDocument_Err(30);
l33:
      i0 = cpos;
      colon = i0;
      cpos = (i0+1);
      
      goto l14_loop;
l35:
      i4 = (OOC_INT32)p;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 37329))+36);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 37333))+20);
      i1 = i1!=i4;
      if (i1) goto l39;
      XML_Parser__ParserDesc_ParseDocument_NextBlock();
      goto l14_loop;
l39:
      i0 = cstart;
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_GetString(i0, i6);
      string = (XML_UnicodeBuffer__CharArray)i0;
      XML_Parser__ParserDesc_ParseDocument_NextBlock();
      
l42:
      if (i2) goto l44;
      i1=OOC_FALSE;
      goto l46;
l44:
      i1 = _check_pointer(i0, 38067);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 38079)), (OOC_INT32)0);
      i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = *(OOC_UINT16*)(i1+(_check_index((i2-2), i3, OOC_UINT32, 38067))*2);
      i1 = i1==(OOC_CHAR8)':';
      
l46:
      if (!i1) goto l48;
      XML_Parser__ParserDesc_ParseDocument_Err(31);
l48:
      return (XML_UnicodeBuffer__CharArray)i0;
l49:
      _failed_function(36616); return 0;
      ;
    }

    
    XML_UnicodeBuffer__CharArray XML_Parser__ParserDesc_ParseDocument_Name(OOC_CHAR8 noColon) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 38451);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 38451))*2);
      i0 = XML_Parser__IsNameChar0(i0);
      if (i0) goto l3;
      XML_Parser__ParserDesc_ParseDocument_Err(10);
      XML_Parser__ParserDesc_ParseDocument_NextChar();
      i0 = (OOC_INT32)XML_Parser__noName;
      return (XML_UnicodeBuffer__CharArray)i0;
      goto l4;
l3:
      i0 = (OOC_INT32)p;
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 38489))+61);
      i1 = noColon;
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Nmtoken(i0, i1);
      return (XML_UnicodeBuffer__CharArray)i0;
l4:
      _failed_function(38333); return 0;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_CheckChar(OOC_CHAR8 ch) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_CHAR8 str[2];

      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 38819);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 38819))*2);
      i1 = ch;
      i0 = i0!=i1;
      if (!i0) goto l3;
      XML_Parser__ParserDesc_ParseDocument_Err(12);
      _copy_8((const void*)"X",(void*)(OOC_INT32)str,2);
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 2, OOC_UINT8, 38896))) = i1;
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38916))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38916))+104);
      i2 = (OOC_INT32)Msg__GetStringPtr((void*)(OOC_INT32)str, 2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38927)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "symbol", 7, (Msg__StringPtr)i2);
l3:
      i0 = (OOC_INT32)chars;
      i1 = _check_pointer(i0, 39006);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 39006))*2);
      i1 = i1!=(OOC_CHAR16)65535;
      if (!i1) goto l9;
      i1 = i3+1;
      cpos = i1;
      i0 = _check_pointer(i0, 39075);
      i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i0 = *(OOC_UINT16*)(i0+(_check_index(i1, i2, OOC_UINT32, 39075))*2);
      i0 = i0==(OOC_CHAR16)65534;
      if (!i0) goto l9;
      XML_Parser__ParserDesc_ParseDocument_NextBlock();
l9:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_SkippedEntity(XML_UnicodeBuffer__CharArray name) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)p;
      *(OOC_UINT8*)((_check_pointer(i0, 39386))+64) = OOC_FALSE;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39425))+52);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 39441))+48);
      i1 = i1!=0;
      if (!i1) goto l3;
      *(OOC_UINT8*)((_check_pointer(i0, 39489))+63) = OOC_FALSE;
l3:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_PEReference(OOC_CHAR8 declSep) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 oldCStart;
      XML_UnicodeBuffer__CharArray name;
      XML_DTD__Declaration decl;
      XML_DTD__Entity entity;
      OOC_CHAR8 inInternalSubset;
      OOC_CHAR8 oldFlag;

      i0 = declSep;
      i1 = !i0;
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l9;
l3:
      i1 = (OOC_INT32)p;
      i2 = *(OOC_UINT8*)((_check_pointer(i1, 39834))+67);
      i2 = !i2;
      if (i2) goto l6;
      i1=OOC_FALSE;
      goto l9;
l6:
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 39857))+68);
      i1 = !i1;
      
l9:
      if (!i1) goto l11;
      XML_Parser__ParserDesc_ParseDocument_Err(115);
l11:
      XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'%');
      i1 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39976))+36);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 39980))+24);
      i2 = cstart;
      i1 = i2+i1;
      oldCStart = i1;
      i2 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_TRUE);
      name = (XML_UnicodeBuffer__CharArray)i2;
      i3 = (OOC_INT32)p;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 40052))+36);
      i3 = *(OOC_INT32*)((_check_pointer(i3, 40056))+24);
      cstart = (i1-i3);
      XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)';');
      i1 = (OOC_INT32)dtd;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40114))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40114))+8);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 40127)))), XML_DTD__NamespaceDesc_Get)),XML_DTD__NamespaceDesc_Get)((XML_DTD__Namespace)i1, (XML_UnicodeBuffer__CharArray)i2);
      i3 = i1==(OOC_INT32)0;
      decl = (XML_DTD__Declaration)i1;
      if (i3) goto l48;
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40519)))), &_td_XML_DTD__EntityDesc, 40519);
      entity = (XML_DTD__Entity)i1;
      if (i0) goto l19;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41861)))), &_td_XML_DTD__ExternalEntityDesc);
      if (!i0) goto l18;
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Internalize((XML_DTD__ExternalEntity)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41949)))), &_td_XML_DTD__ExternalEntityDesc, 41949)));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41907)))), XML_DTD__EntityDesc_SetEntityValue)),XML_DTD__EntityDesc_SetEntityValue)((XML_DTD__Entity)i1, (XML_UnicodeBuffer__CharArray)i0);
l18:
      XML_Parser__ParserDesc_ParseDocument_PushEntity((XML_DTD__Entity)i1, OOC_FALSE);
      goto l61;
l19:
      i0 = (OOC_INT32)p;
      i3 = *(OOC_UINT8*)((_check_pointer(i0, 40719))+60);
      if (i3) goto l22;
      i3 = *(OOC_INT8*)((_check_pointer(i1, 40762))+8);
      i3 = i3==1;
      
      goto l24;
l22:
      i3=OOC_TRUE;
l24:
      if (i3) goto l26;
      XML_Parser__ParserDesc_ParseDocument_SkippedEntity((XML_UnicodeBuffer__CharArray)i2);
      goto l61;
l26:
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 40840))+67);
      if (i2) goto l29;
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 40863))+68);
      
      goto l30;
l29:
      i0=OOC_TRUE;
l30:
      i0 = !i0;
      inInternalSubset = i0;
      XML_Parser__ParserDesc_ParseDocument_PushEntity((XML_DTD__Entity)i1, i0);
      i2 = (OOC_INT32)p;
      i3 = *(OOC_UINT8*)((_check_pointer(i2, 41038))+68);
      oldFlag = i3;
      i4 = *(OOC_INT8*)((_check_pointer(i1, 41080))+8);
      i4 = i4==3;
      if (!i4) goto l36;
      *(OOC_UINT8*)((_check_pointer(i2, 41138))+68) = OOC_TRUE;
      i2 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<?xml", 6, 1);
      if (!i2) goto l36;
      XML_Parser__ParserDesc_ParseDocument_XMLDecl((XML_DTD__ExternalEntity)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41263)))), &_td_XML_DTD__ExternalEntityDesc, 41263)));
l36:
      XML_Parser__ParserDesc_ParseDocument_extSubsetDecl();
      i2 = (OOC_INT32)chars;
      i2 = _check_pointer(i2, 41376);
      i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i5 = cpos;
      i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i4, OOC_UINT32, 41376))*2);
      i2 = i2!=(OOC_CHAR16)65535;
      if (!i2) goto l39;
      XML_Parser__ParserDesc_ParseDocument_Err(28);
l39:
      i1 = *(OOC_INT8*)((_check_pointer(i1, 41499))+8);
      i1 = i1==3;
      if (!i1) goto l43;
      i1 = (OOC_INT32)p;
      *(OOC_UINT8*)((_check_pointer(i1, 41557))+68) = i3;
l43:
      if (!i0) goto l61;
      XML_Parser__ParserDesc_ParseDocument_PopEntity();
      goto l61;
l48:
      i0 = (OOC_INT32)p;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 40229))+62);
      if (i1) goto l55;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 40258))+63);
      if (i1) goto l53;
      i0=OOC_FALSE;
      goto l57;
l53:
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 40283))+60);
      
      goto l57;
l55:
      i0=OOC_TRUE;
l57:
      if (i0) goto l59;
      XML_Parser__ParserDesc_ParseDocument_SkippedEntity((XML_UnicodeBuffer__CharArray)i2);
      goto l61;
l59:
      XML_Parser__ParserDesc_ParseDocument_Err(211);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40359))+104);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 40421)), (OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40359))+104);
      i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 40421)), i3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40370)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i2);
l61:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_OptS(OOC_CHAR8 noPE) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;

      i0 = noPE;
      i1 = !i0;
l1_loop:
      i2 = (OOC_INT32)chars;
      i3 = _check_pointer(i2, 42496);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i5 = cpos;
      i3 = *(OOC_UINT16*)(i3+(_check_index(i5, i4, OOC_UINT32, 42496))*2);
      switch (i3) {
      case (OOC_CHAR16)65534:
        XML_Parser__ParserDesc_ParseDocument_NextBlock();
        goto l1_loop;
      case (OOC_CHAR8)' ':
        cpos = (i5+1);
        goto l1_loop;
      case (OOC_CHAR8)'\012':
        cpos = (i5+1);
        XML_Parser__ParserDesc_ParseDocument_EndOfLine();
        goto l1_loop;
      case (OOC_CHAR8)'\015':
        i3 = i5+1;
        cpos = i3;
        i2 = _check_pointer(i2, 42703);
        i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i3, i4, OOC_UINT32, 42703))*2);
        i2 = i2==(OOC_CHAR16)65534;
        if (!i2) goto l9;
        XML_Parser__ParserDesc_ParseDocument_NextBlock();
l9:
        i2 = (OOC_INT32)chars;
        i2 = _check_pointer(i2, 42791);
        i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
        i4 = cpos;
        i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 42791))*2);
        i2 = i2==(OOC_CHAR8)'\012';
        if (i2) goto l11;
        goto l12;
l11:
        cpos = (i4+1);
l12:
        XML_Parser__ParserDesc_ParseDocument_EndOfLine();
        goto l1_loop;
      case (OOC_CHAR8)'\011':
        XML_Parser__ParserDesc_ParseDocument_Tab();
        i2 = cpos;
        cpos = (i2+1);
        goto l1_loop;
      case (OOC_CHAR8)'%':
        if (!i1) goto l25;
        XML_Parser__ParserDesc_ParseDocument_PEReference(OOC_FALSE);
        XML_Parser__ParserDesc_ParseDocument_OptS(i0);
        goto l1_loop;
      default:
        i2 = _check_pointer(i2, 43093);
        i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i3, OOC_UINT32, 43093))*2);
        i2 = i2<(OOC_CHAR8)' ';
        if (!i2) goto l25;
        XML_Parser__ParserDesc_ParseDocument_Err(1);
        i2 = cpos;
        cpos = (i2+1);
        goto l1_loop;
      }
l25:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_S() {
      register OOC_INT32 i0;

      i0 = XML_Parser__ParserDesc_ParseDocument_LookingAtS();
      if (i0) goto l3;
      XML_Parser__ParserDesc_ParseDocument_Err(9);
      goto l4;
l3:
      XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
l4:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_SnoPE() {
      register OOC_INT32 i0;

      i0 = XML_Parser__ParserDesc_ParseDocument_LookingAtSnoPE();
      if (i0) goto l3;
      XML_Parser__ParserDesc_ParseDocument_Err(9);
      goto l4;
l3:
      XML_Parser__ParserDesc_ParseDocument_OptS(OOC_TRUE);
l4:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_ControlChar(OOC_CHAR16 eolReplacement) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 cend;

      i0 = (OOC_INT32)chars;
      i1 = _check_pointer(i0, 44083);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 44083))*2);
      i1 = i1<(OOC_CHAR8)' ';
      if (i1) goto l3;
      i1 = _check_pointer(i0, 44106);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 44106))*2);
      i1 = i1==(OOC_CHAR16)65534;
      
      goto l4;
l3:
      i1=OOC_TRUE;
l4:
      i2 = cdelta;
      i2 = i3-i2;
      _assert(i1, 127, 44069);
      cend = i2;
      i1 = _check_pointer(i0, 44178);
      i4 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i4, OOC_UINT32, 44178))*2);
      switch (i1) {
      case (OOC_CHAR16)65534:
        XML_Parser__ParserDesc_ParseDocument_NextBlock();
        goto l30;
      case (OOC_CHAR8)' ':
        i0 = _check_pointer(i0, 44258);
        i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
        *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 44258))*2) = (OOC_CHAR8)' ';
        cpos = (i3+1);
        goto l30;
      case (OOC_CHAR8)'\012':
        i1 = (OOC_INT32)p;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44323))+36);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44327))+20);
        i1 = i0==i1;
        if (i1) goto l11;
        i1 = _check_pointer(i0, 44548);
        i4 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
        i0 = _check_pointer(i0, 44563);
        i5 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
        i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i5, OOC_UINT32, 44563))*2);
        *(OOC_UINT16*)(i1+(_check_index(i2, i4, OOC_UINT32, 44548))*2) = i0;
        cpos = (i3+1);
        goto l30;
l11:
        i0 = _check_pointer(i0, 44356);
        i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
        i4 = eolReplacement;
        *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 44356))*2) = i4;
        cpos = (i3+1);
        XML_Parser__ParserDesc_ParseDocument_EndOfLine();
        goto l30;
      case (OOC_CHAR8)'\015':
        i1 = (OOC_INT32)p;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44633))+36);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44637))+20);
        i1 = i0==i1;
        if (i1) goto l16;
        i1 = _check_pointer(i0, 45061);
        i4 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
        i0 = _check_pointer(i0, 45076);
        i5 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
        i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i5, OOC_UINT32, 45076))*2);
        *(OOC_UINT16*)(i1+(_check_index(i2, i4, OOC_UINT32, 45061))*2) = i0;
        cpos = (i3+1);
        goto l30;
l16:
        i1 = _check_pointer(i0, 44666);
        i4 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
        i5 = eolReplacement;
        *(OOC_UINT16*)(i1+(_check_index(i2, i4, OOC_UINT32, 44666))*2) = i5;
        i1 = i3+1;
        cpos = i1;
        i0 = _check_pointer(i0, 44733);
        i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
        i0 = *(OOC_UINT16*)(i0+(_check_index(i1, i2, OOC_UINT32, 44733))*2);
        i0 = i0==(OOC_CHAR16)65534;
        if (!i0) goto l19;
        XML_Parser__ParserDesc_ParseDocument_NextBlock();
l19:
        i0 = (OOC_INT32)chars;
        i0 = _check_pointer(i0, 44821);
        i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
        i2 = cpos;
        i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 44821))*2);
        i0 = i0==(OOC_CHAR8)'\012';
        if (!i0) goto l22;
        i0 = cdelta;
        cpos = (i2+1);
        cdelta = (i0+1);
l22:
        XML_Parser__ParserDesc_ParseDocument_EndOfLine();
        goto l30;
      case (OOC_CHAR8)'\011':
        i1 = eolReplacement;
        i1 = i1==(OOC_CHAR8)' ';
        if (i1) goto l27;
        i0 = _check_pointer(i0, 45221);
        i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
        *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 45221))*2) = (OOC_CHAR8)'\011';
        goto l28;
l27:
        i0 = _check_pointer(i0, 45179);
        i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
        *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 45179))*2) = (OOC_CHAR8)' ';
l28:
        XML_Parser__ParserDesc_ParseDocument_Tab();
        i0 = cpos;
        cpos = (i0+1);
        goto l30;
      default:
        i0 = _check_pointer(i0, 45301);
        i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
        *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 45301))*2) = (OOC_CHAR16)65533;
        XML_Parser__ParserDesc_ParseDocument_Err(1);
        i0 = cpos;
        cpos = (i0+1);
        goto l30;
      }
l30:
      return;
      ;
    }

    
    XML_UnicodeBuffer__CharArray XML_Parser__ParserDesc_ParseDocument_String(OOC_INT8 type) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      struct XML_Locator__Position pos;
      OOC_CHAR16 endChar;
      XML_UnicodeBuffer__CharArray string;
      auto void XML_Parser__ParserDesc_ParseDocument_String_NormalizeWhitespace();
        
        void XML_Parser__ParserDesc_ParseDocument_String_NormalizeWhitespace() {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10;
          OOC_INT32 i;
          OOC_INT32 delta;

          i0 = cdelta;
          i1 = cpos;
          i2 = i1-i0;
          i3 = cstart;
          i4 = i3!=i2;
          if (i4) goto l3;
          i3=OOC_FALSE;
          goto l5;
l3:
          i4 = (OOC_INT32)chars;
          i4 = _check_pointer(i4, 45908);
          i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
          i3 = *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 45908))*2);
          i3 = i3<=(OOC_CHAR8)' ';
          
l5:
          if (!i3) goto l16;
          i3 = (OOC_INT32)chars;
l7_loop:
          i4 = cstart;
          i4 = i4+1;
          i5 = i4!=i2;
          cstart = i4;
          if (i5) goto l10;
          i4=OOC_FALSE;
          goto l12;
l10:
          i5 = _check_pointer(i3, 45908);
          i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
          i4 = *(OOC_UINT16*)(i5+(_check_index(i4, i6, OOC_UINT32, 45908))*2);
          i4 = i4<=(OOC_CHAR8)' ';
          
l12:
          if (i4) goto l7_loop;
l16:
          i3 = cstart;
          i = i3;
          i4 = i3!=i2;
          delta = 0;
          if (i4) goto l19;
          i2=0;
          goto l46;
l19:
          i4 = (OOC_INT32)chars;
          i5=i3;i6=0;
l20_loop:
          i7 = _check_pointer(i4, 46051);
          i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
          i7 = *(OOC_UINT16*)(i7+(_check_index(i5, i8, OOC_UINT32, 46051))*2);
          i7 = i7<=(OOC_CHAR8)' ';
          if (i7) goto l23;
          i7 = _check_pointer(i4, 46313);
          i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
          i9 = _check_pointer(i4, 46331);
          i10 = OOC_ARRAY_LENGTH(i9, (OOC_INT32)0);
          i9 = *(OOC_UINT16*)(i9+(_check_index(i5, i10, OOC_UINT32, 46331))*2);
          *(OOC_UINT16*)(i7+(_check_index((i5-i6), i8, OOC_UINT32, 46313))*2) = i9;
          {register OOC_INT32 h0=i5;i5=i6;i6=h0;}
          goto l41;
l23:
          i7 = _check_pointer(i4, 46149);
          i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
          i9 = (i5+1)!=i2;
          *(OOC_UINT16*)(i7+(_check_index((i5-i6), i8, OOC_UINT32, 46149))*2) = (OOC_CHAR8)' ';
          if (i9) goto l26;
          i7=OOC_FALSE;
          goto l28;
l26:
          i7 = _check_pointer(i4, 46213);
          i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
          i7 = *(OOC_UINT16*)(i7+(_check_index((i5+1), i8, OOC_UINT32, 46213))*2);
          i7 = i7<=(OOC_CHAR8)' ';
          
l28:
          if (i7) goto l31_loop;
          {register OOC_INT32 h0=i5;i5=i6;i6=h0;}
          goto l41;
l31_loop:
          i5 = i5+1;
          i = i5;
          i6 = i6+1;
          i7 = (i5+1)!=i2;
          delta = i6;
          if (i7) goto l34;
          i7=OOC_FALSE;
          goto l36;
l34:
          i7 = _check_pointer(i4, 46213);
          i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
          i7 = *(OOC_UINT16*)(i7+(_check_index((i5+1), i8, OOC_UINT32, 46213))*2);
          i7 = i7<=(OOC_CHAR8)' ';
          
l36:
          if (i7) goto l31_loop;
l39:
          {register OOC_INT32 h0=i5;i5=i6;i6=h0;}
l41:
          i6 = i6+1;
          i7 = i6!=i2;
          i = i6;
          if (!i7) goto l45;
          {register OOC_INT32 h0=i5;i5=i6;i6=h0;}
          goto l20_loop;
l45:
          i2=i5;
l46:
          i0 = i0+i2;
          i1 = i1-i0;
          i2 = i1!=i3;
          cdelta = i0;
          if (i2) goto l49;
          i1=OOC_FALSE;
          goto l51;
l49:
          i2 = (OOC_INT32)chars;
          i2 = _check_pointer(i2, 46525);
          i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
          i1 = *(OOC_UINT16*)(i2+(_check_index((i1-1), i3, OOC_UINT32, 46525))*2);
          i1 = i1==(OOC_CHAR8)' ';
          
l51:
          if (!i1) goto l53;
          cdelta = (i0+1);
l53:
          return;
          ;
        }


      i0 = (OOC_INT32)chars;
      i1 = _check_pointer(i0, 46649);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 46649))*2);
      i1 = i1==(OOC_CHAR8)'\047';
      if (i1) goto l3;
      i0 = _check_pointer(i0, 46672);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i1, OOC_UINT32, 46672))*2);
      i0 = i0==(OOC_CHAR8)'"';
      
      goto l5;
l3:
      i0=OOC_TRUE;
l5:
      if (i0) goto l7;
      XML_Parser__ParserDesc_ParseDocument_Err(16);
      i0 = cpos;
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_GetString(i0, i0);
      return (XML_UnicodeBuffer__CharArray)i0;
      goto l59;
l7:
      i0 = (OOC_INT32)&_td_XML_Locator__Position;
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(OOC_INT32)&pos, (RT0__Struct)i0);
      i1 = (OOC_INT32)chars;
      i1 = _check_pointer(i1, 46744);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 46744))*2);
      endChar = i1;
      i1 = i3+1;
      cpos = i1;
      cstart = i1;
      cdelta = 0;
l8_loop:
      i1 = (OOC_INT32)chars;
      i2 = _check_pointer(i1, 46842);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i4 = cpos;
      i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 46842))*2);
      switch (i2) {
      case (OOC_CHAR8)'\000' ... (OOC_CHAR8)'\037':
      case (OOC_CHAR16)65534:
        i2 = type;
        i2 = i2==2;
        if (i2) goto l13;
        i1=OOC_FALSE;
        goto l15;
l13:
        i1 = _check_pointer(i1, 46943);
        i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
        i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 46943))*2);
        i1 = i1==(OOC_CHAR8)'\011';
        
l15:
        if (i1) goto l16;
        goto l17;
l16:
        XML_Parser__ParserDesc_ParseDocument_Err(20);
l17:
        XML_Parser__ParserDesc_ParseDocument_ControlChar((OOC_CHAR8)'\012');
        goto l8_loop;
      case (OOC_CHAR16)65535:
        XML_Parser__ParserDesc_ParseDocument_ErrPos(6, (void*)(OOC_INT32)&pos, (RT0__Struct)i0);
        i1 = cpos;
        i2 = cdelta;
        i3 = cstart;
        i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_GetString(i3, (i1-i2));
        return (XML_UnicodeBuffer__CharArray)i1;
        goto l8_loop;
      default:
        i2 = _check_pointer(i1, 47216);
        i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 47216))*2);
        i3 = endChar;
        i2 = i2==i3;
        if (i2) goto l37;
        i2 = type;
        switch (i2) {
        case 2:
          i1 = _check_pointer(i1, 48020);
          i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
          i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 48020))*2);
          i1 = XML_Parser__IsPubidChar(i1);
          i1 = !i1;
          if (i1) goto l25;
          goto l36;
l25:
          XML_Parser__ParserDesc_ParseDocument_Err(20);
          goto l36;
        case 4:
          i1 = _check_pointer(i1, 48166);
          i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
          i3 = cstart;
          i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 48166))*2);
          i1 = XML_Parser__IsEncNameChar(i1, (i4==i3));
          i1 = !i1;
          if (i1) goto l29;
          goto l36;
l29:
          XML_Parser__ParserDesc_ParseDocument_Err(21);
          goto l36;
        case 3:
          i1 = _check_pointer(i1, 48331);
          i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
          i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 48331))*2);
          i1 = XML_Parser__IsVersionNumChar(i1);
          i1 = !i1;
          if (i1) goto l33;
          goto l36;
l33:
          XML_Parser__ParserDesc_ParseDocument_Err(22);
          goto l36;
        default:
          goto l36;
        }
l36:
        i1 = (OOC_INT32)chars;
        i2 = _check_pointer(i1, 48480);
        i3 = cdelta;
        i4 = cpos;
        i5 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
        i1 = _check_pointer(i1, 48502);
        i6 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
        i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i6, OOC_UINT32, 48502))*2);
        *(OOC_UINT16*)(i2+(_check_index((i4-i3), i5, OOC_UINT32, 48480))*2) = i1;
        cpos = (i4+1);
        goto l8_loop;
l37:
        i1 = type;
        i1 = i1==2;
        if (!i1) goto l40;
        XML_Parser__ParserDesc_ParseDocument_String_NormalizeWhitespace();
l40:
        i1 = cpos;
        i2 = cdelta;
        i3 = cstart;
        i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_GetString(i3, (i1-i2));
        string = (XML_UnicodeBuffer__CharArray)i1;
        i2 = endChar;
        XML_Parser__ParserDesc_ParseDocument_CheckChar(i2);
        i2 = type;
        switch (i2) {
        case 5:
          i2 = (
          _cmp16((const void*)(_check_pointer(i1, 47546)),(const void*)((OOC_CHAR16[]){121,101,115,0})))!=(OOC_INT32)0;
          if (i2) goto l45;
          i2=OOC_FALSE;
          goto l47;
l45:
          i2 = (
          _cmp16((const void*)(_check_pointer(i1, 47566)),(const void*)((OOC_CHAR16[]){110,111,0})))!=(OOC_INT32)0;
          
l47:
          if (i2) goto l48;
          goto l55;
l48:
          XML_Parser__ParserDesc_ParseDocument_ErrPos(24, (void*)(OOC_INT32)&pos, (RT0__Struct)i0);
          goto l55;
        case 4:
        case 3:
          i2 = (
          _cmp16((const void*)(_check_pointer(i1, 47720)),(const void*)((OOC_CHAR16[]){0})))==(OOC_INT32)0;
          if (i2) goto l52;
          goto l55;
l52:
          XML_Parser__ParserDesc_ParseDocument_ErrPos(23, (void*)(OOC_INT32)&pos, (RT0__Struct)i0);
          goto l55;
        default:
          goto l55;
        }
l55:
        return (XML_UnicodeBuffer__CharArray)i1;
        goto l8_loop;
      }
l59:
      _failed_function(45426); return 0;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_Eq() {

      XML_Parser__ParserDesc_ParseDocument_OptS(OOC_TRUE);
      XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'=');
      XML_Parser__ParserDesc_ParseDocument_OptS(OOC_TRUE);
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_XMLDecl(XML_DTD__ExternalEntity entity) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
      XML_UnicodeBuffer__CharArray string;
      OOC_CHAR8 *encoding;
      OOC_INT32 i;
      XML_UnicodeCodec__Factory codecFactory;

      i0 = cpos;
      i1 = (OOC_INT32)entity;
      _assert((i0==0), 127, 49049);
      _assert((i1!=(OOC_INT32)0), 127, 49074);
      i0 = i0+5;
      cpos = i0;
      i2 = (OOC_INT32)chars;
      i2 = _check_pointer(i2, 49175);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i0 = *(OOC_UINT16*)(i2+(_check_index(i0, i3, OOC_UINT32, 49175))*2);
      i0 = i0!=(OOC_CHAR8)'?';
      if (!i0) goto l3;
      XML_Parser__ParserDesc_ParseDocument_S();
l3:
      i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("version", 8, 1);
      if (i0) goto l9;
      i0 = *(OOC_INT8*)((_check_pointer(i1, 49447))+8);
      i0 = i0==5;
      if (!i0) goto l13;
      XML_Parser__ParserDesc_ParseDocument_Err(111);
      goto l13;
l9:
      i0 = cpos;
      cpos = (i0+7);
      XML_Parser__ParserDesc_ParseDocument_Eq();
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_String(3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49347)))), XML_DTD__ExternalEntityDesc_SetVersion)),XML_DTD__ExternalEntityDesc_SetVersion)((XML_DTD__ExternalEntity)i1, (XML_UnicodeBuffer__CharArray)i0);
      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 49403);
      i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i3 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i2, OOC_UINT32, 49403))*2);
      i0 = i0!=(OOC_CHAR8)'?';
      if (!i0) goto l13;
      XML_Parser__ParserDesc_ParseDocument_S();
l13:
      i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("encoding", 9, 1);
      if (i0) goto l19;
      i0 = *(OOC_INT8*)((_check_pointer(i1, 50610))+8);
      i0 = i0!=5;
      if (!i0) goto l46;
      XML_Parser__ParserDesc_ParseDocument_Err(116);
      goto l46;
l19:
      i0 = cpos;
      cpos = (i0+8);
      XML_Parser__ParserDesc_ParseDocument_Eq();
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_String(4);
      string = (XML_UnicodeBuffer__CharArray)i0;
      i2 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 49720))+36);
      i2 = *(OOC_UINT8*)((_check_pointer(i2, 49724))+16);
      if (i2) goto l22;
      i2=OOC_FALSE;
      goto l24;
l22:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49753))+44);
      i2 = i2==(OOC_INT32)0;
      
l24:
      if (!i2) goto l42;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 49971)), (OOC_INT32)0);
      i2 = LongStrings__Length((void*)(_check_pointer(i0, 49971)), i2);
      i2 = (OOC_INT32)RT0__NewObject(_td_XML_Parser__48954.baseTypes[0], (i2+1));
      encoding = (void*)i2;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 50015)), (OOC_INT32)0);
      i3 = i3-1;
      i4 = 0<=i3;
      i = 0;
      if (!i4) goto l37;
      i4=0;
l28_loop:
      i5 = _check_pointer(i0, 50045);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i5 = *(OOC_UINT16*)(i5+(_check_index(i4, i6, OOC_UINT32, 50045))*2);
      i5 = i5>(OOC_CHAR8)'\377';
      if (i5) goto l31;
      i5 = _check_pointer(i2, 50140);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i7 = _check_pointer(i0, 50160);
      i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
      i7 = *(OOC_UINT16*)(i7+(_check_index(i4, i8, OOC_UINT32, 50160))*2);
      *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 50140))) = i7;
      goto l32;
l31:
      i5 = _check_pointer(i2, 50090);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 50090))) = (OOC_CHAR8)'?';
l32:
      i4 = i4+1;
      i5 = i4<=i3;
      i = i4;
      if (i5) goto l28_loop;
l37:
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 50248)), (OOC_INT32)0);
      i2 = (OOC_INT32)XML_UnicodeCodec__GetFactory((void*)(_check_pointer(i2, 50248)), i3);
      codecFactory = (XML_UnicodeCodec__Factory)i2;
      i3 = i2==(OOC_INT32)0;
      if (i3) goto l40;
      i3 = (OOC_INT32)p;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 50362))+36);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 50362))+36);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 50366)))), XML_UnicodeBuffer__InputDesc_SetCodec)),XML_UnicodeBuffer__InputDesc_SetCodec)((XML_UnicodeBuffer__Input)i3, (XML_UnicodeCodec__Factory)i2, OOC_FALSE);
      XML_Parser__ParserDesc_ParseDocument_ResetLocator();
      XML_Parser__ParserDesc_ParseDocument_XMLDecl((XML_DTD__ExternalEntity)i1);
      return;
      goto l42;
l40:
      XML_Parser__ParserDesc_ParseDocument_Err(29);
l42:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50525)))), XML_DTD__ExternalEntityDesc_SetEncoding)),XML_DTD__ExternalEntityDesc_SetEncoding)((XML_DTD__ExternalEntity)i1, (XML_UnicodeBuffer__CharArray)i0);
      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 50566);
      i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i3 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i2, OOC_UINT32, 50566))*2);
      i0 = i0!=(OOC_CHAR8)'?';
      if (!i0) goto l46;
      XML_Parser__ParserDesc_ParseDocument_S();
l46:
      i0 = *(OOC_INT8*)((_check_pointer(i1, 50706))+8);
      i0 = i0==5;
      if (i0) goto l49;
      i0=OOC_FALSE;
      goto l51;
l49:
      i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("standalone", 11, 1);
      
l51:
      if (!i0) goto l57;
      i0 = cpos;
      cpos = (i0+10);
      XML_Parser__ParserDesc_ParseDocument_Eq();
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_String(5);
      string = (XML_UnicodeBuffer__CharArray)i0;
      i0 = (
      _cmp16((const void*)(_check_pointer(i0, 50936)),(const void*)((OOC_CHAR16[]){121,101,115,0})))==(OOC_INT32)0;
      if (i0) goto l55;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51033)))), XML_DTD__ExternalEntityDesc_SetStandalone)),XML_DTD__ExternalEntityDesc_SetStandalone)((XML_DTD__ExternalEntity)i1, 1);
      goto l57;
l55:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50968)))), XML_DTD__ExternalEntityDesc_SetStandalone)),XML_DTD__ExternalEntityDesc_SetStandalone)((XML_DTD__ExternalEntity)i1, 0);
l57:
      XML_Parser__ParserDesc_ParseDocument_OptS(OOC_TRUE);
      i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("?>", 3, 0);
      if (i0) goto l60;
      XML_Parser__ParserDesc_ParseDocument_Err(114);
      goto l61;
l60:
      i0 = cpos;
      cpos = (i0+2);
l61:
      return;
      ;
    }

    
    XML_DTD__Entity XML_Parser__ParserDesc_ParseDocument_CurrentEntity() {
      register OOC_INT32 i0,i1,i2,i3;

      i0 = (OOC_INT32)p;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 51309))+88);
      i1 = i1==0;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51435))+84);
      i1 = _check_pointer(i1, 51444);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 51446))+88);
      i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index((i2-1), i3, OOC_UINT32, 51444))*28))+20);
      _assert((i1!=(OOC_INT32)0), 127, 51426);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51494))+84);
      i1 = _check_pointer(i1, 51503);
      i0 = *(OOC_INT32*)((_check_pointer(i0, 51505))+88);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index((i0-1), i2, OOC_UINT32, 51503))*28))+20);
      return (XML_DTD__Entity)i0;
      goto l4;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51349))+52);
      _assert((i1!=(OOC_INT32)0), 127, 51340);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51390))+52);
      return (XML_DTD__Entity)i0;
l4:
      _failed_function(51258); return 0;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity(XML_DTD__Entity reference) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)p;
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 51641))+62);
      if (i0) goto l3;
      i0=OOC_FALSE;
      goto l5;
l3:
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_CurrentEntity();
      i1 = (OOC_INT32)reference;
      i0 = i1!=i0;
      
l5:
      if (!i0) goto l7;
      XML_Parser__ParserDesc_ParseDocument_ErrNF(306);
l7:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_PI() {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
      XML_DTD__Entity currentEntity;
      XML_UnicodeBuffer__CharArray target;
      auto OOC_CHAR8 XML_Parser__ParserDesc_ParseDocument_PI_IsReserved(const OOC_CHAR16 name__ref[], OOC_LEN name_0d);
        
        OOC_CHAR8 XML_Parser__ParserDesc_ParseDocument_PI_IsReserved(const OOC_CHAR16 name__ref[], OOC_LEN name_0d) {
          register OOC_INT32 i0;
          OOC_ALLOCATE_VPAR(name,OOC_CHAR16 ,name_0d)

          OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR16 ,(name_0d*2))
          i0 = *(OOC_UINT16*)((OOC_INT32)name+(_check_index(0, name_0d, OOC_UINT8, 51983))*2);
          i0 = (_cap(i0))==(OOC_CHAR8)'X';
          if (i0) goto l3;
          i0=OOC_FALSE;
          goto l5;
l3:
          i0 = *(OOC_UINT16*)((OOC_INT32)name+(_check_index(1, name_0d, OOC_UINT8, 52022))*2);
          i0 = (_cap(i0))==(OOC_CHAR8)'M';
          
l5:
          if (i0) goto l7;
          i0=OOC_FALSE;
          goto l8;
l7:
          i0 = *(OOC_UINT16*)((OOC_INT32)name+(_check_index(2, name_0d, OOC_UINT8, 52061))*2);
          i0 = (_cap(i0))==(OOC_CHAR8)'L';
          
l8:
          return i0;
          ;
        }


      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52132))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52132))+4);
      i0 = _check_pointer(i0, 52135);
      i0 = (OOC_INT32)&_td_XML_Locator__Position;
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i1, 52135)), (RT0__Struct)i0);
      i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_CurrentEntity();
      i2 = cpos;
      currentEntity = (XML_DTD__Entity)i1;
      cpos = (i2+2);
      i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_TRUE);
      target = (XML_UnicodeBuffer__CharArray)i1;
      i2 = (
      _cmp16((const void*)(_check_pointer(i1, 52286)),(const void*)((OOC_CHAR16[]){120,109,108,0})))==(OOC_INT32)0;
      if (i2) goto l6;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 52378)), (OOC_INT32)0);
      i1 = XML_Parser__ParserDesc_ParseDocument_PI_IsReserved((void*)(_check_pointer(i1, 52378)), i2);
      if (!i1) goto l7;
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52421))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52421))+4);
      i1 = _check_pointer(i1, 52424);
      XML_Parser__ParserDesc_ParseDocument_ErrPos(26, (void*)(_check_pointer(i2, 52424)), (RT0__Struct)i0);
      goto l7;
l6:
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52342))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52342))+4);
      i1 = _check_pointer(i1, 52345);
      XML_Parser__ParserDesc_ParseDocument_ErrPos(25, (void*)(_check_pointer(i2, 52345)), (RT0__Struct)i0);
l7:
      i1 = XML_Parser__ParserDesc_ParseDocument_LookingAt("?>", 3, 0);
      if (i1) goto l22;
      XML_Parser__ParserDesc_ParseDocument_S();
      i1 = cpos;
      cstart = i1;
      cdelta = 0;
      i1 = (OOC_INT32)target;
      i2 = (OOC_INT32)currentEntity;
l10_loop:
      i3 = (OOC_INT32)chars;
      i4 = _check_pointer(i3, 52753);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i6 = cpos;
      i4 = *(OOC_UINT16*)(i4+(_check_index(i6, i5, OOC_UINT32, 52753))*2);
      switch (i4) {
      case (OOC_CHAR8)'\000' ... (OOC_CHAR8)'\037':
      case (OOC_CHAR16)65534:
        XML_Parser__ParserDesc_ParseDocument_ControlChar((OOC_CHAR8)'\012');
        goto l10_loop;
      case (OOC_CHAR16)65535:
        i1 = (OOC_INT32)p;
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52902))+4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52902))+4);
        i1 = _check_pointer(i1, 52905);
        XML_Parser__ParserDesc_ParseDocument_ErrPos(7, (void*)(_check_pointer(i2, 52905)), (RT0__Struct)i0);
        goto l23;
      case (OOC_CHAR8)'?':
        i3 = XML_Parser__ParserDesc_ParseDocument_LookingAt("?>", 3, 0);
        if (i3) goto l18;
        i3 = (OOC_INT32)chars;
        i4 = _check_pointer(i3, 53353);
        i5 = cdelta;
        i6 = cpos;
        i7 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
        i3 = _check_pointer(i3, 53375);
        i8 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
        i3 = *(OOC_UINT16*)(i3+(_check_index(i6, i8, OOC_UINT32, 53375))*2);
        *(OOC_UINT16*)(i4+(_check_index((i6-i5), i7, OOC_UINT32, 53353))*2) = i3;
        i3 = i6+1;
        cpos = i3;
        
        goto l10_loop;
l18:
        XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i2);
        i0 = (OOC_INT32)p;
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53060))+44);
        i3 = (OOC_INT32)chars;
        i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53245))+56);
        i5 = cpos;
        i6 = cdelta;
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53060))+44);
        i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 53257))+36);
        i7 = OOC_ARRAY_LENGTH((_check_pointer(i3, 53107)), (OOC_INT32)0);
        i8 = cstart;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 53069)))), XML_Builder__BuilderDesc_ProcessingInstruction)),XML_Builder__BuilderDesc_ProcessingInstruction)((XML_Builder__Builder)i0, (XML_UnicodeBuffer__CharArray)i1, (void*)(_check_pointer(i3, 53107)), i7, i8, (i5-i6), (URI__URI)i4);
        i0 = cpos;
        i0 = i0+2;
        cpos = i0;
        goto l23;
      default:
        i4 = _check_pointer(i3, 53442);
        i5 = cdelta;
        i7 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
        i3 = _check_pointer(i3, 53464);
        i8 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
        i3 = *(OOC_UINT16*)(i3+(_check_index(i6, i8, OOC_UINT32, 53464))*2);
        *(OOC_UINT16*)(i4+(_check_index((i6-i5), i7, OOC_UINT32, 53442))*2) = i3;
        cpos = (i6+1);
        goto l10_loop;
      }
l22:
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52500))+44);
      i2 = (OOC_INT32)chars;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52615))+56);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 52627))+36);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52500))+44);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 52547)), (OOC_INT32)0);
      i5 = (OOC_INT32)target;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52509)))), XML_Builder__BuilderDesc_ProcessingInstruction)),XML_Builder__BuilderDesc_ProcessingInstruction)((XML_Builder__Builder)i0, (XML_UnicodeBuffer__CharArray)i5, (void*)(_check_pointer(i2, 52547)), i4, 0, 0, (URI__URI)i3);
      i0 = cpos;
      cpos = (i0+2);
l23:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_Comment() {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      XML_DTD__Entity currentEntity;

      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53657))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53657))+4);
      i0 = _check_pointer(i0, 53660);
      i0 = (OOC_INT32)&_td_XML_Locator__Position;
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i1, 53660)), (RT0__Struct)i0);
      i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_CurrentEntity();
      i2 = cpos;
      i2 = i2+4;
      currentEntity = (XML_DTD__Entity)i1;
      cpos = i2;
      cstart = i2;
      cdelta = 0;
l1_loop:
      i2 = (OOC_INT32)chars;
      i3 = _check_pointer(i2, 53832);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i5 = cpos;
      i3 = *(OOC_UINT16*)(i3+(_check_index(i5, i4, OOC_UINT32, 53832))*2);
      switch (i3) {
      case (OOC_CHAR8)'\000' ... (OOC_CHAR8)'\037':
      case (OOC_CHAR16)65534:
        XML_Parser__ParserDesc_ParseDocument_ControlChar((OOC_CHAR8)'\012');
        goto l1_loop;
      case (OOC_CHAR16)65535:
        i1 = (OOC_INT32)p;
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 53978))+4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 53978))+4);
        i1 = _check_pointer(i1, 53981);
        XML_Parser__ParserDesc_ParseDocument_ErrPos(5, (void*)(_check_pointer(i2, 53981)), (RT0__Struct)i0);
        goto l15;
      case (OOC_CHAR8)'-':
        i2 = XML_Parser__ParserDesc_ParseDocument_LookingAt("-->", 4, 0);
        if (i2) goto l12;
        i2 = XML_Parser__ParserDesc_ParseDocument_LookingAt("--", 3, 0);
        if (i2) goto l9;
        goto l11;
l9:
        XML_Parser__ParserDesc_ParseDocument_Err(4);
l11:
        i2 = (OOC_INT32)chars;
        i3 = _check_pointer(i2, 54360);
        i4 = cpos;
        i5 = cdelta;
        i6 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
        i2 = _check_pointer(i2, 54382);
        i7 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i7, OOC_UINT32, 54382))*2);
        *(OOC_UINT16*)(i3+(_check_index((i4-i5), i6, OOC_UINT32, 54360))*2) = i2;
        cpos = (i4+1);
        goto l1_loop;
l12:
        XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i1);
        i0 = (OOC_INT32)p;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54127))+44);
        i2 = (OOC_INT32)chars;
        i3 = cpos;
        i4 = cdelta;
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54127))+44);
        i5 = OOC_ARRAY_LENGTH((_check_pointer(i2, 54152)), (OOC_INT32)0);
        i6 = cstart;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 54136)))), XML_Builder__BuilderDesc_Comment)),XML_Builder__BuilderDesc_Comment)((XML_Builder__Builder)i0, (void*)(_check_pointer(i2, 54152)), i5, i6, (i3-i4));
        i0 = cpos;
        cpos = (i0+3);
        goto l15;
      default:
        i3 = _check_pointer(i2, 54430);
        i4 = cdelta;
        i6 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
        i2 = _check_pointer(i2, 54452);
        i7 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i7, OOC_UINT32, 54452))*2);
        *(OOC_UINT16*)(i3+(_check_index((i5-i4), i6, OOC_UINT32, 54430))*2) = i2;
        cpos = (i5+1);
        goto l1_loop;
      }
l15:
      XML_Parser__ParserDesc_ParseDocument_DiscardPreviousInput();
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_CDSect() {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;

      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54627))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54627))+4);
      i0 = _check_pointer(i0, 54630);
      i0 = (OOC_INT32)&_td_XML_Locator__Position;
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i1, 54630)), (RT0__Struct)i0);
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54641))+44);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54641))+44);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 54650)))), XML_Builder__BuilderDesc_StartCDATA)),XML_Builder__BuilderDesc_StartCDATA)((XML_Builder__Builder)i1);
      i1 = cpos;
      i1 = i1+9;
      cpos = i1;
      cstart = i1;
      cdelta = 0;
l1_loop:
      i1 = (OOC_INT32)chars;
      i2 = _check_pointer(i1, 54823);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i4 = cpos;
      i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 54823))*2);
      switch (i2) {
      case (OOC_CHAR8)'\000' ... (OOC_CHAR8)'\037':
      case (OOC_CHAR16)65534:
        XML_Parser__ParserDesc_ParseDocument_ControlChar((OOC_CHAR8)'\012');
        goto l1_loop;
      case (OOC_CHAR16)65535:
        i1 = (OOC_INT32)p;
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54967))+4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54967))+4);
        i1 = _check_pointer(i1, 54970);
        XML_Parser__ParserDesc_ParseDocument_ErrPos(8, (void*)(_check_pointer(i2, 54970)), (RT0__Struct)i0);
        goto l12;
      case (OOC_CHAR8)']':
        i1 = XML_Parser__ParserDesc_ParseDocument_LookingAt("]]>", 4, 0);
        if (i1) goto l9;
        i1 = (OOC_INT32)chars;
        i2 = _check_pointer(i1, 55399);
        i3 = cdelta;
        i4 = cpos;
        i5 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
        i1 = _check_pointer(i1, 55421);
        i6 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
        i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i6, OOC_UINT32, 55421))*2);
        *(OOC_UINT16*)(i2+(_check_index((i4-i3), i5, OOC_UINT32, 55399))*2) = i1;
        cpos = (i4+1);
        goto l1_loop;
l9:
        i1 = (OOC_INT32)p;
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55079))+4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55079))+4);
        i1 = _check_pointer(i1, 55082);
        XML_Parser__ParserDesc_ParseDocument_DecLength((void*)(_check_pointer(i2, 55082)), (RT0__Struct)i0, -9);
        i1 = (OOC_INT32)p;
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55103))+44);
        i3 = (OOC_INT32)chars;
        i4 = cpos;
        i5 = cdelta;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55103))+44);
        i6 = OOC_ARRAY_LENGTH((_check_pointer(i3, 55131)), (OOC_INT32)0);
        i7 = cstart;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 55112)))), XML_Builder__BuilderDesc_Characters)),XML_Builder__BuilderDesc_Characters)((XML_Builder__Builder)i1, (void*)(_check_pointer(i3, 55131)), i6, i7, (i4-i5), 1);
        i1 = cpos;
        cpos = (i1+3);
        i1 = (OOC_INT32)p;
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55287))+4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55287))+4);
        i1 = _check_pointer(i1, 55290);
        XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i2, 55290)), (RT0__Struct)i0);
        i0 = (OOC_INT32)p;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55307))+44);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55307))+44);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55316)))), XML_Builder__BuilderDesc_EndCDATA)),XML_Builder__BuilderDesc_EndCDATA)((XML_Builder__Builder)i0);
        goto l12;
      default:
        i2 = _check_pointer(i1, 55482);
        i3 = cdelta;
        i5 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
        i1 = _check_pointer(i1, 55504);
        i6 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
        i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i6, OOC_UINT32, 55504))*2);
        *(OOC_UINT16*)(i2+(_check_index((i4-i3), i5, OOC_UINT32, 55482))*2) = i1;
        cpos = (i4+1);
        goto l1_loop;
      }
l12:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_CharRef() {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      struct XML_Locator__Position pos;
      OOC_INT32 cval;
      auto OOC_INT32 XML_Parser__ParserDesc_ParseDocument_CharRef_ToUnicode(OOC_INT32 cval);
        
        OOC_INT32 XML_Parser__ParserDesc_ParseDocument_CharRef_ToUnicode(OOC_INT32 cval) {
          register OOC_INT32 i0,i1,i2,i3,i4;

          i0 = cval;
          i1 = i0<=65535;
          if (i1) goto l3;
          i0 = i0-65536;
          cval = i0;
          i1 = (OOC_INT32)chars;
          i2 = _check_pointer(i1, 56244);
          i3 = cdelta;
          i4 = cpos;
          i3 = i4-i3;
          i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
          *(OOC_UINT16*)(i2+(_check_index(i3, i4, OOC_UINT32, 56244))*2) = (55296+(i0>>10));
          i1 = _check_pointer(i1, 56310);
          i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
          *(OOC_UINT16*)(i1+(_check_index((i3+1), i2, OOC_UINT32, 56310))*2) = (56320+(_mod(i0,1024)));
          return 2;
          goto l4;
l3:
          i1 = (OOC_INT32)chars;
          i1 = _check_pointer(i1, 56134);
          i2 = cdelta;
          i3 = cpos;
          i4 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
          *(OOC_UINT16*)(i1+(_check_index((i3-i2), i4, OOC_UINT32, 56134))*2) = i0;
          return 1;
l4:
          _failed_function(56034); return 0;
          ;
        }


      i0 = (OOC_INT32)&_td_XML_Locator__Position;
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(OOC_INT32)&pos, (RT0__Struct)i0);
      cval = 0;
      i1 = XML_Parser__ParserDesc_ParseDocument_LookingAt("&#x", 4, 0);
      if (i1) goto l15;
      i1 = cpos;
      i2 = cdelta;
      cpos = (i1+2);
      cdelta = (i2+2);
      i1=0;
l3_loop:
      i2 = (OOC_INT32)chars;
      i3 = _check_pointer(i2, 57276);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i5 = cpos;
      i3 = *(OOC_UINT16*)(i3+(_check_index(i5, i4, OOC_UINT32, 57276))*2);
      switch (i3) {
      case (OOC_CHAR16)65534:
        XML_Parser__ParserDesc_ParseDocument_NextBlock();
        
        goto l3_loop;
      case (OOC_CHAR8)';':
      case (OOC_CHAR16)65535:
        
        goto l33;
      case (OOC_CHAR8)'0' ... (OOC_CHAR8)'9':
        i3 = i1<=131072;
        if (i3) goto l10;
        goto l11;
l10:
        i2 = _check_pointer(i2, 57493);
        i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i3, OOC_UINT32, 57493))*2);
        i1 = ((i1*10)+i2)-48;
        cval = i1;
        
l11:
        i2 = cdelta;
        cpos = (i5+1);
        cdelta = (i2+1);
        
        goto l3_loop;
      default:
        XML_Parser__ParserDesc_ParseDocument_Err(14);
        cval = 32;
        i1=32;
        goto l33;
      }
l15:
      i1 = cpos;
      i2 = cdelta;
      cpos = (i1+3);
      cdelta = (i2+3);
      i1=0;
l16_loop:
      i2 = (OOC_INT32)chars;
      i3 = _check_pointer(i2, 56594);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i5 = cpos;
      i3 = *(OOC_UINT16*)(i3+(_check_index(i5, i4, OOC_UINT32, 56594))*2);
      switch (i3) {
      case (OOC_CHAR16)65534:
        XML_Parser__ParserDesc_ParseDocument_NextBlock();
        
        goto l16_loop;
      case (OOC_CHAR8)';':
      case (OOC_CHAR16)65535:
        
        goto l33;
      case (OOC_CHAR8)'0' ... (OOC_CHAR8)'9':
        i3 = i1<=131072;
        if (i3) goto l23;
        goto l24;
l23:
        i2 = _check_pointer(i2, 56811);
        i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i3, OOC_UINT32, 56811))*2);
        i1 = ((i1*16)+i2)-48;
        cval = i1;
        
l24:
        i2 = cdelta;
        cpos = (i5+1);
        cdelta = (i2+1);
        
        goto l16_loop;
      case (OOC_CHAR8)'a' ... (OOC_CHAR8)'f':
      case (OOC_CHAR8)'A' ... (OOC_CHAR8)'F':
        i3 = i1<=131072;
        if (i3) goto l28;
        goto l29;
l28:
        i2 = _check_pointer(i2, 57004);
        i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i3, OOC_UINT32, 57004))*2);
        i1 = ((i1*16)+((_cap(i2))+10))-65;
        cval = i1;
        
l29:
        i2 = cdelta;
        cpos = (i5+1);
        cdelta = (i2+1);
        
        goto l16_loop;
      default:
        XML_Parser__ParserDesc_ParseDocument_Err(15);
        cval = 32;
        i1=32;
        goto l33;
      }
l33:
      i2 = (OOC_INT32)chars;
      i2 = _check_pointer(i2, 57700);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i4 = cpos;
      i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 57700))*2);
      i2 = i2==(OOC_CHAR8)';';
      if (!i2) goto l36;
      i2 = cdelta;
      cdelta = (i2+1);
l36:
      XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)';');
      i2 = XML_Parser__IsCharUCS4(i1);
      i2 = !i2;
      if (i2) goto l39;
      i0=i1;
      goto l40;
l39:
      XML_Parser__ParserDesc_ParseDocument_ErrPos(17, (void*)(OOC_INT32)&pos, (RT0__Struct)i0);
      cval = 32;
      i0=32;
l40:
      i1 = cdelta;
      i0 = XML_Parser__ParserDesc_ParseDocument_CharRef_ToUnicode(i0);
      cdelta = (i1-i0);
      return;
      ;
    }

    
    XML_DTD__EntityRef XML_Parser__ParserDesc_ParseDocument_EntityRef(OOC_CHAR8 enforceDecl, OOC_CHAR8 permitExternal) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      struct XML_Locator__Position pos;
      OOC_INT32 localCStart;
      XML_UnicodeBuffer__CharArray name;
      XML_DTD__Declaration decl;
      XML_DTD__Entity entity;

      i0 = (OOC_INT32)&_td_XML_Locator__Position;
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(OOC_INT32)&pos, (RT0__Struct)i0);
      XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'&');
      i1 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 58324))+36);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 58328))+24);
      i2 = cstart;
      i1 = i1+i2;
      localCStart = i1;
      i2 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_TRUE);
      name = (XML_UnicodeBuffer__CharArray)i2;
      i3 = (OOC_INT32)p;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 58409))+36);
      i3 = *(OOC_INT32*)((_check_pointer(i3, 58413))+24);
      cstart = (i1-i3);
      XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)';');
      i1 = (OOC_INT32)dtd;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 58478))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 58478))+4);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 58491)))), XML_DTD__NamespaceDesc_Get)),XML_DTD__NamespaceDesc_Get)((XML_DTD__Namespace)i1, (XML_UnicodeBuffer__CharArray)i2);
      i3 = i1==(OOC_INT32)0;
      decl = (XML_DTD__Declaration)i1;
      if (i3) goto l15;
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58798)))), &_td_XML_DTD__EntityDesc, 58798);
      entity = (XML_DTD__Entity)i1;
      i3 = *(OOC_INT8*)((_check_pointer(i1, 58825))+8);
      i3 = i3==4;
      if (i3) goto l13;
      i3 = permitExternal;
      i3 = !i3;
      if (i3) goto l7;
      i3=OOC_FALSE;
      goto l9;
l7:
      i3 = *(OOC_INT8*)((_check_pointer(i1, 59046))+8);
      i3 = i3==2;
      
l9:
      if (i3) goto l11;
      i0=i2;
      goto l27;
l11:
      XML_Parser__ParserDesc_ParseDocument_ErrPos(305, (void*)(OOC_INT32)&pos, (RT0__Struct)i0);
      i0 = (OOC_INT32)p;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 59147))+104);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 59209)), (OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 59147))+104);
      i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 59209)), i4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 59158)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i2);
      i0 = (OOC_INT32)XML_Parser__noName;
      name = (XML_UnicodeBuffer__CharArray)i0;
      
      goto l27;
l13:
      XML_Parser__ParserDesc_ParseDocument_ErrPos(304, (void*)(OOC_INT32)&pos, (RT0__Struct)i0);
      i0 = (OOC_INT32)p;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 58915))+104);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 58977)), (OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 58915))+104);
      i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 58977)), i4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 58926)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i2);
      i0 = (OOC_INT32)XML_Parser__noName;
      name = (XML_UnicodeBuffer__CharArray)i0;
      
      goto l27;
l15:
      i1 = enforceDecl;
      entity = (XML_DTD__Entity)(OOC_INT32)0;
      if (i1) goto l18;
      i1=OOC_FALSE;
      goto l20;
l18:
      i1 = (OOC_INT32)p;
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 58581))+63);
      
l20:
      if (i1) goto l22;
      i1=OOC_FALSE;
      goto l24;
l22:
      i1 = (OOC_INT32)XML_Parser__noName;
      i1 = i2!=i1;
      
l24:
      if (!i1) goto l26;
      XML_Parser__ParserDesc_ParseDocument_ErrPos(210, (void*)(OOC_INT32)&pos, (RT0__Struct)i0);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 58682))+104);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 58744)), (OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 58682))+104);
      i3 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 58744)), i3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58693)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i3);
l26:
      i0=i2;i1=(OOC_INT32)0;
l27:
      i2 = (OOC_INT32)dtd;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 59278)))), XML_DTD__BuilderDesc_NewEntityRef)),XML_DTD__BuilderDesc_NewEntityRef)((XML_DTD__Builder)i2, (XML_UnicodeBuffer__CharArray)i0, (XML_DTD__Entity)i1);
      return (XML_DTD__EntityRef)i0;
      ;
    }

    
    XML_DTD__AttValue XML_Parser__ParserDesc_ParseDocument_AttValue(OOC_CHAR8 isAttDecl) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      XML_DTD__AttValue attValue;
      struct XML_Locator__Position pos;
      OOC_CHAR16 endChar;
      auto void XML_Parser__ParserDesc_ParseDocument_AttValue_Flush();
        
        void XML_Parser__ParserDesc_ParseDocument_AttValue_Flush() {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;

          i0 = cpos;
          i1 = cdelta;
          i0 = i0-i1;
          i1 = cstart;
          i2 = i0!=i1;
          if (!i2) goto l4;
          i2 = (OOC_INT32)attValue;
          i3 = (OOC_INT32)dtd;
          i4 = (OOC_INT32)chars;
          i5 = isAttDecl;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 59891)))), XML_DTD__BuilderDesc_NewCharacters)),XML_DTD__BuilderDesc_NewCharacters)((XML_DTD__Builder)i3, (XML_UnicodeBuffer__CharArray)i4, i1, i0, i5);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 59878)))), XML_DTD__AttValueDesc_Append)),XML_DTD__AttValueDesc_Append)((XML_DTD__AttValue)i2, (XML_DTD__Fragment)i0);
l4:
          return;
          ;
        }


      i0 = (OOC_INT32)dtd;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60014)))), XML_DTD__BuilderDesc_NewAttValue)),XML_DTD__BuilderDesc_NewAttValue)((XML_DTD__Builder)i0);
      attValue = (XML_DTD__AttValue)i0;
      i0 = (OOC_INT32)chars;
      i1 = _check_pointer(i0, 60046);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 60046))*2);
      i1 = i1==(OOC_CHAR8)'\047';
      if (i1) goto l3;
      i0 = _check_pointer(i0, 60069);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i1, OOC_UINT32, 60069))*2);
      i0 = i0==(OOC_CHAR8)'"';
      
      goto l5;
l3:
      i0=OOC_TRUE;
l5:
      if (i0) goto l7;
      XML_Parser__ParserDesc_ParseDocument_Err(108);
      XML_Parser__ParserDesc_ParseDocument_NextChar();
      goto l25;
l7:
      i0 = (OOC_INT32)&_td_XML_Locator__Position;
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(OOC_INT32)&pos, (RT0__Struct)i0);
      i1 = (OOC_INT32)chars;
      i1 = _check_pointer(i1, 60141);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 60141))*2);
      endChar = i1;
      i1 = i3+1;
      cpos = i1;
      cstart = i1;
      cdelta = 0;
l8_loop:
      i1 = (OOC_INT32)chars;
      i2 = _check_pointer(i1, 60238);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i4 = cpos;
      i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 60238))*2);
      switch (i2) {
      case (OOC_CHAR8)'\000' ... (OOC_CHAR8)'\037':
      case (OOC_CHAR16)65534:
        XML_Parser__ParserDesc_ParseDocument_ControlChar((OOC_CHAR8)' ');
        goto l8_loop;
      case (OOC_CHAR16)65535:
        XML_Parser__ParserDesc_ParseDocument_ErrPos(6, (void*)(OOC_INT32)&pos, (RT0__Struct)i0);
        XML_Parser__ParserDesc_ParseDocument_AttValue_Flush();
        goto l25;
      case (OOC_CHAR8)'<':
        XML_Parser__ParserDesc_ParseDocument_Err(13);
        i1 = (OOC_INT32)chars;
        i1 = _check_pointer(i1, 60497);
        i2 = cdelta;
        i3 = cpos;
        i4 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
        *(OOC_UINT16*)(i1+(_check_index((i3-i2), i4, OOC_UINT32, 60497))*2) = (OOC_CHAR8)' ';
        cpos = (i3+1);
        goto l8_loop;
      case (OOC_CHAR8)'&':
        i1 = XML_Parser__ParserDesc_ParseDocument_LookingAt("&#", 3, 0);
        if (!i1) goto l15;
        goto l16;
l15:
        XML_Parser__ParserDesc_ParseDocument_AttValue_Flush();
        i1 = (OOC_INT32)attValue;
        i2 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_EntityRef(OOC_TRUE, OOC_FALSE);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 60755)))), XML_DTD__AttValueDesc_Append)),XML_DTD__AttValueDesc_Append)((XML_DTD__AttValue)i1, (XML_DTD__Fragment)i2);
        i1 = cpos;
        cstart = i1;
        cdelta = 0;
        goto l8_loop;
l16:
        XML_Parser__ParserDesc_ParseDocument_CharRef();
        goto l8_loop;
      default:
        i2 = _check_pointer(i1, 60886);
        i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 60886))*2);
        i3 = endChar;
        i2 = i2==i3;
        if (i2) goto l22;
        i2 = _check_pointer(i1, 61251);
        i3 = cdelta;
        i5 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
        i1 = _check_pointer(i1, 61273);
        i6 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
        i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i6, OOC_UINT32, 61273))*2);
        *(OOC_UINT16*)(i2+(_check_index((i4-i3), i5, OOC_UINT32, 61251))*2) = i1;
        cpos = (i4+1);
        goto l8_loop;
l22:
        XML_Parser__ParserDesc_ParseDocument_AttValue_Flush();
        i0 = endChar;
        XML_Parser__ParserDesc_ParseDocument_CheckChar(i0);
        goto l25;
      }
l25:
      i0 = (OOC_INT32)attValue;
      return (XML_DTD__AttValue)i0;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_Expand(XML_DTD__AttValue attValue) {
      register OOC_INT32 i0,i1,i2,i3;
      XML_DTD__Fragment fragment;
      XML_DTD__Declaration decl;
      XML_DTD__Entity entity;
      auto XML_DTD__AttValue XML_Parser__ParserDesc_ParseDocument_Expand_ExpandAttValue(XML_DTD__Entity entity);
      auto OOC_CHAR8 XML_Parser__ParserDesc_ParseDocument_Expand_IsRecursive(XML_DTD__Entity entity);
      auto XML_DTD__AttValue XML_Parser__ParserDesc_ParseDocument_Expand_ExpandAttValue(XML_DTD__Entity entity);
        
        OOC_CHAR8 XML_Parser__ParserDesc_ParseDocument_Expand_IsRecursive(XML_DTD__Entity entity) {
          register OOC_INT32 i0,i1,i2;
          XML_DTD__Fragment fragment;

          i0 = (OOC_INT32)entity;
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 61776))+17);
          if (i1) goto l24;
          *(OOC_UINT8*)((_check_pointer(i0, 61844))+17) = OOC_TRUE;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 61885))+20);
          i1 = i1==(OOC_INT32)0;
          if (!i1) goto l5;
          i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Expand_ExpandAttValue((XML_DTD__Entity)i0);
          *(OOC_INT32*)((_check_pointer(i0, 61926))+20) = i1;
l5:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 62007))+20);
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 62017));
          fragment = (XML_DTD__Fragment)i1;
          i2 = i1!=(OOC_INT32)0;
          if (!i2) goto l23;
l8_loop:
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 62094)))), &_td_XML_DTD__EntityRefDesc);
          if (!i2) goto l18;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 62139))+8);
          i2 = i2!=(OOC_INT32)0;
          if (i2) goto l13;
          i2=OOC_FALSE;
          goto l15;
l13:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 62195))+8);
          i2 = XML_Parser__ParserDesc_ParseDocument_Expand_IsRecursive((XML_DTD__Entity)i2);
          
l15:
          if (!i2) goto l18;
          *(OOC_UINT8*)((_check_pointer(i0, 62232))+17) = OOC_FALSE;
          return OOC_TRUE;
l18:
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 62405));
          fragment = (XML_DTD__Fragment)i1;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l8_loop;
l23:
          *(OOC_UINT8*)((_check_pointer(i0, 62443))+17) = OOC_FALSE;
          return OOC_FALSE;
          goto l25;
l24:
          return OOC_TRUE;
l25:
          _failed_function(61662); return 0;
          ;
        }

        
        XML_DTD__AttValue XML_Parser__ParserDesc_ParseDocument_Expand_ExpandAttValue(XML_DTD__Entity entity) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          XML_DTD__AttValue attValue;
          auto void XML_Parser__ParserDesc_ParseDocument_Expand_ExpandAttValue_Flush();
            
            void XML_Parser__ParserDesc_ParseDocument_Expand_ExpandAttValue_Flush() {
              register OOC_INT32 i0,i1,i2,i3,i4;

              i0 = cpos;
              i1 = cstart;
              i2 = i0!=i1;
              if (!i2) goto l3;
              i2 = (OOC_INT32)attValue;
              i3 = (OOC_INT32)dtd;
              i4 = (OOC_INT32)chars;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 62736)))), XML_DTD__BuilderDesc_NewCharacters)),XML_DTD__BuilderDesc_NewCharacters)((XML_DTD__Builder)i3, (XML_UnicodeBuffer__CharArray)i4, i1, i0, OOC_FALSE);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 62723)))), XML_DTD__AttValueDesc_Append)),XML_DTD__AttValueDesc_Append)((XML_DTD__AttValue)i2, (XML_DTD__Fragment)i0);
l3:
              return;
              ;
            }


          i0 = (OOC_INT32)entity;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62847)))), &_td_XML_DTD__ExternalEntityDesc);
          if (!i1) goto l3;
          i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Internalize((XML_DTD__ExternalEntity)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62933)))), &_td_XML_DTD__ExternalEntityDesc, 62933)));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62891)))), XML_DTD__EntityDesc_SetEntityValue)),XML_DTD__EntityDesc_SetEntityValue)((XML_DTD__Entity)i0, (XML_UnicodeBuffer__CharArray)i1);
l3:
          XML_Parser__ParserDesc_ParseDocument_PushEntity((XML_DTD__Entity)i0, OOC_FALSE);
          i0 = (OOC_INT32)dtd;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63024)))), XML_DTD__BuilderDesc_NewAttValue)),XML_DTD__BuilderDesc_NewAttValue)((XML_DTD__Builder)i0);
          attValue = (XML_DTD__AttValue)i0;
          i0 = cpos;
          cstart = i0;
l4_loop:
          i0 = (OOC_INT32)chars;
          i1 = _check_pointer(i0, 63098);
          i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
          i3 = cpos;
          i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 63098))*2);
          switch (i1) {
          case (OOC_CHAR16)65535:
            XML_Parser__ParserDesc_ParseDocument_Expand_ExpandAttValue_Flush();
            goto l19;
          case (OOC_CHAR8)'\000' ... (OOC_CHAR8)'\037':
            i1 = _check_pointer(i0, 63402);
            i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
            i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 63402))*2);
            i1 = i1!=(OOC_CHAR8)'\011';
            if (!i1) goto l4_loop;
            i0 = _check_pointer(i0, 63445);
            i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
            *(OOC_UINT16*)(i0+(_check_index(i3, i1, OOC_UINT32, 63445))*2) = (OOC_CHAR8)' ';
            goto l4_loop;
          case (OOC_CHAR8)'<':
            XML_Parser__ParserDesc_ParseDocument_Err(13);
            i0 = cpos;
            cpos = (i0+1);
            goto l4_loop;
          case (OOC_CHAR8)'&':
            XML_Parser__ParserDesc_ParseDocument_Expand_ExpandAttValue_Flush();
            i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("&#", 3, 0);
            if (i0) goto l15;
            i0 = (OOC_INT32)attValue;
            i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_EntityRef(OOC_TRUE, OOC_FALSE);
            OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63906)))), XML_DTD__AttValueDesc_Append)),XML_DTD__AttValueDesc_Append)((XML_DTD__AttValue)i0, (XML_DTD__Fragment)i1);
            goto l16;
l15:
            i0 = cpos;
            cstart = i0;
            cdelta = 0;
            XML_Parser__ParserDesc_ParseDocument_CharRef();
            i0 = (OOC_INT32)attValue;
            i1 = (OOC_INT32)dtd;
            i2 = cpos;
            i3 = cdelta;
            i4 = (OOC_INT32)chars;
            i5 = cstart;
            i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 63814)))), XML_DTD__BuilderDesc_NewCharacters)),XML_DTD__BuilderDesc_NewCharacters)((XML_DTD__Builder)i1, (XML_UnicodeBuffer__CharArray)i4, i5, (i2-i3), OOC_FALSE);
            OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63801)))), XML_DTD__AttValueDesc_Append)),XML_DTD__AttValueDesc_Append)((XML_DTD__AttValue)i0, (XML_DTD__Fragment)i1);
l16:
            i0 = cpos;
            cstart = i0;
            goto l4_loop;
          default:
            cpos = (i3+1);
            goto l4_loop;
          }
l19:
          XML_Parser__ParserDesc_ParseDocument_PopEntity();
          i0 = (OOC_INT32)attValue;
          return (XML_DTD__AttValue)i0;
          ;
        }


      i0 = (OOC_INT32)attValue;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 64156));
      i1 = i0!=(OOC_INT32)0;
      fragment = (XML_DTD__Fragment)i0;
      if (!i1) goto l21;
l3_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 64225)))), &_td_XML_DTD__EntityRefDesc);
      if (!i1) goto l16;
      i1 = (OOC_INT32)dtd;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 64265))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 64265))+4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64293))+4);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 64278)))), XML_DTD__NamespaceDesc_Get)),XML_DTD__NamespaceDesc_Get)((XML_DTD__Namespace)i1, (XML_UnicodeBuffer__CharArray)i3);
      decl = (XML_DTD__Declaration)i1;
      i2 = i1==(OOC_INT32)0;
      if (i2) goto l14;
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64507)))), &_td_XML_DTD__EntityDesc, 64507);
      entity = (XML_DTD__Entity)i1;
      *(OOC_INT32*)((_check_pointer(i0, 64536))+8) = i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 64578))+20);
      i0 = i0==(OOC_INT32)0;
      if (!i0) goto l10;
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Expand_ExpandAttValue((XML_DTD__Entity)i1);
      *(OOC_INT32*)((_check_pointer(i1, 64621))+20) = i0;
      i0 = (OOC_INT32)entity;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64688))+20);
      XML_Parser__ParserDesc_ParseDocument_Expand((XML_DTD__AttValue)i0);
l10:
      i0 = (OOC_INT32)entity;
      i0 = XML_Parser__ParserDesc_ParseDocument_Expand_IsRecursive((XML_DTD__Entity)i0);
      if (!i0) goto l16;
      XML_Parser__ParserDesc_ParseDocument_Err(213);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64818))+104);
      i2 = (OOC_INT32)entity;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 64882))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 64882))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64818))+104);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 64888)), (OOC_INT32)0);
      i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i3, 64888)), i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64829)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i2);
      i0 = (OOC_INT32)fragment;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64915))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 64923))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64915))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64923))+20);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64933)))), XML_DTD__AttValueDesc_Clear)),XML_DTD__AttValueDesc_Clear)((XML_DTD__AttValue)i0);
      goto l16;
l14:
      XML_Parser__ParserDesc_ParseDocument_Err(210);
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 64385))+104);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64451))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64451))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 64385))+104);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 64457)), (OOC_INT32)0);
      i0 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i3, 64457)), i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 64396)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i1, "name", 5, (Msg__LStringPtr)i0);
l16:
      i0 = (OOC_INT32)fragment;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 65080));
      fragment = (XML_DTD__Fragment)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l21:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_content() {
      register OOC_INT32 i0,i1,i2;
      auto void XML_Parser__ParserDesc_ParseDocument_content_CharData();
      auto void XML_Parser__ParserDesc_ParseDocument_content_FollowEntityRef(XML_DTD__EntityRef entityRef);
        
        void XML_Parser__ParserDesc_ParseDocument_content_CharData() {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
          OOC_INT8 elementWhitespace;

          i0 = (OOC_INT32)p;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 65567))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 65567))+4);
          i0 = _check_pointer(i0, 65570);
          XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i1, 65570)), (RT0__Struct)((OOC_INT32)&_td_XML_Locator__Position));
          i0 = cpos;
          cstart = i0;
          cdelta = 0;
          elementWhitespace = 2;
          i0=2;
l1_loop:
          i1 = (OOC_INT32)chars;
          i2 = _check_pointer(i1, 65931);
          i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
          i4 = cpos;
          i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 65931))*2);
          switch (i2) {
          case (OOC_CHAR8)'\000' ... (OOC_CHAR8)'\037':
          case (OOC_CHAR16)65534:
            i2 = (OOC_INT32)p;
            i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 66006))+36);
            i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 66010))+20);
            i1 = i1!=i2;
            if (!i1) goto l5;
            goto l9;
l5:
            XML_Parser__ParserDesc_ParseDocument_ControlChar((OOC_CHAR8)'\012');
            i1 = cdelta;
            i1 = i1!=0;
            if (!i1) goto l1_loop;
            goto l21_loop;
l9:
            cpos = (i4+1);
            goto l1_loop;
          case (OOC_CHAR8)' ':
            cpos = (i4+1);
            
            goto l1_loop;
          case (OOC_CHAR8)'<':
          case (OOC_CHAR8)'&':
          case (OOC_CHAR16)65535:
            goto l21_loop;
          case (OOC_CHAR8)']':
            i1 = XML_Parser__ParserDesc_ParseDocument_LookingAt("]]>", 4, 0);
            if (i1) goto l21_loop;
            i0 = cpos;
            elementWhitespace = 1;
            cpos = (i0+1);
            i0=1;
            goto l1_loop;
          default:
            elementWhitespace = 1;
            cpos = (i4+1);
            i0=1;
            goto l1_loop;
          }
l21_loop:
          i1 = (OOC_INT32)chars;
          i2 = _check_pointer(i1, 66655);
          i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
          i4 = cpos;
          i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 66655))*2);
          switch (i2) {
          case (OOC_CHAR8)'\000' ... (OOC_CHAR8)'\037':
          case (OOC_CHAR16)65534:
            i2 = (OOC_INT32)p;
            i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 66730))+36);
            i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 66734))+20);
            i2 = i1!=i2;
            if (!i2) goto l25;
            goto l26;
l25:
            XML_Parser__ParserDesc_ParseDocument_ControlChar((OOC_CHAR8)'\012');
            goto l21_loop;
l26:
            i2 = _check_pointer(i1, 67130);
            i3 = cdelta;
            i5 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
            i1 = _check_pointer(i1, 67152);
            i6 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
            i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i6, OOC_UINT32, 67152))*2);
            *(OOC_UINT16*)(i2+(_check_index((i4-i3), i5, OOC_UINT32, 67130))*2) = i1;
            cpos = (i4+1);
            goto l21_loop;
          case (OOC_CHAR8)' ':
            i2 = _check_pointer(i1, 67275);
            i3 = cdelta;
            i5 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
            i1 = _check_pointer(i1, 67297);
            i6 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
            i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i6, OOC_UINT32, 67297))*2);
            *(OOC_UINT16*)(i2+(_check_index((i4-i3), i5, OOC_UINT32, 67275))*2) = i1;
            cpos = (i4+1);
            
            goto l21_loop;
          case (OOC_CHAR8)'<':
          case (OOC_CHAR16)65535:
            goto l41;
          case (OOC_CHAR8)'&':
            i1 = XML_Parser__ParserDesc_ParseDocument_LookingAt("&#", 3, 0);
            if (!i1) goto l41;
            elementWhitespace = 1;
            XML_Parser__ParserDesc_ParseDocument_CharRef();
            i0=1;
            goto l21_loop;
          case (OOC_CHAR8)']':
            i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("]]>", 4, 0);
            if (i0) goto l37;
            goto l38;
l37:
            XML_Parser__ParserDesc_ParseDocument_Err(3);
l38:
            elementWhitespace = 1;
            i0 = (OOC_INT32)chars;
            i1 = _check_pointer(i0, 67799);
            i2 = cdelta;
            i3 = cpos;
            i4 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
            i0 = _check_pointer(i0, 67821);
            i5 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
            i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i5, OOC_UINT32, 67821))*2);
            *(OOC_UINT16*)(i1+(_check_index((i3-i2), i4, OOC_UINT32, 67799))*2) = i0;
            cpos = (i3+1);
            i0=1;
            goto l21_loop;
          default:
            elementWhitespace = 1;
            i0 = _check_pointer(i1, 67930);
            i2 = cdelta;
            i3 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
            i1 = _check_pointer(i1, 67952);
            i5 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
            i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i5, OOC_UINT32, 67952))*2);
            *(OOC_UINT16*)(i0+(_check_index((i4-i2), i3, OOC_UINT32, 67930))*2) = i1;
            cpos = (i4+1);
            i0=1;
            goto l21_loop;
          }
l41:
          i1 = cpos;
          i2 = cdelta;
          i1 = i1-i2;
          i2 = cstart;
          i3 = i1!=i2;
          if (!i3) goto l44;
          i3 = (OOC_INT32)p;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 68049))+44);
          i5 = (OOC_INT32)chars;
          i6 = OOC_ARRAY_LENGTH((_check_pointer(i5, 68077)), (OOC_INT32)0);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 68049))+44);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 68058)))), XML_Builder__BuilderDesc_Characters)),XML_Builder__BuilderDesc_Characters)((XML_Builder__Builder)i3, (void*)(_check_pointer(i5, 68077)), i6, i2, i1, i0);
l44:
          return;
          ;
        }

        
        void XML_Parser__ParserDesc_ParseDocument_content_FollowEntityRef(XML_DTD__EntityRef entityRef) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
          XML_DTD__Declaration decl;
          XML_DTD__Entity entity;
          struct XML_Locator__Position pos;

          i0 = (OOC_INT32)dtd;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68391))+4);
          i2 = (OOC_INT32)entityRef;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 68420))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68391))+4);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 68404)))), XML_DTD__NamespaceDesc_Get)),XML_DTD__NamespaceDesc_Get)((XML_DTD__Namespace)i0, (XML_UnicodeBuffer__CharArray)i3);
          decl = (XML_DTD__Declaration)i0;
          i1 = i0!=(OOC_INT32)0;
          entity = (XML_DTD__Entity)(OOC_INT32)0;
          if (i1) goto l3;
          i1=(OOC_INT32)0;
          goto l4;
l3:
          i1 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68510)))), &_td_XML_DTD__EntityDesc, 68510);
          entity = (XML_DTD__Entity)i1;
          
l4:
          i3 = (OOC_INT32)p;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 68555))+4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 68555))+4);
          i3 = _check_pointer(i3, 68558);
          i3 = (OOC_INT32)&_td_XML_Locator__Position;
          XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i4, 68558)), (RT0__Struct)i3);
          i4 = (OOC_INT32)p;
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 68583))+36);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 68587))+20);
          i6 = (OOC_INT32)chars;
          i5 = i6==i5;
          if (!i5) goto l7;
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 68623))+4);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 68623))+4);
          i4 = _check_pointer(i4, 68626);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 68658))+4);
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 68658))+4);
          i6 = OOC_ARRAY_LENGTH((_check_pointer(i6, 68664)), (OOC_INT32)0);
          i4 = LongStrings__Length((void*)(_check_pointer(i4, 68664)), i6);
          XML_Parser__ParserDesc_ParseDocument_DecLength((void*)(_check_pointer(i5, 68626)), (RT0__Struct)i3, (i4+2));
l7:
          i4 = i1==(OOC_INT32)0;
          if (i4) goto l32;
          i4 = *(OOC_UINT8*)((_check_pointer(i1, 68909))+17);
          if (i4) goto l30;
          i4 = *(OOC_INT8*)((_check_pointer(i1, 69114))+8);
          i4 = i4==2;
          if (i4) goto l14;
          i4=OOC_FALSE;
          goto l16;
l14:
          i4 = (OOC_INT32)p;
          i4 = *(OOC_UINT8*)((_check_pointer(i4, 69168))+60);
          i4 = !i4;
          
l16:
          if (i4) goto l28;
          i4 = (OOC_INT32)p;
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 69294))+44);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 69294))+44);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 69303)))), XML_Builder__BuilderDesc_StartEntity)),XML_Builder__BuilderDesc_StartEntity)((XML_Builder__Builder)i4, (XML_DTD__Entity)i1);
          XML_Parser__ParserDesc_ParseDocument_PushEntity((XML_DTD__Entity)i1, OOC_TRUE);
          XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(OOC_INT32)&pos, (RT0__Struct)i3);
          i4 = *(OOC_INT8*)((_check_pointer(i1, 69497))+8);
          i4 = i4==2;
          if (i4) goto l20;
          i4=OOC_FALSE;
          goto l22;
l20:
          i4 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<?xml", 6, 1);
          
l22:
          if (!i4) goto l24;
          XML_Parser__ParserDesc_ParseDocument_XMLDecl((XML_DTD__ExternalEntity)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69622)))), &_td_XML_DTD__ExternalEntityDesc, 69622)));
l24:
          XML_Parser__ParserDesc_ParseDocument_content();
          i0 = (OOC_INT32)chars;
          i0 = _check_pointer(i0, 69692);
          i4 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
          i5 = cpos;
          i0 = *(OOC_UINT16*)(i0+(_check_index(i5, i4, OOC_UINT32, 69692))*2);
          i0 = i0!=(OOC_CHAR16)65535;
          if (!i0) goto l27;
          XML_Parser__ParserDesc_ParseDocument_ErrPos(302, (void*)(OOC_INT32)&pos, (RT0__Struct)i3);
          i0 = (OOC_INT32)p;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69785))+104);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 69892))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 69892))+4);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 69898)), (OOC_INT32)0);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69785))+104);
          i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i5, 69898)), i2);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 69796)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i2);
l27:
          XML_Parser__ParserDesc_ParseDocument_PopEntity();
          i0 = (OOC_INT32)p;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69964))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69964))+4);
          i0 = _check_pointer(i0, 69967);
          XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i2, 69967)), (RT0__Struct)i3);
          i0 = (OOC_INT32)p;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69982))+44);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69982))+44);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 69991)))), XML_Builder__BuilderDesc_EndEntity)),XML_Builder__BuilderDesc_EndEntity)((XML_Builder__Builder)i0, (XML_DTD__Entity)i1);
          goto l33;
l28:
          i0 = (OOC_INT32)p;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69204))+44);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 69239))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69204))+44);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 69213)))), XML_Builder__BuilderDesc_SkippedEntity)),XML_Builder__BuilderDesc_SkippedEntity)((XML_Builder__Builder)i0, (XML_UnicodeBuffer__CharArray)i2, (XML_DTD__Entity)i1);
          goto l33;
l30:
          XML_Parser__ParserDesc_ParseDocument_Err(213);
          i0 = (OOC_INT32)p;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68977))+104);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 69083))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 69083))+4);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 69089)), (OOC_INT32)0);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68977))+104);
          i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i3, 69089)), i2);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 68988)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i2);
          goto l33;
l32:
          i0 = (OOC_INT32)p;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68755))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68755))+4);
          i0 = _check_pointer(i0, 68758);
          XML_Parser__ParserDesc_ParseDocument_ErrPos(210, (void*)(_check_pointer(i1, 68758)), (RT0__Struct)i3);
          i0 = (OOC_INT32)p;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68773))+104);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 68879))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 68879))+4);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 68885)), (OOC_INT32)0);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68773))+104);
          i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i3, 68885)), i2);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 68784)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i2);
l33:
          return;
          ;
        }


l1_loop:
      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 70107);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 70107))*2);
      switch (i0) {
      case (OOC_CHAR16)65535:
        goto l28;
      case (OOC_CHAR8)'<':
        i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<!--", 5, 0);
        if (!i0) goto l6;
        goto l19;
l6:
        i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<![CDATA[", 10, 0);
        if (!i0) goto l8;
        goto l17;
l8:
        i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<?", 3, 0);
        if (!i0) goto l10;
        goto l15;
l10:
        i0 = (OOC_INT32)chars;
        i0 = _check_pointer(i0, 70416);
        i1 = cpos;
        i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
        i0 = *(OOC_UINT16*)(i0+(_check_index((i1+1), i2, OOC_UINT32, 70416))*2);
        i0 = i0!=(OOC_CHAR8)'/';
        if (!i0) goto l28;
        XML_Parser__ParserDesc_ParseDocument_element();
        goto l1_loop;
l15:
        XML_Parser__ParserDesc_ParseDocument_PI();
        goto l1_loop;
l17:
        XML_Parser__ParserDesc_ParseDocument_CDSect();
        goto l1_loop;
l19:
        XML_Parser__ParserDesc_ParseDocument_Comment();
        goto l1_loop;
      case (OOC_CHAR8)'&':
        i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("&#", 3, 0);
        if (!i0) goto l23;
        goto l24;
l23:
        i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_EntityRef(OOC_FALSE, OOC_TRUE);
        XML_Parser__ParserDesc_ParseDocument_content_FollowEntityRef((XML_DTD__EntityRef)i0);
        goto l1_loop;
l24:
        XML_Parser__ParserDesc_ParseDocument_content_CharData();
        goto l1_loop;
      default:
        XML_Parser__ParserDesc_ParseDocument_content_CharData();
        goto l1_loop;
      }
l28:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_element() {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_CHAR8 emptyElementTag;
      XML_UnicodeBuffer__CharArray startName;
      XML_DTD__Declaration decl;
      XML_UnicodeBuffer__CharArray attrName;
      XML_DTD__AttrDecl attrDecl;
      XML_DTD__Declaration decl0;
      XML_DTD__AttValue attrValue;
      struct XML_Locator__Position pos;
      XML_UnicodeBuffer__CharArray endName;
      auto void XML_Parser__ParserDesc_ParseDocument_element_NoteName(XML_UnicodeBuffer__CharArray name);
      auto OOC_CHAR8 XML_Parser__ParserDesc_ParseDocument_element_AttributeNameUsed(XML_UnicodeBuffer__CharArray name);
      auto void XML_Parser__ParserDesc_ParseDocument_element_AddDefaultAttributes(XML_DTD__ElementDecl elemDecl);
      auto void XML_Parser__ParserDesc_ParseDocument_element_ErrEndTag();
        
        void XML_Parser__ParserDesc_ParseDocument_element_NoteName(XML_UnicodeBuffer__CharArray name) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
          XML_Parser__NameList newList;
          OOC_INT32 i;

          i0 = (OOC_INT32)p;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71178))+76);
          i2 = *(OOC_INT32*)((_check_pointer(i0, 71156))+80);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 71188)), (OOC_INT32)0);
          i1 = i2==i1;
          if (!i1) goto l11;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71227))+76);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 71237)), (OOC_INT32)0);
          i1 = (OOC_INT32)RT0__NewObject(_td_XML_Parser__NameList.baseTypes[0], (i1+8));
          newList = (XML_Parser__NameList)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71285))+76);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 71295)), (OOC_INT32)0);
          i2 = i2-1;
          i3 = 0<=i2;
          i = 0;
          if (!i3) goto l10;
          i3=0;
l5_loop:
          i4 = _check_pointer(i1, 71322);
          i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71330))+76);
          i6 = _check_pointer(i6, 71340);
          i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
          i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 71340))*4);
          *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 71322))*4) = i6;
          i3 = i3+1;
          i4 = i3<=i2;
          i = i3;
          if (i4) goto l5_loop;
l10:
          *(OOC_INT32*)((_check_pointer(i0, 71370))+76) = i1;
l11:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71414))+76);
          i1 = _check_pointer(i1, 71424);
          i2 = *(OOC_INT32*)((_check_pointer(i0, 71426))+80);
          i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
          i4 = (OOC_INT32)name;
          *(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 71424))*4) = i4;
          i1 = *(OOC_INT32*)((_check_pointer(i0, 71464))+80);
          *(OOC_INT32*)((_check_pointer(i0, 71464))+80) = (i1+1);
          return;
          ;
        }

        
        OOC_CHAR8 XML_Parser__ParserDesc_ParseDocument_element_AttributeNameUsed(XML_UnicodeBuffer__CharArray name) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_INT32 i;

          i0 = (OOC_INT32)p;
          i1 = *(OOC_INT32*)((_check_pointer(i0, 71630))+80);
          i1 = i1-1;
          i2 = 0<=i1;
          i = 0;
          if (!i2) goto l11;
          i2 = (OOC_INT32)name;
          i3=0;
l3_loop:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71672))+76);
          i4 = _check_pointer(i4, 71682);
          i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 71682))*4);
          i4 = (
          _cmp16((const void*)(_check_pointer(i2, 71667)),(const void*)(_check_pointer(i4, 71685))))==(OOC_INT32)0;
          if (!i4) goto l6;
          return OOC_TRUE;
l6:
          i3 = i3+1;
          i4 = i3<=i1;
          i = i3;
          if (i4) goto l3_loop;
l11:
          return OOC_FALSE;
          ;
        }

        
        void XML_Parser__ParserDesc_ParseDocument_element_AddDefaultAttributes(XML_DTD__ElementDecl elemDecl) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
          XML_DTD__Declaration decl;
          XML_DTD__AttrDecl attrDecl;
          auto OOC_CHAR8 XML_Parser__ParserDesc_ParseDocument_element_AddDefaultAttributes_AttributeDefined(XML_UnicodeBuffer__CharArray name);
            
            OOC_CHAR8 XML_Parser__ParserDesc_ParseDocument_element_AddDefaultAttributes_AttributeDefined(XML_UnicodeBuffer__CharArray name) {
              register OOC_INT32 i0,i1,i2,i3,i4;
              OOC_INT32 i;

              i = 0;
              i0 = (OOC_INT32)p;
              i1 = *(OOC_INT32*)((_check_pointer(i0, 72093))+80);
              i1 = 0!=i1;
              if (!i1) goto l11;
              i1 = (OOC_INT32)name;
              i2=0;
l3_loop:
              i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 72128))+76);
              i3 = _check_pointer(i3, 72138);
              i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
              i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 72138))*4);
              i3 = (
              _cmp16((const void*)(_check_pointer(i3, 72141)),(const void*)(_check_pointer(i1, 72149))))==(OOC_INT32)0;
              if (!i3) goto l6;
              return OOC_TRUE;
l6:
              i2 = i2+1;
              i = i2;
              i3 = *(OOC_INT32*)((_check_pointer(i0, 72093))+80);
              i3 = i2!=i3;
              if (i3) goto l3_loop;
l11:
              return OOC_FALSE;
              ;
            }


          i0 = (OOC_INT32)elemDecl;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 72331))+20);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 72346));
          i1 = i0!=(OOC_INT32)0;
          decl = (XML_DTD__Declaration)i0;
          if (!i1) goto l22;
          i1 = (OOC_INT32)&_td_XML_Locator__Position;
          
l3_loop:
          i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 72419)))), &_td_XML_DTD__AttrDeclDesc, 72419);
          attrDecl = (XML_DTD__AttrDecl)i0;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 72470))+4);
          i0 = XML_Parser__ParserDesc_ParseDocument_element_AddDefaultAttributes_AttributeDefined((XML_UnicodeBuffer__CharArray)i0);
          i0 = !i0;
          i2 = (OOC_INT32)decl;
          if (!i0) goto l17;
          i0 = (OOC_INT32)attrDecl;
          i3 = *(OOC_INT8*)((_check_pointer(i0, 72507))+20);
          i3 = i3>=2;
          if (i3) goto l15;
          i3 = (OOC_INT32)p;
          i4 = *(OOC_UINT8*)((_check_pointer(i3, 72740))+62);
          if (i4) goto l10;
          i4=OOC_FALSE;
          goto l12;
l10:
          i4 = *(OOC_INT8*)((_check_pointer(i0, 72782))+20);
          i4 = i4==0;
          
l12:
          if (!i4) goto l17;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 72863))+4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 72863))+4);
          i3 = _check_pointer(i3, 72866);
          XML_Parser__ParserDesc_ParseDocument_ErrPosNF(214, (void*)(_check_pointer(i4, 72866)), (RT0__Struct)i1);
          i3 = (OOC_INT32)p;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 72885))+104);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 72951))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 72951))+4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 72885))+104);
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 72957)), (OOC_INT32)0);
          i0 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i5, 72957)), i0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 72896)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i3, "name", 5, (Msg__LStringPtr)i0);
          goto l17;
l15:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 72572))+24);
          XML_Parser__ParserDesc_ParseDocument_Expand((XML_DTD__AttValue)i3);
          i3 = (OOC_INT32)p;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 72604))+44);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 72604))+44);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 72635))+4);
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 72698))+24);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 72613)))), XML_Builder__BuilderDesc_Attribute)),XML_Builder__BuilderDesc_Attribute)((XML_Builder__Builder)i3, (XML_DTD__NamespaceDeclaration)(OOC_INT32)0, (XML_UnicodeBuffer__CharArray)i5, (XML_DTD__AttrDecl)i0, (XML_DTD__AttValue)i6, OOC_FALSE);
l17:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 73014));
          decl = (XML_DTD__Declaration)i0;
          i2 = i0!=(OOC_INT32)0;
          if (i2) goto l3_loop;
l22:
          return;
          ;
        }

        
        void XML_Parser__ParserDesc_ParseDocument_element_ErrEndTag() {
          register OOC_INT32 i0,i1,i2,i3;

          i0 = (OOC_INT32)startName;
          i1 = (OOC_INT32)XML_Parser__noName;
          i0 = i0!=i1;
          if (!i0) goto l4;
          XML_Parser__ParserDesc_ParseDocument_ErrPos(209, (void*)(OOC_INT32)&pos, (RT0__Struct)((OOC_INT32)&_td_XML_Locator__Position));
          i0 = (OOC_INT32)p;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 73195))+104);
          i2 = (OOC_INT32)startName;
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 73262)), (OOC_INT32)0);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 73195))+104);
          i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 73262)), i3);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 73206)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i2);
l4:
          return;
          ;
        }


      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 73329);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 73329))*2);
      i0 = i0==(OOC_CHAR8)'<';
      if (i0) goto l3;
      XML_Parser__ParserDesc_ParseDocument_Err(208);
      goto l51;
l3:
      XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'<');
      i0 = (OOC_INT32)p;
      *(OOC_INT32*)((_check_pointer(i0, 73382))+80) = 0;
      emptyElementTag = OOC_FALSE;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 73460))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 73460))+4);
      i0 = _check_pointer(i0, 73463);
      i0 = (OOC_INT32)&_td_XML_Locator__Position;
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i1, 73463)), (RT0__Struct)i0);
      i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_FALSE);
      startName = (XML_UnicodeBuffer__CharArray)i1;
      i2 = (OOC_INT32)dtd;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 73521))+12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 73521))+12);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 73539)))), XML_DTD__NamespaceDesc_Get)),XML_DTD__NamespaceDesc_Get)((XML_DTD__Namespace)i2, (XML_UnicodeBuffer__CharArray)i1);
      decl = (XML_DTD__Declaration)i2;
      i2 = (OOC_INT32)p;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 73567))+44);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 73567))+44);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 73576)))), XML_Builder__BuilderDesc_StartElement)),XML_Builder__BuilderDesc_StartElement)((XML_Builder__Builder)i2, (XML_DTD__NamespaceDeclaration)(OOC_INT32)0, (XML_UnicodeBuffer__CharArray)i1);
l4_loop:
      i1 = (OOC_INT32)chars;
      i2 = _check_pointer(i1, 73656);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i4 = cpos;
      i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 73656))*2);
      i2 = i2==(OOC_CHAR16)65535;
      if (i2) goto l34;
      i2 = _check_pointer(i1, 73727);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 73727))*2);
      i2 = i2!=(OOC_CHAR8)'>';
      if (i2) goto l9;
      i1=OOC_FALSE;
      goto l11;
l9:
      i1 = _check_pointer(i1, 73749);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 73749))*2);
      i1 = i1!=(OOC_CHAR8)'/';
      
l11:
      if (!i1) goto l14;
      XML_Parser__ParserDesc_ParseDocument_S();
l14:
      i1 = (OOC_INT32)chars;
      i2 = _check_pointer(i1, 73816);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i4 = cpos;
      i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 73816))*2);
      i2 = i2==(OOC_CHAR8)'/';
      if (i2) goto l32;
      i1 = _check_pointer(i1, 73940);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 73940))*2);
      i1 = i1==(OOC_CHAR8)'>';
      if (i1) goto l34;
l20:
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74028))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74028))+4);
      i1 = _check_pointer(i1, 74031);
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i2, 74031)), (RT0__Struct)i0);
      i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_FALSE);
      attrName = (XML_UnicodeBuffer__CharArray)i1;
      i1 = XML_Parser__ParserDesc_ParseDocument_element_AttributeNameUsed((XML_UnicodeBuffer__CharArray)i1);
      i2 = (OOC_INT32)attrName;
      if (!i1) goto l23;
      i1 = (OOC_INT32)p;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74157))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74157))+4);
      i1 = _check_pointer(i1, 74160);
      XML_Parser__ParserDesc_ParseDocument_ErrPos(212, (void*)(_check_pointer(i3, 74160)), (RT0__Struct)i0);
      i1 = (OOC_INT32)p;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74177))+104);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74177))+104);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 74243)), (OOC_INT32)0);
      i4 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 74243)), i4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 74188)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i1, "name", 5, (Msg__LStringPtr)i4);
l23:
      XML_Parser__ParserDesc_ParseDocument_element_NoteName((XML_UnicodeBuffer__CharArray)i2);
      XML_Parser__ParserDesc_ParseDocument_Eq();
      i1 = (OOC_INT32)decl;
      i2 = i1!=(OOC_INT32)0;
      attrDecl = (XML_DTD__AttrDecl)(OOC_INT32)0;
      i3 = (OOC_INT32)attrName;
      if (i2) goto l26;
      i1=(OOC_INT32)0;
      goto l31;
l26:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74395)))), &_td_XML_DTD__ElementDeclDesc, 74395)), 74407))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74395)))), &_td_XML_DTD__ElementDeclDesc, 74395)), 74407))+20);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 74422)))), XML_DTD__NamespaceDesc_Get)),XML_DTD__NamespaceDesc_Get)((XML_DTD__Namespace)i1, (XML_UnicodeBuffer__CharArray)i3);
      decl0 = (XML_DTD__Declaration)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l29;
      i1=(OOC_INT32)0;
      goto l31;
l29:
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74510)))), &_td_XML_DTD__AttrDeclDesc, 74510);
      attrDecl = (XML_DTD__AttrDecl)i1;
      
l31:
      i2 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_AttValue(OOC_TRUE);
      attrValue = (XML_DTD__AttValue)i2;
      XML_Parser__ParserDesc_ParseDocument_Expand((XML_DTD__AttValue)i2);
      i4 = (OOC_INT32)p;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 74632))+44);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 74632))+44);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 74641)))), XML_Builder__BuilderDesc_Attribute)),XML_Builder__BuilderDesc_Attribute)((XML_Builder__Builder)i4, (XML_DTD__NamespaceDeclaration)(OOC_INT32)0, (XML_UnicodeBuffer__CharArray)i3, (XML_DTD__AttrDecl)i1, (XML_DTD__AttValue)i2, OOC_TRUE);
      
      goto l4_loop;
l32:
      XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'/');
      emptyElementTag = OOC_TRUE;
l34:
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74757))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74757))+4);
      i1 = _check_pointer(i1, 74760);
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i2, 74760)), (RT0__Struct)i0);
      i1 = (OOC_INT32)decl;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l37;
      XML_Parser__ParserDesc_ParseDocument_element_AddDefaultAttributes((XML_DTD__ElementDecl)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74834)))), &_td_XML_DTD__ElementDeclDesc, 74834)));
l37:
      XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'>');
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74895))+44);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74895))+44);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 74904)))), XML_Builder__BuilderDesc_AttributesDone)),XML_Builder__BuilderDesc_AttributesDone)((XML_Builder__Builder)i1);
      XML_Parser__ParserDesc_ParseDocument_DiscardPreviousInput();
      i1 = emptyElementTag;
      if (i1) goto l49;
      XML_Parser__ParserDesc_ParseDocument_content();
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(OOC_INT32)&pos, (RT0__Struct)i0);
      i1 = (OOC_INT32)chars;
      i1 = _check_pointer(i1, 75193);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 75193))*2);
      i1 = i1!=(OOC_CHAR8)'<';
      if (!i1) goto l42;
      XML_Parser__ParserDesc_ParseDocument_element_ErrEndTag();
l42:
      XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'<');
      i1 = (OOC_INT32)chars;
      i1 = _check_pointer(i1, 75273);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 75273))*2);
      i1 = i1!=(OOC_CHAR8)'/';
      if (!i1) goto l45;
      XML_Parser__ParserDesc_ParseDocument_element_ErrEndTag();
l45:
      XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'/');
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 75360))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 75360))+4);
      i1 = _check_pointer(i1, 75363);
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i2, 75363)), (RT0__Struct)i0);
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_FALSE);
      endName = (XML_UnicodeBuffer__CharArray)i0;
      i1 = (OOC_INT32)startName;
      i0 = (
      _cmp16((const void*)(_check_pointer(i0, 75423)),(const void*)(_check_pointer(i1, 75436))))!=(OOC_INT32)0;
      if (!i0) goto l48;
      XML_Parser__ParserDesc_ParseDocument_element_ErrEndTag();
l48:
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 75470))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 75470))+44);
      i2 = (OOC_INT32)startName;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75479)))), XML_Builder__BuilderDesc_EndElement)),XML_Builder__BuilderDesc_EndElement)((XML_Builder__Builder)i0, (XML_DTD__NamespaceDeclaration)(OOC_INT32)0, (XML_UnicodeBuffer__CharArray)i2);
      XML_Parser__ParserDesc_ParseDocument_OptS(OOC_TRUE);
      XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'>');
      goto l51;
l49:
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 75039))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 75039))+4);
      i1 = _check_pointer(i1, 75042);
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i2, 75042)), (RT0__Struct)i0);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 75057))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 75057))+44);
      i2 = (OOC_INT32)startName;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75066)))), XML_Builder__BuilderDesc_EndElement)),XML_Builder__BuilderDesc_EndElement)((XML_Builder__Builder)i0, (XML_DTD__NamespaceDeclaration)(OOC_INT32)0, (XML_UnicodeBuffer__CharArray)i2);
l51:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_MiscRep() {
      register OOC_INT32 i0,i1,i2;

l1_loop:
      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 75762);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 75762))*2);
      switch (i0) {
      case (OOC_CHAR16)65534:
        XML_Parser__ParserDesc_ParseDocument_NextBlock();
        goto l1_loop;
      case (OOC_CHAR8)'<':
        i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<!--", 5, 0);
        if (!i0) goto l6;
        goto l11;
l6:
        i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<?", 3, 0);
        if (!i0) goto l16;
        XML_Parser__ParserDesc_ParseDocument_PI();
        goto l1_loop;
l11:
        XML_Parser__ParserDesc_ParseDocument_Comment();
        goto l1_loop;
      case (OOC_CHAR8)'\000' ... (OOC_CHAR8)' ':
        XML_Parser__ParserDesc_ParseDocument_S();
        goto l1_loop;
      default:
        goto l16;
      }
l16:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_ExternalID(OOC_CHAR8 optionJustPubid, XML_UnicodeBuffer__CharArray *_public, XML_UnicodeBuffer__CharArray *system, URI__URI *baseURI) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      Msg__Msg res;

      *_public = (XML_UnicodeBuffer__CharArray)(OOC_INT32)0;
      *system = (XML_UnicodeBuffer__CharArray)(OOC_INT32)0;
      *baseURI = (URI__URI)(OOC_INT32)0;
      i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("SYSTEM", 7, 1);
      if (i0) goto l28;
      i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("PUBLIC", 7, 1);
      if (i0) goto l5;
      XML_Parser__ParserDesc_ParseDocument_Err(112);
      goto l32;
l5:
      i0 = cpos;
      cpos = (i0+6);
      XML_Parser__ParserDesc_ParseDocument_S();
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_String(2);
      i1 = optionJustPubid;
      i1 = !i1;
      *_public = (XML_UnicodeBuffer__CharArray)i0;
      if (i1) goto l8;
      i0 = XML_Parser__ParserDesc_ParseDocument_LookingAtS();
      
      goto l10;
l8:
      i0=OOC_TRUE;
l10:
      if (!i0) goto l23;
      XML_Parser__ParserDesc_ParseDocument_S();
      if (i1) goto l14;
      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 77073);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 77073))*2);
      i0 = i0==(OOC_CHAR8)'\047';
      
      goto l16;
l14:
      i0=OOC_TRUE;
l16:
      if (i0) goto l18;
      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 77096);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 77096))*2);
      i0 = i0==(OOC_CHAR8)'"';
      
      goto l20;
l18:
      i0=OOC_TRUE;
l20:
      if (!i0) goto l23;
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_String(2);
      *system = (XML_UnicodeBuffer__CharArray)i0;
l23:
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77201))+32);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77232))+56);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 77243))+36);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77201))+32);
      i3 = (OOC_INT32)*_public;
      i4 = (OOC_INT32)*system;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 77205)))), XML_EntityResolver__ResolverDesc_GetURI)),XML_EntityResolver__ResolverDesc_GetURI)((XML_EntityResolver__Resolver)i0, (XML_UnicodeBuffer__CharArray)i3, (XML_UnicodeBuffer__CharArray)i4, (URI__URI)i2, (void*)(OOC_INT32)baseURI, (void*)(OOC_INT32)&res);
      i0 = (OOC_INT32)res;
      i0 = i0!=(OOC_INT32)0;
      if (!i0) goto l32;
      XML_Parser__ParserDesc_ParseDocument_Err(117);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77337))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77337))+104);
      i2 = (OOC_INT32)res;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 77348)))), Msg__MsgDesc_SetMsgAttrib)),Msg__MsgDesc_SetMsgAttrib)((Msg__Msg)i0, "uri_error", 10, (Msg__Msg)i2);
      goto l32;
l28:
      i0 = cpos;
      cpos = (i0+6);
      XML_Parser__ParserDesc_ParseDocument_S();
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_String(1);
      *system = (XML_UnicodeBuffer__CharArray)i0;
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 76590))+32);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 76618))+56);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 76630))+36);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 76590))+32);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 76594)))), XML_EntityResolver__ResolverDesc_GetURI)),XML_EntityResolver__ResolverDesc_GetURI)((XML_EntityResolver__Resolver)i1, (XML_UnicodeBuffer__CharArray)(OOC_INT32)0, (XML_UnicodeBuffer__CharArray)i0, (URI__URI)i3, (void*)(OOC_INT32)baseURI, (void*)(OOC_INT32)&res);
      i0 = (OOC_INT32)res;
      i0 = i0!=(OOC_INT32)0;
      if (!i0) goto l32;
      XML_Parser__ParserDesc_ParseDocument_Err(117);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 76725))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 76725))+104);
      i2 = (OOC_INT32)res;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76736)))), Msg__MsgDesc_SetMsgAttrib)),Msg__MsgDesc_SetMsgAttrib)((Msg__Msg)i0, "uri_error", 10, (Msg__Msg)i2);
l32:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_markupdecl() {
      register OOC_INT32 i0;
      auto void XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl(XML_DTD__Entity currentEntity);
      auto void XML_Parser__ParserDesc_ParseDocument_markupdecl_AttListDecl(XML_DTD__Entity currentEntity);
      auto void XML_Parser__ParserDesc_ParseDocument_markupdecl_EntityDecl(XML_DTD__Entity currentEntity);
      auto void XML_Parser__ParserDesc_ParseDocument_markupdecl_NotationDecl(XML_DTD__Entity currentEntity);
        
        void XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl(XML_DTD__Entity currentEntity) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          XML_UnicodeBuffer__CharArray elementName;
          XML_DTD__CP cp;
          XML_DTD__ElementDecl elementDecl;
          XML_DTD__Declaration decl;
          auto XML_DTD__CP XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec();
            
            XML_DTD__CP XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec() {
              register OOC_INT32 i0,i1,i2;
              XML_DTD__Entity currentEntity;
              auto XML_DTD__CP XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_Mixed(XML_DTD__Entity currentEntity);
              auto XML_DTD__CP XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children(XML_DTD__Entity currentEntity);
                
                XML_DTD__CP XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_Mixed(XML_DTD__Entity currentEntity) {
                  register OOC_INT32 i0,i1,i2,i3,i4;
                  XML_DTD__CP first;
                  XML_DTD__CP last;
                  OOC_CHAR8 hasAlternative;

                  i0 = (OOC_INT32)dtd;
                  i1 = cpos;
                  i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_GetString(i1, (i1+7));
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78071)))), XML_DTD__BuilderDesc_NewNameCP)),XML_DTD__BuilderDesc_NewNameCP)((XML_DTD__Builder)i0, 0, (XML_UnicodeBuffer__CharArray)i1);
                  i1 = cpos;
                  first = (XML_DTD__CP)i0;
                  cpos = (i1+7);
                  last = (XML_DTD__CP)i0;
                  XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
                  hasAlternative = OOC_FALSE;
                  i1 = (OOC_INT32)chars;
                  i1 = _check_pointer(i1, 78302);
                  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
                  i3 = cpos;
                  i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 78302))*2);
                  i1 = i1==(OOC_CHAR8)'|';
                  if (i1) goto l3;
                  i1=OOC_FALSE;
                  goto l9;
l3:
                  i1=i0;
l4_loop:
                  hasAlternative = OOC_TRUE;
                  XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'|');
                  XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
                  i2 = (OOC_INT32)dtd;
                  i3 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_FALSE);
                  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 78448)))), XML_DTD__BuilderDesc_NewNameCP)),XML_DTD__BuilderDesc_NewNameCP)((XML_DTD__Builder)i2, 0, (XML_UnicodeBuffer__CharArray)i3);
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78434)))), XML_DTD__CPDesc_SetNext)),XML_DTD__CPDesc_SetNext)((XML_DTD__CP)i1, (XML_DTD__CP)i2);
                  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 78515))+4);
                  last = (XML_DTD__CP)i1;
                  XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
                  i2 = (OOC_INT32)chars;
                  i2 = _check_pointer(i2, 78302);
                  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
                  i4 = cpos;
                  i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 78302))*2);
                  i2 = i2==(OOC_CHAR8)'|';
                  if (i2) goto l4_loop;
l8:
                  i1=OOC_TRUE;
l9:
                  i2 = (OOC_INT32)currentEntity;
                  XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i2);
                  XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)')');
                  if (i1) goto l12;
                  i1 = (OOC_INT32)chars;
                  i1 = _check_pointer(i1, 78683);
                  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
                  i3 = cpos;
                  i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 78683))*2);
                  i1 = i1==(OOC_CHAR8)'*';
                  
                  goto l14;
l12:
                  i1=OOC_TRUE;
l14:
                  if (i1) goto l16;
                  i1 = (OOC_INT32)dtd;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78835)))), XML_DTD__BuilderDesc_NewChoiceCP)),XML_DTD__BuilderDesc_NewChoiceCP)((XML_DTD__Builder)i1, 0, (XML_DTD__CP)i0);
                  return (XML_DTD__CP)i0;
                  goto l17;
l16:
                  XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'*');
                  i1 = (OOC_INT32)dtd;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78757)))), XML_DTD__BuilderDesc_NewChoiceCP)),XML_DTD__BuilderDesc_NewChoiceCP)((XML_DTD__Builder)i1, 2, (XML_DTD__CP)i0);
                  return (XML_DTD__CP)i0;
l17:
                  _failed_function(77852); return 0;
                  ;
                }

                
                XML_DTD__CP XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children(XML_DTD__Entity currentEntity) {
                  register OOC_INT32 i0,i1;
                  XML_DTD__CP cp;
                  auto OOC_INT8 XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_Quantifier();
                  auto XML_DTD__CP XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_choiceseq(XML_DTD__Entity currentEntity);
                    
                    OOC_INT8 XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_Quantifier() {
                      register OOC_INT32 i0,i1,i2;

                      i0 = (OOC_INT32)chars;
                      i0 = _check_pointer(i0, 79206);
                      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
                      i2 = cpos;
                      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 79206))*2);
                      switch (i0) {
                      case (OOC_CHAR8)'*':
                        XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'*');
                        return 2;
                        goto l6;
                      case (OOC_CHAR8)'+':
                        XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'+');
                        return 3;
                        goto l6;
                      case (OOC_CHAR8)'?':
                        XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'?');
                        return 1;
                        goto l6;
                      default:
                        return 0;
                        goto l6;
                      }
l6:
                      _failed_function(79089); return 0;
                      ;
                    }

                    
                    XML_DTD__CP XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_choiceseq(XML_DTD__Entity currentEntity) {
                      register OOC_INT32 i0,i1,i2,i3,i4;
                      OOC_CHAR16 _class;
                      XML_DTD__CP first;
                      XML_DTD__CP last;
                      auto XML_DTD__CP XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_choiceseq_cp();
                        
                        XML_DTD__CP XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_choiceseq_cp() {
                          register OOC_INT32 i0,i1,i2,i3;
                          XML_DTD__Entity currentEntity;
                          XML_DTD__CP cp;

                          i0 = (OOC_INT32)chars;
                          i1 = _check_pointer(i0, 79922);
                          i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
                          i3 = cpos;
                          i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 79922))*2);
                          i1 = i1==(OOC_CHAR8)'(';
                          if (i1) goto l7;
                          i0 = _check_pointer(i0, 80150);
                          i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
                          i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i1, OOC_UINT32, 80150))*2);
                          i0 = XML_Parser__IsNameChar0(i0);
                          if (i0) goto l5;
                          XML_Parser__ParserDesc_ParseDocument_Err(110);
                          i0 = (OOC_INT32)dtd;
                          i1 = (OOC_INT32)XML_Parser__noName;
                          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80313)))), XML_DTD__BuilderDesc_NewNameCP)),XML_DTD__BuilderDesc_NewNameCP)((XML_DTD__Builder)i0, 0, (XML_UnicodeBuffer__CharArray)i1);
                          cp = (XML_DTD__CP)i0;
                          
                          goto l8;
l5:
                          i0 = (OOC_INT32)dtd;
                          i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_FALSE);
                          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80190)))), XML_DTD__BuilderDesc_NewNameCP)),XML_DTD__BuilderDesc_NewNameCP)((XML_DTD__Builder)i0, 0, (XML_UnicodeBuffer__CharArray)i1);
                          cp = (XML_DTD__CP)i0;
                          
                          goto l8;
l7:
                          i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_CurrentEntity();
                          currentEntity = (XML_DTD__Entity)i0;
                          XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'(');
                          XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
                          i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_choiceseq((XML_DTD__Entity)i0);
                          cp = (XML_DTD__CP)i0;
                          
l8:
                          i1 = XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_Quantifier();
                          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80385)))), XML_DTD__CPDesc_SetMode)),XML_DTD__CPDesc_SetMode)((XML_DTD__CP)i0, i1);
                          return (XML_DTD__CP)i0;
                          ;
                        }


                      _class = (OOC_CHAR8)'\000';
                      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_choiceseq_cp();
                      first = (XML_DTD__CP)i0;
                      XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
                      last = (XML_DTD__CP)i0;
                      
l1_loop:
                      i1 = (OOC_INT32)chars;
                      i2 = _check_pointer(i1, 80636);
                      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
                      i4 = cpos;
                      i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 80636))*2);
                      switch (i2) {
                      case (OOC_CHAR16)65534:
                        XML_Parser__ParserDesc_ParseDocument_NextBlock();
                        
                        goto l1_loop;
                      case (OOC_CHAR8)',':
                      case (OOC_CHAR8)'|':
                        i2 = _class;
                        i2 = i2==(OOC_CHAR8)'\000';
                        if (i2) goto l6;
                        goto l7;
l6:
                        i1 = _check_pointer(i1, 80811);
                        i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
                        i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 80811))*2);
                        _class = i1;
l7:
                        i1 = _class;
                        XML_Parser__ParserDesc_ParseDocument_CheckChar(i1);
                        XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
                        i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_choiceseq_cp();
                        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80940)))), XML_DTD__CPDesc_SetNext)),XML_DTD__CPDesc_SetNext)((XML_DTD__CP)i0, (XML_DTD__CP)i1);
                        i0 = (OOC_INT32)last;
                        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 80988))+4);
                        last = (XML_DTD__CP)i0;
                        XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
                        
                        goto l1_loop;
                      default:
                        goto l10;
                      }
l10:
                      XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)')');
                      i0 = (OOC_INT32)currentEntity;
                      XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i0);
                      i0 = _class;
                      i0 = i0==(OOC_CHAR8)',';
                      if (i0) goto l13;
                      i0 = (OOC_INT32)dtd;
                      i1 = (OOC_INT32)first;
                      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81399)))), XML_DTD__BuilderDesc_NewChoiceCP)),XML_DTD__BuilderDesc_NewChoiceCP)((XML_DTD__Builder)i0, 0, (XML_DTD__CP)i1);
                      return (XML_DTD__CP)i0;
                      goto l14;
l13:
                      i0 = (OOC_INT32)dtd;
                      i1 = (OOC_INT32)first;
                      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81323)))), XML_DTD__BuilderDesc_NewSeqCP)),XML_DTD__BuilderDesc_NewSeqCP)((XML_DTD__Builder)i0, 0, (XML_DTD__CP)i1);
                      return (XML_DTD__CP)i0;
l14:
                      _failed_function(79514); return 0;
                      ;
                    }


                  i0 = (OOC_INT32)currentEntity;
                  i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_choiceseq((XML_DTD__Entity)i0);
                  cp = (XML_DTD__CP)i0;
                  i1 = XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_Quantifier();
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81554)))), XML_DTD__CPDesc_SetMode)),XML_DTD__CPDesc_SetMode)((XML_DTD__CP)i0, i1);
                  i0 = (OOC_INT32)cp;
                  return (XML_DTD__CP)i0;
                  ;
                }


              i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("EMPTY", 6, 1);
              if (i0) goto l15;
              i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("ANY", 4, 1);
              if (i0) goto l13;
              i0 = (OOC_INT32)chars;
              i0 = _check_pointer(i0, 81900);
              i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
              i2 = cpos;
              i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 81900))*2);
              i0 = i0==(OOC_CHAR8)'(';
              if (i0) goto l7;
              XML_Parser__ParserDesc_ParseDocument_Err(106);
              i0 = (OOC_INT32)dtd;
              i1 = (OOC_INT32)XML_Parser__noName;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82279)))), XML_DTD__BuilderDesc_NewNameCP)),XML_DTD__BuilderDesc_NewNameCP)((XML_DTD__Builder)i0, 0, (XML_UnicodeBuffer__CharArray)i1);
              return (XML_DTD__CP)i0;
              goto l16;
l7:
              i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_CurrentEntity();
              currentEntity = (XML_DTD__Entity)i0;
              XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'(');
              XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
              i1 = XML_Parser__ParserDesc_ParseDocument_LookingAt("#PCDATA", 8, 1);
              if (i1) goto l10;
              i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children((XML_DTD__Entity)i0);
              return (XML_DTD__CP)i0;
              goto l16;
l10:
              i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_Mixed((XML_DTD__Entity)i0);
              return (XML_DTD__CP)i0;
              goto l16;
l13:
              i0 = (OOC_INT32)dtd;
              i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_FALSE);
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81839)))), XML_DTD__BuilderDesc_NewNameCP)),XML_DTD__BuilderDesc_NewNameCP)((XML_DTD__Builder)i0, 0, (XML_UnicodeBuffer__CharArray)i1);
              return (XML_DTD__CP)i0;
              goto l16;
l15:
              i0 = (OOC_INT32)dtd;
              i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_FALSE);
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81720)))), XML_DTD__BuilderDesc_NewNameCP)),XML_DTD__BuilderDesc_NewNameCP)((XML_DTD__Builder)i0, 0, (XML_UnicodeBuffer__CharArray)i1);
              return (XML_DTD__CP)i0;
l16:
              _failed_function(77751); return 0;
              ;
            }


          i0 = cpos;
          cpos = (i0+9);
          XML_Parser__ParserDesc_ParseDocument_S();
          i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_FALSE);
          elementName = (XML_UnicodeBuffer__CharArray)i0;
          XML_Parser__ParserDesc_ParseDocument_S();
          i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec();
          cp = (XML_DTD__CP)i0;
          XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
          i1 = (OOC_INT32)dtd;
          i2 = (OOC_INT32)currentEntity;
          i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 82617)))), XML_DTD__EntityDesc_IsDocumentEntity)),XML_DTD__EntityDesc_IsDocumentEntity)((XML_DTD__Entity)i2);
          i4 = (OOC_INT32)elementName;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82568)))), XML_DTD__BuilderDesc_NewElementDecl)),XML_DTD__BuilderDesc_NewElementDecl)((XML_DTD__Builder)i1, (XML_UnicodeBuffer__CharArray)i4, (XML_DTD__CP)i0, (!i3));
          elementDecl = (XML_DTD__ElementDecl)i0;
          i1 = (OOC_INT32)dtd;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 82655))+12);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 82655))+12);
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 82673)))), XML_DTD__NamespaceDesc_Add)),XML_DTD__NamespaceDesc_Add)((XML_DTD__Namespace)i1, (XML_DTD__Declaration)i0);
          i0 = !i0;
          if (!i0) goto l3;
          i0 = (OOC_INT32)dtd;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82719))+12);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82719))+12);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82737)))), XML_DTD__NamespaceDesc_Get)),XML_DTD__NamespaceDesc_Get)((XML_DTD__Namespace)i0, (XML_UnicodeBuffer__CharArray)i4);
          decl = (XML_DTD__Declaration)i0;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82777)))), &_td_XML_DTD__ElementDeclDesc, 82777)), 82789)))), XML_DTD__ElementDeclDesc_SetMultipleDecl)),XML_DTD__ElementDeclDesc_SetMultipleDecl)((XML_DTD__ElementDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82777)))), &_td_XML_DTD__ElementDeclDesc, 82777)));
l3:
          XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i2);
          XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'>');
          return;
          ;
        }

        
        void XML_Parser__ParserDesc_ParseDocument_markupdecl_AttListDecl(XML_DTD__Entity currentEntity) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
          XML_UnicodeBuffer__CharArray elementName;
          XML_UnicodeBuffer__CharArray attrName;
          OOC_INT8 attrType;
          XML_DTD__Enumeration attrEnumeration;
          OOC_INT8 _default;
          XML_DTD__AttValue defaultValue;
          XML_DTD__AttrDecl attrDecl;
          auto void XML_Parser__ParserDesc_ParseDocument_markupdecl_AttListDecl_AttType(OOC_INT8 *attrType, XML_DTD__Enumeration *_enum);
          auto void XML_Parser__ParserDesc_ParseDocument_markupdecl_AttListDecl_DefaultDecl(OOC_INT8 attrType, OOC_INT8 *_default, XML_DTD__AttValue *defaultValue);
            
            void XML_Parser__ParserDesc_ParseDocument_markupdecl_AttListDecl_AttType(OOC_INT8 *attrType, XML_DTD__Enumeration *_enum) {
              register OOC_INT32 i0,i1,i2;
              auto XML_DTD__Enumeration XML_Parser__ParserDesc_ParseDocument_markupdecl_AttListDecl_AttType_Enumeration(OOC_INT8 attrType);
                
                XML_DTD__Enumeration XML_Parser__ParserDesc_ParseDocument_markupdecl_AttListDecl_AttType_Enumeration(OOC_INT8 attrType) {
                  register OOC_INT32 i0,i1,i2,i3;

                  i0 = (OOC_INT32)dtd;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83527)))), XML_DTD__BuilderDesc_NewEnumeration)),XML_DTD__BuilderDesc_NewEnumeration)((XML_DTD__Builder)i0);
                  *_enum = (XML_DTD__Enumeration)i0;
                  XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'(');
                  i0 = attrType;
l1_loop:
                  XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
                  switch (i0) {
                  case 7:
                    i1 = (OOC_INT32)*_enum;
                    i2 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_TRUE);
                    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 83706)))), XML_DTD__EnumerationDesc_Append)),XML_DTD__EnumerationDesc_Append)((XML_DTD__Enumeration)i1, (XML_UnicodeBuffer__CharArray)i2);
                    goto l6;
                  case 8:
                    i1 = (OOC_INT32)*_enum;
                    i2 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Nmtoken(OOC_FALSE, OOC_FALSE);
                    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 83785)))), XML_DTD__EnumerationDesc_Append)),XML_DTD__EnumerationDesc_Append)((XML_DTD__Enumeration)i1, (XML_UnicodeBuffer__CharArray)i2);
                    goto l6;
                  default:
                    _failed_case(i0, 83635);
                    goto l6;
                  }
l6:
                  XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
                  i1 = (OOC_INT32)chars;
                  i1 = _check_pointer(i1, 83889);
                  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
                  i3 = cpos;
                  i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 83889))*2);
                  i1 = i1==(OOC_CHAR8)'|';
                  if (!i1) goto l11;
                  XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'|');
                  goto l1_loop;
l11:
                  XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)')');
                  i0 = (OOC_INT32)*_enum;
                  return (XML_DTD__Enumeration)i0;
                  ;
                }


              *_enum = (XML_DTD__Enumeration)(OOC_INT32)0;
              i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("CDATA", 6, 1);
              if (i0) goto l43;
              i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("ID", 3, 1);
              if (i0) goto l41;
              i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("IDREF", 6, 1);
              if (i0) goto l39;
              i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("IDREFS", 7, 1);
              if (i0) goto l37;
              i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("ENTITY", 7, 1);
              if (i0) goto l35;
              i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("ENTITIES", 9, 1);
              if (i0) goto l33;
              i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("NMTOKEN", 8, 1);
              if (i0) goto l31;
              i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("NMTOKENS", 9, 1);
              if (i0) goto l29;
              i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("NOTATION", 9, 1);
              if (i0) goto l19;
              i0 = (OOC_INT32)chars;
              i0 = _check_pointer(i0, 85227);
              i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
              i2 = cpos;
              i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 85227))*2);
              i0 = i0==(OOC_CHAR8)'(';
              
              goto l21;
l19:
              i0=OOC_TRUE;
l21:
              if (i0) goto l23;
              XML_Parser__ParserDesc_ParseDocument_Err(107);
              XML_Parser__ParserDesc_ParseDocument_NextChar();
              *attrType = 9;
              goto l44;
l23:
              i0 = (OOC_INT32)chars;
              i0 = _check_pointer(i0, 85267);
              i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
              i2 = cpos;
              i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 85267))*2);
              i0 = i0==(OOC_CHAR8)'(';
              if (i0) goto l26;
              *attrType = 7;
              cpos = (i2+8);
              XML_Parser__ParserDesc_ParseDocument_S();
              i0=7;
              goto l27;
l26:
              *attrType = 8;
              i0=8;
l27:
              i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_markupdecl_AttListDecl_AttType_Enumeration(i0);
              *_enum = (XML_DTD__Enumeration)i0;
              goto l44;
l29:
              i0 = cpos;
              cpos = (i0+8);
              *attrType = 6;
              goto l44;
l31:
              i0 = cpos;
              cpos = (i0+7);
              *attrType = 5;
              goto l44;
l33:
              i0 = cpos;
              cpos = (i0+8);
              *attrType = 4;
              goto l44;
l35:
              i0 = cpos;
              cpos = (i0+6);
              *attrType = 3;
              goto l44;
l37:
              i0 = cpos;
              cpos = (i0+6);
              *attrType = 2;
              goto l44;
l39:
              i0 = cpos;
              cpos = (i0+5);
              *attrType = 1;
              goto l44;
l41:
              i0 = cpos;
              cpos = (i0+2);
              *attrType = 0;
              goto l44;
l43:
              i0 = cpos;
              cpos = (i0+5);
              *attrType = 9;
l44:
              return;
              ;
            }

            
            void XML_Parser__ParserDesc_ParseDocument_markupdecl_AttListDecl_DefaultDecl(OOC_INT8 attrType, OOC_INT8 *_default, XML_DTD__AttValue *defaultValue) {
              register OOC_INT32 i0;

              *defaultValue = (XML_DTD__AttValue)(OOC_INT32)0;
              i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("#REQUIRED", 10, 1);
              if (i0) goto l11;
              i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("#IMPLIED", 9, 1);
              if (i0) goto l9;
              i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("#FIXED", 7, 1);
              if (i0) goto l7;
              *_default = 2;
              goto l8;
l7:
              i0 = cpos;
              cpos = (i0+6);
              XML_Parser__ParserDesc_ParseDocument_S();
              *_default = 3;
l8:
              i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_AttValue(OOC_TRUE);
              *defaultValue = (XML_DTD__AttValue)i0;
              goto l12;
l9:
              i0 = cpos;
              cpos = (i0+8);
              *_default = 1;
              goto l12;
l11:
              i0 = cpos;
              cpos = (i0+9);
              *_default = 0;
l12:
              return;
              ;
            }


          i0 = cpos;
          cpos = (i0+9);
          XML_Parser__ParserDesc_ParseDocument_S();
          i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_FALSE);
          elementName = (XML_UnicodeBuffer__CharArray)i0;
l1_loop:
          i0 = (OOC_INT32)chars;
          i0 = _check_pointer(i0, 86674);
          i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
          i2 = cpos;
          i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 86674))*2);
          i0 = i0!=(OOC_CHAR8)'>';
          if (!i0) goto l4;
          XML_Parser__ParserDesc_ParseDocument_S();
l4:
          i0 = (OOC_INT32)chars;
          i1 = _check_pointer(i0, 86741);
          i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
          i3 = cpos;
          i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 86741))*2);
          i1 = i1==(OOC_CHAR8)'>';
          if (i1) goto l7;
          i0 = _check_pointer(i0, 86764);
          i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
          i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i1, OOC_UINT32, 86764))*2);
          i0 = i0==(OOC_CHAR16)65535;
          
          goto l9;
l7:
          i0=OOC_TRUE;
l9:
          if (i0) goto l15;
          i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_FALSE);
          attrName = (XML_UnicodeBuffer__CharArray)i0;
          XML_Parser__ParserDesc_ParseDocument_S();
          XML_Parser__ParserDesc_ParseDocument_markupdecl_AttListDecl_AttType((void*)(OOC_INT32)&attrType, (void*)(OOC_INT32)&attrEnumeration);
          XML_Parser__ParserDesc_ParseDocument_S();
          i0 = attrType;
          XML_Parser__ParserDesc_ParseDocument_markupdecl_AttListDecl_DefaultDecl(i0, (void*)(OOC_INT32)&_default, (void*)(OOC_INT32)&defaultValue);
          i0 = (OOC_INT32)p;
          i0 = *(OOC_UINT8*)((_check_pointer(i0, 87009))+63);
          if (!i0) goto l1_loop;
          i0 = (OOC_INT32)dtd;
          i1 = (OOC_INT32)currentEntity;
          i2 = (OOC_INT32)defaultValue;
          i3 = _default;
          i4 = (OOC_INT32)attrEnumeration;
          i5 = attrType;
          i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 87193)))), XML_DTD__EntityDesc_IsDocumentEntity)),XML_DTD__EntityDesc_IsDocumentEntity)((XML_DTD__Entity)i1);
          i6 = (OOC_INT32)attrName;
          i7 = (OOC_INT32)elementName;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 87063)))), XML_DTD__BuilderDesc_NewAttrDecl)),XML_DTD__BuilderDesc_NewAttrDecl)((XML_DTD__Builder)i0, (XML_UnicodeBuffer__CharArray)i7, (XML_UnicodeBuffer__CharArray)i6, i5, (XML_DTD__Enumeration)i4, i3, (XML_DTD__AttValue)i2, (!i1));
          attrDecl = (XML_DTD__AttrDecl)i0;
          i1 = (OOC_INT32)dtd;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 87231)))), XML_DTD__BuilderDesc_AddAttribute)),XML_DTD__BuilderDesc_AddAttribute)((XML_DTD__Builder)i1, (XML_DTD__AttrDecl)i0);
          goto l1_loop;
l15:
          i0 = (OOC_INT32)currentEntity;
          XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i0);
          XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'>');
          return;
          ;
        }

        
        void XML_Parser__ParserDesc_ParseDocument_markupdecl_EntityDecl(XML_DTD__Entity currentEntity) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
          OOC_CHAR8 isPEntity;
          XML_UnicodeBuffer__CharArray name;
          XML_UnicodeBuffer__CharArray _public;
          XML_UnicodeBuffer__CharArray system;
          XML_UnicodeBuffer__CharArray ndata;
          XML_UnicodeBuffer__CharArray entityValue;
          OOC_INT8 entityType;
          XML_DTD__Entity entity;
          URI__URI baseURI;
          auto XML_UnicodeBuffer__CharArray XML_Parser__ParserDesc_ParseDocument_markupdecl_EntityDecl_EntityValue(OOC_CHAR8 isPEntity);
            
            XML_UnicodeBuffer__CharArray XML_Parser__ParserDesc_ParseDocument_markupdecl_EntityDecl_EntityValue(OOC_CHAR8 isPEntity) {
              register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
              XML_UnicodeBuffer__CharArray string;
              struct XML_Locator__Position pos;
              OOC_INT32 startLevel;
              OOC_CHAR16 endChar;
              OOC_INT32 storedPos;
              XML_DTD__Fragment fragment;
              auto void XML_Parser__ParserDesc_ParseDocument_markupdecl_EntityDecl_EntityValue_Copy(OOC_INT32 start, OOC_INT32 end);
                
                void XML_Parser__ParserDesc_ParseDocument_markupdecl_EntityDecl_EntityValue_Copy(OOC_INT32 start, OOC_INT32 end) {
                  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;

                  i0 = start;
                  i1 = end;
                  i0 = i0!=i1;
                  if (!i0) goto l8;
                  i0 = (OOC_INT32)chars;
                  i2 = cdelta;
l3_loop:
                  i3 = _check_pointer(i0, 88144);
                  i4 = start;
                  i5 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
                  i6 = _check_pointer(i0, 88167);
                  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
                  i6 = *(OOC_UINT16*)(i6+(_check_index(i4, i7, OOC_UINT32, 88167))*2);
                  *(OOC_UINT16*)(i3+(_check_index((i4-i2), i5, OOC_UINT32, 88144))*2) = i6;
                  i3 = i4+1;
                  i4 = i3!=i1;
                  start = i3;
                  if (i4) goto l3_loop;
l8:
                  return;
                  ;
                }


              i0 = (OOC_INT32)XML_Parser__noName;
              string = (XML_UnicodeBuffer__CharArray)i0;
              i1 = (OOC_INT32)chars;
              i2 = _check_pointer(i1, 88300);
              i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
              i4 = cpos;
              i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 88300))*2);
              i2 = i2==(OOC_CHAR8)'\047';
              if (i2) goto l3;
              i1 = _check_pointer(i1, 88323);
              i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
              i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 88323))*2);
              i1 = i1==(OOC_CHAR8)'"';
              
              goto l5;
l3:
              i1=OOC_TRUE;
l5:
              if (i1) goto l7;
              XML_Parser__ParserDesc_ParseDocument_Err(109);
              XML_Parser__ParserDesc_ParseDocument_NextChar();
              
              goto l32;
l7:
              i0 = (OOC_INT32)p;
              i1 = (OOC_INT32)dtd;
              i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 88608)))), XML_DTD__BuilderDesc_NewAttValue)),XML_DTD__BuilderDesc_NewAttValue)((XML_DTD__Builder)i1);
              *(OOC_INT32*)((_check_pointer(i0, 88584))+72) = i1;
              i0 = (OOC_INT32)&_td_XML_Locator__Position;
              XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(OOC_INT32)&pos, (RT0__Struct)i0);
              i1 = (OOC_INT32)p;
              i1 = *(OOC_INT32*)((_check_pointer(i1, 88698))+88);
              startLevel = i1;
              i1 = (OOC_INT32)chars;
              i1 = _check_pointer(i1, 88740);
              i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
              i3 = cpos;
              i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 88740))*2);
              endChar = i1;
              i1 = i3+1;
              cpos = i1;
              cstart = i1;
              cdelta = 0;
l8_loop:
              i1 = (OOC_INT32)chars;
              i2 = _check_pointer(i1, 88854);
              i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
              i4 = cpos;
              i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 88854))*2);
              switch (i2) {
              case (OOC_CHAR8)'\000' ... (OOC_CHAR8)'\037':
              case (OOC_CHAR16)65534:
                XML_Parser__ParserDesc_ParseDocument_ControlChar((OOC_CHAR8)'\012');
                goto l8_loop;
              case (OOC_CHAR16)65535:
                XML_Parser__ParserDesc_ParseDocument_ErrPos(6, (void*)(OOC_INT32)&pos, (RT0__Struct)i0);
                i0 = (OOC_INT32)p;
                i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 89045))+72);
                i2 = (OOC_INT32)dtd;
                i3 = cpos;
                i4 = cdelta;
                i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 89045))+72);
                i5 = (OOC_INT32)chars;
                i6 = cstart;
                i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 89075)))), XML_DTD__BuilderDesc_NewCharacters)),XML_DTD__BuilderDesc_NewCharacters)((XML_DTD__Builder)i2, (XML_UnicodeBuffer__CharArray)i5, i6, (i3-i4), OOC_TRUE);
                OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 89062)))), XML_DTD__AttValueDesc_Append)),XML_DTD__AttValueDesc_Append)((XML_DTD__AttValue)i0, (XML_DTD__Fragment)i2);
                goto l31;
              case (OOC_CHAR8)'%':
                i2 = cdelta;
                i2 = i4-i2;
                i3 = cstart;
                i4 = i3!=i2;
                if (i4) goto l14;
                goto l15;
l14:
                i4 = (OOC_INT32)p;
                i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 89352))+72);
                i6 = (OOC_INT32)dtd;
                i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 89352))+72);
                i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 89382)))), XML_DTD__BuilderDesc_NewCharacters)),XML_DTD__BuilderDesc_NewCharacters)((XML_DTD__Builder)i6, (XML_UnicodeBuffer__CharArray)i1, i3, i2, OOC_TRUE);
                OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 89369)))), XML_DTD__AttValueDesc_Append)),XML_DTD__AttValueDesc_Append)((XML_DTD__AttValue)i4, (XML_DTD__Fragment)i1);
l15:
                XML_Parser__ParserDesc_ParseDocument_PEReference(OOC_FALSE);
                goto l8_loop;
              case (OOC_CHAR8)'&':
                i1 = XML_Parser__ParserDesc_ParseDocument_LookingAt("&#", 3, 0);
                if (!i1) goto l18;
                goto l19;
l18:
                i1 = (OOC_INT32)p;
                i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 89923))+36);
                i1 = *(OOC_INT32*)((_check_pointer(i1, 89927))+24);
                i2 = cpos;
                i1 = i2+i1;
                storedPos = i1;
                i2 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_EntityRef(OOC_FALSE, OOC_TRUE);
                fragment = (XML_DTD__Fragment)i2;
                i2 = (OOC_INT32)p;
                i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 90035))+36);
                i2 = *(OOC_INT32*)((_check_pointer(i2, 90039))+24);
                i3 = cpos;
                XML_Parser__ParserDesc_ParseDocument_markupdecl_EntityDecl_EntityValue_Copy((i1-i2), i3);
                goto l8_loop;
l19:
                XML_Parser__ParserDesc_ParseDocument_CharRef();
                goto l8_loop;
              default:
                i2 = _check_pointer(i1, 90127);
                i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
                i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 90127))*2);
                i3 = endChar;
                i2 = i2==i3;
                if (i2) goto l24;
                i2=OOC_FALSE;
                goto l26;
l24:
                i2 = (OOC_INT32)p;
                i2 = *(OOC_INT32*)((_check_pointer(i2, 90149))+88);
                i5 = startLevel;
                i2 = i2==i5;
                
l26:
                if (i2) goto l29;
                i2 = _check_pointer(i1, 90528);
                i3 = cdelta;
                i5 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
                i1 = _check_pointer(i1, 90550);
                i6 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
                i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i6, OOC_UINT32, 90550))*2);
                *(OOC_UINT16*)(i2+(_check_index((i4-i3), i5, OOC_UINT32, 90528))*2) = i1;
                cpos = (i4+1);
                goto l8_loop;
l29:
                i0 = (OOC_INT32)p;
                i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 90331))+72);
                i5 = (OOC_INT32)dtd;
                i6 = cdelta;
                i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 90331))+72);
                i7 = cstart;
                i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 90361)))), XML_DTD__BuilderDesc_NewCharacters)),XML_DTD__BuilderDesc_NewCharacters)((XML_DTD__Builder)i5, (XML_UnicodeBuffer__CharArray)i1, i7, (i4-i6), OOC_TRUE);
                OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 90348)))), XML_DTD__AttValueDesc_Append)),XML_DTD__AttValueDesc_Append)((XML_DTD__AttValue)i0, (XML_DTD__Fragment)i1);
                XML_Parser__ParserDesc_ParseDocument_CheckChar(i3);
                goto l31;
              }
l31:
              i0 = (OOC_INT32)p;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 90647))+72);
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 90647))+72);
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 90664)))), XML_DTD__AttValueDesc_Flatten)),XML_DTD__AttValueDesc_Flatten)((XML_DTD__AttValue)i0, (XML_DTD__AttrDecl)(OOC_INT32)0);
              string = (XML_UnicodeBuffer__CharArray)i0;
              i1 = (OOC_INT32)p;
              *(OOC_INT32*)((_check_pointer(i1, 90694))+72) = (OOC_INT32)0;
              
l32:
              return (XML_UnicodeBuffer__CharArray)i0;
              ;
            }


          i0 = cpos;
          cpos = (i0+8);
          XML_Parser__ParserDesc_ParseDocument_SnoPE();
          i0 = (OOC_INT32)chars;
          i0 = _check_pointer(i0, 90963);
          i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
          i2 = cpos;
          i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 90963))*2);
          i0 = i0==(OOC_CHAR8)'%';
          isPEntity = i0;
          if (!i0) goto l3;
          XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'%');
          XML_Parser__ParserDesc_ParseDocument_S();
l3:
          i1 = (OOC_INT32)p;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 91080))+4);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 91080))+4);
          i1 = _check_pointer(i1, 91083);
          i1 = (OOC_INT32)&_td_XML_Locator__Position;
          XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i2, 91083)), (RT0__Struct)i1);
          i2 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_TRUE);
          name = (XML_UnicodeBuffer__CharArray)i2;
          XML_Parser__ParserDesc_ParseDocument_S();
          i3 = (OOC_INT32)chars;
          i4 = _check_pointer(i3, 91144);
          i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
          i6 = cpos;
          i4 = *(OOC_UINT16*)(i4+(_check_index(i6, i5, OOC_UINT32, 91144))*2);
          i4 = i4==(OOC_CHAR8)'\047';
          if (i4) goto l6;
          i3 = _check_pointer(i3, 91167);
          i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
          i3 = *(OOC_UINT16*)(i3+(_check_index(i6, i4, OOC_UINT32, 91167))*2);
          i3 = i3==(OOC_CHAR8)'"';
          
          goto l8;
l6:
          i3=OOC_TRUE;
l8:
          if (i3) goto l26;
          entityValue = (XML_UnicodeBuffer__CharArray)(OOC_INT32)0;
          if (i0) goto l12;
          entityType = 2;
          i1=2;
          goto l13;
l12:
          entityType = 3;
          i1=3;
l13:
          XML_Parser__ParserDesc_ParseDocument_ExternalID(OOC_FALSE, (void*)(OOC_INT32)&_public, (void*)(OOC_INT32)&system, (void*)(OOC_INT32)&baseURI);
          i0 = !i0;
          ndata = (XML_UnicodeBuffer__CharArray)(OOC_INT32)0;
          if (i0) goto l16;
          i0=OOC_FALSE;
          goto l18;
l16:
          i0 = XML_Parser__ParserDesc_ParseDocument_LookingAtS();
          
l18:
          if (i0) goto l20;
          i0=i1;i1=(OOC_INT32)0;
          goto l25;
l20:
          XML_Parser__ParserDesc_ParseDocument_S();
          i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("NDATA", 6, 1);
          if (i0) goto l23;
          i0=i1;i1=(OOC_INT32)0;
          goto l25;
l23:
          i0 = cpos;
          entityType = 4;
          cpos = (i0+5);
          XML_Parser__ParserDesc_ParseDocument_S();
          i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_FALSE);
          ndata = (XML_UnicodeBuffer__CharArray)i0;
          i1=i0;i0=4;
l25:
          i3 = (OOC_INT32)dtd;
          i4 = (OOC_INT32)currentEntity;
          i5 = (OOC_INT32)baseURI;
          i6 = (OOC_INT32)_public;
          i7 = (OOC_INT32)system;
          i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 92490)))), XML_DTD__EntityDesc_IsDocumentEntity)),XML_DTD__EntityDesc_IsDocumentEntity)((XML_DTD__Entity)i4);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 92376)))), XML_DTD__BuilderDesc_NewExternalEntity)),XML_DTD__BuilderDesc_NewExternalEntity)((XML_DTD__Builder)i3, (XML_UnicodeBuffer__CharArray)i2, i0, (XML_UnicodeBuffer__CharArray)i6, (XML_UnicodeBuffer__CharArray)i7, (XML_UnicodeBuffer__CharArray)i1, (URI__URI)i5, (!i4));
          entity = (XML_DTD__Entity)i0;
          
          goto l38;
l26:
          _public = (XML_UnicodeBuffer__CharArray)(OOC_INT32)0;
          system = (XML_UnicodeBuffer__CharArray)(OOC_INT32)0;
          ndata = (XML_UnicodeBuffer__CharArray)(OOC_INT32)0;
          i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_markupdecl_EntityDecl_EntityValue(i0);
          entityValue = (XML_UnicodeBuffer__CharArray)i0;
          i2 = isPEntity;
          if (i2) goto l29;
          entityType = 0;
          i3=0;
          goto l30;
l29:
          entityType = 1;
          i3=1;
l30:
          i2 = !i2;
          i4 = (OOC_INT32)name;
          if (i2) goto l33;
          i2=OOC_FALSE;
          goto l35;
l33:
          i2 = (OOC_INT32)dtd;
          i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 91485)))), XML_DTD__BuilderDesc_IsValidEntityDecl)),XML_DTD__BuilderDesc_IsValidEntityDecl)((XML_DTD__Builder)i2, (XML_UnicodeBuffer__CharArray)i4, (XML_UnicodeBuffer__CharArray)i0);
          i2 = !i2;
          
l35:
          if (!i2) goto l37;
          i2 = (OOC_INT32)p;
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 91576))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 91576))+4);
          i2 = _check_pointer(i2, 91579);
          XML_Parser__ParserDesc_ParseDocument_ErrPos(118, (void*)(_check_pointer(i5, 91579)), (RT0__Struct)i1);
l37:
          i1 = (OOC_INT32)dtd;
          i2 = (OOC_INT32)currentEntity;
          i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 91730)))), XML_DTD__EntityDesc_IsDocumentEntity)),XML_DTD__EntityDesc_IsDocumentEntity)((XML_DTD__Entity)i2);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 91620)))), XML_DTD__BuilderDesc_NewInternalEntity)),XML_DTD__BuilderDesc_NewInternalEntity)((XML_DTD__Builder)i1, (XML_UnicodeBuffer__CharArray)i4, i3, (XML_UnicodeBuffer__CharArray)i0, (!i2));
          entity = (XML_DTD__Entity)i0;
          
l38:
          XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
          i1 = (OOC_INT32)currentEntity;
          XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i1);
          XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'>');
          i1 = (OOC_INT32)p;
          i1 = *(OOC_UINT8*)((_check_pointer(i1, 92629))+63);
          if (!i1) goto l48;
          i1 = isPEntity;
          if (i1) goto l46;
          i1 = (OOC_INT32)dtd;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 92755))+4);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 92755))+4);
          i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 92768)))), XML_DTD__NamespaceDesc_Add)),XML_DTD__NamespaceDesc_Add)((XML_DTD__Namespace)i1, (XML_DTD__Declaration)i0);
          if (!i1) goto l48;
          i1 = (OOC_INT32)p;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 92801))+44);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 92801))+44);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 92810)))), XML_Builder__BuilderDesc_EntityDecl)),XML_Builder__BuilderDesc_EntityDecl)((XML_Builder__Builder)i1, (XML_DTD__Entity)i0);
          goto l48;
l46:
          i1 = (OOC_INT32)dtd;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 92708))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 92708))+8);
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 92721)))), XML_DTD__NamespaceDesc_Add)),XML_DTD__NamespaceDesc_Add)((XML_DTD__Namespace)i1, (XML_DTD__Declaration)i0);
l48:
          return;
          ;
        }

        
        void XML_Parser__ParserDesc_ParseDocument_markupdecl_NotationDecl(XML_DTD__Entity currentEntity) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
          XML_UnicodeBuffer__CharArray name;
          XML_UnicodeBuffer__CharArray _public;
          XML_UnicodeBuffer__CharArray system;
          URI__URI baseURI;

          i0 = cpos;
          cpos = (i0+10);
          XML_Parser__ParserDesc_ParseDocument_S();
          i0 = (OOC_INT32)p;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 93193))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 93193))+4);
          i0 = _check_pointer(i0, 93196);
          XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i1, 93196)), (RT0__Struct)((OOC_INT32)&_td_XML_Locator__Position));
          i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_TRUE);
          name = (XML_UnicodeBuffer__CharArray)i0;
          XML_Parser__ParserDesc_ParseDocument_S();
          XML_Parser__ParserDesc_ParseDocument_ExternalID(OOC_TRUE, (void*)(OOC_INT32)&_public, (void*)(OOC_INT32)&system, (void*)(OOC_INT32)&baseURI);
          XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
          i1 = (OOC_INT32)p;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 93493))+44);
          i3 = (OOC_INT32)dtd;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 93493))+44);
          i4 = (OOC_INT32)_public;
          i5 = (OOC_INT32)system;
          i6 = (OOC_INT32)baseURI;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 93517)))), XML_DTD__BuilderDesc_NewNotation)),XML_DTD__BuilderDesc_NewNotation)((XML_DTD__Builder)i3, (XML_UnicodeBuffer__CharArray)i0, (XML_UnicodeBuffer__CharArray)i4, (XML_UnicodeBuffer__CharArray)i5, (URI__URI)i6);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 93502)))), XML_Builder__BuilderDesc_Notation)),XML_Builder__BuilderDesc_Notation)((XML_Builder__Builder)i1, (XML_DTD__Notation)i0);
          i0 = (OOC_INT32)currentEntity;
          XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i0);
          XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'>');
          return;
          ;
        }


      i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<!ELEMENT", 10, 1);
      if (i0) goto l23;
      i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<!ATTLIST", 10, 1);
      if (i0) goto l21;
      i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<!ENTITY", 9, 1);
      if (i0) goto l19;
      i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<!NOTATION", 11, 1);
      if (i0) goto l17;
      i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<?", 3, 0);
      if (i0) goto l15;
      i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<!--", 5, 0);
      if (i0) goto l13;
      XML_Parser__ParserDesc_ParseDocument_Err(105);
      XML_Parser__ParserDesc_ParseDocument_NextChar();
      goto l24;
l13:
      XML_Parser__ParserDesc_ParseDocument_Comment();
      goto l24;
l15:
      XML_Parser__ParserDesc_ParseDocument_PI();
      goto l24;
l17:
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_CurrentEntity();
      XML_Parser__ParserDesc_ParseDocument_markupdecl_NotationDecl((XML_DTD__Entity)i0);
      goto l24;
l19:
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_CurrentEntity();
      XML_Parser__ParserDesc_ParseDocument_markupdecl_EntityDecl((XML_DTD__Entity)i0);
      goto l24;
l21:
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_CurrentEntity();
      XML_Parser__ParserDesc_ParseDocument_markupdecl_AttListDecl((XML_DTD__Entity)i0);
      goto l24;
l23:
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_CurrentEntity();
      XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl((XML_DTD__Entity)i0);
l24:
      XML_Parser__ParserDesc_ParseDocument_DiscardPreviousInput();
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_extSubsetDecl() {
      register OOC_INT32 i0,i1,i2,i3,i4;
      XML_DTD__Entity currentEntity;
      struct XML_Locator__Position pos;
      auto void XML_Parser__ParserDesc_ParseDocument_extSubsetDecl_ignoreSectContents();
        
        void XML_Parser__ParserDesc_ParseDocument_extSubsetDecl_ignoreSectContents() {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
          OOC_INT32 level;

          level = 1;
          i0 = cpos;
          cstart = i0;
          cdelta = 0;
          i0 = (OOC_INT32)&_td_XML_Locator__Position;
          i1=1;
l1_loop:
          i2 = (OOC_INT32)chars;
          i3 = _check_pointer(i2, 94586);
          i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
          i5 = cpos;
          i3 = *(OOC_UINT16*)(i3+(_check_index(i5, i4, OOC_UINT32, 94586))*2);
          switch (i3) {
          case (OOC_CHAR8)'\000' ... (OOC_CHAR8)'\037':
          case (OOC_CHAR16)65534:
            XML_Parser__ParserDesc_ParseDocument_ControlChar((OOC_CHAR8)'\012');
            
            goto l1_loop;
          case (OOC_CHAR16)65535:
            XML_Parser__ParserDesc_ParseDocument_ErrPos(19, (void*)(OOC_INT32)&pos, (RT0__Struct)i0);
            goto l23;
          case (OOC_CHAR8)']':
            i2 = XML_Parser__ParserDesc_ParseDocument_LookingAt("]]>", 4, 0);
            if (i2) goto l8;
            i2 = (OOC_INT32)chars;
            i3 = _check_pointer(i2, 95134);
            i4 = cdelta;
            i5 = cpos;
            i6 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
            i2 = _check_pointer(i2, 95156);
            i7 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
            i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i7, OOC_UINT32, 95156))*2);
            *(OOC_UINT16*)(i3+(_check_index((i5-i4), i6, OOC_UINT32, 95134))*2) = i2;
            i2 = i5+1;
            cpos = i2;
            {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
            goto l15;
l8:
            i2 = i1==1;
            if (!i2) goto l11;
            i2 = (OOC_INT32)currentEntity;
            XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i2);
l11:
            i2 = cpos;
            i2 = i2+3;
            cpos = i2;
            i1 = i1-1;
            level = i1;
            i3 = i1==0;
            if (i3) goto l23;
            {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
l15:
            i1=i2;
            goto l1_loop;
          case (OOC_CHAR8)'<':
            i2 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<![", 4, 0);
            if (i2) goto l19;
            i2 = (OOC_INT32)chars;
            i3 = _check_pointer(i2, 95386);
            i4 = cdelta;
            i5 = cpos;
            i6 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
            i2 = _check_pointer(i2, 95408);
            i7 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
            i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i7, OOC_UINT32, 95408))*2);
            *(OOC_UINT16*)(i3+(_check_index((i5-i4), i6, OOC_UINT32, 95386))*2) = i2;
            i2 = i5+1;
            cpos = i2;
            {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
            goto l20;
l19:
            i2 = cpos;
            i2 = i2+3;
            cpos = i2;
            i1 = i1+1;
            level = i1;
            {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
l20:
            i1=i2;
            goto l1_loop;
          default:
            i3 = _check_pointer(i2, 95475);
            i4 = cdelta;
            i6 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
            i2 = _check_pointer(i2, 95497);
            i7 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
            i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i7, OOC_UINT32, 95497))*2);
            *(OOC_UINT16*)(i3+(_check_index((i5-i4), i6, OOC_UINT32, 95475))*2) = i2;
            cpos = (i5+1);
            
            goto l1_loop;
          }
l23:
          return;
          ;
        }


      i0 = (OOC_INT32)&_td_XML_Locator__Position;
l1_loop:
      i1 = (OOC_INT32)chars;
      i2 = _check_pointer(i1, 95615);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i4 = cpos;
      i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 95615))*2);
      i2 = i2==(OOC_CHAR8)'<';
      if (i2) goto l12;
      i1 = _check_pointer(i1, 96754);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 96754))*2);
      i1 = i1==(OOC_CHAR8)'%';
      if (!i1) goto l5;
      goto l10;
l5:
      i1 = XML_Parser__ParserDesc_ParseDocument_LookingAtSnoPE();
      if (!i1) goto l30;
      XML_Parser__ParserDesc_ParseDocument_SnoPE();
      goto l1_loop;
l10:
      XML_Parser__ParserDesc_ParseDocument_PEReference(OOC_TRUE);
      goto l1_loop;
l12:
      i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_CurrentEntity();
      currentEntity = (XML_DTD__Entity)i1;
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(OOC_INT32)&pos, (RT0__Struct)i0);
      i2 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<![", 4, 0);
      if (i2) goto l15;
      XML_Parser__ParserDesc_ParseDocument_markupdecl();
      goto l1_loop;
l15:
      i2 = cpos;
      cpos = (i2+3);
      XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
      i2 = XML_Parser__ParserDesc_ParseDocument_LookingAt("INCLUDE", 8, 1);
      if (i2) goto l22;
      i2 = XML_Parser__ParserDesc_ParseDocument_LookingAt("IGNORE", 7, 1);
      if (!i2) goto l19;
      goto l20;
l19:
      XML_Parser__ParserDesc_ParseDocument_Err(113);
      goto l1_loop;
l20:
      i2 = cpos;
      cpos = (i2+6);
      XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
      XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i1);
      XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'[');
      XML_Parser__ParserDesc_ParseDocument_extSubsetDecl_ignoreSectContents();
      goto l1_loop;
l22:
      i2 = cpos;
      cpos = (i2+7);
      XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
      XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i1);
      XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'[');
      XML_Parser__ParserDesc_ParseDocument_extSubsetDecl();
      XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i1);
      i1 = XML_Parser__ParserDesc_ParseDocument_LookingAt("]]>", 4, 0);
      if (!i1) goto l24;
      goto l25;
l24:
      XML_Parser__ParserDesc_ParseDocument_Err(18);
      goto l1_loop;
l25:
      i1 = cpos;
      cpos = (i1+3);
      goto l1_loop;
l30:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_prolog() {
      register OOC_INT32 i0;
      auto void XML_Parser__ParserDesc_ParseDocument_prolog_doctypedecl();
        
        void XML_Parser__ParserDesc_ParseDocument_prolog_doctypedecl() {
          register OOC_INT32 i0,i1,i2,i3,i4;
          XML_UnicodeBuffer__CharArray rootName;
          XML_UnicodeBuffer__CharArray _public;
          XML_UnicodeBuffer__CharArray system;
          URI__URI baseURI;
          XML_DTD__ExternalEntity externalSubset;
          XML_DTD__Declaration decl;
          XML_DTD__AttrDecl attr;
          auto void XML_Parser__ParserDesc_ParseDocument_prolog_doctypedecl_CheckGeneralEntities();
            
            void XML_Parser__ParserDesc_ParseDocument_prolog_doctypedecl_CheckGeneralEntities() {
              register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
              XML_Builder__Builder oldBuilder;
              OOC_INT32 oldErrCount;
              OOC_CHAR8 oldValidating;
              struct XML_Locator__Position pos;
              XML_DTD__Declaration decl;
              OOC_INT32 len;

              i0 = (OOC_INT32)p;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 97615))+44);
              oldBuilder = (XML_Builder__Builder)i1;
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 97652));
              i2 = *(OOC_INT32*)(_check_pointer(i2, 97661));
              oldErrCount = i2;
              i0 = *(OOC_UINT8*)((_check_pointer(i0, 97701))+62);
              oldValidating = i0;
              i3 = (OOC_INT32)&_td_XML_Locator__Position;
              XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(OOC_INT32)&pos, (RT0__Struct)i3);
              i4 = (OOC_INT32)p;
              i5 = (OOC_INT32)XML_Builder__New();
              *(OOC_INT32*)((_check_pointer(i4, 97768))+44) = i5;
              i4 = (OOC_INT32)p;
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 97815))+48);
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 97820))+4);
              i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 97833));
              i5 = i4!=(OOC_INT32)0;
              decl = (XML_DTD__Declaration)i4;
              if (!i5) goto l14;
l3_loop:
              i5 = *(OOC_INT8*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 97902)))), &_td_XML_DTD__EntityDesc, 97902)), 97909))+8);
              i5 = i5==0;
              if (!i5) goto l9;
              i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 97995))+4);
              i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 97995))+4);
              i6 = OOC_ARRAY_LENGTH((_check_pointer(i6, 98001)), (OOC_INT32)0);
              i5 = LongStrings__Length((void*)(_check_pointer(i5, 98001)), i6);
              i5 = i5+2;
              i6 = cpos;
              len = i5;
              cpos = (i6+i5);
              XML_Parser__ParserDesc_ParseDocument_PushEntity((XML_DTD__Entity)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 98059)))), &_td_XML_DTD__EntityDesc, 98059)), OOC_TRUE);
              XML_Parser__ParserDesc_ParseDocument_content();
              i6 = (OOC_INT32)chars;
              i6 = _check_pointer(i6, 98136);
              i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
              i8 = cpos;
              i6 = *(OOC_UINT16*)(i6+(_check_index(i8, i7, OOC_UINT32, 98136))*2);
              i6 = i6!=(OOC_CHAR16)65535;
              if (!i6) goto l8;
              XML_Parser__ParserDesc_ParseDocument_ErrPos(302, (void*)(OOC_INT32)&pos, (RT0__Struct)i3);
              i6 = (OOC_INT32)p;
              i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 98237))+104);
              i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 98346))+4);
              i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 98346))+4);
              i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 98237))+104);
              i9 = OOC_ARRAY_LENGTH((_check_pointer(i9, 98352)), (OOC_INT32)0);
              i8 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i8, 98352)), i9);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 98248)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i6, "name", 5, (Msg__LStringPtr)i8);
l8:
              XML_Parser__ParserDesc_ParseDocument_PopEntity();
              i6 = cpos;
              cpos = (i6-i5);
l9:
              i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 98473));
              decl = (XML_DTD__Declaration)i4;
              i5 = i4!=(OOC_INT32)0;
              if (i5) goto l3_loop;
l14:
              i3 = (OOC_INT32)p;
              *(OOC_UINT8*)((_check_pointer(i3, 98580))+62) = i0;
              i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 98626));
              i0 = *(OOC_INT32*)(_check_pointer(i0, 98635));
              i0 = i0==i2;
              if (i0) goto l17;
              i0 = (OOC_INT32)XML_Builder__New();
              *(OOC_INT32*)((_check_pointer(i3, 98807))+44) = i0;
              goto l18;
l17:
              *(OOC_INT32*)((_check_pointer(i3, 98701))+44) = i1;
l18:
              return;
              ;
            }


          i0 = (OOC_INT32)p;
          *(OOC_UINT8*)((_check_pointer(i0, 98953))+66) = OOC_TRUE;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 99003))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 99003))+4);
          i0 = _check_pointer(i0, 99006);
          i0 = (OOC_INT32)&_td_XML_Locator__Position;
          XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i1, 99006)), (RT0__Struct)i0);
          i1 = (OOC_INT32)p;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 99019))+44);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 99041))+48);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 99019))+44);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 99028)))), XML_Builder__BuilderDesc_StartDTD)),XML_Builder__BuilderDesc_StartDTD)((XML_Builder__Builder)i1, (XML_DTD__Builder)i3);
          i1 = cpos;
          cpos = (i1+9);
          XML_Parser__ParserDesc_ParseDocument_S();
          i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_FALSE);
          rootName = (XML_UnicodeBuffer__CharArray)i1;
          i2 = (OOC_INT32)p;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 99198))+48);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 99198))+48);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 99203)))), XML_DTD__BuilderDesc_SetRootName)),XML_DTD__BuilderDesc_SetRootName)((XML_DTD__Builder)i2, (XML_UnicodeBuffer__CharArray)i1);
          XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
          i1 = XML_Parser__ParserDesc_ParseDocument_LookingAt("SYSTEM", 7, 0);
          if (i1) goto l3;
          i1 = XML_Parser__ParserDesc_ParseDocument_LookingAt("PUBLIC", 7, 0);
          
          goto l5;
l3:
          i1=OOC_TRUE;
l5:
          if (i1) goto l7;
          system = (XML_UnicodeBuffer__CharArray)(OOC_INT32)0;
          _public = (XML_UnicodeBuffer__CharArray)(OOC_INT32)0;
          baseURI = (URI__URI)(OOC_INT32)0;
          goto l8;
l7:
          XML_Parser__ParserDesc_ParseDocument_ExternalID(OOC_FALSE, (void*)(OOC_INT32)&_public, (void*)(OOC_INT32)&system, (void*)(OOC_INT32)&baseURI);
          XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
l8:
          i1 = (OOC_INT32)chars;
          i1 = _check_pointer(i1, 99646);
          i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
          i3 = cpos;
          i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 99646))*2);
          i1 = i1==(OOC_CHAR8)'[';
          if (!i1) goto l28;
          XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'[');
l11_loop:
          i1 = (OOC_INT32)chars;
          i2 = _check_pointer(i1, 99728);
          i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
          i4 = cpos;
          i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 99728))*2);
          i2 = i2==(OOC_CHAR8)'<';
          if (!i2) goto l13;
          goto l22;
l13:
          i1 = _check_pointer(i1, 99796);
          i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
          i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 99796))*2);
          i1 = i1==(OOC_CHAR8)'%';
          if (!i1) goto l15;
          goto l20;
l15:
          i1 = XML_Parser__ParserDesc_ParseDocument_LookingAtSnoPE();
          if (!i1) goto l24;
          XML_Parser__ParserDesc_ParseDocument_SnoPE();
          goto l11_loop;
l20:
          XML_Parser__ParserDesc_ParseDocument_PEReference(OOC_TRUE);
          goto l11_loop;
l22:
          XML_Parser__ParserDesc_ParseDocument_markupdecl();
          goto l11_loop;
l24:
          i1 = (OOC_INT32)p;
          i1 = *(OOC_INT32*)((_check_pointer(i1, 99990))+88);
          i1 = i1!=0;
          if (!i1) goto l27;
          XML_Parser__ParserDesc_ParseDocument_Err(300);
l27:
          XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)']');
          XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
l28:
          XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'>');
          i1 = (OOC_INT32)_public;
          i2 = i1!=(OOC_INT32)0;
          externalSubset = (XML_DTD__ExternalEntity)(OOC_INT32)0;
          if (i2) goto l31;
          i2 = (OOC_INT32)system;
          i2 = i2!=(OOC_INT32)0;
          
          goto l33;
l31:
          i2=OOC_TRUE;
l33:
          if (!i2) goto l45;
          i2 = (OOC_INT32)p;
          i2 = *(OOC_UINT8*)((_check_pointer(i2, 100253))+60);
          if (i2) goto l37;
          XML_Parser__ParserDesc_ParseDocument_SkippedEntity((XML_UnicodeBuffer__CharArray)(OOC_INT32)0);
          goto l45;
l37:
          i2 = (OOC_INT32)dtd;
          i3 = (OOC_INT32)baseURI;
          i4 = (OOC_INT32)system;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 100311)))), XML_DTD__BuilderDesc_NewExternalDTD)),XML_DTD__BuilderDesc_NewExternalDTD)((XML_DTD__Builder)i2, (XML_UnicodeBuffer__CharArray)i1, (XML_UnicodeBuffer__CharArray)i4, (URI__URI)i3);
          externalSubset = (XML_DTD__ExternalEntity)i1;
          XML_Parser__ParserDesc_ParseDocument_PushEntity((XML_DTD__Entity)i1, OOC_TRUE);
          i2 = (OOC_INT32)p;
          *(OOC_UINT8*)((_check_pointer(i2, 100415))+67) = OOC_TRUE;
          i2 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<?xml", 6, 1);
          if (!i2) goto l40;
          XML_Parser__ParserDesc_ParseDocument_XMLDecl((XML_DTD__ExternalEntity)i1);
l40:
          XML_Parser__ParserDesc_ParseDocument_extSubsetDecl();
          i1 = (OOC_INT32)p;
          *(OOC_UINT8*)((_check_pointer(i1, 100598))+67) = OOC_FALSE;
          i1 = (OOC_INT32)chars;
          i1 = _check_pointer(i1, 100648);
          i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
          i3 = cpos;
          i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 100648))*2);
          i1 = i1!=(OOC_CHAR16)65535;
          if (!i1) goto l43;
          XML_Parser__ParserDesc_ParseDocument_Err(28);
l43:
          XML_Parser__ParserDesc_ParseDocument_PopEntity();
l45:
          i1 = (OOC_INT32)dtd;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 100932))+16);
          decl = (XML_DTD__Declaration)i1;
          i2 = i1!=(OOC_INT32)0;
          if (!i2) goto l56;
l48_loop:
          i2 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 101006)))), &_td_XML_DTD__AttrDeclDesc, 101006);
          attr = (XML_DTD__AttrDecl)i2;
          i3 = *(OOC_INT8*)((_check_pointer(i2, 101035))+20);
          i3 = i3>=2;
          if (!i3) goto l51;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 101094))+24);
          XML_Parser__ParserDesc_ParseDocument_Expand((XML_DTD__AttValue)i2);
l51:
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 101147));
          decl = (XML_DTD__Declaration)i1;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l48_loop;
l56:
          i1 = (OOC_INT32)dtd;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 101187)))), XML_DTD__BuilderDesc_AttachAttributes)),XML_DTD__BuilderDesc_AttachAttributes)((XML_DTD__Builder)i1);
          XML_Parser__ParserDesc_ParseDocument_prolog_doctypedecl_CheckGeneralEntities();
          i1 = (OOC_INT32)p;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101261))+4);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101261))+4);
          i1 = _check_pointer(i1, 101264);
          XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i2, 101264)), (RT0__Struct)i0);
          i0 = (OOC_INT32)p;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101277))+44);
          i2 = *(OOC_UINT8*)((_check_pointer(i0, 101313))+64);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101277))+44);
          i3 = (OOC_INT32)externalSubset;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 101286)))), XML_Builder__BuilderDesc_EndDTD)),XML_Builder__BuilderDesc_EndDTD)((XML_Builder__Builder)i0, (XML_DTD__ExternalEntity)i3, i2);
          i0 = (OOC_INT32)p;
          *(OOC_UINT8*)((_check_pointer(i0, 101357))+66) = OOC_FALSE;
          return;
          ;
        }


      i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<?xml", 6, 1);
      if (!i0) goto l3;
      i0 = (OOC_INT32)p;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101483))+52);
      XML_Parser__ParserDesc_ParseDocument_XMLDecl((XML_DTD__ExternalEntity)i0);
l3:
      XML_Parser__ParserDesc_ParseDocument_MiscRep();
      i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<!DOCTYPE", 10, 1);
      if (!i0) goto l6;
      XML_Parser__ParserDesc_ParseDocument_prolog_doctypedecl();
      XML_Parser__ParserDesc_ParseDocument_MiscRep();
l6:
      return;
      ;
    }


  i0 = (OOC_INT32)p;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101678))+52);
  XML_Parser__ParserDesc_ParseDocument_SetFileEntity((XML_DTD__ExternalEntity)i0);
  XML_Parser__ParserDesc_ParseDocument_ResetLocator();
  i0 = (OOC_INT32)p;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101729))+36);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101733))+20);
  chars = (XML_UnicodeBuffer__CharArray)i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101754))+48);
  dtd = (XML_DTD__Builder)i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101786))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101786))+4);
  i0 = _check_pointer(i0, 101789);
  i0 = (OOC_INT32)&_td_XML_Locator__Position;
  XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i1, 101789)), (RT0__Struct)i0);
  i1 = (OOC_INT32)p;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101798))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101822))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101798))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 101807)))), XML_Builder__BuilderDesc_SetLocator)),XML_Builder__BuilderDesc_SetLocator)((XML_Builder__Builder)i4, (XML_Locator__Locator)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101833))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101863))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101833))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 101842)))), XML_Builder__BuilderDesc_SetErrorListener)),XML_Builder__BuilderDesc_SetErrorListener)((XML_Builder__Builder)i4, (XML_Locator__ErrorListener)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101886))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101913))+52);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101886))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 101895)))), XML_Builder__BuilderDesc_StartDocument)),XML_Builder__BuilderDesc_StartDocument)((XML_Builder__Builder)i1, (XML_DTD__ExternalEntity)i3);
  XML_Parser__ParserDesc_ParseDocument_prolog();
  i1 = (OOC_INT32)p;
  *(OOC_UINT8*)((_check_pointer(i1, 101969))+65) = OOC_TRUE;
  XML_Parser__ParserDesc_ParseDocument_element();
  i1 = (OOC_INT32)p;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 102020))+88);
  i1 = i1!=0;
  if (!i1) goto l3;
  XML_Parser__ParserDesc_ParseDocument_Err(301);
l3:
  i1 = (OOC_INT32)p;
  *(OOC_UINT8*)((_check_pointer(i1, 102085))+65) = OOC_FALSE;
  XML_Parser__ParserDesc_ParseDocument_MiscRep();
  i1 = (OOC_INT32)chars;
  i1 = _check_pointer(i1, 102141);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i3 = cpos;
  i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 102141))*2);
  i1 = i1!=(OOC_CHAR16)65535;
  if (!i1) goto l6;
  XML_Parser__ParserDesc_ParseDocument_Err(2);
l6:
  XML_Parser__ParserDesc_ParseDocument_CheckInvalidChars();
  i1 = (OOC_INT32)p;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 102260))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 102260))+4);
  i1 = _check_pointer(i1, 102263);
  XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i2, 102263)), (RT0__Struct)i0);
  i0 = (OOC_INT32)p;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102272))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102272))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 102288)))), XML_Builder__BuilderDesc_EndDocument)),XML_Builder__BuilderDesc_EndDocument)((XML_Builder__Builder)i0);
  return;
  ;
}

static void XML_Parser__Init(XML_Parser__Parser p, OOC_CHAR8 _new, Channel__Reader reader, URI__URI baseURI, XML_UnicodeCodec__Factory codecFactory, XML_EntityResolver__Resolver entityResolver, XML_Builder__Builder builder) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)p;
  i1 = (OOC_INT32)XML_Error__NewList();
  *(OOC_INT32*)(_check_pointer(i0, 102619)) = i1;
  i1 = _new;
  if (i1) goto l3;
  _assert(OOC_FALSE, 127, 102871);
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 102677))+4) = ((OOC_INT32)RT0__NewObject(_td_XML_Locator__Locator.baseTypes[0]));
  *(OOC_INT32*)((_check_pointer(i0, 102695))+8) = ((OOC_INT32)RT0__NewObject(_td_XML_Parser__ErrorListener.baseTypes[0]));
  *(OOC_INT32*)((_check_pointer(i0, 102725))+76) = ((OOC_INT32)RT0__NewObject(_td_XML_Parser__NameList.baseTypes[0], 8));
  *(OOC_INT32*)((_check_pointer(i0, 102764))+84) = ((OOC_INT32)RT0__NewObject(_td_XML_Parser__PEInfoList.baseTypes[0], 4));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 102844));
  i2 = (OOC_INT32)reader;
  i3 = (OOC_INT32)codecFactory;
  i1 = (OOC_INT32)XML_UnicodeBuffer__NewInput((Channel__Reader)i2, (XML_UnicodeCodec__Factory)i3, (Msg__MsgList)i1);
  *(OOC_INT32*)((_check_pointer(i0, 102796))+36) = i1;
l4:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102964))+4);
  *(OOC_INT32*)((_check_pointer(i1, 102967))+16) = (OOC_INT32)0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102999))+8);
  *(OOC_INT32*)(_check_pointer(i1, 103014)) = i0;
  i1 = (OOC_INT32)XML_DTD__New();
  *(OOC_INT32*)((_check_pointer(i0, 103034))+48) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 103080))+48);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 103080))+48);
  i3 = (OOC_INT32)baseURI;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 103085)))), XML_DTD__BuilderDesc_NewDocumentEntity)),XML_DTD__BuilderDesc_NewDocumentEntity)((XML_DTD__Builder)i2, (URI__URI)i3);
  *(OOC_INT32*)((_check_pointer(i0, 103059))+52) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 103121))+52);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 103157))+36);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 103161))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 103121))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 103137)))), XML_DTD__ExternalEntityDesc_SetCodecFactory)),XML_DTD__ExternalEntityDesc_SetCodecFactory)((XML_DTD__ExternalEntity)i3, (XML_UnicodeCodec__Factory)i2);
  i1 = (OOC_INT32)builder;
  *(OOC_INT32*)((_check_pointer(i0, 103183))+44) = i1;
  i2 = (OOC_INT32)entityResolver;
  *(OOC_INT32*)((_check_pointer(i0, 103210))+40) = i1;
  i1 = i2==(OOC_INT32)0;
  if (!i1) goto l7;
  i1 = (OOC_INT32)XML_EntityResolver__New();
  entityResolver = (XML_EntityResolver__Resolver)i1;
l7:
  i1 = (OOC_INT32)entityResolver;
  *(OOC_INT32*)((_check_pointer(i0, 103333))+32) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 103372))+60) = OOC_TRUE;
  *(OOC_UINT8*)((_check_pointer(i0, 103406))+61) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i0, 103437))+62) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i0, 103465))+63) = OOC_TRUE;
  *(OOC_UINT8*)((_check_pointer(i0, 103501))+64) = OOC_TRUE;
  *(OOC_UINT8*)((_check_pointer(i0, 103538))+65) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i0, 103573))+66) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i0, 103596))+67) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i0, 103630))+68) = OOC_FALSE;
  *(OOC_INT32*)((_check_pointer(i0, 103669))+72) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 103700))+80) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 103725))+88) = 0;
  return;
  ;
}

XML_Parser__Parser XML_Parser__NewChannel(Channel__Channel ch, URI__URI baseURI, XML_UnicodeCodec__Factory codecFactory, XML_EntityResolver__Resolver entityResolver, XML_Builder__Builder builder) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  XML_Parser__Parser p;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_Parser__Parser.baseTypes[0]);
  p = (XML_Parser__Parser)i0;
  i1 = (OOC_INT32)ch;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 105856)))), Channel__ChannelDesc_NewReader)),Channel__ChannelDesc_NewReader)((Channel__Channel)i1);
  i2 = (OOC_INT32)baseURI;
  i3 = (OOC_INT32)codecFactory;
  i4 = (OOC_INT32)entityResolver;
  i5 = (OOC_INT32)builder;
  XML_Parser__Init((XML_Parser__Parser)i0, OOC_TRUE, (Channel__Reader)i1, (URI__URI)i2, (XML_UnicodeCodec__Factory)i3, (XML_EntityResolver__Resolver)i4, (XML_Builder__Builder)i5);
  return (XML_Parser__Parser)i0;
  ;
}

XML_Parser__Parser XML_Parser__NewReader(Channel__Reader reader, URI__URI baseURI, XML_UnicodeCodec__Factory codecFactory, XML_EntityResolver__Resolver entityResolver, XML_Builder__Builder builder) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_Parser__Parser.baseTypes[0]);
  i1 = (OOC_INT32)reader;
  i2 = (OOC_INT32)baseURI;
  i3 = (OOC_INT32)codecFactory;
  i4 = (OOC_INT32)entityResolver;
  i5 = (OOC_INT32)builder;
  XML_Parser__Init((XML_Parser__Parser)i0, OOC_TRUE, (Channel__Reader)i1, (URI__URI)i2, (XML_UnicodeCodec__Factory)i3, (XML_EntityResolver__Resolver)i4, (XML_Builder__Builder)i5);
  return (XML_Parser__Parser)i0;
  ;
}

XML_Parser__Parser XML_Parser__NewURI(URI__URI uri, URI__URI baseURI, XML_UnicodeCodec__Factory codecFactory, XML_EntityResolver__Resolver entityResolver, XML_Builder__Builder builder, Msg__Msg *res) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)uri;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 106922)))), URI__URIDesc_GetChannel)),URI__URIDesc_GetChannel)((URI__URI)i0, 2, (void*)(OOC_INT32)res);
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  i2 = (OOC_INT32)codecFactory;
  i3 = (OOC_INT32)entityResolver;
  i4 = (OOC_INT32)builder;
  i0 = (OOC_INT32)XML_Parser__NewChannel((Channel__Channel)i1, (URI__URI)i0, (XML_UnicodeCodec__Factory)i2, (XML_EntityResolver__Resolver)i3, (XML_Builder__Builder)i4);
  return (XML_Parser__Parser)i0;
  goto l4;
l3:
  return (XML_Parser__Parser)(OOC_INT32)0;
l4:
  _failed_function(106475); return 0;
  ;
}

XML_Parser__Parser XML_Parser__NewFile(const OOC_CHAR8 filePath__ref[], OOC_LEN filePath_0d, URI__URI baseURI, XML_UnicodeCodec__Factory codecFactory, XML_EntityResolver__Resolver entityResolver, XML_Builder__Builder builder, Msg__Msg *res) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_ALLOCATE_VPAR(filePath,OOC_CHAR8 ,filePath_0d)

  OOC_INITIALIZE_VPAR(filePath__ref,filePath,OOC_CHAR8 ,filePath_0d)
  i0 = (OOC_INT32)URI_Scheme_File__ToURI((void*)(OOC_INT32)filePath, filePath_0d);
  i1 = (OOC_INT32)baseURI;
  i2 = (OOC_INT32)codecFactory;
  i3 = (OOC_INT32)entityResolver;
  i4 = (OOC_INT32)builder;
  i0 = (OOC_INT32)XML_Parser__NewURI((URI__URI)i0, (URI__URI)i1, (XML_UnicodeCodec__Factory)i2, (XML_EntityResolver__Resolver)i3, (XML_Builder__Builder)i4, (void*)(OOC_INT32)res);
  return (XML_Parser__Parser)i0;
  ;
}

XML_Parser__Parser XML_Parser__NewExternalID(const OOC_CHAR16 _public__ref[], OOC_LEN _public_0d, const OOC_CHAR16 system__ref[], OOC_LEN system_0d, URI__URI systemBaseURI, XML_UnicodeCodec__Factory codecFactory, XML_EntityResolver__Resolver entityResolver, XML_Builder__Builder builder, Msg__Msg *res) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(_public,OOC_CHAR16 ,_public_0d)
  OOC_ALLOCATE_VPAR(system,OOC_CHAR16 ,system_0d)
  URI__URI uri;
  auto XML_UnicodeBuffer__CharArray XML_Parser__NewExternalID_ToString(OOC_CHAR16 s[], OOC_LEN s_0d);
    
    XML_UnicodeBuffer__CharArray XML_Parser__NewExternalID_ToString(OOC_CHAR16 s[], OOC_LEN s_0d) {
      register OOC_INT32 i0,i1;
      XML_UnicodeBuffer__CharArray str;

      i0 = (
      _cmp16((const void*)(OOC_INT32)s,(const void*)((OOC_CHAR16[]){0})))==(OOC_INT32)0;
      if (i0) goto l3;
      i0 = LongStrings__Length((void*)(OOC_INT32)s, s_0d);
      i0 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], (i0+1));
      str = (XML_UnicodeBuffer__CharArray)i0;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 108278)), (OOC_INT32)0);
      _copy_16((const void*)(OOC_INT32)s,(void*)(_check_pointer(i0, 108278)),i1);
      return (XML_UnicodeBuffer__CharArray)i0;
      goto l4;
l3:
      return (XML_UnicodeBuffer__CharArray)(OOC_INT32)0;
l4:
      _failed_function(108070); return 0;
      ;
    }


  OOC_INITIALIZE_VPAR(_public__ref,_public,OOC_CHAR16 ,(_public_0d*2))
  OOC_INITIALIZE_VPAR(system__ref,system,OOC_CHAR16 ,(system_0d*2))
  i0 = (OOC_INT32)entityResolver;
  i1 = (OOC_INT32)XML_Parser__NewExternalID_ToString((void*)(OOC_INT32)_public, _public_0d);
  i2 = (OOC_INT32)XML_Parser__NewExternalID_ToString((void*)(OOC_INT32)system, system_0d);
  i3 = (OOC_INT32)systemBaseURI;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 108358)))), XML_EntityResolver__ResolverDesc_GetURI)),XML_EntityResolver__ResolverDesc_GetURI)((XML_EntityResolver__Resolver)i0, (XML_UnicodeBuffer__CharArray)i1, (XML_UnicodeBuffer__CharArray)i2, (URI__URI)i3, (void*)(OOC_INT32)&uri, (void*)(OOC_INT32)res);
  i0 = (OOC_INT32)uri;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)codecFactory;
  i2 = (OOC_INT32)builder;
  i3 = (OOC_INT32)entityResolver;
  i0 = (OOC_INT32)XML_Parser__NewURI((URI__URI)i0, (URI__URI)(OOC_INT32)0, (XML_UnicodeCodec__Factory)i1, (XML_EntityResolver__Resolver)i3, (XML_Builder__Builder)i2, (void*)(OOC_INT32)res);
  return (XML_Parser__Parser)i0;
  goto l4;
l3:
  return (XML_Parser__Parser)(OOC_INT32)0;
l4:
  _failed_function(107560); return 0;
  ;
}

static void XML_Parser__SetErrorMessages() {
  register OOC_INT32 i0,i1;
  OOC_INT16 i;
  OOC_CHAR8 t[128];

  i = 0;
  i0=0;
l1_loop:
  switch (i0) {
  case 1:
    _copy_8((const void*)"Invalid character in document",(void*)(OOC_INT32)t,128);
    goto l63;
  case 2:
    _copy_8((const void*)"Junk after document element",(void*)(OOC_INT32)t,128);
    goto l63;
  case 3:
    _copy_8((const void*)"String `]]>\047 not allowed in character data",(void*)(OOC_INT32)t,128);
    goto l63;
  case 4:
    _copy_8((const void*)"String `--\047 not allowed in comment",(void*)(OOC_INT32)t,128);
    goto l63;
  case 5:
    _copy_8((const void*)"Comment not closed",(void*)(OOC_INT32)t,128);
    goto l63;
  case 6:
    _copy_8((const void*)"String not closed",(void*)(OOC_INT32)t,128);
    goto l63;
  case 7:
    _copy_8((const void*)"Processing instruction not closed",(void*)(OOC_INT32)t,128);
    goto l63;
  case 8:
    _copy_8((const void*)"CDATA section not closed",(void*)(OOC_INT32)t,128);
    goto l63;
  case 9:
    _copy_8((const void*)"Expected whitespace",(void*)(OOC_INT32)t,128);
    goto l63;
  case 10:
    _copy_8((const void*)"Expected name token",(void*)(OOC_INT32)t,128);
    goto l63;
  case 11:
    _copy_8((const void*)"Expected Nmtoken",(void*)(OOC_INT32)t,128);
    goto l63;
  case 12:
    _copy_8((const void*)"Expected character `${symbol}\047",(void*)(OOC_INT32)t,128);
    goto l63;
  case 13:
    _copy_8((const void*)"Character `<\047 not allowed in attribute value",(void*)(OOC_INT32)t,128);
    goto l63;
  case 14:
    _copy_8((const void*)"Expected digit [0-9]",(void*)(OOC_INT32)t,128);
    goto l63;
  case 15:
    _copy_8((const void*)"Expected digit [0-9a-fA-F]",(void*)(OOC_INT32)t,128);
    goto l63;
  case 16:
    _copy_8((const void*)"Expected string",(void*)(OOC_INT32)t,128);
    goto l63;
  case 17:
    _copy_8((const void*)"Character reference designates illegal character",(void*)(OOC_INT32)t,128);
    goto l63;
  case 18:
    _copy_8((const void*)"Exepcted `]]>\047",(void*)(OOC_INT32)t,128);
    goto l63;
  case 19:
    _copy_8((const void*)"Ignored section not closed",(void*)(OOC_INT32)t,128);
    goto l63;
  case 20:
    _copy_8((const void*)"Invalid character in public ID string",(void*)(OOC_INT32)t,128);
    goto l63;
  case 21:
    _copy_8((const void*)"Invalid character in encoding name",(void*)(OOC_INT32)t,128);
    goto l63;
  case 22:
    _copy_8((const void*)"Invalid character in version number",(void*)(OOC_INT32)t,128);
    goto l63;
  case 23:
    _copy_8((const void*)"Expected non-empty string",(void*)(OOC_INT32)t,128);
    goto l63;
  case 24:
    _copy_8((const void*)"Expected \047yes\047 or \047no\047",(void*)(OOC_INT32)t,128);
    goto l63;
  case 25:
    _copy_8((const void*)"XML declaration must be at beginning of file",(void*)(OOC_INT32)t,128);
    goto l63;
  case 26:
    _copy_8((const void*)"This target name is reserved",(void*)(OOC_INT32)t,128);
    goto l63;
  case 27:
    _copy_8((const void*)"Document `${uri}\047 had ${encodings} character encoding errors",(void*)(OOC_INT32)t,128);
    goto l63;
  case 28:
    _copy_8((const void*)"Junk after external DTD subset",(void*)(OOC_INT32)t,128);
    goto l63;
  case 29:
    _copy_8((const void*)"Unknown character encoding",(void*)(OOC_INT32)t,128);
    goto l63;
  case 30:
    _copy_8((const void*)"This name must not contain a colon character `:\047",(void*)(OOC_INT32)t,128);
    goto l63;
  case 31:
    _copy_8((const void*)"Invalid use of colon in a qualified name",(void*)(OOC_INT32)t,128);
    goto l63;
  case 105:
    _copy_8((const void*)"Expected markup declaration",(void*)(OOC_INT32)t,128);
    goto l63;
  case 106:
    _copy_8((const void*)"Expected content specification: `EMPTY\047, `ANY\047, or `(\047",(void*)(OOC_INT32)t,128);
    goto l63;
  case 107:
    _copy_8((const void*)"Expected attribute type (type name, `NOTATION\047, or enumeration)",(void*)(OOC_INT32)t,128);
    goto l63;
  case 108:
    _copy_8((const void*)"Expected attribute value",(void*)(OOC_INT32)t,128);
    goto l63;
  case 109:
    _copy_8((const void*)"Expected entity value",(void*)(OOC_INT32)t,128);
    goto l63;
  case 110:
    _copy_8((const void*)"Expected content particle (name or `(\047)",(void*)(OOC_INT32)t,128);
    goto l63;
  case 111:
    _copy_8((const void*)"Expected token `version\047",(void*)(OOC_INT32)t,128);
    goto l63;
  case 112:
    _copy_8((const void*)"Expected `PUBLIC\047 or `SYSTEM\047",(void*)(OOC_INT32)t,128);
    goto l63;
  case 113:
    _copy_8((const void*)"Expected `INCLUDE\047 or `IGNORE\047",(void*)(OOC_INT32)t,128);
    goto l63;
  case 114:
    _copy_8((const void*)"Expected `?>\047",(void*)(OOC_INT32)t,128);
    goto l63;
  case 115:
    _copy_8((const void*)"Parameter entity references are restricted to markup declarations in the internal subset of the DTD",(void*)(OOC_INT32)t,128);
    goto l63;
  case 116:
    _copy_8((const void*)"Expected token `encoding\047",(void*)(OOC_INT32)t,128);
    goto l63;
  case 117:
    _copy_8((const void*)"Malformed URI: ${uri_error}",(void*)(OOC_INT32)t,128);
    goto l63;
  case 118:
    _copy_8((const void*)"Invalid redefinition of a predefined internal entity",(void*)(OOC_INT32)t,128);
    goto l63;
  case 208:
    _copy_8((const void*)"Expected element",(void*)(OOC_INT32)t,128);
    goto l63;
  case 209:
    _copy_8((const void*)"Expected end tag </${name}>",(void*)(OOC_INT32)t,128);
    goto l63;
  case 210:
    _copy_8((const void*)"General entity `${name}\047 not defined",(void*)(OOC_INT32)t,128);
    goto l63;
  case 211:
    _copy_8((const void*)"Parameter entity `${name}\047 not defined",(void*)(OOC_INT32)t,128);
    goto l63;
  case 212:
    _copy_8((const void*)"Attribute `${name}\047 is already defined",(void*)(OOC_INT32)t,128);
    goto l63;
  case 213:
    _copy_8((const void*)"General entity `${name}\047 is defined recursively",(void*)(OOC_INT32)t,128);
    goto l63;
  case 214:
    _copy_8((const void*)"Required attribute `${name}\047 is not set",(void*)(OOC_INT32)t,128);
    goto l63;
  case 300:
    _copy_8((const void*)"End tag `${name}\047 comes from a different entity than its start tag",(void*)(OOC_INT32)t,128);
    goto l63;
  case 301:
    _copy_8((const void*)"Unbalanced general entity reference",(void*)(OOC_INT32)t,128);
    goto l63;
  case 302:
    _copy_8((const void*)"Replacement text of general entity `${name}\047 is not valid content",(void*)(OOC_INT32)t,128);
    goto l63;
  case 303:
    _copy_8((const void*)"Could not access URL `${uri}\047: ${channel_error}",(void*)(OOC_INT32)t,128);
    goto l63;
  case 304:
    _copy_8((const void*)"Reference to unparsed entity `${name}\047 not allowed",(void*)(OOC_INT32)t,128);
    goto l63;
  case 305:
    _copy_8((const void*)"Attribute value contains reference to external entity `${name}\047",(void*)(OOC_INT32)t,128);
    goto l63;
  case 306:
    _copy_8((const void*)"Nesting violation: Opening and closing parenthesis not in same entity",(void*)(OOC_INT32)t,128);
    goto l63;
  default:
    _copy_8((const void*)"",(void*)(OOC_INT32)t,128);
    goto l63;
  }
l63:
  i1 = (
  _cmp8((const void*)(OOC_INT32)t,(const void*)""))!=(OOC_INT32)0;
  if (!i1) goto l66;
  i1 = (OOC_INT32)XML_Parser__parserContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 113454)))), XML_Error__ContextDesc_SetString)),XML_Error__ContextDesc_SetString)((XML_Error__Context)i1, i0, (void*)(OOC_INT32)t, 128);
l66:
  i0 = i0+1;
  i = i0;
  i1 = i0<=999;
  if (i1) goto l1_loop;
l70:
  return;
  ;
}

void OOC_XML_Parser_init(void) {
  register OOC_INT32 i0,i1;

  _copy_16((const void*)((OOC_CHAR16[]){45,39,40,41,43,44,46,47,58,61,63,59,33,42,35,64,36,95,37,0}),(void*)(OOC_INT32)XML_Parser__suplPubidChar,32);
  i0 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], 8);
  XML_Parser__noName = (XML_UnicodeBuffer__CharArray)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 113609)), (OOC_INT32)0);
  _copy_16((const void*)((OOC_CHAR16[]){35,110,111,95,110,97,109,101,0}),(void*)(_check_pointer(i0, 113609)),i1);
  i0 = (OOC_INT32)XML_Error__NewContext("XML:Parser", 11);
  XML_Parser__parserContext = (XML_Error__Context)i0;
  XML_Parser__SetErrorMessages();
  return;
  ;
}

/* --- */
