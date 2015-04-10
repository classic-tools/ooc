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
  i1 = (OOC_CHAR16)'0'<=i0;
  if (i1) goto l9;
  i0=OOC_FALSE;
  goto l10;
l9:
  i0 = i0<=(OOC_CHAR16)'9';
  
l10:
  return i0;
l11:
  _failed_function(9249); return 0;
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
  case (OOC_CHAR16)'A' ... (OOC_CHAR16)'Z':
  case (OOC_CHAR16)'a' ... (OOC_CHAR16)'z':
  case (OOC_CHAR16)192 ... (OOC_CHAR16)214:
  case (OOC_CHAR16)216 ... (OOC_CHAR16)246:
  case (OOC_CHAR16)248 ... (OOC_CHAR16)255:
    return OOC_TRUE;
    goto l45;
  default:
    return OOC_FALSE;
    goto l45;
  }
l45:
  _failed_function(9735); return 0;
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
  _failed_function(13911); return 0;
  ;
}

static OOC_CHAR8 XML_Parser__IsExtender(OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = i0==(OOC_CHAR16)183;
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
  _failed_function(15949); return 0;
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
  i1 = i0==(OOC_CHAR16)'.';
  
  goto l9;
l7:
  i1=OOC_TRUE;
l9:
  if (i1) goto l11;
  i1 = i0==(OOC_CHAR16)'-';
  
  goto l13;
l11:
  i1=OOC_TRUE;
l13:
  if (i1) goto l15;
  i1 = i0==(OOC_CHAR16)'_';
  
  goto l17;
l15:
  i1=OOC_TRUE;
l17:
  if (i1) goto l19;
  i1 = i0==(OOC_CHAR16)':';
  
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
  i1 = i0==(OOC_CHAR16)'_';
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (i1) goto l7;
  i0 = i0==(OOC_CHAR16)':';
  
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
  i2 = (OOC_CHAR16)'A'<=i1;
  if (i2) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = i1<=(OOC_CHAR16)'Z';
  
l5:
  if (i1) goto l11;
  i1 = (OOC_CHAR16)'0'<=i0;
  if (i1) goto l9;
  i1=OOC_FALSE;
  goto l13;
l9:
  i1 = i0<=(OOC_CHAR16)'9';
  
  goto l13;
l11:
  i1=OOC_TRUE;
l13:
  if (i1) goto l15;
  i1 = i0==(OOC_CHAR16)' ';
  
  goto l17;
l15:
  i1=OOC_TRUE;
l17:
  if (i1) goto l19;
  i1 = i0==(OOC_CHAR16)13;
  
  goto l21;
l19:
  i1=OOC_TRUE;
l21:
  if (i1) goto l23;
  i1 = i0==(OOC_CHAR16)10;
  
  goto l25;
l23:
  i1=OOC_TRUE;
l25:
  if (i1) goto l44;
  i1 = *(OOC_UINT16*)((OOC_INT32)XML_Parser__suplPubidChar+(_check_index(0, 32, OOC_UINT32, 17100))*2);
  i1 = i1!=(OOC_CHAR16)0;
  if (i1) goto l29;
  i1=OOC_FALSE;
  goto l31;
l29:
  i1 = *(OOC_UINT16*)((OOC_INT32)XML_Parser__suplPubidChar+(_check_index(0, 32, OOC_UINT32, 17126))*2);
  i1 = i1!=i0;
  
l31:
  if (i1) goto l33;
  i0=0;
  goto l43;
l33:
  i1=0;
l34_loop:
  i1 = i1+1;
  i2 = *(OOC_UINT16*)((OOC_INT32)XML_Parser__suplPubidChar+(_check_index(i1, 32, OOC_UINT32, 17100))*2);
  i2 = i2!=(OOC_CHAR16)0;
  if (i2) goto l37;
  i2=OOC_FALSE;
  goto l39;
l37:
  i2 = *(OOC_UINT16*)((OOC_INT32)XML_Parser__suplPubidChar+(_check_index(i1, 32, OOC_UINT32, 17126))*2);
  i2 = i2!=i0;
  
l39:
  if (i2) goto l34_loop;
l42:
  i0=i1;
l43:
  i0 = *(OOC_UINT16*)((OOC_INT32)XML_Parser__suplPubidChar+(_check_index(i0, 32, OOC_UINT32, 17193))*2);
  return (i0!=(OOC_CHAR16)0);
  goto l45;
l44:
  return OOC_TRUE;
l45:
  _failed_function(16818); return 0;
  ;
}

static OOC_CHAR8 XML_Parser__IsVersionNumChar(OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1,i2;

  i0 = ch;
  i1 = _cap(i0);
  i2 = (OOC_CHAR16)'A'<=i1;
  if (i2) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = i1<=(OOC_CHAR16)'Z';
  
l5:
  if (i1) goto l11;
  i1 = (OOC_CHAR16)'0'<=i0;
  if (i1) goto l9;
  i1=OOC_FALSE;
  goto l13;
l9:
  i1 = i0<=(OOC_CHAR16)'9';
  
  goto l13;
l11:
  i1=OOC_TRUE;
l13:
  if (i1) goto l15;
  i1 = i0==(OOC_CHAR16)'_';
  
  goto l17;
l15:
  i1=OOC_TRUE;
l17:
  if (i1) goto l19;
  i1 = i0==(OOC_CHAR16)'.';
  
  goto l21;
l19:
  i1=OOC_TRUE;
l21:
  if (i1) goto l23;
  i1 = i0==(OOC_CHAR16)':';
  
  goto l25;
l23:
  i1=OOC_TRUE;
l25:
  if (i1) goto l27;
  i0 = i0==(OOC_CHAR16)'-';
  
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
  i2 = (OOC_CHAR16)'A'<=i1;
  if (i2) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = i1<=(OOC_CHAR16)'Z';
  
l5:
  if (i1) goto l27;
  i1 = first;
  i1 = !i1;
  if (i1) goto l9;
  return OOC_FALSE;
  goto l28;
l9:
  i1 = (OOC_CHAR16)'0'<=i0;
  if (i1) goto l12;
  i1=OOC_FALSE;
  goto l14;
l12:
  i1 = i0<=(OOC_CHAR16)'9';
  
l14:
  if (i1) goto l16;
  i1 = i0==(OOC_CHAR16)'.';
  
  goto l18;
l16:
  i1=OOC_TRUE;
l18:
  if (i1) goto l20;
  i1 = i0==(OOC_CHAR16)'_';
  
  goto l22;
l20:
  i1=OOC_TRUE;
l22:
  if (i1) goto l24;
  i0 = i0==(OOC_CHAR16)'-';
  
  goto l25;
l24:
  i0=OOC_TRUE;
l25:
  return i0;
  goto l28;
l27:
  return OOC_TRUE;
l28:
  _failed_function(17485); return 0;
  ;
}

Msg__Msg XML_Parser__ErrorListenerDesc_Error(XML_Parser__ErrorListener el, XML_Error__Context context, OOC_INT32 code, OOC_CHAR8 fatalError, const struct XML_Locator__Position *pos__ref) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(pos,XML_Locator__Position ,1)
  XML_Parser__Parser p;
  Msg__Msg err;

  OOC_INITIALIZE_VPAR(pos__ref,pos,XML_Locator__Position ,20)
  i0 = (OOC_INT32)el;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18146));
  p = (XML_Parser__Parser)i0;
  i1 = (OOC_INT32)context;
  i2 = code;
  i1 = (OOC_INT32)XML_Error__New((XML_Error__Context)i1, i2);
  err = (Msg__Msg)i1;
  i2 = *(OOC_INT32*)(OOC_INT32)pos;
  i3 = XML_Error__errMsgCharPosBase;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18196)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "char", 5, (i2+i3));
  i2 = *(OOC_INT32*)((OOC_INT32)pos+4);
  i3 = XML_Error__errMsgLineBase;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18268)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "line", 5, (i2+i3));
  i2 = *(OOC_INT32*)((OOC_INT32)pos+8);
  i3 = XML_Error__errMsgColumnBase;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18332)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "column", 7, (i2+i3));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18451))+56);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18463))+36);
  i2 = (OOC_INT32)URI__NewURIAttribute("baseURI", 8, (URI__URI)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18402)))), Msg__MsgDesc_SetAttribute)),Msg__MsgDesc_SetAttribute)((Msg__Msg)i1, (Msg__Attribute)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)pos+16);
  i3 = i2!=(OOC_INT32)0;
  if (!i3) goto l3;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18631))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18631))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 18637)), 0);
  i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i3, 18637)), i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18527)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i1, "entity_name", 12, (Msg__LStringPtr)i2);
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18655));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18655));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18664)))), Msg__MsgListDesc_Append)),Msg__MsgListDesc_Append)((Msg__MsgList)i3, (Msg__Msg)i1);
  i2 = fatalError;
  if (i2) goto l6;
  i2=OOC_FALSE;
  goto l8;
l6:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18715))+40);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18702))+44);
  i2 = i3==i2;
  
l8:
  if (!i2) goto l10;
  i2 = (OOC_INT32)XML_Builder__New();
  *(OOC_INT32*)((_check_pointer(i0, 18745))+44) = i2;
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
      register OOC_INT32 i0,i1,i2;

      i0 = *(OOC_INT32*)(OOC_INT32)pos;
      i1 = len;
      *(OOC_INT32*)(OOC_INT32)pos = (i0-i1);
      i0 = (OOC_INT32)pos+8;
      i2 = *(OOC_INT32*)i0;
      *(OOC_INT32*)i0 = (i2-i1);
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_StorePosition(struct XML_Locator__Position *pos, RT0__Struct pos__tag) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 i;

      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21194))+36);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21218))+36);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21222))+20);
      i2 = (OOC_INT32)chars;
      i1 = i2==i1;
      
l5:
      if (i1) goto l23;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21550))+36);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l18;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 21613))+88);
      i1 = i1-1;
      i = i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21647))+84);
      i2 = _check_pointer(i2, 21656);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21673))+36);
      i2 = (OOC_INT32)*(OOC_INT32*)(i2+((_check_index(i1, i3, OOC_UINT32, 21656))*28));
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21677))+20);
      i2 = i2!=i3;
      if (!i2) goto l19;
l12_loop:
      i1 = i1-1;
      i = i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21647))+84);
      i2 = _check_pointer(i2, 21656);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21673))+36);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21677))+20);
      i2 = (OOC_INT32)*(OOC_INT32*)(i2+((_check_index(i1, i3, OOC_UINT32, 21656))*28));
      i2 = i2!=i4;
      if (i2) goto l12_loop;
      goto l19;
l18:
      i = 0;
      i1=0;
l19:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21763))+84);
      i2 = _check_pointer(i2, 21772);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21786))+84);
      i4 = _check_pointer(i4, 21795);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i1, i5, OOC_UINT32, 21795))*28))+24);
      i2 = *(OOC_INT32*)((i2+((_check_index(i1, i3, OOC_UINT32, 21772))*28))+4);
      i3 = *(OOC_INT32*)((_check_pointer(i4, 21802))+24);
      *(OOC_INT32*)(OOC_INT32)pos = (i2+i3);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 21842))+92);
      *(OOC_INT32*)((OOC_INT32)pos+4) = i2;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21878))+84);
      i2 = _check_pointer(i2, 21887);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_INT32*)((i2+((_check_index(i1, i3, OOC_UINT32, 21887))*28))+4);
      i3 = *(OOC_INT32*)((_check_pointer(i0, 21927))+96);
      i4 = *(OOC_INT32*)((_check_pointer(i0, 21942))+100);
      *(OOC_INT32*)((OOC_INT32)pos+8) = ((i2-i3)+i4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21970))+84);
      i2 = _check_pointer(i2, 21979);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i1, i3, OOC_UINT32, 21979))*28))+20);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 21990))+4);
      i2 = i2!=(OOC_INT32)0;
      if (!i2) goto l24;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22056))+84);
      i2 = _check_pointer(i2, 22065);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i1, i3, OOC_UINT32, 22065))*28))+20);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22076))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22056))+84);
      i0 = _check_pointer(i0, 22065);
      i3 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)((i0+((_check_index(i1, i3, OOC_UINT32, 22065))*28))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22076))+4);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 22082)), 0);
      i0 = LongStrings__Length((void*)(_check_pointer(i2, 22082)), i0);
      XML_Parser__ParserDesc_ParseDocument_DecLength((void*)(OOC_INT32)pos, (RT0__Struct)((OOC_INT32)pos__tag), (i0+2));
      goto l24;
l23:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21268))+36);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 21272))+24);
      i2 = cpos;
      *(OOC_INT32*)(OOC_INT32)pos = (i2+i1);
      i1 = *(OOC_INT32*)((_check_pointer(i0, 21312))+92);
      *(OOC_INT32*)((OOC_INT32)pos+4) = i1;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 21353))+96);
      i0 = *(OOC_INT32*)((_check_pointer(i0, 21368))+100);
      *(OOC_INT32*)((OOC_INT32)pos+8) = ((i2-i1)+i0);
l24:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_ResetLocator() {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)p;
      *(OOC_INT32*)((_check_pointer(i0, 22179))+92) = 0;
      *(OOC_INT32*)((_check_pointer(i0, 22203))+96) = 0;
      *(OOC_INT32*)((_check_pointer(i0, 22230))+100) = 0;
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
      *(OOC_INT32*)((_check_pointer(i0, 22399))+56) = i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22427))+4);
      *(OOC_INT32*)((_check_pointer(i0, 22430))+12) = i1;
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
      *(OOC_INT32*)((_check_pointer(i0, 22587))+104) = i1;
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22642))+104);
      i2 = *(OOC_INT32*)(OOC_INT32)pos;
      i3 = XML_Error__errMsgCharPosBase;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22642))+104);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22653)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "char", 5, (i2+i3));
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22725))+104);
      i2 = *(OOC_INT32*)((OOC_INT32)pos+4);
      i3 = XML_Error__errMsgLineBase;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22725))+104);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22736)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, (i2+i3));
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22800))+104);
      i2 = *(OOC_INT32*)((OOC_INT32)pos+8);
      i3 = XML_Error__errMsgColumnBase;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22800))+104);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22811)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, (i2+i3));
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22881))+104);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22941))+56);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22953))+36);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22881))+104);
      i2 = (OOC_INT32)URI__NewURIAttribute("baseURI", 8, (URI__URI)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22892)))), Msg__MsgDesc_SetAttribute)),Msg__MsgDesc_SetAttribute)((Msg__Msg)i0, (Msg__Attribute)i2);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22985))+36);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22989))+20);
      i2 = (OOC_INT32)chars;
      i1 = i2!=i1;
      if (!i1) goto l4;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 23017))+88);
      i1 = i1-1;
      i = i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23042))+104);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23139))+84);
      i3 = _check_pointer(i3, 23148);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)((i3+((_check_index(i1, i4, OOC_UINT32, 23148))*28))+20);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 23159))+4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23139))+84);
      i4 = _check_pointer(i4, 23148);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i1, i5, OOC_UINT32, 23148))*28))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23159))+4);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 23165)), 0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23042))+104);
      i1 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i3, 23165)), i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23053)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "entity_name", 12, (Msg__LStringPtr)i1);
l4:
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 23187));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23207))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 23187));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23196)))), Msg__MsgListDesc_Append)),Msg__MsgListDesc_Append)((Msg__MsgList)i0, (Msg__Msg)i2);
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_ErrPos(OOC_INT32 code, struct XML_Locator__Position *pos, RT0__Struct pos__tag) {
      register OOC_INT32 i0,i1,i2;

      i0 = code;
      XML_Parser__ParserDesc_ParseDocument_ErrPosNF(i0, (void*)(OOC_INT32)pos, (RT0__Struct)((OOC_INT32)pos__tag));
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23356))+44);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23369))+40);
      i1 = i1==i2;
      if (!i1) goto l4;
      i1 = (OOC_INT32)XML_Builder__New();
      *(OOC_INT32*)((_check_pointer(i0, 23401))+44) = i1;
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
      i2 = _check_pointer(i2, 23706);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT16*)(i2+(_check_index(i0, i3, OOC_UINT32, 23706))*2);
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
      i3 = _check_pointer(i2, 23763);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT16*)(i3+(_check_index(i0, i4, OOC_UINT32, 23763))*2);
      i3 = i3>(OOC_CHAR16)255;
      if (i3) goto l10;
      i2 = _check_pointer(i2, 23848);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT16*)(i2+(_check_index(i0, i3, OOC_UINT32, 23848))*2);
      Out__Char(i2);
      goto l11;
l10:
      Out__Char((OOC_CHAR8)'?');
l11:
      i0 = i0+1;
      i = i0;
      i2 = (OOC_INT32)chars;
      i2 = _check_pointer(i2, 23706);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT16*)(i2+(_check_index(i0, i3, OOC_UINT32, 23706))*2);
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
      i1 = _check_pointer(i0, 24058);
      i1 = (OOC_INT32)&_td_XML_Locator__Position;
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)((_check_pointer(i0, 24058))+12), (RT0__Struct)i1);
      i0 = (OOC_INT32)p;
      i2 = _check_pointer(i0, 24094);
      i2 = code;
      XML_Parser__ParserDesc_ParseDocument_ErrPosNF(i2, (void*)((_check_pointer(i0, 24094))+12), (RT0__Struct)i1);
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_Err(OOC_INT32 code) {
      register OOC_INT32 i0,i1,i2;

      i0 = code;
      XML_Parser__ParserDesc_ParseDocument_ErrNF(i0);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24201))+44);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24214))+40);
      i1 = i1==i2;
      if (!i1) goto l4;
      i1 = (OOC_INT32)XML_Builder__New();
      *(OOC_INT32*)((_check_pointer(i0, 24246))+44) = i1;
l4:
      return;
      ;
    }

    
    XML_UnicodeBuffer__CharArray XML_Parser__ParserDesc_ParseDocument_Clone(XML_UnicodeBuffer__CharArray string) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      XML_UnicodeBuffer__CharArray clone;
      OOC_INT32 i;

      i0 = (OOC_INT32)string;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 24523)), 0);
      i1 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], i1);
      clone = (XML_UnicodeBuffer__CharArray)i1;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 24559)), 0);
      i2 = i2-1;
      i3 = 0<=i2;
      i = 0;
      if (!i3) goto l8;
      i3=0;
l3_loop:
      i4 = _check_pointer(i1, 24580);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = _check_pointer(i0, 24593);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = *(OOC_UINT16*)(i6+(_check_index(i3, i7, OOC_UINT32, 24593))*2);
      *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 24580))*2) = i6;
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
      i4 = _check_pointer(i2, 24862);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = _check_pointer(i0, 24874);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i8 = start;
      i6 = *(OOC_UINT16*)(i6+(_check_index(i8, i7, OOC_UINT32, 24874))*2);
      *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 24862))*2) = i6;
      i4 = i8+1;
      start = i4;
      i3 = i3+1;
      i4 = i4!=i1;
      i = i3;
      if (i4) goto l4_loop;
l8:
      i0=i3;
l9:
      i1 = _check_pointer(i2, 24935);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      *(OOC_UINT16*)(i1+(_check_index(i0, i3, OOC_UINT32, 24935))*2) = (OOC_CHAR16)0;
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25192))+36);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l7;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25264))+36);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25264))+36);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25273)))), URI__URIDesc_GetChannel)),URI__URIDesc_GetChannel)((URI__URI)i2, 2, (void*)(OOC_INT32)&res);
      ch = (Channel__Channel)i1;
      i2 = i1==(OOC_INT32)0;
      if (i2) goto l5;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25612)))), Channel__ChannelDesc_NewReader)),Channel__ChannelDesc_NewReader)((Channel__Channel)i1);
      i2 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 25633));
      i1 = (OOC_INT32)XML_UnicodeBuffer__NewInput((Channel__Reader)i1, (XML_UnicodeCodec__Factory)(OOC_INT32)0, (Msg__MsgList)i2);
      in = (XML_UnicodeBuffer__Input)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25682))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25661)))), XML_DTD__ExternalEntityDesc_SetCodecFactory)),XML_DTD__ExternalEntityDesc_SetCodecFactory)((XML_DTD__ExternalEntity)i0, (XML_UnicodeCodec__Factory)i2);
      return (XML_UnicodeBuffer__Input)i1;
      goto l8;
l5:
      XML_Parser__ParserDesc_ParseDocument_Err(303);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25381))+36);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25381))+36);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25390)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)str, 2048);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25420))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25420))+104);
      i2 = (OOC_INT32)Msg__GetStringPtr((void*)(OOC_INT32)str, 2048);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25431)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "uri", 4, (Msg__StringPtr)i2);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25493))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25493))+104);
      i2 = (OOC_INT32)res;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25504)))), Msg__MsgDesc_SetMsgAttrib)),Msg__MsgDesc_SetMsgAttrib)((Msg__Msg)i0, "channel_error", 14, (Msg__Msg)i2);
      return (XML_UnicodeBuffer__Input)(OOC_INT32)0;
      goto l8;
l7:
      return (XML_UnicodeBuffer__Input)(OOC_INT32)0;
l8:
      _failed_function(25000); return 0;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_CheckInvalidChars() {
      register OOC_INT32 i0,i1,i2;
      OOC_CHAR8 str[2048];

      i0 = (OOC_INT32)p;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25856))+36);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25860))+12);
      i0 = *(OOC_INT32*)(_check_pointer(i0, 25867));
      i0 = i0!=0;
      if (!i0) goto l4;
      XML_Parser__ParserDesc_ParseDocument_Err(27);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25942))+56);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25954))+36);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25942))+56);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25954))+36);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25963)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)str, 2048);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25991))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25991))+104);
      i2 = (OOC_INT32)Msg__GetStringPtr((void*)(OOC_INT32)str, 2048);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26002)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "uri", 4, (Msg__StringPtr)i2);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26062))+104);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26103))+36);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 26107))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26062))+104);
      i2 = *(OOC_INT32*)(_check_pointer(i2, 26114));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26073)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "encodings", 10, i2);
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
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26411)))), XML_UnicodeBuffer__InputDesc_NextBlock)),XML_UnicodeBuffer__InputDesc_NextBlock)((XML_UnicodeBuffer__Input)i1);
      if (!i2) goto l10;
l5_loop:
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26411)))), XML_UnicodeBuffer__InputDesc_NextBlock)),XML_UnicodeBuffer__InputDesc_NextBlock)((XML_UnicodeBuffer__Input)i1);
      if (i2) goto l5_loop;
l10:
      i2 = *(OOC_INT32*)((_check_pointer(i1, 26490))+28);
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
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26577))+20);
      i5 = _check_pointer(i5, 26584);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = *(OOC_UINT16*)(i5+(_check_index(i3, i6, OOC_UINT32, 26584))*2);
      switch (i5) {
      case (OOC_CHAR16)13:
        i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26627))+20);
        i5 = _check_pointer(i5, 26634);
        i6 = OOC_ARRAY_LENGTH(i5, 0);
        *(OOC_UINT16*)(i5+(_check_index((i3-i4), i6, OOC_UINT32, 26634))*2) = (OOC_CHAR16)10;
        i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26675))+20);
        i5 = _check_pointer(i5, 26682);
        i6 = OOC_ARRAY_LENGTH(i5, 0);
        i7 = i3+1;
        i5 = *(OOC_UINT16*)(i5+(_check_index(i7, i6, OOC_UINT32, 26682))*2);
        i5 = i5==(OOC_CHAR16)10;
        if (i5) goto l19;
        {register OOC_INT32 h0=i3;i3=i4;i4=h0;}
        goto l22;
l19:
        i3 = i4+1;
        delta = i3;
        i4=i7;
        goto l22;
      default:
        i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26785))+20);
        i5 = _check_pointer(i5, 26792);
        i6 = OOC_ARRAY_LENGTH(i5, 0);
        i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26807))+20);
        i7 = _check_pointer(i7, 26814);
        i8 = OOC_ARRAY_LENGTH(i7, 0);
        i7 = *(OOC_UINT16*)(i7+(_check_index(i3, i8, OOC_UINT32, 26814))*2);
        *(OOC_UINT16*)(i5+(_check_index((i3-i4), i6, OOC_UINT32, 26792))*2) = i7;
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
      str = (XML_UnicodeBuffer__CharArray)i3;
      i4 = i2-1;
      i5 = 0<=i4;
      i = 0;
      if (!i5) goto l35;
      i5=0;
l30_loop:
      i6 = _check_pointer(i3, 26961);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26970))+20);
      i8 = _check_pointer(i8, 26977);
      i9 = OOC_ARRAY_LENGTH(i8, 0);
      i8 = *(OOC_UINT16*)(i8+(_check_index(i5, i9, OOC_UINT32, 26977))*2);
      *(OOC_UINT16*)(i6+(_check_index(i5, i7, OOC_UINT32, 26961))*2) = i8;
      i5 = i5+1;
      i6 = i5<=i4;
      i = i5;
      if (i6) goto l30_loop;
l35:
      XML_Parser__ParserDesc_ParseDocument_CheckInvalidChars();
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27031)))), XML_UnicodeBuffer__InputDesc_Close)),XML_UnicodeBuffer__InputDesc_Close)((XML_UnicodeBuffer__Input)i1);
      i1=i3;
l36:
      i0 = *(OOC_INT8*)((_check_pointer(i0, 27117))+8);
      switch (i0) {
      case 2:
        i0 = _check_pointer(i1, 27173);
        i3 = OOC_ARRAY_LENGTH(i0, 0);
        *(OOC_UINT16*)(i0+(_check_index(i2, i3, OOC_UINT32, 27173))*2) = (OOC_CHAR16)65535;
        goto l41;
      case 3:
        i0 = _check_pointer(i1, 27247);
        i3 = OOC_ARRAY_LENGTH(i0, 0);
        *(OOC_UINT16*)(i0+(_check_index(i2, i3, OOC_UINT32, 27247))*2) = (OOC_CHAR16)65534;
        goto l41;
      default:
        _failed_case(i0, 27106);
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
      *(OOC_UINT8*)((_check_pointer(i0, 27723))+17) = OOC_TRUE;
l3:
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27793))+84);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 27772))+88);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 27802)), 0);
      i2 = i3==i2;
      if (!i2) goto l14;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27839))+84);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 27848)), 0);
      i2 = (OOC_INT32)RT0__NewObject(_td_XML_Parser__PEInfoList.baseTypes[0], (i2+4));
      newList = (XML_Parser__PEInfoList)i2;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27893))+84);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 27902)), 0);
      i3 = i3-1;
      i4 = 0<=i3;
      i = 0;
      if (!i4) goto l13;
      i4=0;
l8_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27935))+84);
      i5 = _check_pointer(i5, 27944);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i7 = _check_pointer(i2, 27927);
      i8 = OOC_ARRAY_LENGTH(i7, 0);
      _copy_block((i5+((_check_index(i4, i6, OOC_UINT32, 27944))*28)),(i7+((_check_index(i4, i8, OOC_UINT32, 27927))*28)),28);
      i4 = i4+1;
      i5 = i4<=i3;
      i = i4;
      if (i5) goto l8_loop;
l13:
      *(OOC_INT32*)((_check_pointer(i1, 27970))+84) = i2;
l14:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28009))+84);
      i2 = _check_pointer(i2, 28018);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 28020))+88);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      *(OOC_INT32*)((i2+((_check_index(i3, i4, OOC_UINT32, 28018))*28))+20) = i0;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28060))+84);
      i2 = _check_pointer(i2, 28069);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 28071))+88);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      i5 = (OOC_INT32)chars;
      *(OOC_INT32*)(i2+((_check_index(i3, i4, OOC_UINT32, 28069))*28)) = i5;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28112))+84);
      i2 = _check_pointer(i2, 28121);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 28123))+88);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      i5 = cpos;
      *(OOC_INT32*)((i2+((_check_index(i3, i4, OOC_UINT32, 28121))*28))+4) = i5;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28162))+84);
      i2 = _check_pointer(i2, 28171);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 28173))+88);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      i5 = *(OOC_INT32*)((_check_pointer(i1, 28204))+92);
      *(OOC_INT32*)((i2+((_check_index(i3, i4, OOC_UINT32, 28171))*28))+8) = i5;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28223))+84);
      i2 = _check_pointer(i2, 28232);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 28234))+88);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      i5 = *(OOC_INT32*)((_check_pointer(i1, 28268))+96);
      *(OOC_INT32*)((i2+((_check_index(i3, i4, OOC_UINT32, 28232))*28))+12) = i5;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28290))+84);
      i2 = _check_pointer(i2, 28299);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 28301))+88);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      i5 = *(OOC_INT32*)((_check_pointer(i1, 28335))+100);
      *(OOC_INT32*)((i2+((_check_index(i3, i4, OOC_UINT32, 28299))*28))+16) = i5;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28357))+84);
      i2 = _check_pointer(i2, 28366);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 28368))+88);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28390))+36);
      *(OOC_INT32*)((i2+((_check_index(i3, i4, OOC_UINT32, 28366))*28))+24) = i5;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 28408))+88);
      *(OOC_INT32*)((_check_pointer(i1, 28408))+88) = (i2+1);
      i2 = syncEntity;
      if (i2) goto l17;
      i3=OOC_FALSE;
      goto l19;
l17:
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28460)))), &_td_XML_DTD__ExternalEntityDesc);
      
l19:
      if (i3) goto l47;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29119)))), &_td_XML_DTD__ExternalEntityDesc);
      if (i1) goto l23;
      i1=OOC_FALSE;
      goto l25;
l23:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29151))+12);
      i1 = i1==(OOC_INT32)0;
      
l25:
      if (!i1) goto l27;
      i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Internalize((XML_DTD__ExternalEntity)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29235)))), &_td_XML_DTD__ExternalEntityDesc, 29235)));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29193)))), XML_DTD__EntityDesc_SetEntityValue)),XML_DTD__EntityDesc_SetEntityValue)((XML_DTD__Entity)i0, (XML_UnicodeBuffer__CharArray)i1);
l27:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29296))+12);
      i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Clone((XML_UnicodeBuffer__CharArray)i1);
      chars = (XML_UnicodeBuffer__CharArray)i1;
      i3 = *(OOC_INT8*)((_check_pointer(i0, 29340))+8);
      switch (i3) {
      case 0:
      case 2:
        i2 = _check_pointer(i1, 29429);
        i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 29440)), 0);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        *(OOC_UINT16*)(i2+(_check_index((i1-2), i3, OOC_UINT32, 29429))*2) = (OOC_CHAR16)65535;
        goto l39;
      case 1:
      case 3:
        i3 = _check_pointer(i1, 29549);
        i4 = OOC_ARRAY_LENGTH((_check_pointer(i1, 29560)), 0);
        i5 = OOC_ARRAY_LENGTH(i3, 0);
        *(OOC_UINT16*)(i3+(_check_index((i4-2), i5, OOC_UINT32, 29549))*2) = (OOC_CHAR16)65534;
        i3 = (OOC_INT32)p;
        i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 29954))+72);
        i3 = i3==(OOC_INT32)0;
        if (!i3) goto l39;
        i3 = _check_pointer(i1, 30001);
        i4 = OOC_ARRAY_LENGTH((_check_pointer(i1, 30012)), 0);
        i5 = OOC_ARRAY_LENGTH(i3, 0);
        *(OOC_UINT16*)(i3+(_check_index((i4-2), i5, OOC_UINT32, 30001))*2) = (OOC_CHAR16)' ';
        if (i2) goto l35;
        i2 = _check_pointer(i1, 30149);
        i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 30160)), 0);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        *(OOC_UINT16*)(i2+(_check_index((i1-1), i3, OOC_UINT32, 30149))*2) = (OOC_CHAR16)65534;
        goto l39;
l35:
        i2 = _check_pointer(i1, 30076);
        i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 30087)), 0);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        *(OOC_UINT16*)(i2+(_check_index((i1-1), i3, OOC_UINT32, 30076))*2) = (OOC_CHAR16)65535;
        goto l39;
      default:
        _failed_case(i3, 29329);
        goto l39;
      }
l39:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 30256))+8);
      i1 = i1==0;
      if (i1) goto l42;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 30313))+8);
      i1 = i1==1;
      
      goto l44;
l42:
      i1=OOC_TRUE;
l44:
      if (!i1) goto l52;
      i1 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30367))+4);
      *(OOC_INT32*)((_check_pointer(i1, 30370))+16) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30403)))), &_td_XML_DTD__InternalEntityDesc, 30403));
      goto l52;
l47:
      i2 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_GetBuffer((XML_DTD__ExternalEntity)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28572)))), &_td_XML_DTD__ExternalEntityDesc, 28572)));
      *(OOC_INT32*)((_check_pointer(i1, 28542))+36) = i2;
      XML_Parser__ParserDesc_ParseDocument_SetFileEntity((XML_DTD__ExternalEntity)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28624)))), &_td_XML_DTD__ExternalEntityDesc, 28624)));
      XML_Parser__ParserDesc_ParseDocument_ResetLocator();
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28677))+36);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l50;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28841))+36);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28845))+20);
      chars = (XML_UnicodeBuffer__CharArray)i0;
      goto l52;
l50:
      i0 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], 2);
      chars = (XML_UnicodeBuffer__CharArray)i0;
      i0 = _check_pointer(i0, 28784);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      *(OOC_UINT16*)(i0+(_check_index(0, i1, OOC_UINT8, 28784))*2) = (OOC_CHAR16)65535;
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30577))+72);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30749))+72);
      i2 = (OOC_INT32)dtd;
      i3 = cdelta;
      i4 = cpos;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30749))+72);
      i5 = cstart;
      i6 = (OOC_INT32)chars;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 30779)))), XML_DTD__BuilderDesc_NewCharacters)),XML_DTD__BuilderDesc_NewCharacters)((XML_DTD__Builder)i2, (XML_UnicodeBuffer__CharArray)i6, i5, (i4-i3), OOC_TRUE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30766)))), XML_DTD__AttValueDesc_Append)),XML_DTD__AttValueDesc_Append)((XML_DTD__AttValue)i0, (XML_DTD__Fragment)i2);
l3:
      i0 = (OOC_INT32)p;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 30861))+88);
      *(OOC_INT32*)((_check_pointer(i0, 30861))+88) = (i1-1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30887))+36);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l6;
      i0=OOC_FALSE;
      goto l8;
l6:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30911))+84);
      i1 = _check_pointer(i1, 30920);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 30922))+88);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30903))+36);
      i1 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 30920))*28))+24);
      i0 = i0!=i1;
      
l8:
      if (!i0) goto l10;
      XML_Parser__ParserDesc_ParseDocument_CheckInvalidChars();
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30982))+36);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30982))+36);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30986)))), XML_UnicodeBuffer__InputDesc_Close)),XML_UnicodeBuffer__InputDesc_Close)((XML_UnicodeBuffer__Input)i0);
l10:
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31076))+84);
      i1 = _check_pointer(i1, 31085);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 31087))+88);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i1+((_check_index(i2, i3, OOC_UINT32, 31085))*28));
      chars = (XML_UnicodeBuffer__CharArray)i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31127))+84);
      i1 = _check_pointer(i1, 31136);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 31138))+88);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 31136))*28))+4);
      cpos = i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31184))+84);
      i1 = _check_pointer(i1, 31193);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 31195))+88);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 31193))*28))+8);
      *(OOC_INT32*)((_check_pointer(i0, 31169))+92) = i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31248))+84);
      i1 = _check_pointer(i1, 31257);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 31259))+88);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 31257))*28))+12);
      *(OOC_INT32*)((_check_pointer(i0, 31230))+96) = i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31315))+84);
      i1 = _check_pointer(i1, 31324);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 31326))+88);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 31324))*28))+16);
      *(OOC_INT32*)((_check_pointer(i0, 31297))+100) = i1;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 31369))+88);
      i1 = i1-1;
      i2 = i1>=0;
      i = i1;
      if (i2) goto l13;
      i2=OOC_FALSE;
      goto l15;
l13:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31411))+84);
      i2 = _check_pointer(i2, 31420);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i1, i3, OOC_UINT32, 31420))*28))+20);
      i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31432)))), &_td_XML_DTD__ExternalEntityDesc));
      
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31411))+84);
      i2 = _check_pointer(i2, 31420);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i1, i3, OOC_UINT32, 31420))*28))+20);
      i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31432)))), &_td_XML_DTD__ExternalEntityDesc));
      
l23:
      if (i2) goto l18_loop;
l27:
      i2 = i1>=0;
      if (i2) goto l30;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31609))+52);
      XML_Parser__ParserDesc_ParseDocument_SetFileEntity((XML_DTD__ExternalEntity)i0);
      goto l31;
l30:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31532))+84);
      i0 = _check_pointer(i0, 31541);
      i2 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)((i0+((_check_index(i1, i2, OOC_UINT32, 31541))*28))+20);
      XML_Parser__ParserDesc_ParseDocument_SetFileEntity((XML_DTD__ExternalEntity)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31557)))), &_td_XML_DTD__ExternalEntityDesc, 31557)));
l31:
      i0 = (OOC_INT32)p;
      i2 = *(OOC_INT32*)((_check_pointer(i0, 31660))+88);
      i1 = i1!=(i2-1);
      if (i1) goto l34;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31901))+4);
      *(OOC_INT32*)((_check_pointer(i1, 31904))+16) = (OOC_INT32)0;
      goto l35;
l34:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31761))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31787))+84);
      i2 = _check_pointer(i2, 31796);
      i3 = *(OOC_INT32*)((_check_pointer(i0, 31798))+88);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index((i3-1), i4, OOC_UINT32, 31796))*28))+20);
      *(OOC_INT32*)((_check_pointer(i1, 31764))+16) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31826)))), &_td_XML_DTD__InternalEntityDesc, 31826));
l35:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31964))+84);
      i1 = _check_pointer(i1, 31973);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 31975))+88);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 31973))*28))+24);
      *(OOC_INT32*)((_check_pointer(i0, 31955))+36) = i1;
      i1 = cpos;
      cstart = i1;
      cdelta = 0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32047))+84);
      i1 = _check_pointer(i1, 32056);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 32058))+88);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 32056))*28))+20);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l38;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32101))+84);
      i1 = _check_pointer(i1, 32110);
      i0 = *(OOC_INT32*)((_check_pointer(i0, 32112))+88);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index(i0, i2, OOC_UINT32, 32110))*28))+20);
      *(OOC_UINT8*)((_check_pointer(i0, 32133))+17) = OOC_FALSE;
l38:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_NextBlock() {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT32 oldOffset;
      OOC_CHAR8 res;

      i0 = (OOC_INT32)chars;
      i1 = _check_pointer(i0, 32299);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 32299))*2);
      _assert((i1==(OOC_CHAR16)65534), 127, 32286);
      i1 = (OOC_INT32)p;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 32338))+88);
      i2 = i2!=0;
      if (i2) goto l3;
      i2=OOC_FALSE;
      goto l5;
l3:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32360))+36);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 32364))+20);
      i2 = i2!=i0;
      
l5:
      if (i2) goto l7;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32886))+36);
      i0 = *(OOC_INT32*)((_check_pointer(i0, 32890))+24);
      oldOffset = i0;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32924))+36);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32924))+36);
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 32928)))), XML_UnicodeBuffer__InputDesc_NextBlock)),XML_UnicodeBuffer__InputDesc_NextBlock)((XML_UnicodeBuffer__Input)i1);
      res = i1;
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32961))+36);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 32965))+20);
      chars = (XML_UnicodeBuffer__CharArray)i2;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32994))+36);
      i2 = *(OOC_INT32*)((_check_pointer(i2, 32998))+24);
      i3 = cpos;
      cpos = (i3-(i2-i0));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33049))+36);
      i2 = *(OOC_INT32*)((_check_pointer(i2, 33053))+24);
      i3 = cstart;
      cstart = (i3-(i2-i0));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33112))+36);
      i2 = *(OOC_INT32*)((_check_pointer(i2, 33116))+24);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 33096))+96);
      *(OOC_INT32*)((_check_pointer(i1, 33096))+96) = (i3-(i2-i0));
      goto l11;
l7:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32502))+72);
      i1 = i1==(OOC_INT32)0;
      if (!i1) goto l10;
      i1 = _check_pointer(i0, 32555);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 32566)), 0);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT16*)(i1+(_check_index((i2-2), i3, OOC_UINT32, 32555))*2);
      _assert((i1==(OOC_CHAR16)' '), 127, 32542);
      i1 = _check_pointer(i0, 32595);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 32606)), 0);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      *(OOC_UINT16*)(i1+(_check_index((i0-2), i2, OOC_UINT32, 32595))*2) = (OOC_CHAR16)65534;
l10:
      XML_Parser__ParserDesc_ParseDocument_PopEntity();
l11:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_DiscardPreviousInput() {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33232))+36);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33236))+20);
      i2 = (OOC_INT32)chars;
      i1 = i1==i2;
      if (!i1) goto l4;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33267))+36);
      i1 = cpos;
      *(OOC_INT32*)((_check_pointer(i0, 33271))+32) = i1;
      cstart = i1;
l4:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_EndOfLine() {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33510))+36);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33514))+20);
      i2 = (OOC_INT32)chars;
      i1 = i2==i1;
      if (!i1) goto l4;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 33542))+92);
      *(OOC_INT32*)((_check_pointer(i0, 33542))+92) = (i1+1);
      i1 = cpos;
      *(OOC_INT32*)((_check_pointer(i0, 33564))+96) = i1;
      *(OOC_INT32*)((_check_pointer(i0, 33596))+100) = 0;
l4:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_Tab() {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT32 currColumn;

      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33815))+36);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33819))+20);
      i2 = (OOC_INT32)chars;
      i1 = i2==i1;
      if (!i1) goto l4;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 33861))+96);
      i2 = cpos;
      i3 = *(OOC_INT32*)((_check_pointer(i0, 33876))+100);
      i1 = (i2-i1)+i3;
      currColumn = i1;
      i2 = *(OOC_INT32*)((_check_pointer(i0, 33905))+100);
      *(OOC_INT32*)((_check_pointer(i0, 33905))+100) = (i2+((8-(_mod(i1,8)))-1));
l4:
      return;
      ;
    }

    
    OOC_CHAR8 XML_Parser__ParserDesc_ParseDocument_LookingAtS() {
      register OOC_INT32 i0,i1,i2,i3,i4;

      i0 = (OOC_INT32)chars;
      i1 = _check_pointer(i0, 34076);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 34076))*2);
      i1 = i1<=(OOC_CHAR16)' ';
      if (i1) goto l23;
      i1 = (OOC_INT32)p;
      i2 = *(OOC_UINT8*)((_check_pointer(i1, 34130))+67);
      if (i2) goto l5;
      i2 = *(OOC_UINT8*)((_check_pointer(i1, 34153))+68);
      
      goto l7;
l5:
      i2=OOC_TRUE;
l7:
      if (i2) goto l9;
      i2=OOC_FALSE;
      goto l11;
l9:
      i2 = _check_pointer(i0, 34193);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT16*)(i2+(_check_index(i3, i4, OOC_UINT32, 34193))*2);
      i2 = i2==(OOC_CHAR16)'%';
      
l11:
      if (i2) goto l13;
      return OOC_FALSE;
      goto l24;
l13:
      i2 = _check_pointer(i0, 34228);
      i3 = i3+1;
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT16*)(i2+(_check_index(i3, i4, OOC_UINT32, 34228))*2);
      i2 = i2==(OOC_CHAR16)65534;
      if (i2) goto l16;
      i0 = _check_pointer(i0, 34570);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i1, OOC_UINT32, 34570))*2);
      i0 = XML_Parser__IsNameChar(i0);
      return i0;
      goto l24;
l16:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34284))+36);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34288))+20);
      i0 = i0==i1;
      if (i0) goto l19;
      return OOC_FALSE;
      goto l24;
l19:
      cpos = i3;
      XML_Parser__ParserDesc_ParseDocument_NextBlock();
      i0 = cpos;
      i0 = i0-1;
      cpos = i0;
      i1 = (OOC_INT32)chars;
      i1 = _check_pointer(i1, 34464);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i0 = *(OOC_UINT16*)(i1+(_check_index((i0+1), i2, OOC_UINT32, 34464))*2);
      i0 = XML_Parser__IsNameChar(i0);
      return i0;
      goto l24;
l23:
      return OOC_TRUE;
l24:
      _failed_function(33994); return 0;
      ;
    }

    
    OOC_CHAR8 XML_Parser__ParserDesc_ParseDocument_LookingAtSnoPE() {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 34758);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 34758))*2);
      return (i0<=(OOC_CHAR16)' ');
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
      i3 = _check_pointer(i2, 35631);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i5 = cpos;
      i3 = *(OOC_UINT16*)(i3+(_check_index(i5, i4, OOC_UINT32, 35631))*2);
      i3 = i3==(OOC_CHAR16)65534;
      if (i3) goto l17;
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 35941)));
      i3 = i3==(OOC_CHAR8)'\000';
      if (i3) goto l10;
      i2 = _check_pointer(i2, 36182);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 36171)));
      i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i3, OOC_UINT32, 36182))*2);
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
        i2 = _check_pointer(i2, 36078);
        i4 = OOC_ARRAY_LENGTH(i2, 0);
        i2 = *(OOC_UINT16*)(i2+(_check_index((i3+i1), i4, OOC_UINT32, 36078))*2);
        i2 = XML_Parser__IsNameChar(i2);
        return (!i2);
        goto l1_loop;
      case 0:
        return OOC_TRUE;
        goto l1_loop;
      default:
        _failed_case(i0, 35991);
        goto l1_loop;
      }
l17:
      i3 = (OOC_INT32)p;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 35686))+36);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 35690))+20);
      i2 = i2==i3;
      if (!i2) goto l19;
      goto l20;
l19:
      cpos = (i5-i1);
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 35899)));
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
      i1 = _check_pointer(i0, 36377);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 36377))*2);
      i1 = i1!=(OOC_CHAR16)65535;
      if (!i1) goto l6;
      i1 = i3+1;
      cpos = i1;
      i0 = _check_pointer(i0, 36446);
      i2 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = *(OOC_UINT16*)(i0+(_check_index(i1, i2, OOC_UINT32, 36446))*2);
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
      i0 = _check_pointer(i0, 36748);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 36748))*2);
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
      i1 = _check_pointer(i1, 36802);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT16*)(i1+(_check_index(i0, i2, OOC_UINT32, 36802))*2);
      i1 = i1==(OOC_CHAR16)':';
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
      i4 = _check_pointer(i1, 37209);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = cpos;
      i4 = *(OOC_UINT16*)(i4+(_check_index(i6, i5, OOC_UINT32, 37209))*2);
      i4 = i4==(OOC_CHAR16)65534;
      if (i4) goto l35;
      i4 = _check_pointer(i1, 37488);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = *(OOC_UINT16*)(i4+(_check_index(i6, i5, OOC_UINT32, 37488))*2);
      i4 = i4==(OOC_CHAR16)':';
      if (i4) goto l19;
      i4=OOC_FALSE;
      goto l21;
l19:
      i4=i2;
l21:
      if (i4) goto l27;
      i1 = _check_pointer(i1, 37827);
      i4 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT16*)(i1+(_check_index(i6, i4, OOC_UINT32, 37827))*2);
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
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 37266))+36);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 37270))+20);
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
      i1 = _check_pointer(i0, 38004);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 38016)), 0);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT16*)(i1+(_check_index((i2-2), i3, OOC_UINT32, 38004))*2);
      i1 = i1==(OOC_CHAR16)':';
      
l46:
      if (!i1) goto l48;
      XML_Parser__ParserDesc_ParseDocument_Err(31);
l48:
      return (XML_UnicodeBuffer__CharArray)i0;
l49:
      _failed_function(36553); return 0;
      ;
    }

    
    XML_UnicodeBuffer__CharArray XML_Parser__ParserDesc_ParseDocument_Name(OOC_CHAR8 noColon) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 38388);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 38388))*2);
      i0 = XML_Parser__IsNameChar0(i0);
      if (i0) goto l3;
      XML_Parser__ParserDesc_ParseDocument_Err(10);
      XML_Parser__ParserDesc_ParseDocument_NextChar();
      i0 = (OOC_INT32)XML_Parser__noName;
      return (XML_UnicodeBuffer__CharArray)i0;
      goto l4;
l3:
      i0 = (OOC_INT32)p;
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 38426))+61);
      i1 = noColon;
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Nmtoken(i0, i1);
      return (XML_UnicodeBuffer__CharArray)i0;
l4:
      _failed_function(38270); return 0;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_CheckChar(OOC_CHAR8 ch) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_CHAR8 str[2];

      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 38756);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 38756))*2);
      i1 = ch;
      i0 = i0!=i1;
      if (!i0) goto l3;
      XML_Parser__ParserDesc_ParseDocument_Err(12);
      _copy_8("X",(OOC_INT32)str,2);
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 2, OOC_UINT8, 38833))) = i1;
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38853))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38853))+104);
      i2 = (OOC_INT32)Msg__GetStringPtr((void*)(OOC_INT32)str, 2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38864)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "symbol", 7, (Msg__StringPtr)i2);
l3:
      i0 = (OOC_INT32)chars;
      i1 = _check_pointer(i0, 38943);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 38943))*2);
      i1 = i1!=(OOC_CHAR16)65535;
      if (!i1) goto l9;
      i1 = i3+1;
      cpos = i1;
      i0 = _check_pointer(i0, 39012);
      i2 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = *(OOC_UINT16*)(i0+(_check_index(i1, i2, OOC_UINT32, 39012))*2);
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
      *(OOC_UINT8*)((_check_pointer(i0, 39323))+64) = OOC_FALSE;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39362))+52);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 39378))+48);
      i1 = i1!=0;
      if (!i1) goto l3;
      *(OOC_UINT8*)((_check_pointer(i0, 39426))+63) = OOC_FALSE;
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
      i2 = *(OOC_UINT8*)((_check_pointer(i1, 39771))+67);
      i2 = !i2;
      if (i2) goto l6;
      i1=OOC_FALSE;
      goto l9;
l6:
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 39794))+68);
      i1 = !i1;
      
l9:
      if (!i1) goto l11;
      XML_Parser__ParserDesc_ParseDocument_Err(115);
l11:
      XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'%');
      i1 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39913))+36);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 39917))+24);
      i2 = cstart;
      i1 = i2+i1;
      oldCStart = i1;
      i2 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_TRUE);
      name = (XML_UnicodeBuffer__CharArray)i2;
      i3 = (OOC_INT32)p;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 39989))+36);
      i3 = *(OOC_INT32*)((_check_pointer(i3, 39993))+24);
      cstart = (i1-i3);
      XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)';');
      i1 = (OOC_INT32)dtd;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40051))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40051))+8);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 40064)))), XML_DTD__NamespaceDesc_Get)),XML_DTD__NamespaceDesc_Get)((XML_DTD__Namespace)i1, (XML_UnicodeBuffer__CharArray)i2);
      i3 = i1==(OOC_INT32)0;
      decl = (XML_DTD__Declaration)i1;
      if (i3) goto l48;
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40456)))), &_td_XML_DTD__EntityDesc, 40456);
      entity = (XML_DTD__Entity)i1;
      if (i0) goto l19;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41798)))), &_td_XML_DTD__ExternalEntityDesc);
      if (!i0) goto l18;
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Internalize((XML_DTD__ExternalEntity)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41886)))), &_td_XML_DTD__ExternalEntityDesc, 41886)));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41844)))), XML_DTD__EntityDesc_SetEntityValue)),XML_DTD__EntityDesc_SetEntityValue)((XML_DTD__Entity)i1, (XML_UnicodeBuffer__CharArray)i0);
l18:
      XML_Parser__ParserDesc_ParseDocument_PushEntity((XML_DTD__Entity)i1, OOC_FALSE);
      goto l61;
l19:
      i0 = (OOC_INT32)p;
      i3 = *(OOC_UINT8*)((_check_pointer(i0, 40656))+60);
      if (i3) goto l22;
      i3 = *(OOC_INT8*)((_check_pointer(i1, 40699))+8);
      i3 = i3==1;
      
      goto l24;
l22:
      i3=OOC_TRUE;
l24:
      if (i3) goto l26;
      XML_Parser__ParserDesc_ParseDocument_SkippedEntity((XML_UnicodeBuffer__CharArray)i2);
      goto l61;
l26:
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 40777))+67);
      if (i2) goto l29;
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 40800))+68);
      
      goto l30;
l29:
      i0=OOC_TRUE;
l30:
      i0 = !i0;
      inInternalSubset = i0;
      XML_Parser__ParserDesc_ParseDocument_PushEntity((XML_DTD__Entity)i1, i0);
      i2 = (OOC_INT32)p;
      i3 = *(OOC_UINT8*)((_check_pointer(i2, 40975))+68);
      oldFlag = i3;
      i4 = *(OOC_INT8*)((_check_pointer(i1, 41017))+8);
      i4 = i4==3;
      if (!i4) goto l36;
      *(OOC_UINT8*)((_check_pointer(i2, 41075))+68) = OOC_TRUE;
      i2 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<?xml", 6, 1);
      if (!i2) goto l36;
      XML_Parser__ParserDesc_ParseDocument_XMLDecl((XML_DTD__ExternalEntity)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41200)))), &_td_XML_DTD__ExternalEntityDesc, 41200)));
l36:
      XML_Parser__ParserDesc_ParseDocument_extSubsetDecl();
      i2 = (OOC_INT32)chars;
      i2 = _check_pointer(i2, 41313);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      i5 = cpos;
      i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i4, OOC_UINT32, 41313))*2);
      i2 = i2!=(OOC_CHAR16)65535;
      if (!i2) goto l39;
      XML_Parser__ParserDesc_ParseDocument_Err(28);
l39:
      i1 = *(OOC_INT8*)((_check_pointer(i1, 41436))+8);
      i1 = i1==3;
      if (!i1) goto l43;
      i1 = (OOC_INT32)p;
      *(OOC_UINT8*)((_check_pointer(i1, 41494))+68) = i3;
l43:
      if (!i0) goto l61;
      XML_Parser__ParserDesc_ParseDocument_PopEntity();
      goto l61;
l48:
      i0 = (OOC_INT32)p;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 40166))+62);
      if (i1) goto l55;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 40195))+63);
      if (i1) goto l53;
      i0=OOC_FALSE;
      goto l57;
l53:
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 40220))+60);
      
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40296))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40296))+104);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 40358)), 0);
      i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 40358)), i3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40307)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i2);
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
      i3 = _check_pointer(i2, 42433);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i5 = cpos;
      i3 = *(OOC_UINT16*)(i3+(_check_index(i5, i4, OOC_UINT32, 42433))*2);
      switch (i3) {
      case (OOC_CHAR16)65534:
        XML_Parser__ParserDesc_ParseDocument_NextBlock();
        goto l1_loop;
      case (OOC_CHAR16)' ':
        cpos = (i5+1);
        goto l1_loop;
      case (OOC_CHAR16)10:
        cpos = (i5+1);
        XML_Parser__ParserDesc_ParseDocument_EndOfLine();
        goto l1_loop;
      case (OOC_CHAR16)13:
        i3 = i5+1;
        cpos = i3;
        i2 = _check_pointer(i2, 42640);
        i4 = OOC_ARRAY_LENGTH(i2, 0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i3, i4, OOC_UINT32, 42640))*2);
        i2 = i2==(OOC_CHAR16)65534;
        if (!i2) goto l9;
        XML_Parser__ParserDesc_ParseDocument_NextBlock();
l9:
        i2 = (OOC_INT32)chars;
        i2 = _check_pointer(i2, 42728);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        i4 = cpos;
        i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 42728))*2);
        i2 = i2==(OOC_CHAR16)10;
        if (i2) goto l11;
        goto l12;
l11:
        cpos = (i4+1);
l12:
        XML_Parser__ParserDesc_ParseDocument_EndOfLine();
        goto l1_loop;
      case (OOC_CHAR16)9:
        XML_Parser__ParserDesc_ParseDocument_Tab();
        i2 = cpos;
        cpos = (i2+1);
        goto l1_loop;
      case (OOC_CHAR16)'%':
        if (!i1) goto l25;
        XML_Parser__ParserDesc_ParseDocument_PEReference(OOC_FALSE);
        XML_Parser__ParserDesc_ParseDocument_OptS(i0);
        goto l1_loop;
      default:
        i2 = _check_pointer(i2, 43030);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i3, OOC_UINT32, 43030))*2);
        i2 = i2<(OOC_CHAR16)' ';
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
      i1 = _check_pointer(i0, 44020);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 44020))*2);
      i1 = i1<(OOC_CHAR16)' ';
      if (i1) goto l3;
      i1 = _check_pointer(i0, 44043);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 44043))*2);
      i1 = i1==(OOC_CHAR16)65534;
      
      goto l4;
l3:
      i1=OOC_TRUE;
l4:
      i2 = cdelta;
      i2 = i3-i2;
      _assert(i1, 127, 44006);
      cend = i2;
      i1 = _check_pointer(i0, 44115);
      i4 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i4, OOC_UINT32, 44115))*2);
      switch (i1) {
      case (OOC_CHAR16)65534:
        XML_Parser__ParserDesc_ParseDocument_NextBlock();
        goto l30;
      case (OOC_CHAR16)' ':
        i0 = _check_pointer(i0, 44195);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 44195))*2) = (OOC_CHAR16)' ';
        cpos = (i3+1);
        goto l30;
      case (OOC_CHAR16)10:
        i1 = (OOC_INT32)p;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44260))+36);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44264))+20);
        i1 = i0==i1;
        if (i1) goto l11;
        i1 = _check_pointer(i0, 44485);
        i4 = OOC_ARRAY_LENGTH(i1, 0);
        i0 = _check_pointer(i0, 44500);
        i5 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i5, OOC_UINT32, 44500))*2);
        *(OOC_UINT16*)(i1+(_check_index(i2, i4, OOC_UINT32, 44485))*2) = i0;
        cpos = (i3+1);
        goto l30;
l11:
        i0 = _check_pointer(i0, 44293);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        i4 = eolReplacement;
        *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 44293))*2) = i4;
        cpos = (i3+1);
        XML_Parser__ParserDesc_ParseDocument_EndOfLine();
        goto l30;
      case (OOC_CHAR16)13:
        i1 = (OOC_INT32)p;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44570))+36);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44574))+20);
        i1 = i0==i1;
        if (i1) goto l16;
        i1 = _check_pointer(i0, 44998);
        i4 = OOC_ARRAY_LENGTH(i1, 0);
        i0 = _check_pointer(i0, 45013);
        i5 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i5, OOC_UINT32, 45013))*2);
        *(OOC_UINT16*)(i1+(_check_index(i2, i4, OOC_UINT32, 44998))*2) = i0;
        cpos = (i3+1);
        goto l30;
l16:
        i1 = _check_pointer(i0, 44603);
        i4 = OOC_ARRAY_LENGTH(i1, 0);
        i5 = eolReplacement;
        *(OOC_UINT16*)(i1+(_check_index(i2, i4, OOC_UINT32, 44603))*2) = i5;
        i1 = i3+1;
        cpos = i1;
        i0 = _check_pointer(i0, 44670);
        i2 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = *(OOC_UINT16*)(i0+(_check_index(i1, i2, OOC_UINT32, 44670))*2);
        i0 = i0==(OOC_CHAR16)65534;
        if (!i0) goto l19;
        XML_Parser__ParserDesc_ParseDocument_NextBlock();
l19:
        i0 = (OOC_INT32)chars;
        i0 = _check_pointer(i0, 44758);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        i2 = cpos;
        i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 44758))*2);
        i0 = i0==(OOC_CHAR16)10;
        if (!i0) goto l22;
        i0 = cdelta;
        cpos = (i2+1);
        cdelta = (i0+1);
l22:
        XML_Parser__ParserDesc_ParseDocument_EndOfLine();
        goto l30;
      case (OOC_CHAR16)9:
        i1 = eolReplacement;
        i1 = i1==(OOC_CHAR16)' ';
        if (i1) goto l27;
        i0 = _check_pointer(i0, 45158);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 45158))*2) = (OOC_CHAR16)9;
        goto l28;
l27:
        i0 = _check_pointer(i0, 45116);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 45116))*2) = (OOC_CHAR16)' ';
l28:
        XML_Parser__ParserDesc_ParseDocument_Tab();
        i0 = cpos;
        cpos = (i0+1);
        goto l30;
      default:
        i0 = _check_pointer(i0, 45238);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 45238))*2) = (OOC_CHAR16)65533;
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
          i4 = _check_pointer(i4, 45845);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i3 = *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 45845))*2);
          i3 = i3<=(OOC_CHAR16)' ';
          
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
          i5 = _check_pointer(i3, 45845);
          i6 = OOC_ARRAY_LENGTH(i5, 0);
          i4 = *(OOC_UINT16*)(i5+(_check_index(i4, i6, OOC_UINT32, 45845))*2);
          i4 = i4<=(OOC_CHAR16)' ';
          
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
          i7 = _check_pointer(i4, 45988);
          i8 = OOC_ARRAY_LENGTH(i7, 0);
          i7 = *(OOC_UINT16*)(i7+(_check_index(i5, i8, OOC_UINT32, 45988))*2);
          i7 = i7<=(OOC_CHAR16)' ';
          if (i7) goto l23;
          i7 = _check_pointer(i4, 46250);
          i8 = OOC_ARRAY_LENGTH(i7, 0);
          i9 = _check_pointer(i4, 46268);
          i10 = OOC_ARRAY_LENGTH(i9, 0);
          i9 = *(OOC_UINT16*)(i9+(_check_index(i5, i10, OOC_UINT32, 46268))*2);
          *(OOC_UINT16*)(i7+(_check_index((i5-i6), i8, OOC_UINT32, 46250))*2) = i9;
          {register OOC_INT32 h0=i5;i5=i6;i6=h0;}
          goto l41;
l23:
          i7 = _check_pointer(i4, 46086);
          i8 = OOC_ARRAY_LENGTH(i7, 0);
          i9 = i5+1;
          i10 = i9!=i2;
          *(OOC_UINT16*)(i7+(_check_index((i5-i6), i8, OOC_UINT32, 46086))*2) = (OOC_CHAR16)' ';
          if (i10) goto l26;
          i7=OOC_FALSE;
          goto l28;
l26:
          i7 = _check_pointer(i4, 46150);
          i8 = OOC_ARRAY_LENGTH(i7, 0);
          i7 = *(OOC_UINT16*)(i7+(_check_index(i9, i8, OOC_UINT32, 46150))*2);
          i7 = i7<=(OOC_CHAR16)' ';
          
l28:
          if (i7) goto l31_loop;
          {register OOC_INT32 h0=i5;i5=i6;i6=h0;}
          goto l41;
l31_loop:
          i5 = i5+1;
          i = i5;
          i7 = i5+1;
          i6 = i6+1;
          i8 = i7!=i2;
          delta = i6;
          if (i8) goto l34;
          i7=OOC_FALSE;
          goto l36;
l34:
          i8 = _check_pointer(i4, 46150);
          i9 = OOC_ARRAY_LENGTH(i8, 0);
          i7 = *(OOC_UINT16*)(i8+(_check_index(i7, i9, OOC_UINT32, 46150))*2);
          i7 = i7<=(OOC_CHAR16)' ';
          
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
          i2 = _check_pointer(i2, 46462);
          i3 = OOC_ARRAY_LENGTH(i2, 0);
          i1 = *(OOC_UINT16*)(i2+(_check_index((i1-1), i3, OOC_UINT32, 46462))*2);
          i1 = i1==(OOC_CHAR16)' ';
          
l51:
          if (!i1) goto l53;
          cdelta = (i0+1);
l53:
          return;
          ;
        }


      i0 = (OOC_INT32)chars;
      i1 = _check_pointer(i0, 46586);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 46586))*2);
      i1 = i1==(OOC_CHAR16)39;
      if (i1) goto l3;
      i0 = _check_pointer(i0, 46609);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i1, OOC_UINT32, 46609))*2);
      i0 = i0==(OOC_CHAR16)'"';
      
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
      i1 = _check_pointer(i1, 46681);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 46681))*2);
      endChar = i1;
      i1 = i3+1;
      cpos = i1;
      cstart = i1;
      cdelta = 0;
l8_loop:
      i1 = (OOC_INT32)chars;
      i2 = _check_pointer(i1, 46779);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = cpos;
      i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 46779))*2);
      switch (i2) {
      case (OOC_CHAR16)0 ... (OOC_CHAR16)31:
      case (OOC_CHAR16)65534:
        i2 = type;
        i2 = i2==2;
        if (i2) goto l13;
        i1=OOC_FALSE;
        goto l15;
l13:
        i1 = _check_pointer(i1, 46880);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 46880))*2);
        i1 = i1==(OOC_CHAR16)9;
        
l15:
        if (i1) goto l16;
        goto l17;
l16:
        XML_Parser__ParserDesc_ParseDocument_Err(20);
l17:
        XML_Parser__ParserDesc_ParseDocument_ControlChar((OOC_CHAR16)10);
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
        i2 = _check_pointer(i1, 47153);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 47153))*2);
        i3 = endChar;
        i2 = i2==i3;
        if (i2) goto l37;
        i2 = type;
        switch (i2) {
        case 2:
          i1 = _check_pointer(i1, 47957);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 47957))*2);
          i1 = XML_Parser__IsPubidChar(i1);
          i1 = !i1;
          if (i1) goto l25;
          goto l36;
l25:
          XML_Parser__ParserDesc_ParseDocument_Err(20);
          goto l36;
        case 4:
          i1 = _check_pointer(i1, 48103);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i3 = cstart;
          i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 48103))*2);
          i1 = XML_Parser__IsEncNameChar(i1, (i4==i3));
          i1 = !i1;
          if (i1) goto l29;
          goto l36;
l29:
          XML_Parser__ParserDesc_ParseDocument_Err(21);
          goto l36;
        case 3:
          i1 = _check_pointer(i1, 48268);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 48268))*2);
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
        i2 = _check_pointer(i1, 48417);
        i3 = cdelta;
        i4 = cpos;
        i5 = OOC_ARRAY_LENGTH(i2, 0);
        i1 = _check_pointer(i1, 48439);
        i6 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i6, OOC_UINT32, 48439))*2);
        *(OOC_UINT16*)(i2+(_check_index((i4-i3), i5, OOC_UINT32, 48417))*2) = i1;
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
          _cmp16((const void*)(_check_pointer(i1, 47483)),(const void*)((OOC_CHAR16[]){121,101,115,0})))!=0;
          if (i2) goto l45;
          i2=OOC_FALSE;
          goto l47;
l45:
          i2 = (
          _cmp16((const void*)(_check_pointer(i1, 47503)),(const void*)((OOC_CHAR16[]){110,111,0})))!=0;
          
l47:
          if (i2) goto l48;
          goto l55;
l48:
          XML_Parser__ParserDesc_ParseDocument_ErrPos(24, (void*)(OOC_INT32)&pos, (RT0__Struct)i0);
          goto l55;
        case 4:
        case 3:
          i2 = (
          _cmp16((const void*)(_check_pointer(i1, 47657)),(const void*)((OOC_CHAR16[]){0})))==0;
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
      _failed_function(45363); return 0;
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
      _assert((i0==0), 127, 48986);
      _assert((i1!=(OOC_INT32)0), 127, 49011);
      i0 = i0+5;
      cpos = i0;
      i2 = (OOC_INT32)chars;
      i2 = _check_pointer(i2, 49112);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i0 = *(OOC_UINT16*)(i2+(_check_index(i0, i3, OOC_UINT32, 49112))*2);
      i0 = i0!=(OOC_CHAR16)'?';
      if (!i0) goto l3;
      XML_Parser__ParserDesc_ParseDocument_S();
l3:
      i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("version", 8, 1);
      if (i0) goto l9;
      i0 = *(OOC_INT8*)((_check_pointer(i1, 49384))+8);
      i0 = i0==5;
      if (!i0) goto l13;
      XML_Parser__ParserDesc_ParseDocument_Err(111);
      goto l13;
l9:
      i0 = cpos;
      cpos = (i0+7);
      XML_Parser__ParserDesc_ParseDocument_Eq();
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_String(3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49284)))), XML_DTD__ExternalEntityDesc_SetVersion)),XML_DTD__ExternalEntityDesc_SetVersion)((XML_DTD__ExternalEntity)i1, (XML_UnicodeBuffer__CharArray)i0);
      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 49340);
      i2 = OOC_ARRAY_LENGTH(i0, 0);
      i3 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i2, OOC_UINT32, 49340))*2);
      i0 = i0!=(OOC_CHAR16)'?';
      if (!i0) goto l13;
      XML_Parser__ParserDesc_ParseDocument_S();
l13:
      i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("encoding", 9, 1);
      if (i0) goto l19;
      i0 = *(OOC_INT8*)((_check_pointer(i1, 50547))+8);
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 49657))+36);
      i2 = *(OOC_UINT8*)((_check_pointer(i2, 49661))+16);
      if (i2) goto l22;
      i2=OOC_FALSE;
      goto l24;
l22:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49690))+44);
      i2 = i2==(OOC_INT32)0;
      
l24:
      if (!i2) goto l42;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 49908)), 0);
      i2 = LongStrings__Length((void*)(_check_pointer(i0, 49908)), i2);
      i2 = (OOC_INT32)RT0__NewObject(_td_XML_Parser__48891.baseTypes[0], (i2+1));
      encoding = (void*)i2;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 49952)), 0);
      i3 = i3-1;
      i4 = 0<=i3;
      i = 0;
      if (!i4) goto l37;
      i4=0;
l28_loop:
      i5 = _check_pointer(i0, 49982);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = *(OOC_UINT16*)(i5+(_check_index(i4, i6, OOC_UINT32, 49982))*2);
      i5 = i5>(OOC_CHAR16)255;
      if (i5) goto l31;
      i5 = _check_pointer(i2, 50077);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i7 = _check_pointer(i0, 50097);
      i8 = OOC_ARRAY_LENGTH(i7, 0);
      i7 = *(OOC_UINT16*)(i7+(_check_index(i4, i8, OOC_UINT32, 50097))*2);
      *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 50077))) = i7;
      goto l32;
l31:
      i5 = _check_pointer(i2, 50027);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 50027))) = (OOC_CHAR8)'?';
l32:
      i4 = i4+1;
      i5 = i4<=i3;
      i = i4;
      if (i5) goto l28_loop;
l37:
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 50185)), 0);
      i2 = (OOC_INT32)XML_UnicodeCodec__GetFactory((void*)(_check_pointer(i2, 50185)), i3);
      codecFactory = (XML_UnicodeCodec__Factory)i2;
      i3 = i2==(OOC_INT32)0;
      if (i3) goto l40;
      i3 = (OOC_INT32)p;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 50299))+36);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 50299))+36);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 50303)))), XML_UnicodeBuffer__InputDesc_SetCodec)),XML_UnicodeBuffer__InputDesc_SetCodec)((XML_UnicodeBuffer__Input)i3, (XML_UnicodeCodec__Factory)i2, OOC_FALSE);
      XML_Parser__ParserDesc_ParseDocument_ResetLocator();
      XML_Parser__ParserDesc_ParseDocument_XMLDecl((XML_DTD__ExternalEntity)i1);
      return;
      goto l42;
l40:
      XML_Parser__ParserDesc_ParseDocument_Err(29);
l42:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50462)))), XML_DTD__ExternalEntityDesc_SetEncoding)),XML_DTD__ExternalEntityDesc_SetEncoding)((XML_DTD__ExternalEntity)i1, (XML_UnicodeBuffer__CharArray)i0);
      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 50503);
      i2 = OOC_ARRAY_LENGTH(i0, 0);
      i3 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i2, OOC_UINT32, 50503))*2);
      i0 = i0!=(OOC_CHAR16)'?';
      if (!i0) goto l46;
      XML_Parser__ParserDesc_ParseDocument_S();
l46:
      i0 = *(OOC_INT8*)((_check_pointer(i1, 50643))+8);
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
      _cmp16((const void*)(_check_pointer(i0, 50873)),(const void*)((OOC_CHAR16[]){121,101,115,0})))==0;
      if (i0) goto l55;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50970)))), XML_DTD__ExternalEntityDesc_SetStandalone)),XML_DTD__ExternalEntityDesc_SetStandalone)((XML_DTD__ExternalEntity)i1, 1);
      goto l57;
l55:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50905)))), XML_DTD__ExternalEntityDesc_SetStandalone)),XML_DTD__ExternalEntityDesc_SetStandalone)((XML_DTD__ExternalEntity)i1, 0);
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
      i1 = *(OOC_INT32*)((_check_pointer(i0, 51246))+88);
      i1 = i1==0;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51372))+84);
      i1 = _check_pointer(i1, 51381);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 51383))+88);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index((i2-1), i3, OOC_UINT32, 51381))*28))+20);
      _assert((i1!=(OOC_INT32)0), 127, 51363);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51431))+84);
      i1 = _check_pointer(i1, 51440);
      i0 = *(OOC_INT32*)((_check_pointer(i0, 51442))+88);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index((i0-1), i2, OOC_UINT32, 51440))*28))+20);
      return (XML_DTD__Entity)i0;
      goto l4;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51286))+52);
      _assert((i1!=(OOC_INT32)0), 127, 51277);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51327))+52);
      return (XML_DTD__Entity)i0;
l4:
      _failed_function(51195); return 0;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity(XML_DTD__Entity reference) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)p;
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 51578))+62);
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
          i0 = *(OOC_UINT16*)((OOC_INT32)name+(_check_index(0, name_0d, OOC_UINT8, 51920))*2);
          i0 = (_cap(i0))==(OOC_CHAR16)'X';
          if (i0) goto l3;
          i0=OOC_FALSE;
          goto l5;
l3:
          i0 = *(OOC_UINT16*)((OOC_INT32)name+(_check_index(1, name_0d, OOC_UINT8, 51959))*2);
          i0 = (_cap(i0))==(OOC_CHAR16)'M';
          
l5:
          if (i0) goto l7;
          i0=OOC_FALSE;
          goto l8;
l7:
          i0 = *(OOC_UINT16*)((OOC_INT32)name+(_check_index(2, name_0d, OOC_UINT8, 51998))*2);
          i0 = (_cap(i0))==(OOC_CHAR16)'L';
          
l8:
          return i0;
          ;
        }


      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52069))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52069))+4);
      i0 = _check_pointer(i0, 52072);
      i0 = (OOC_INT32)&_td_XML_Locator__Position;
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i1, 52072)), (RT0__Struct)i0);
      i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_CurrentEntity();
      i2 = cpos;
      currentEntity = (XML_DTD__Entity)i1;
      cpos = (i2+2);
      i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_TRUE);
      target = (XML_UnicodeBuffer__CharArray)i1;
      i2 = (
      _cmp16((const void*)(_check_pointer(i1, 52223)),(const void*)((OOC_CHAR16[]){120,109,108,0})))==0;
      if (i2) goto l6;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 52315)), 0);
      i1 = XML_Parser__ParserDesc_ParseDocument_PI_IsReserved((void*)(_check_pointer(i1, 52315)), i2);
      if (!i1) goto l7;
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52358))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52358))+4);
      i1 = _check_pointer(i1, 52361);
      XML_Parser__ParserDesc_ParseDocument_ErrPos(26, (void*)(_check_pointer(i2, 52361)), (RT0__Struct)i0);
      goto l7;
l6:
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52279))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52279))+4);
      i1 = _check_pointer(i1, 52282);
      XML_Parser__ParserDesc_ParseDocument_ErrPos(25, (void*)(_check_pointer(i2, 52282)), (RT0__Struct)i0);
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
      i4 = _check_pointer(i3, 52690);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = cpos;
      i4 = *(OOC_UINT16*)(i4+(_check_index(i6, i5, OOC_UINT32, 52690))*2);
      switch (i4) {
      case (OOC_CHAR16)0 ... (OOC_CHAR16)31:
      case (OOC_CHAR16)65534:
        XML_Parser__ParserDesc_ParseDocument_ControlChar((OOC_CHAR16)10);
        goto l10_loop;
      case (OOC_CHAR16)65535:
        i1 = (OOC_INT32)p;
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52839))+4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52839))+4);
        i1 = _check_pointer(i1, 52842);
        XML_Parser__ParserDesc_ParseDocument_ErrPos(7, (void*)(_check_pointer(i2, 52842)), (RT0__Struct)i0);
        goto l23;
      case (OOC_CHAR16)'?':
        i3 = XML_Parser__ParserDesc_ParseDocument_LookingAt("?>", 3, 0);
        if (i3) goto l18;
        i3 = (OOC_INT32)chars;
        i4 = _check_pointer(i3, 53290);
        i5 = cdelta;
        i6 = cpos;
        i7 = OOC_ARRAY_LENGTH(i4, 0);
        i3 = _check_pointer(i3, 53312);
        i8 = OOC_ARRAY_LENGTH(i3, 0);
        i3 = *(OOC_UINT16*)(i3+(_check_index(i6, i8, OOC_UINT32, 53312))*2);
        *(OOC_UINT16*)(i4+(_check_index((i6-i5), i7, OOC_UINT32, 53290))*2) = i3;
        i3 = i6+1;
        cpos = i3;
        
        goto l10_loop;
l18:
        XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i2);
        i0 = (OOC_INT32)p;
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52997))+44);
        i3 = (OOC_INT32)chars;
        i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53182))+56);
        i5 = cpos;
        i6 = cdelta;
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52997))+44);
        i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 53194))+36);
        i7 = OOC_ARRAY_LENGTH((_check_pointer(i3, 53044)), 0);
        i8 = cstart;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 53006)))), XML_Builder__BuilderDesc_ProcessingInstruction)),XML_Builder__BuilderDesc_ProcessingInstruction)((XML_Builder__Builder)i0, (XML_UnicodeBuffer__CharArray)i1, (void*)(_check_pointer(i3, 53044)), i7, i8, (i5-i6), (URI__URI)i4);
        i0 = cpos;
        i0 = i0+2;
        cpos = i0;
        goto l23;
      default:
        i4 = _check_pointer(i3, 53379);
        i5 = cdelta;
        i7 = OOC_ARRAY_LENGTH(i4, 0);
        i3 = _check_pointer(i3, 53401);
        i8 = OOC_ARRAY_LENGTH(i3, 0);
        i3 = *(OOC_UINT16*)(i3+(_check_index(i6, i8, OOC_UINT32, 53401))*2);
        *(OOC_UINT16*)(i4+(_check_index((i6-i5), i7, OOC_UINT32, 53379))*2) = i3;
        cpos = (i6+1);
        goto l10_loop;
      }
l22:
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52437))+44);
      i2 = (OOC_INT32)chars;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52552))+56);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52437))+44);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 52564))+36);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 52484)), 0);
      i5 = (OOC_INT32)target;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52446)))), XML_Builder__BuilderDesc_ProcessingInstruction)),XML_Builder__BuilderDesc_ProcessingInstruction)((XML_Builder__Builder)i0, (XML_UnicodeBuffer__CharArray)i5, (void*)(_check_pointer(i2, 52484)), i4, 0, 0, (URI__URI)i3);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53594))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53594))+4);
      i0 = _check_pointer(i0, 53597);
      i0 = (OOC_INT32)&_td_XML_Locator__Position;
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i1, 53597)), (RT0__Struct)i0);
      i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_CurrentEntity();
      i2 = cpos;
      i2 = i2+4;
      currentEntity = (XML_DTD__Entity)i1;
      cpos = i2;
      cstart = i2;
      cdelta = 0;
l1_loop:
      i2 = (OOC_INT32)chars;
      i3 = _check_pointer(i2, 53769);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i5 = cpos;
      i3 = *(OOC_UINT16*)(i3+(_check_index(i5, i4, OOC_UINT32, 53769))*2);
      switch (i3) {
      case (OOC_CHAR16)0 ... (OOC_CHAR16)31:
      case (OOC_CHAR16)65534:
        XML_Parser__ParserDesc_ParseDocument_ControlChar((OOC_CHAR16)10);
        goto l1_loop;
      case (OOC_CHAR16)65535:
        i1 = (OOC_INT32)p;
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 53915))+4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 53915))+4);
        i1 = _check_pointer(i1, 53918);
        XML_Parser__ParserDesc_ParseDocument_ErrPos(5, (void*)(_check_pointer(i2, 53918)), (RT0__Struct)i0);
        goto l15;
      case (OOC_CHAR16)'-':
        i2 = XML_Parser__ParserDesc_ParseDocument_LookingAt("-->", 4, 0);
        if (i2) goto l12;
        i2 = XML_Parser__ParserDesc_ParseDocument_LookingAt("--", 3, 0);
        if (i2) goto l9;
        goto l11;
l9:
        XML_Parser__ParserDesc_ParseDocument_Err(4);
l11:
        i2 = (OOC_INT32)chars;
        i3 = _check_pointer(i2, 54297);
        i4 = cpos;
        i5 = cdelta;
        i6 = OOC_ARRAY_LENGTH(i3, 0);
        i2 = _check_pointer(i2, 54319);
        i7 = OOC_ARRAY_LENGTH(i2, 0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i7, OOC_UINT32, 54319))*2);
        *(OOC_UINT16*)(i3+(_check_index((i4-i5), i6, OOC_UINT32, 54297))*2) = i2;
        cpos = (i4+1);
        goto l1_loop;
l12:
        XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i1);
        i0 = (OOC_INT32)p;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54064))+44);
        i2 = (OOC_INT32)chars;
        i3 = cpos;
        i4 = cdelta;
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54064))+44);
        i5 = OOC_ARRAY_LENGTH((_check_pointer(i2, 54089)), 0);
        i6 = cstart;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 54073)))), XML_Builder__BuilderDesc_Comment)),XML_Builder__BuilderDesc_Comment)((XML_Builder__Builder)i0, (void*)(_check_pointer(i2, 54089)), i5, i6, (i3-i4));
        i0 = cpos;
        cpos = (i0+3);
        goto l15;
      default:
        i3 = _check_pointer(i2, 54367);
        i4 = cdelta;
        i6 = OOC_ARRAY_LENGTH(i3, 0);
        i2 = _check_pointer(i2, 54389);
        i7 = OOC_ARRAY_LENGTH(i2, 0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i7, OOC_UINT32, 54389))*2);
        *(OOC_UINT16*)(i3+(_check_index((i5-i4), i6, OOC_UINT32, 54367))*2) = i2;
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54564))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54564))+4);
      i0 = _check_pointer(i0, 54567);
      i0 = (OOC_INT32)&_td_XML_Locator__Position;
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i1, 54567)), (RT0__Struct)i0);
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54578))+44);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54578))+44);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 54587)))), XML_Builder__BuilderDesc_StartCDATA)),XML_Builder__BuilderDesc_StartCDATA)((XML_Builder__Builder)i1);
      i1 = cpos;
      i1 = i1+9;
      cpos = i1;
      cstart = i1;
      cdelta = 0;
l1_loop:
      i1 = (OOC_INT32)chars;
      i2 = _check_pointer(i1, 54760);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = cpos;
      i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 54760))*2);
      switch (i2) {
      case (OOC_CHAR16)0 ... (OOC_CHAR16)31:
      case (OOC_CHAR16)65534:
        XML_Parser__ParserDesc_ParseDocument_ControlChar((OOC_CHAR16)10);
        goto l1_loop;
      case (OOC_CHAR16)65535:
        i1 = (OOC_INT32)p;
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54904))+4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54904))+4);
        i1 = _check_pointer(i1, 54907);
        XML_Parser__ParserDesc_ParseDocument_ErrPos(8, (void*)(_check_pointer(i2, 54907)), (RT0__Struct)i0);
        goto l12;
      case (OOC_CHAR16)']':
        i1 = XML_Parser__ParserDesc_ParseDocument_LookingAt("]]>", 4, 0);
        if (i1) goto l9;
        i1 = (OOC_INT32)chars;
        i2 = _check_pointer(i1, 55336);
        i3 = cdelta;
        i4 = cpos;
        i5 = OOC_ARRAY_LENGTH(i2, 0);
        i1 = _check_pointer(i1, 55358);
        i6 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i6, OOC_UINT32, 55358))*2);
        *(OOC_UINT16*)(i2+(_check_index((i4-i3), i5, OOC_UINT32, 55336))*2) = i1;
        cpos = (i4+1);
        goto l1_loop;
l9:
        i1 = (OOC_INT32)p;
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55016))+4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55016))+4);
        i1 = _check_pointer(i1, 55019);
        XML_Parser__ParserDesc_ParseDocument_DecLength((void*)(_check_pointer(i2, 55019)), (RT0__Struct)i0, -9);
        i1 = (OOC_INT32)p;
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55040))+44);
        i3 = (OOC_INT32)chars;
        i4 = cpos;
        i5 = cdelta;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55040))+44);
        i6 = OOC_ARRAY_LENGTH((_check_pointer(i3, 55068)), 0);
        i7 = cstart;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 55049)))), XML_Builder__BuilderDesc_Characters)),XML_Builder__BuilderDesc_Characters)((XML_Builder__Builder)i1, (void*)(_check_pointer(i3, 55068)), i6, i7, (i4-i5), 1);
        i1 = cpos;
        cpos = (i1+3);
        i1 = (OOC_INT32)p;
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55224))+4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55224))+4);
        i1 = _check_pointer(i1, 55227);
        XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i2, 55227)), (RT0__Struct)i0);
        i0 = (OOC_INT32)p;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55244))+44);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55244))+44);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55253)))), XML_Builder__BuilderDesc_EndCDATA)),XML_Builder__BuilderDesc_EndCDATA)((XML_Builder__Builder)i0);
        goto l12;
      default:
        i2 = _check_pointer(i1, 55419);
        i3 = cdelta;
        i5 = OOC_ARRAY_LENGTH(i2, 0);
        i1 = _check_pointer(i1, 55441);
        i6 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i6, OOC_UINT32, 55441))*2);
        *(OOC_UINT16*)(i2+(_check_index((i4-i3), i5, OOC_UINT32, 55419))*2) = i1;
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
          i2 = _check_pointer(i1, 56181);
          i3 = cdelta;
          i4 = cpos;
          i3 = i4-i3;
          i4 = OOC_ARRAY_LENGTH(i2, 0);
          *(OOC_UINT16*)(i2+(_check_index(i3, i4, OOC_UINT32, 56181))*2) = (55296+(i0>>10));
          i1 = _check_pointer(i1, 56247);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          *(OOC_UINT16*)(i1+(_check_index((i3+1), i2, OOC_UINT32, 56247))*2) = (56320+(_mod(i0,1024)));
          return 2;
          goto l4;
l3:
          i1 = (OOC_INT32)chars;
          i1 = _check_pointer(i1, 56071);
          i2 = cdelta;
          i3 = cpos;
          i4 = OOC_ARRAY_LENGTH(i1, 0);
          *(OOC_UINT16*)(i1+(_check_index((i3-i2), i4, OOC_UINT32, 56071))*2) = i0;
          return 1;
l4:
          _failed_function(55971); return 0;
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
      i3 = _check_pointer(i2, 57213);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i5 = cpos;
      i3 = *(OOC_UINT16*)(i3+(_check_index(i5, i4, OOC_UINT32, 57213))*2);
      switch (i3) {
      case (OOC_CHAR16)65534:
        XML_Parser__ParserDesc_ParseDocument_NextBlock();
        
        goto l3_loop;
      case (OOC_CHAR16)';':
      case (OOC_CHAR16)65535:
        
        goto l33;
      case (OOC_CHAR16)'0' ... (OOC_CHAR16)'9':
        i3 = i1<=131072;
        if (i3) goto l10;
        goto l11;
l10:
        i2 = _check_pointer(i2, 57430);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i3, OOC_UINT32, 57430))*2);
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
      i3 = _check_pointer(i2, 56531);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i5 = cpos;
      i3 = *(OOC_UINT16*)(i3+(_check_index(i5, i4, OOC_UINT32, 56531))*2);
      switch (i3) {
      case (OOC_CHAR16)65534:
        XML_Parser__ParserDesc_ParseDocument_NextBlock();
        
        goto l16_loop;
      case (OOC_CHAR16)';':
      case (OOC_CHAR16)65535:
        
        goto l33;
      case (OOC_CHAR16)'0' ... (OOC_CHAR16)'9':
        i3 = i1<=131072;
        if (i3) goto l23;
        goto l24;
l23:
        i2 = _check_pointer(i2, 56748);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i3, OOC_UINT32, 56748))*2);
        i1 = ((i1*16)+i2)-48;
        cval = i1;
        
l24:
        i2 = cdelta;
        cpos = (i5+1);
        cdelta = (i2+1);
        
        goto l16_loop;
      case (OOC_CHAR16)'a' ... (OOC_CHAR16)'f':
      case (OOC_CHAR16)'A' ... (OOC_CHAR16)'F':
        i3 = i1<=131072;
        if (i3) goto l28;
        goto l29;
l28:
        i2 = _check_pointer(i2, 56941);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i3, OOC_UINT32, 56941))*2);
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
      i2 = _check_pointer(i2, 57637);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = cpos;
      i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 57637))*2);
      i2 = i2==(OOC_CHAR16)';';
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 58261))+36);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 58265))+24);
      i2 = cstart;
      i1 = i1+i2;
      localCStart = i1;
      i2 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_TRUE);
      name = (XML_UnicodeBuffer__CharArray)i2;
      i3 = (OOC_INT32)p;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 58346))+36);
      i3 = *(OOC_INT32*)((_check_pointer(i3, 58350))+24);
      cstart = (i1-i3);
      XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)';');
      i1 = (OOC_INT32)dtd;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 58415))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 58415))+4);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 58428)))), XML_DTD__NamespaceDesc_Get)),XML_DTD__NamespaceDesc_Get)((XML_DTD__Namespace)i1, (XML_UnicodeBuffer__CharArray)i2);
      i3 = i1==(OOC_INT32)0;
      decl = (XML_DTD__Declaration)i1;
      if (i3) goto l15;
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58735)))), &_td_XML_DTD__EntityDesc, 58735);
      entity = (XML_DTD__Entity)i1;
      i3 = *(OOC_INT8*)((_check_pointer(i1, 58762))+8);
      i3 = i3==4;
      if (i3) goto l13;
      i3 = permitExternal;
      i3 = !i3;
      if (i3) goto l7;
      i3=OOC_FALSE;
      goto l9;
l7:
      i3 = *(OOC_INT8*)((_check_pointer(i1, 58983))+8);
      i3 = i3==2;
      
l9:
      if (i3) goto l11;
      i0=i2;
      goto l27;
l11:
      XML_Parser__ParserDesc_ParseDocument_ErrPos(305, (void*)(OOC_INT32)&pos, (RT0__Struct)i0);
      i0 = (OOC_INT32)p;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 59084))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 59084))+104);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 59146)), 0);
      i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 59146)), i4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 59095)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i2);
      i0 = (OOC_INT32)XML_Parser__noName;
      name = (XML_UnicodeBuffer__CharArray)i0;
      
      goto l27;
l13:
      XML_Parser__ParserDesc_ParseDocument_ErrPos(304, (void*)(OOC_INT32)&pos, (RT0__Struct)i0);
      i0 = (OOC_INT32)p;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 58852))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 58852))+104);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 58914)), 0);
      i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 58914)), i4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 58863)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i2);
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
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 58518))+63);
      
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 58619))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 58619))+104);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 58681)), 0);
      i3 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 58681)), i3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58630)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i3);
l26:
      i0=i2;i1=(OOC_INT32)0;
l27:
      i2 = (OOC_INT32)dtd;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 59215)))), XML_DTD__BuilderDesc_NewEntityRef)),XML_DTD__BuilderDesc_NewEntityRef)((XML_DTD__Builder)i2, (XML_UnicodeBuffer__CharArray)i0, (XML_DTD__Entity)i1);
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
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 59828)))), XML_DTD__BuilderDesc_NewCharacters)),XML_DTD__BuilderDesc_NewCharacters)((XML_DTD__Builder)i3, (XML_UnicodeBuffer__CharArray)i4, i1, i0, i5);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 59815)))), XML_DTD__AttValueDesc_Append)),XML_DTD__AttValueDesc_Append)((XML_DTD__AttValue)i2, (XML_DTD__Fragment)i0);
l4:
          return;
          ;
        }


      i0 = (OOC_INT32)dtd;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59951)))), XML_DTD__BuilderDesc_NewAttValue)),XML_DTD__BuilderDesc_NewAttValue)((XML_DTD__Builder)i0);
      attValue = (XML_DTD__AttValue)i0;
      i0 = (OOC_INT32)chars;
      i1 = _check_pointer(i0, 59983);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 59983))*2);
      i1 = i1==(OOC_CHAR16)39;
      if (i1) goto l3;
      i0 = _check_pointer(i0, 60006);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i1, OOC_UINT32, 60006))*2);
      i0 = i0==(OOC_CHAR16)'"';
      
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
      i1 = _check_pointer(i1, 60078);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 60078))*2);
      endChar = i1;
      i1 = i3+1;
      cpos = i1;
      cstart = i1;
      cdelta = 0;
l8_loop:
      i1 = (OOC_INT32)chars;
      i2 = _check_pointer(i1, 60175);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = cpos;
      i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 60175))*2);
      switch (i2) {
      case (OOC_CHAR16)0 ... (OOC_CHAR16)31:
      case (OOC_CHAR16)65534:
        XML_Parser__ParserDesc_ParseDocument_ControlChar((OOC_CHAR16)' ');
        goto l8_loop;
      case (OOC_CHAR16)65535:
        XML_Parser__ParserDesc_ParseDocument_ErrPos(6, (void*)(OOC_INT32)&pos, (RT0__Struct)i0);
        XML_Parser__ParserDesc_ParseDocument_AttValue_Flush();
        goto l25;
      case (OOC_CHAR16)'<':
        XML_Parser__ParserDesc_ParseDocument_Err(13);
        i1 = (OOC_INT32)chars;
        i1 = _check_pointer(i1, 60434);
        i2 = cdelta;
        i3 = cpos;
        i4 = OOC_ARRAY_LENGTH(i1, 0);
        *(OOC_UINT16*)(i1+(_check_index((i3-i2), i4, OOC_UINT32, 60434))*2) = (OOC_CHAR16)' ';
        cpos = (i3+1);
        goto l8_loop;
      case (OOC_CHAR16)'&':
        i1 = XML_Parser__ParserDesc_ParseDocument_LookingAt("&#", 3, 0);
        if (!i1) goto l15;
        goto l16;
l15:
        XML_Parser__ParserDesc_ParseDocument_AttValue_Flush();
        i1 = (OOC_INT32)attValue;
        i2 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_EntityRef(OOC_TRUE, OOC_FALSE);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 60692)))), XML_DTD__AttValueDesc_Append)),XML_DTD__AttValueDesc_Append)((XML_DTD__AttValue)i1, (XML_DTD__Fragment)i2);
        i1 = cpos;
        cstart = i1;
        cdelta = 0;
        goto l8_loop;
l16:
        XML_Parser__ParserDesc_ParseDocument_CharRef();
        goto l8_loop;
      default:
        i2 = _check_pointer(i1, 60823);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 60823))*2);
        i3 = endChar;
        i2 = i2==i3;
        if (i2) goto l22;
        i2 = _check_pointer(i1, 61188);
        i3 = cdelta;
        i5 = OOC_ARRAY_LENGTH(i2, 0);
        i1 = _check_pointer(i1, 61210);
        i6 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i6, OOC_UINT32, 61210))*2);
        *(OOC_UINT16*)(i2+(_check_index((i4-i3), i5, OOC_UINT32, 61188))*2) = i1;
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
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 61713))+17);
          if (i1) goto l24;
          *(OOC_UINT8*)((_check_pointer(i0, 61781))+17) = OOC_TRUE;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 61822))+20);
          i1 = i1==(OOC_INT32)0;
          if (!i1) goto l5;
          i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Expand_ExpandAttValue((XML_DTD__Entity)i0);
          *(OOC_INT32*)((_check_pointer(i0, 61863))+20) = i1;
l5:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 61944))+20);
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 61954));
          fragment = (XML_DTD__Fragment)i1;
          i2 = i1!=(OOC_INT32)0;
          if (!i2) goto l23;
l8_loop:
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 62031)))), &_td_XML_DTD__EntityRefDesc);
          if (!i2) goto l18;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 62076))+8);
          i2 = i2!=(OOC_INT32)0;
          if (i2) goto l13;
          i2=OOC_FALSE;
          goto l15;
l13:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 62132))+8);
          i2 = XML_Parser__ParserDesc_ParseDocument_Expand_IsRecursive((XML_DTD__Entity)i2);
          
l15:
          if (!i2) goto l18;
          *(OOC_UINT8*)((_check_pointer(i0, 62169))+17) = OOC_FALSE;
          return OOC_TRUE;
l18:
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 62342));
          fragment = (XML_DTD__Fragment)i1;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l8_loop;
l23:
          *(OOC_UINT8*)((_check_pointer(i0, 62380))+17) = OOC_FALSE;
          return OOC_FALSE;
          goto l25;
l24:
          return OOC_TRUE;
l25:
          _failed_function(61599); return 0;
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
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 62673)))), XML_DTD__BuilderDesc_NewCharacters)),XML_DTD__BuilderDesc_NewCharacters)((XML_DTD__Builder)i3, (XML_UnicodeBuffer__CharArray)i4, i1, i0, OOC_FALSE);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 62660)))), XML_DTD__AttValueDesc_Append)),XML_DTD__AttValueDesc_Append)((XML_DTD__AttValue)i2, (XML_DTD__Fragment)i0);
l3:
              return;
              ;
            }


          i0 = (OOC_INT32)entity;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62784)))), &_td_XML_DTD__ExternalEntityDesc);
          if (!i1) goto l3;
          i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Internalize((XML_DTD__ExternalEntity)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62870)))), &_td_XML_DTD__ExternalEntityDesc, 62870)));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62828)))), XML_DTD__EntityDesc_SetEntityValue)),XML_DTD__EntityDesc_SetEntityValue)((XML_DTD__Entity)i0, (XML_UnicodeBuffer__CharArray)i1);
l3:
          XML_Parser__ParserDesc_ParseDocument_PushEntity((XML_DTD__Entity)i0, OOC_FALSE);
          i0 = (OOC_INT32)dtd;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62961)))), XML_DTD__BuilderDesc_NewAttValue)),XML_DTD__BuilderDesc_NewAttValue)((XML_DTD__Builder)i0);
          attValue = (XML_DTD__AttValue)i0;
          i0 = cpos;
          cstart = i0;
l4_loop:
          i0 = (OOC_INT32)chars;
          i1 = _check_pointer(i0, 63035);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i3 = cpos;
          i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 63035))*2);
          switch (i1) {
          case (OOC_CHAR16)65535:
            XML_Parser__ParserDesc_ParseDocument_Expand_ExpandAttValue_Flush();
            goto l19;
          case (OOC_CHAR16)0 ... (OOC_CHAR16)31:
            i1 = _check_pointer(i0, 63339);
            i2 = OOC_ARRAY_LENGTH(i1, 0);
            i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 63339))*2);
            i1 = i1!=(OOC_CHAR16)9;
            if (!i1) goto l4_loop;
            i0 = _check_pointer(i0, 63382);
            i1 = OOC_ARRAY_LENGTH(i0, 0);
            *(OOC_UINT16*)(i0+(_check_index(i3, i1, OOC_UINT32, 63382))*2) = (OOC_CHAR16)' ';
            goto l4_loop;
          case (OOC_CHAR16)'<':
            XML_Parser__ParserDesc_ParseDocument_Err(13);
            i0 = cpos;
            cpos = (i0+1);
            goto l4_loop;
          case (OOC_CHAR16)'&':
            XML_Parser__ParserDesc_ParseDocument_Expand_ExpandAttValue_Flush();
            i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("&#", 3, 0);
            if (i0) goto l15;
            i0 = (OOC_INT32)attValue;
            i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_EntityRef(OOC_TRUE, OOC_FALSE);
            OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63843)))), XML_DTD__AttValueDesc_Append)),XML_DTD__AttValueDesc_Append)((XML_DTD__AttValue)i0, (XML_DTD__Fragment)i1);
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
            i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 63751)))), XML_DTD__BuilderDesc_NewCharacters)),XML_DTD__BuilderDesc_NewCharacters)((XML_DTD__Builder)i1, (XML_UnicodeBuffer__CharArray)i4, i5, (i2-i3), OOC_FALSE);
            OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63738)))), XML_DTD__AttValueDesc_Append)),XML_DTD__AttValueDesc_Append)((XML_DTD__AttValue)i0, (XML_DTD__Fragment)i1);
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
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 64093));
      i1 = i0!=(OOC_INT32)0;
      fragment = (XML_DTD__Fragment)i0;
      if (!i1) goto l21;
l3_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 64162)))), &_td_XML_DTD__EntityRefDesc);
      if (!i1) goto l16;
      i1 = (OOC_INT32)dtd;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 64202))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 64202))+4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64230))+4);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 64215)))), XML_DTD__NamespaceDesc_Get)),XML_DTD__NamespaceDesc_Get)((XML_DTD__Namespace)i1, (XML_UnicodeBuffer__CharArray)i3);
      decl = (XML_DTD__Declaration)i1;
      i2 = i1==(OOC_INT32)0;
      if (i2) goto l14;
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64444)))), &_td_XML_DTD__EntityDesc, 64444);
      entity = (XML_DTD__Entity)i1;
      *(OOC_INT32*)((_check_pointer(i0, 64473))+8) = i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 64515))+20);
      i0 = i0==(OOC_INT32)0;
      if (!i0) goto l10;
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Expand_ExpandAttValue((XML_DTD__Entity)i1);
      *(OOC_INT32*)((_check_pointer(i1, 64558))+20) = i0;
      i0 = (OOC_INT32)entity;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64625))+20);
      XML_Parser__ParserDesc_ParseDocument_Expand((XML_DTD__AttValue)i0);
l10:
      i0 = (OOC_INT32)entity;
      i0 = XML_Parser__ParserDesc_ParseDocument_Expand_IsRecursive((XML_DTD__Entity)i0);
      if (!i0) goto l16;
      XML_Parser__ParserDesc_ParseDocument_Err(213);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64755))+104);
      i2 = (OOC_INT32)entity;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 64819))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 64819))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64755))+104);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 64825)), 0);
      i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i3, 64825)), i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64766)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i2);
      i0 = (OOC_INT32)fragment;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64852))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 64860))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64852))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64860))+20);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64870)))), XML_DTD__AttValueDesc_Clear)),XML_DTD__AttValueDesc_Clear)((XML_DTD__AttValue)i0);
      goto l16;
l14:
      XML_Parser__ParserDesc_ParseDocument_Err(210);
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 64322))+104);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64388))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64388))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 64322))+104);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 64394)), 0);
      i0 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i3, 64394)), i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 64333)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i1, "name", 5, (Msg__LStringPtr)i0);
l16:
      i0 = (OOC_INT32)fragment;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 65017));
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 65504))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 65504))+4);
          i0 = _check_pointer(i0, 65507);
          XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i1, 65507)), (RT0__Struct)((OOC_INT32)&_td_XML_Locator__Position));
          i0 = cpos;
          cstart = i0;
          cdelta = 0;
          elementWhitespace = 2;
          i0=2;
l1_loop:
          i1 = (OOC_INT32)chars;
          i2 = _check_pointer(i1, 65868);
          i3 = OOC_ARRAY_LENGTH(i2, 0);
          i4 = cpos;
          i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 65868))*2);
          switch (i2) {
          case (OOC_CHAR16)0 ... (OOC_CHAR16)31:
          case (OOC_CHAR16)65534:
            i2 = (OOC_INT32)p;
            i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 65943))+36);
            i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 65947))+20);
            i1 = i1!=i2;
            if (!i1) goto l5;
            goto l9;
l5:
            XML_Parser__ParserDesc_ParseDocument_ControlChar((OOC_CHAR16)10);
            i1 = cdelta;
            i1 = i1!=0;
            if (!i1) goto l1_loop;
            goto l21_loop;
l9:
            cpos = (i4+1);
            goto l1_loop;
          case (OOC_CHAR16)' ':
            cpos = (i4+1);
            
            goto l1_loop;
          case (OOC_CHAR16)'<':
          case (OOC_CHAR16)'&':
          case (OOC_CHAR16)65535:
            goto l21_loop;
          case (OOC_CHAR16)']':
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
          i2 = _check_pointer(i1, 66592);
          i3 = OOC_ARRAY_LENGTH(i2, 0);
          i4 = cpos;
          i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 66592))*2);
          switch (i2) {
          case (OOC_CHAR16)0 ... (OOC_CHAR16)31:
          case (OOC_CHAR16)65534:
            i2 = (OOC_INT32)p;
            i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 66667))+36);
            i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 66671))+20);
            i2 = i1!=i2;
            if (!i2) goto l25;
            goto l26;
l25:
            XML_Parser__ParserDesc_ParseDocument_ControlChar((OOC_CHAR16)10);
            goto l21_loop;
l26:
            i2 = _check_pointer(i1, 67067);
            i3 = cdelta;
            i5 = OOC_ARRAY_LENGTH(i2, 0);
            i1 = _check_pointer(i1, 67089);
            i6 = OOC_ARRAY_LENGTH(i1, 0);
            i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i6, OOC_UINT32, 67089))*2);
            *(OOC_UINT16*)(i2+(_check_index((i4-i3), i5, OOC_UINT32, 67067))*2) = i1;
            cpos = (i4+1);
            goto l21_loop;
          case (OOC_CHAR16)' ':
            i2 = _check_pointer(i1, 67212);
            i3 = cdelta;
            i5 = OOC_ARRAY_LENGTH(i2, 0);
            i1 = _check_pointer(i1, 67234);
            i6 = OOC_ARRAY_LENGTH(i1, 0);
            i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i6, OOC_UINT32, 67234))*2);
            *(OOC_UINT16*)(i2+(_check_index((i4-i3), i5, OOC_UINT32, 67212))*2) = i1;
            cpos = (i4+1);
            
            goto l21_loop;
          case (OOC_CHAR16)'<':
          case (OOC_CHAR16)65535:
            goto l41;
          case (OOC_CHAR16)'&':
            i1 = XML_Parser__ParserDesc_ParseDocument_LookingAt("&#", 3, 0);
            if (!i1) goto l41;
            elementWhitespace = 1;
            XML_Parser__ParserDesc_ParseDocument_CharRef();
            i0=1;
            goto l21_loop;
          case (OOC_CHAR16)']':
            i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("]]>", 4, 0);
            if (i0) goto l37;
            goto l38;
l37:
            XML_Parser__ParserDesc_ParseDocument_Err(3);
l38:
            elementWhitespace = 1;
            i0 = (OOC_INT32)chars;
            i1 = _check_pointer(i0, 67736);
            i2 = cdelta;
            i3 = cpos;
            i4 = OOC_ARRAY_LENGTH(i1, 0);
            i0 = _check_pointer(i0, 67758);
            i5 = OOC_ARRAY_LENGTH(i0, 0);
            i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i5, OOC_UINT32, 67758))*2);
            *(OOC_UINT16*)(i1+(_check_index((i3-i2), i4, OOC_UINT32, 67736))*2) = i0;
            cpos = (i3+1);
            i0=1;
            goto l21_loop;
          default:
            elementWhitespace = 1;
            i0 = _check_pointer(i1, 67867);
            i2 = cdelta;
            i3 = OOC_ARRAY_LENGTH(i0, 0);
            i1 = _check_pointer(i1, 67889);
            i5 = OOC_ARRAY_LENGTH(i1, 0);
            i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i5, OOC_UINT32, 67889))*2);
            *(OOC_UINT16*)(i0+(_check_index((i4-i2), i3, OOC_UINT32, 67867))*2) = i1;
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
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 67986))+44);
          i5 = (OOC_INT32)chars;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 67986))+44);
          i6 = OOC_ARRAY_LENGTH((_check_pointer(i5, 68014)), 0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 67995)))), XML_Builder__BuilderDesc_Characters)),XML_Builder__BuilderDesc_Characters)((XML_Builder__Builder)i3, (void*)(_check_pointer(i5, 68014)), i6, i2, i1, i0);
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68328))+4);
          i2 = (OOC_INT32)entityRef;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 68357))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68328))+4);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 68341)))), XML_DTD__NamespaceDesc_Get)),XML_DTD__NamespaceDesc_Get)((XML_DTD__Namespace)i0, (XML_UnicodeBuffer__CharArray)i3);
          decl = (XML_DTD__Declaration)i0;
          i1 = i0!=(OOC_INT32)0;
          entity = (XML_DTD__Entity)(OOC_INT32)0;
          if (i1) goto l3;
          i1=(OOC_INT32)0;
          goto l4;
l3:
          i1 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68447)))), &_td_XML_DTD__EntityDesc, 68447);
          entity = (XML_DTD__Entity)i1;
          
l4:
          i3 = (OOC_INT32)p;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 68492))+4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 68492))+4);
          i3 = _check_pointer(i3, 68495);
          i3 = (OOC_INT32)&_td_XML_Locator__Position;
          XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i4, 68495)), (RT0__Struct)i3);
          i4 = (OOC_INT32)p;
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 68520))+36);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 68524))+20);
          i6 = (OOC_INT32)chars;
          i5 = i6==i5;
          if (!i5) goto l7;
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 68560))+4);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 68560))+4);
          i4 = _check_pointer(i4, 68563);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 68595))+4);
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 68595))+4);
          i6 = OOC_ARRAY_LENGTH((_check_pointer(i6, 68601)), 0);
          i4 = LongStrings__Length((void*)(_check_pointer(i4, 68601)), i6);
          XML_Parser__ParserDesc_ParseDocument_DecLength((void*)(_check_pointer(i5, 68563)), (RT0__Struct)i3, (i4+2));
l7:
          i4 = i1==(OOC_INT32)0;
          if (i4) goto l32;
          i4 = *(OOC_UINT8*)((_check_pointer(i1, 68846))+17);
          if (i4) goto l30;
          i4 = *(OOC_INT8*)((_check_pointer(i1, 69051))+8);
          i4 = i4==2;
          if (i4) goto l14;
          i4=OOC_FALSE;
          goto l16;
l14:
          i4 = (OOC_INT32)p;
          i4 = *(OOC_UINT8*)((_check_pointer(i4, 69105))+60);
          i4 = !i4;
          
l16:
          if (i4) goto l28;
          i4 = (OOC_INT32)p;
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 69231))+44);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 69231))+44);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 69240)))), XML_Builder__BuilderDesc_StartEntity)),XML_Builder__BuilderDesc_StartEntity)((XML_Builder__Builder)i4, (XML_DTD__Entity)i1);
          XML_Parser__ParserDesc_ParseDocument_PushEntity((XML_DTD__Entity)i1, OOC_TRUE);
          XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(OOC_INT32)&pos, (RT0__Struct)i3);
          i4 = *(OOC_INT8*)((_check_pointer(i1, 69434))+8);
          i4 = i4==2;
          if (i4) goto l20;
          i4=OOC_FALSE;
          goto l22;
l20:
          i4 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<?xml", 6, 1);
          
l22:
          if (!i4) goto l24;
          XML_Parser__ParserDesc_ParseDocument_XMLDecl((XML_DTD__ExternalEntity)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69559)))), &_td_XML_DTD__ExternalEntityDesc, 69559)));
l24:
          XML_Parser__ParserDesc_ParseDocument_content();
          i0 = (OOC_INT32)chars;
          i0 = _check_pointer(i0, 69629);
          i4 = OOC_ARRAY_LENGTH(i0, 0);
          i5 = cpos;
          i0 = *(OOC_UINT16*)(i0+(_check_index(i5, i4, OOC_UINT32, 69629))*2);
          i0 = i0!=(OOC_CHAR16)65535;
          if (!i0) goto l27;
          XML_Parser__ParserDesc_ParseDocument_ErrPos(302, (void*)(OOC_INT32)&pos, (RT0__Struct)i3);
          i0 = (OOC_INT32)p;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69722))+104);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 69829))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 69829))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69722))+104);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 69835)), 0);
          i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i5, 69835)), i2);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 69733)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i2);
l27:
          XML_Parser__ParserDesc_ParseDocument_PopEntity();
          i0 = (OOC_INT32)p;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69901))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69901))+4);
          i0 = _check_pointer(i0, 69904);
          XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i2, 69904)), (RT0__Struct)i3);
          i0 = (OOC_INT32)p;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69919))+44);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69919))+44);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 69928)))), XML_Builder__BuilderDesc_EndEntity)),XML_Builder__BuilderDesc_EndEntity)((XML_Builder__Builder)i0, (XML_DTD__Entity)i1);
          goto l33;
l28:
          i0 = (OOC_INT32)p;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69141))+44);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69141))+44);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 69176))+4);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 69150)))), XML_Builder__BuilderDesc_SkippedEntity)),XML_Builder__BuilderDesc_SkippedEntity)((XML_Builder__Builder)i0, (XML_UnicodeBuffer__CharArray)i2, (XML_DTD__Entity)i1);
          goto l33;
l30:
          XML_Parser__ParserDesc_ParseDocument_Err(213);
          i0 = (OOC_INT32)p;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68914))+104);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 69020))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 69020))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68914))+104);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 69026)), 0);
          i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i3, 69026)), i2);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 68925)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i2);
          goto l33;
l32:
          i0 = (OOC_INT32)p;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68692))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68692))+4);
          i0 = _check_pointer(i0, 68695);
          XML_Parser__ParserDesc_ParseDocument_ErrPos(210, (void*)(_check_pointer(i1, 68695)), (RT0__Struct)i3);
          i0 = (OOC_INT32)p;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68710))+104);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 68816))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 68816))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68710))+104);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 68822)), 0);
          i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i3, 68822)), i2);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 68721)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i2);
l33:
          return;
          ;
        }


l1_loop:
      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 70044);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 70044))*2);
      switch (i0) {
      case (OOC_CHAR16)65535:
        goto l28;
      case (OOC_CHAR16)'<':
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
        i0 = _check_pointer(i0, 70353);
        i1 = cpos;
        i2 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = *(OOC_UINT16*)(i0+(_check_index((i1+1), i2, OOC_UINT32, 70353))*2);
        i0 = i0!=(OOC_CHAR16)'/';
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
      case (OOC_CHAR16)'&':
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71115))+76);
          i2 = *(OOC_INT32*)((_check_pointer(i0, 71093))+80);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 71125)), 0);
          i1 = i2==i1;
          if (!i1) goto l11;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71164))+76);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 71174)), 0);
          i1 = (OOC_INT32)RT0__NewObject(_td_XML_Parser__NameList.baseTypes[0], (i1+8));
          newList = (XML_Parser__NameList)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71222))+76);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 71232)), 0);
          i2 = i2-1;
          i3 = 0<=i2;
          i = 0;
          if (!i3) goto l10;
          i3=0;
l5_loop:
          i4 = _check_pointer(i1, 71259);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71267))+76);
          i6 = _check_pointer(i6, 71277);
          i7 = OOC_ARRAY_LENGTH(i6, 0);
          i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 71277))*4);
          *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 71259))*4) = i6;
          i3 = i3+1;
          i4 = i3<=i2;
          i = i3;
          if (i4) goto l5_loop;
l10:
          *(OOC_INT32*)((_check_pointer(i0, 71307))+76) = i1;
l11:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71351))+76);
          i1 = _check_pointer(i1, 71361);
          i2 = *(OOC_INT32*)((_check_pointer(i0, 71363))+80);
          i3 = OOC_ARRAY_LENGTH(i1, 0);
          i4 = (OOC_INT32)name;
          *(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 71361))*4) = i4;
          i1 = *(OOC_INT32*)((_check_pointer(i0, 71401))+80);
          *(OOC_INT32*)((_check_pointer(i0, 71401))+80) = (i1+1);
          return;
          ;
        }

        
        OOC_CHAR8 XML_Parser__ParserDesc_ParseDocument_element_AttributeNameUsed(XML_UnicodeBuffer__CharArray name) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_INT32 i;

          i0 = (OOC_INT32)p;
          i1 = *(OOC_INT32*)((_check_pointer(i0, 71567))+80);
          i1 = i1-1;
          i2 = 0<=i1;
          i = 0;
          if (!i2) goto l11;
          i2 = (OOC_INT32)name;
          i3=0;
l3_loop:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71609))+76);
          i4 = _check_pointer(i4, 71619);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 71619))*4);
          i4 = (
          _cmp16((const void*)(_check_pointer(i2, 71604)),(const void*)(_check_pointer(i4, 71622))))==0;
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
              i1 = *(OOC_INT32*)((_check_pointer(i0, 72030))+80);
              i1 = 0!=i1;
              if (!i1) goto l11;
              i1 = (OOC_INT32)name;
              i2=0;
l3_loop:
              i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 72065))+76);
              i3 = _check_pointer(i3, 72075);
              i4 = OOC_ARRAY_LENGTH(i3, 0);
              i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 72075))*4);
              i3 = (
              _cmp16((const void*)(_check_pointer(i3, 72078)),(const void*)(_check_pointer(i1, 72086))))==0;
              if (!i3) goto l6;
              return OOC_TRUE;
l6:
              i2 = i2+1;
              i = i2;
              i3 = *(OOC_INT32*)((_check_pointer(i0, 72030))+80);
              i3 = i2!=i3;
              if (i3) goto l3_loop;
l11:
              return OOC_FALSE;
              ;
            }


          i0 = (OOC_INT32)elemDecl;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 72268))+20);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 72283));
          i1 = i0!=(OOC_INT32)0;
          decl = (XML_DTD__Declaration)i0;
          if (!i1) goto l22;
          i1 = (OOC_INT32)&_td_XML_Locator__Position;
          
l3_loop:
          i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 72356)))), &_td_XML_DTD__AttrDeclDesc, 72356);
          attrDecl = (XML_DTD__AttrDecl)i0;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 72407))+4);
          i0 = XML_Parser__ParserDesc_ParseDocument_element_AddDefaultAttributes_AttributeDefined((XML_UnicodeBuffer__CharArray)i0);
          i0 = !i0;
          i2 = (OOC_INT32)decl;
          if (!i0) goto l17;
          i0 = (OOC_INT32)attrDecl;
          i3 = *(OOC_INT8*)((_check_pointer(i0, 72444))+20);
          i3 = i3>=2;
          if (i3) goto l15;
          i3 = (OOC_INT32)p;
          i4 = *(OOC_UINT8*)((_check_pointer(i3, 72677))+62);
          if (i4) goto l10;
          i4=OOC_FALSE;
          goto l12;
l10:
          i4 = *(OOC_INT8*)((_check_pointer(i0, 72719))+20);
          i4 = i4==0;
          
l12:
          if (!i4) goto l17;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 72800))+4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 72800))+4);
          i3 = _check_pointer(i3, 72803);
          XML_Parser__ParserDesc_ParseDocument_ErrPosNF(214, (void*)(_check_pointer(i4, 72803)), (RT0__Struct)i1);
          i3 = (OOC_INT32)p;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 72822))+104);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 72888))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 72888))+4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 72822))+104);
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 72894)), 0);
          i0 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i5, 72894)), i0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 72833)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i3, "name", 5, (Msg__LStringPtr)i0);
          goto l17;
l15:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 72509))+24);
          XML_Parser__ParserDesc_ParseDocument_Expand((XML_DTD__AttValue)i3);
          i3 = (OOC_INT32)p;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 72541))+44);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 72541))+44);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 72572))+4);
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 72635))+24);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 72550)))), XML_Builder__BuilderDesc_Attribute)),XML_Builder__BuilderDesc_Attribute)((XML_Builder__Builder)i3, (XML_DTD__NamespaceDeclaration)(OOC_INT32)0, (XML_UnicodeBuffer__CharArray)i5, (XML_DTD__AttrDecl)i0, (XML_DTD__AttValue)i6, OOC_FALSE);
l17:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 72951));
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 73132))+104);
          i2 = (OOC_INT32)startName;
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 73199)), 0);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 73132))+104);
          i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 73199)), i3);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 73143)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i2);
l4:
          return;
          ;
        }


      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 73266);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 73266))*2);
      i0 = i0==(OOC_CHAR16)'<';
      if (i0) goto l3;
      XML_Parser__ParserDesc_ParseDocument_Err(208);
      goto l51;
l3:
      XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'<');
      i0 = (OOC_INT32)p;
      *(OOC_INT32*)((_check_pointer(i0, 73319))+80) = 0;
      emptyElementTag = OOC_FALSE;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 73397))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 73397))+4);
      i0 = _check_pointer(i0, 73400);
      i0 = (OOC_INT32)&_td_XML_Locator__Position;
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i1, 73400)), (RT0__Struct)i0);
      i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_FALSE);
      startName = (XML_UnicodeBuffer__CharArray)i1;
      i2 = (OOC_INT32)dtd;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 73458))+12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 73458))+12);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 73476)))), XML_DTD__NamespaceDesc_Get)),XML_DTD__NamespaceDesc_Get)((XML_DTD__Namespace)i2, (XML_UnicodeBuffer__CharArray)i1);
      decl = (XML_DTD__Declaration)i2;
      i2 = (OOC_INT32)p;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 73504))+44);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 73504))+44);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 73513)))), XML_Builder__BuilderDesc_StartElement)),XML_Builder__BuilderDesc_StartElement)((XML_Builder__Builder)i2, (XML_DTD__NamespaceDeclaration)(OOC_INT32)0, (XML_UnicodeBuffer__CharArray)i1);
l4_loop:
      i1 = (OOC_INT32)chars;
      i2 = _check_pointer(i1, 73593);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = cpos;
      i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 73593))*2);
      i2 = i2==(OOC_CHAR16)65535;
      if (i2) goto l34;
      i2 = _check_pointer(i1, 73664);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 73664))*2);
      i2 = i2!=(OOC_CHAR16)'>';
      if (i2) goto l9;
      i1=OOC_FALSE;
      goto l11;
l9:
      i1 = _check_pointer(i1, 73686);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 73686))*2);
      i1 = i1!=(OOC_CHAR16)'/';
      
l11:
      if (!i1) goto l14;
      XML_Parser__ParserDesc_ParseDocument_S();
l14:
      i1 = (OOC_INT32)chars;
      i2 = _check_pointer(i1, 73753);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = cpos;
      i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 73753))*2);
      i2 = i2==(OOC_CHAR16)'/';
      if (i2) goto l32;
      i1 = _check_pointer(i1, 73877);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 73877))*2);
      i1 = i1==(OOC_CHAR16)'>';
      if (i1) goto l34;
l20:
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 73965))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 73965))+4);
      i1 = _check_pointer(i1, 73968);
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i2, 73968)), (RT0__Struct)i0);
      i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_FALSE);
      attrName = (XML_UnicodeBuffer__CharArray)i1;
      i1 = XML_Parser__ParserDesc_ParseDocument_element_AttributeNameUsed((XML_UnicodeBuffer__CharArray)i1);
      i2 = (OOC_INT32)attrName;
      if (!i1) goto l23;
      i1 = (OOC_INT32)p;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74094))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74094))+4);
      i1 = _check_pointer(i1, 74097);
      XML_Parser__ParserDesc_ParseDocument_ErrPos(212, (void*)(_check_pointer(i3, 74097)), (RT0__Struct)i0);
      i1 = (OOC_INT32)p;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74114))+104);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74114))+104);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 74180)), 0);
      i4 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 74180)), i4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 74125)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i1, "name", 5, (Msg__LStringPtr)i4);
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74332)))), &_td_XML_DTD__ElementDeclDesc, 74332)), 74344))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74332)))), &_td_XML_DTD__ElementDeclDesc, 74332)), 74344))+20);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 74359)))), XML_DTD__NamespaceDesc_Get)),XML_DTD__NamespaceDesc_Get)((XML_DTD__Namespace)i1, (XML_UnicodeBuffer__CharArray)i3);
      decl0 = (XML_DTD__Declaration)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l29;
      i1=(OOC_INT32)0;
      goto l31;
l29:
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74447)))), &_td_XML_DTD__AttrDeclDesc, 74447);
      attrDecl = (XML_DTD__AttrDecl)i1;
      
l31:
      i2 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_AttValue(OOC_TRUE);
      attrValue = (XML_DTD__AttValue)i2;
      XML_Parser__ParserDesc_ParseDocument_Expand((XML_DTD__AttValue)i2);
      i4 = (OOC_INT32)p;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 74569))+44);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 74569))+44);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 74578)))), XML_Builder__BuilderDesc_Attribute)),XML_Builder__BuilderDesc_Attribute)((XML_Builder__Builder)i4, (XML_DTD__NamespaceDeclaration)(OOC_INT32)0, (XML_UnicodeBuffer__CharArray)i3, (XML_DTD__AttrDecl)i1, (XML_DTD__AttValue)i2, OOC_TRUE);
      
      goto l4_loop;
l32:
      XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'/');
      emptyElementTag = OOC_TRUE;
l34:
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74694))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74694))+4);
      i1 = _check_pointer(i1, 74697);
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i2, 74697)), (RT0__Struct)i0);
      i1 = (OOC_INT32)decl;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l37;
      XML_Parser__ParserDesc_ParseDocument_element_AddDefaultAttributes((XML_DTD__ElementDecl)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74771)))), &_td_XML_DTD__ElementDeclDesc, 74771)));
l37:
      XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'>');
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74832))+44);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74832))+44);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 74841)))), XML_Builder__BuilderDesc_AttributesDone)),XML_Builder__BuilderDesc_AttributesDone)((XML_Builder__Builder)i1);
      XML_Parser__ParserDesc_ParseDocument_DiscardPreviousInput();
      i1 = emptyElementTag;
      if (i1) goto l49;
      XML_Parser__ParserDesc_ParseDocument_content();
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(OOC_INT32)&pos, (RT0__Struct)i0);
      i1 = (OOC_INT32)chars;
      i1 = _check_pointer(i1, 75130);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 75130))*2);
      i1 = i1!=(OOC_CHAR16)'<';
      if (!i1) goto l42;
      XML_Parser__ParserDesc_ParseDocument_element_ErrEndTag();
l42:
      XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'<');
      i1 = (OOC_INT32)chars;
      i1 = _check_pointer(i1, 75210);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 75210))*2);
      i1 = i1!=(OOC_CHAR16)'/';
      if (!i1) goto l45;
      XML_Parser__ParserDesc_ParseDocument_element_ErrEndTag();
l45:
      XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'/');
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 75297))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 75297))+4);
      i1 = _check_pointer(i1, 75300);
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i2, 75300)), (RT0__Struct)i0);
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_FALSE);
      endName = (XML_UnicodeBuffer__CharArray)i0;
      i1 = (OOC_INT32)startName;
      i0 = (
      _cmp16((const void*)(_check_pointer(i0, 75360)),(const void*)(_check_pointer(i1, 75373))))!=0;
      if (!i0) goto l48;
      XML_Parser__ParserDesc_ParseDocument_element_ErrEndTag();
l48:
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 75407))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 75407))+44);
      i2 = (OOC_INT32)startName;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75416)))), XML_Builder__BuilderDesc_EndElement)),XML_Builder__BuilderDesc_EndElement)((XML_Builder__Builder)i0, (XML_DTD__NamespaceDeclaration)(OOC_INT32)0, (XML_UnicodeBuffer__CharArray)i2);
      XML_Parser__ParserDesc_ParseDocument_OptS(OOC_TRUE);
      XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'>');
      goto l51;
l49:
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74976))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74976))+4);
      i1 = _check_pointer(i1, 74979);
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i2, 74979)), (RT0__Struct)i0);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 74994))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 74994))+44);
      i2 = (OOC_INT32)startName;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75003)))), XML_Builder__BuilderDesc_EndElement)),XML_Builder__BuilderDesc_EndElement)((XML_Builder__Builder)i0, (XML_DTD__NamespaceDeclaration)(OOC_INT32)0, (XML_UnicodeBuffer__CharArray)i2);
l51:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_MiscRep() {
      register OOC_INT32 i0,i1,i2;

l1_loop:
      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 75699);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 75699))*2);
      switch (i0) {
      case (OOC_CHAR16)65534:
        XML_Parser__ParserDesc_ParseDocument_NextBlock();
        goto l1_loop;
      case (OOC_CHAR16)'<':
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
      case (OOC_CHAR16)0 ... (OOC_CHAR16)' ':
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
      i0 = _check_pointer(i0, 77010);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 77010))*2);
      i0 = i0==(OOC_CHAR16)39;
      
      goto l16;
l14:
      i0=OOC_TRUE;
l16:
      if (i0) goto l18;
      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 77033);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 77033))*2);
      i0 = i0==(OOC_CHAR16)'"';
      
      goto l20;
l18:
      i0=OOC_TRUE;
l20:
      if (!i0) goto l23;
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_String(2);
      *system = (XML_UnicodeBuffer__CharArray)i0;
l23:
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77138))+32);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77169))+56);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77138))+32);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 77180))+36);
      i3 = (OOC_INT32)*_public;
      i4 = (OOC_INT32)*system;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 77142)))), XML_EntityResolver__ResolverDesc_GetURI)),XML_EntityResolver__ResolverDesc_GetURI)((XML_EntityResolver__Resolver)i0, (XML_UnicodeBuffer__CharArray)i3, (XML_UnicodeBuffer__CharArray)i4, (URI__URI)i2, (void*)(OOC_INT32)baseURI, (void*)(OOC_INT32)&res);
      i0 = (OOC_INT32)res;
      i0 = i0!=(OOC_INT32)0;
      if (!i0) goto l32;
      XML_Parser__ParserDesc_ParseDocument_Err(117);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77274))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77274))+104);
      i2 = (OOC_INT32)res;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 77285)))), Msg__MsgDesc_SetMsgAttrib)),Msg__MsgDesc_SetMsgAttrib)((Msg__Msg)i0, "uri_error", 10, (Msg__Msg)i2);
      goto l32;
l28:
      i0 = cpos;
      cpos = (i0+6);
      XML_Parser__ParserDesc_ParseDocument_S();
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_String(1);
      *system = (XML_UnicodeBuffer__CharArray)i0;
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 76527))+32);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 76555))+56);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 76527))+32);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 76567))+36);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 76531)))), XML_EntityResolver__ResolverDesc_GetURI)),XML_EntityResolver__ResolverDesc_GetURI)((XML_EntityResolver__Resolver)i1, (XML_UnicodeBuffer__CharArray)(OOC_INT32)0, (XML_UnicodeBuffer__CharArray)i0, (URI__URI)i3, (void*)(OOC_INT32)baseURI, (void*)(OOC_INT32)&res);
      i0 = (OOC_INT32)res;
      i0 = i0!=(OOC_INT32)0;
      if (!i0) goto l32;
      XML_Parser__ParserDesc_ParseDocument_Err(117);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 76662))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 76662))+104);
      i2 = (OOC_INT32)res;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76673)))), Msg__MsgDesc_SetMsgAttrib)),Msg__MsgDesc_SetMsgAttrib)((Msg__Msg)i0, "uri_error", 10, (Msg__Msg)i2);
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
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78008)))), XML_DTD__BuilderDesc_NewNameCP)),XML_DTD__BuilderDesc_NewNameCP)((XML_DTD__Builder)i0, 0, (XML_UnicodeBuffer__CharArray)i1);
                  i1 = cpos;
                  first = (XML_DTD__CP)i0;
                  cpos = (i1+7);
                  last = (XML_DTD__CP)i0;
                  XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
                  hasAlternative = OOC_FALSE;
                  i1 = (OOC_INT32)chars;
                  i1 = _check_pointer(i1, 78239);
                  i2 = OOC_ARRAY_LENGTH(i1, 0);
                  i3 = cpos;
                  i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 78239))*2);
                  i1 = i1==(OOC_CHAR16)'|';
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
                  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 78385)))), XML_DTD__BuilderDesc_NewNameCP)),XML_DTD__BuilderDesc_NewNameCP)((XML_DTD__Builder)i2, 0, (XML_UnicodeBuffer__CharArray)i3);
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78371)))), XML_DTD__CPDesc_SetNext)),XML_DTD__CPDesc_SetNext)((XML_DTD__CP)i1, (XML_DTD__CP)i2);
                  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 78452))+4);
                  last = (XML_DTD__CP)i1;
                  XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
                  i2 = (OOC_INT32)chars;
                  i2 = _check_pointer(i2, 78239);
                  i3 = OOC_ARRAY_LENGTH(i2, 0);
                  i4 = cpos;
                  i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 78239))*2);
                  i2 = i2==(OOC_CHAR16)'|';
                  if (i2) goto l4_loop;
l8:
                  i1=OOC_TRUE;
l9:
                  i2 = (OOC_INT32)currentEntity;
                  XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i2);
                  XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)')');
                  if (i1) goto l12;
                  i1 = (OOC_INT32)chars;
                  i1 = _check_pointer(i1, 78620);
                  i2 = OOC_ARRAY_LENGTH(i1, 0);
                  i3 = cpos;
                  i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 78620))*2);
                  i1 = i1==(OOC_CHAR16)'*';
                  
                  goto l14;
l12:
                  i1=OOC_TRUE;
l14:
                  if (i1) goto l16;
                  i1 = (OOC_INT32)dtd;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78772)))), XML_DTD__BuilderDesc_NewChoiceCP)),XML_DTD__BuilderDesc_NewChoiceCP)((XML_DTD__Builder)i1, 0, (XML_DTD__CP)i0);
                  return (XML_DTD__CP)i0;
                  goto l17;
l16:
                  XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'*');
                  i1 = (OOC_INT32)dtd;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78694)))), XML_DTD__BuilderDesc_NewChoiceCP)),XML_DTD__BuilderDesc_NewChoiceCP)((XML_DTD__Builder)i1, 2, (XML_DTD__CP)i0);
                  return (XML_DTD__CP)i0;
l17:
                  _failed_function(77789); return 0;
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
                      i0 = _check_pointer(i0, 79143);
                      i1 = OOC_ARRAY_LENGTH(i0, 0);
                      i2 = cpos;
                      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 79143))*2);
                      switch (i0) {
                      case (OOC_CHAR16)'*':
                        XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'*');
                        return 2;
                        goto l6;
                      case (OOC_CHAR16)'+':
                        XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'+');
                        return 3;
                        goto l6;
                      case (OOC_CHAR16)'?':
                        XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'?');
                        return 1;
                        goto l6;
                      default:
                        return 0;
                        goto l6;
                      }
l6:
                      _failed_function(79026); return 0;
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
                          i1 = _check_pointer(i0, 79859);
                          i2 = OOC_ARRAY_LENGTH(i1, 0);
                          i3 = cpos;
                          i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 79859))*2);
                          i1 = i1==(OOC_CHAR16)'(';
                          if (i1) goto l7;
                          i0 = _check_pointer(i0, 80087);
                          i1 = OOC_ARRAY_LENGTH(i0, 0);
                          i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i1, OOC_UINT32, 80087))*2);
                          i0 = XML_Parser__IsNameChar0(i0);
                          if (i0) goto l5;
                          XML_Parser__ParserDesc_ParseDocument_Err(110);
                          i0 = (OOC_INT32)dtd;
                          i1 = (OOC_INT32)XML_Parser__noName;
                          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80250)))), XML_DTD__BuilderDesc_NewNameCP)),XML_DTD__BuilderDesc_NewNameCP)((XML_DTD__Builder)i0, 0, (XML_UnicodeBuffer__CharArray)i1);
                          cp = (XML_DTD__CP)i0;
                          
                          goto l8;
l5:
                          i0 = (OOC_INT32)dtd;
                          i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_FALSE);
                          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80127)))), XML_DTD__BuilderDesc_NewNameCP)),XML_DTD__BuilderDesc_NewNameCP)((XML_DTD__Builder)i0, 0, (XML_UnicodeBuffer__CharArray)i1);
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
                          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80322)))), XML_DTD__CPDesc_SetMode)),XML_DTD__CPDesc_SetMode)((XML_DTD__CP)i0, i1);
                          return (XML_DTD__CP)i0;
                          ;
                        }


                      _class = (OOC_CHAR16)0;
                      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_choiceseq_cp();
                      first = (XML_DTD__CP)i0;
                      XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
                      last = (XML_DTD__CP)i0;
                      
l1_loop:
                      i1 = (OOC_INT32)chars;
                      i2 = _check_pointer(i1, 80573);
                      i3 = OOC_ARRAY_LENGTH(i2, 0);
                      i4 = cpos;
                      i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 80573))*2);
                      switch (i2) {
                      case (OOC_CHAR16)65534:
                        XML_Parser__ParserDesc_ParseDocument_NextBlock();
                        
                        goto l1_loop;
                      case (OOC_CHAR16)',':
                      case (OOC_CHAR16)'|':
                        i2 = _class;
                        i2 = i2==(OOC_CHAR16)0;
                        if (i2) goto l6;
                        goto l7;
l6:
                        i1 = _check_pointer(i1, 80748);
                        i2 = OOC_ARRAY_LENGTH(i1, 0);
                        i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 80748))*2);
                        _class = i1;
l7:
                        i1 = _class;
                        XML_Parser__ParserDesc_ParseDocument_CheckChar(i1);
                        XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
                        i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_choiceseq_cp();
                        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80877)))), XML_DTD__CPDesc_SetNext)),XML_DTD__CPDesc_SetNext)((XML_DTD__CP)i0, (XML_DTD__CP)i1);
                        i0 = (OOC_INT32)last;
                        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 80925))+4);
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
                      i0 = i0==(OOC_CHAR16)',';
                      if (i0) goto l13;
                      i0 = (OOC_INT32)dtd;
                      i1 = (OOC_INT32)first;
                      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81336)))), XML_DTD__BuilderDesc_NewChoiceCP)),XML_DTD__BuilderDesc_NewChoiceCP)((XML_DTD__Builder)i0, 0, (XML_DTD__CP)i1);
                      return (XML_DTD__CP)i0;
                      goto l14;
l13:
                      i0 = (OOC_INT32)dtd;
                      i1 = (OOC_INT32)first;
                      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81260)))), XML_DTD__BuilderDesc_NewSeqCP)),XML_DTD__BuilderDesc_NewSeqCP)((XML_DTD__Builder)i0, 0, (XML_DTD__CP)i1);
                      return (XML_DTD__CP)i0;
l14:
                      _failed_function(79451); return 0;
                      ;
                    }


                  i0 = (OOC_INT32)currentEntity;
                  i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_choiceseq((XML_DTD__Entity)i0);
                  cp = (XML_DTD__CP)i0;
                  i1 = XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_Quantifier();
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81491)))), XML_DTD__CPDesc_SetMode)),XML_DTD__CPDesc_SetMode)((XML_DTD__CP)i0, i1);
                  i0 = (OOC_INT32)cp;
                  return (XML_DTD__CP)i0;
                  ;
                }


              i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("EMPTY", 6, 1);
              if (i0) goto l15;
              i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("ANY", 4, 1);
              if (i0) goto l13;
              i0 = (OOC_INT32)chars;
              i0 = _check_pointer(i0, 81837);
              i1 = OOC_ARRAY_LENGTH(i0, 0);
              i2 = cpos;
              i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 81837))*2);
              i0 = i0==(OOC_CHAR16)'(';
              if (i0) goto l7;
              XML_Parser__ParserDesc_ParseDocument_Err(106);
              i0 = (OOC_INT32)dtd;
              i1 = (OOC_INT32)XML_Parser__noName;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82216)))), XML_DTD__BuilderDesc_NewNameCP)),XML_DTD__BuilderDesc_NewNameCP)((XML_DTD__Builder)i0, 0, (XML_UnicodeBuffer__CharArray)i1);
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
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81776)))), XML_DTD__BuilderDesc_NewNameCP)),XML_DTD__BuilderDesc_NewNameCP)((XML_DTD__Builder)i0, 0, (XML_UnicodeBuffer__CharArray)i1);
              return (XML_DTD__CP)i0;
              goto l16;
l15:
              i0 = (OOC_INT32)dtd;
              i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_FALSE);
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81657)))), XML_DTD__BuilderDesc_NewNameCP)),XML_DTD__BuilderDesc_NewNameCP)((XML_DTD__Builder)i0, 0, (XML_UnicodeBuffer__CharArray)i1);
              return (XML_DTD__CP)i0;
l16:
              _failed_function(77688); return 0;
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
          i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 82554)))), XML_DTD__EntityDesc_IsDocumentEntity)),XML_DTD__EntityDesc_IsDocumentEntity)((XML_DTD__Entity)i2);
          i4 = (OOC_INT32)elementName;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82505)))), XML_DTD__BuilderDesc_NewElementDecl)),XML_DTD__BuilderDesc_NewElementDecl)((XML_DTD__Builder)i1, (XML_UnicodeBuffer__CharArray)i4, (XML_DTD__CP)i0, (!i3));
          elementDecl = (XML_DTD__ElementDecl)i0;
          i1 = (OOC_INT32)dtd;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 82592))+12);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 82592))+12);
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 82610)))), XML_DTD__NamespaceDesc_Add)),XML_DTD__NamespaceDesc_Add)((XML_DTD__Namespace)i1, (XML_DTD__Declaration)i0);
          i0 = !i0;
          if (!i0) goto l3;
          i0 = (OOC_INT32)dtd;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82656))+12);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82656))+12);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82674)))), XML_DTD__NamespaceDesc_Get)),XML_DTD__NamespaceDesc_Get)((XML_DTD__Namespace)i0, (XML_UnicodeBuffer__CharArray)i4);
          decl = (XML_DTD__Declaration)i0;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82714)))), &_td_XML_DTD__ElementDeclDesc, 82714)), 82726)))), XML_DTD__ElementDeclDesc_SetMultipleDecl)),XML_DTD__ElementDeclDesc_SetMultipleDecl)((XML_DTD__ElementDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82714)))), &_td_XML_DTD__ElementDeclDesc, 82714)));
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
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83464)))), XML_DTD__BuilderDesc_NewEnumeration)),XML_DTD__BuilderDesc_NewEnumeration)((XML_DTD__Builder)i0);
                  *_enum = (XML_DTD__Enumeration)i0;
                  XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'(');
                  i0 = attrType;
l1_loop:
                  XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
                  switch (i0) {
                  case 7:
                    i1 = (OOC_INT32)*_enum;
                    i2 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_TRUE);
                    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 83643)))), XML_DTD__EnumerationDesc_Append)),XML_DTD__EnumerationDesc_Append)((XML_DTD__Enumeration)i1, (XML_UnicodeBuffer__CharArray)i2);
                    goto l6;
                  case 8:
                    i1 = (OOC_INT32)*_enum;
                    i2 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Nmtoken(OOC_FALSE, OOC_FALSE);
                    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 83722)))), XML_DTD__EnumerationDesc_Append)),XML_DTD__EnumerationDesc_Append)((XML_DTD__Enumeration)i1, (XML_UnicodeBuffer__CharArray)i2);
                    goto l6;
                  default:
                    _failed_case(i0, 83572);
                    goto l6;
                  }
l6:
                  XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
                  i1 = (OOC_INT32)chars;
                  i1 = _check_pointer(i1, 83826);
                  i2 = OOC_ARRAY_LENGTH(i1, 0);
                  i3 = cpos;
                  i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 83826))*2);
                  i1 = i1==(OOC_CHAR16)'|';
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
              i0 = _check_pointer(i0, 85164);
              i1 = OOC_ARRAY_LENGTH(i0, 0);
              i2 = cpos;
              i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 85164))*2);
              i0 = i0==(OOC_CHAR16)'(';
              
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
              i0 = _check_pointer(i0, 85204);
              i1 = OOC_ARRAY_LENGTH(i0, 0);
              i2 = cpos;
              i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 85204))*2);
              i0 = i0==(OOC_CHAR16)'(';
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
          i0 = _check_pointer(i0, 86611);
          i1 = OOC_ARRAY_LENGTH(i0, 0);
          i2 = cpos;
          i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 86611))*2);
          i0 = i0!=(OOC_CHAR16)'>';
          if (!i0) goto l4;
          XML_Parser__ParserDesc_ParseDocument_S();
l4:
          i0 = (OOC_INT32)chars;
          i1 = _check_pointer(i0, 86678);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i3 = cpos;
          i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 86678))*2);
          i1 = i1==(OOC_CHAR16)'>';
          if (i1) goto l7;
          i0 = _check_pointer(i0, 86701);
          i1 = OOC_ARRAY_LENGTH(i0, 0);
          i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i1, OOC_UINT32, 86701))*2);
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
          i0 = *(OOC_UINT8*)((_check_pointer(i0, 86946))+63);
          if (!i0) goto l1_loop;
          i0 = (OOC_INT32)dtd;
          i1 = (OOC_INT32)currentEntity;
          i2 = (OOC_INT32)defaultValue;
          i3 = _default;
          i4 = (OOC_INT32)attrEnumeration;
          i5 = attrType;
          i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 87130)))), XML_DTD__EntityDesc_IsDocumentEntity)),XML_DTD__EntityDesc_IsDocumentEntity)((XML_DTD__Entity)i1);
          i6 = (OOC_INT32)attrName;
          i7 = (OOC_INT32)elementName;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 87000)))), XML_DTD__BuilderDesc_NewAttrDecl)),XML_DTD__BuilderDesc_NewAttrDecl)((XML_DTD__Builder)i0, (XML_UnicodeBuffer__CharArray)i7, (XML_UnicodeBuffer__CharArray)i6, i5, (XML_DTD__Enumeration)i4, i3, (XML_DTD__AttValue)i2, (!i1));
          attrDecl = (XML_DTD__AttrDecl)i0;
          i1 = (OOC_INT32)dtd;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 87168)))), XML_DTD__BuilderDesc_AddAttribute)),XML_DTD__BuilderDesc_AddAttribute)((XML_DTD__Builder)i1, (XML_DTD__AttrDecl)i0);
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
                  i3 = _check_pointer(i0, 88081);
                  i4 = start;
                  i5 = OOC_ARRAY_LENGTH(i3, 0);
                  i6 = _check_pointer(i0, 88104);
                  i7 = OOC_ARRAY_LENGTH(i6, 0);
                  i6 = *(OOC_UINT16*)(i6+(_check_index(i4, i7, OOC_UINT32, 88104))*2);
                  *(OOC_UINT16*)(i3+(_check_index((i4-i2), i5, OOC_UINT32, 88081))*2) = i6;
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
              i2 = _check_pointer(i1, 88237);
              i3 = OOC_ARRAY_LENGTH(i2, 0);
              i4 = cpos;
              i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 88237))*2);
              i2 = i2==(OOC_CHAR16)39;
              if (i2) goto l3;
              i1 = _check_pointer(i1, 88260);
              i2 = OOC_ARRAY_LENGTH(i1, 0);
              i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 88260))*2);
              i1 = i1==(OOC_CHAR16)'"';
              
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
              i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 88545)))), XML_DTD__BuilderDesc_NewAttValue)),XML_DTD__BuilderDesc_NewAttValue)((XML_DTD__Builder)i1);
              *(OOC_INT32*)((_check_pointer(i0, 88521))+72) = i1;
              i0 = (OOC_INT32)&_td_XML_Locator__Position;
              XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(OOC_INT32)&pos, (RT0__Struct)i0);
              i1 = (OOC_INT32)p;
              i1 = *(OOC_INT32*)((_check_pointer(i1, 88635))+88);
              startLevel = i1;
              i1 = (OOC_INT32)chars;
              i1 = _check_pointer(i1, 88677);
              i2 = OOC_ARRAY_LENGTH(i1, 0);
              i3 = cpos;
              i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 88677))*2);
              endChar = i1;
              i1 = i3+1;
              cpos = i1;
              cstart = i1;
              cdelta = 0;
l8_loop:
              i1 = (OOC_INT32)chars;
              i2 = _check_pointer(i1, 88791);
              i3 = OOC_ARRAY_LENGTH(i2, 0);
              i4 = cpos;
              i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 88791))*2);
              switch (i2) {
              case (OOC_CHAR16)0 ... (OOC_CHAR16)31:
              case (OOC_CHAR16)65534:
                XML_Parser__ParserDesc_ParseDocument_ControlChar((OOC_CHAR16)10);
                goto l8_loop;
              case (OOC_CHAR16)65535:
                XML_Parser__ParserDesc_ParseDocument_ErrPos(6, (void*)(OOC_INT32)&pos, (RT0__Struct)i0);
                i0 = (OOC_INT32)p;
                i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 88982))+72);
                i2 = (OOC_INT32)dtd;
                i3 = cpos;
                i4 = cdelta;
                i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 88982))+72);
                i5 = (OOC_INT32)chars;
                i6 = cstart;
                i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 89012)))), XML_DTD__BuilderDesc_NewCharacters)),XML_DTD__BuilderDesc_NewCharacters)((XML_DTD__Builder)i2, (XML_UnicodeBuffer__CharArray)i5, i6, (i3-i4), OOC_TRUE);
                OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 88999)))), XML_DTD__AttValueDesc_Append)),XML_DTD__AttValueDesc_Append)((XML_DTD__AttValue)i0, (XML_DTD__Fragment)i2);
                goto l31;
              case (OOC_CHAR16)'%':
                i2 = cdelta;
                i2 = i4-i2;
                i3 = cstart;
                i4 = i3!=i2;
                if (i4) goto l14;
                goto l15;
l14:
                i4 = (OOC_INT32)p;
                i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 89289))+72);
                i6 = (OOC_INT32)dtd;
                i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 89289))+72);
                i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 89319)))), XML_DTD__BuilderDesc_NewCharacters)),XML_DTD__BuilderDesc_NewCharacters)((XML_DTD__Builder)i6, (XML_UnicodeBuffer__CharArray)i1, i3, i2, OOC_TRUE);
                OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 89306)))), XML_DTD__AttValueDesc_Append)),XML_DTD__AttValueDesc_Append)((XML_DTD__AttValue)i4, (XML_DTD__Fragment)i1);
l15:
                XML_Parser__ParserDesc_ParseDocument_PEReference(OOC_FALSE);
                goto l8_loop;
              case (OOC_CHAR16)'&':
                i1 = XML_Parser__ParserDesc_ParseDocument_LookingAt("&#", 3, 0);
                if (!i1) goto l18;
                goto l19;
l18:
                i1 = (OOC_INT32)p;
                i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 89860))+36);
                i1 = *(OOC_INT32*)((_check_pointer(i1, 89864))+24);
                i2 = cpos;
                i1 = i2+i1;
                storedPos = i1;
                i2 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_EntityRef(OOC_FALSE, OOC_TRUE);
                fragment = (XML_DTD__Fragment)i2;
                i2 = (OOC_INT32)p;
                i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 89972))+36);
                i2 = *(OOC_INT32*)((_check_pointer(i2, 89976))+24);
                i3 = cpos;
                XML_Parser__ParserDesc_ParseDocument_markupdecl_EntityDecl_EntityValue_Copy((i1-i2), i3);
                goto l8_loop;
l19:
                XML_Parser__ParserDesc_ParseDocument_CharRef();
                goto l8_loop;
              default:
                i2 = _check_pointer(i1, 90064);
                i3 = OOC_ARRAY_LENGTH(i2, 0);
                i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 90064))*2);
                i3 = endChar;
                i2 = i2==i3;
                if (i2) goto l24;
                i2=OOC_FALSE;
                goto l26;
l24:
                i2 = (OOC_INT32)p;
                i2 = *(OOC_INT32*)((_check_pointer(i2, 90086))+88);
                i5 = startLevel;
                i2 = i2==i5;
                
l26:
                if (i2) goto l29;
                i2 = _check_pointer(i1, 90465);
                i3 = cdelta;
                i5 = OOC_ARRAY_LENGTH(i2, 0);
                i1 = _check_pointer(i1, 90487);
                i6 = OOC_ARRAY_LENGTH(i1, 0);
                i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i6, OOC_UINT32, 90487))*2);
                *(OOC_UINT16*)(i2+(_check_index((i4-i3), i5, OOC_UINT32, 90465))*2) = i1;
                cpos = (i4+1);
                goto l8_loop;
l29:
                i0 = (OOC_INT32)p;
                i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 90268))+72);
                i5 = (OOC_INT32)dtd;
                i6 = cdelta;
                i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 90268))+72);
                i7 = cstart;
                i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 90298)))), XML_DTD__BuilderDesc_NewCharacters)),XML_DTD__BuilderDesc_NewCharacters)((XML_DTD__Builder)i5, (XML_UnicodeBuffer__CharArray)i1, i7, (i4-i6), OOC_TRUE);
                OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 90285)))), XML_DTD__AttValueDesc_Append)),XML_DTD__AttValueDesc_Append)((XML_DTD__AttValue)i0, (XML_DTD__Fragment)i1);
                XML_Parser__ParserDesc_ParseDocument_CheckChar(i3);
                goto l31;
              }
l31:
              i0 = (OOC_INT32)p;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 90584))+72);
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 90584))+72);
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 90601)))), XML_DTD__AttValueDesc_Flatten)),XML_DTD__AttValueDesc_Flatten)((XML_DTD__AttValue)i0, (XML_DTD__AttrDecl)(OOC_INT32)0);
              string = (XML_UnicodeBuffer__CharArray)i0;
              i1 = (OOC_INT32)p;
              *(OOC_INT32*)((_check_pointer(i1, 90631))+72) = (OOC_INT32)0;
              
l32:
              return (XML_UnicodeBuffer__CharArray)i0;
              ;
            }


          i0 = cpos;
          cpos = (i0+8);
          XML_Parser__ParserDesc_ParseDocument_SnoPE();
          i0 = (OOC_INT32)chars;
          i0 = _check_pointer(i0, 90900);
          i1 = OOC_ARRAY_LENGTH(i0, 0);
          i2 = cpos;
          i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 90900))*2);
          i0 = i0==(OOC_CHAR16)'%';
          isPEntity = i0;
          if (!i0) goto l3;
          XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'%');
          XML_Parser__ParserDesc_ParseDocument_S();
l3:
          i1 = (OOC_INT32)p;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 91017))+4);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 91017))+4);
          i1 = _check_pointer(i1, 91020);
          i1 = (OOC_INT32)&_td_XML_Locator__Position;
          XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i2, 91020)), (RT0__Struct)i1);
          i2 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_TRUE);
          name = (XML_UnicodeBuffer__CharArray)i2;
          XML_Parser__ParserDesc_ParseDocument_S();
          i3 = (OOC_INT32)chars;
          i4 = _check_pointer(i3, 91081);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i6 = cpos;
          i4 = *(OOC_UINT16*)(i4+(_check_index(i6, i5, OOC_UINT32, 91081))*2);
          i4 = i4==(OOC_CHAR16)39;
          if (i4) goto l6;
          i3 = _check_pointer(i3, 91104);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = *(OOC_UINT16*)(i3+(_check_index(i6, i4, OOC_UINT32, 91104))*2);
          i3 = i3==(OOC_CHAR16)'"';
          
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
          i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 92427)))), XML_DTD__EntityDesc_IsDocumentEntity)),XML_DTD__EntityDesc_IsDocumentEntity)((XML_DTD__Entity)i4);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 92313)))), XML_DTD__BuilderDesc_NewExternalEntity)),XML_DTD__BuilderDesc_NewExternalEntity)((XML_DTD__Builder)i3, (XML_UnicodeBuffer__CharArray)i2, i0, (XML_UnicodeBuffer__CharArray)i6, (XML_UnicodeBuffer__CharArray)i7, (XML_UnicodeBuffer__CharArray)i1, (URI__URI)i5, (!i4));
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
          i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 91422)))), XML_DTD__BuilderDesc_IsValidEntityDecl)),XML_DTD__BuilderDesc_IsValidEntityDecl)((XML_DTD__Builder)i2, (XML_UnicodeBuffer__CharArray)i4, (XML_UnicodeBuffer__CharArray)i0);
          i2 = !i2;
          
l35:
          if (!i2) goto l37;
          i2 = (OOC_INT32)p;
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 91513))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 91513))+4);
          i2 = _check_pointer(i2, 91516);
          XML_Parser__ParserDesc_ParseDocument_ErrPos(118, (void*)(_check_pointer(i5, 91516)), (RT0__Struct)i1);
l37:
          i1 = (OOC_INT32)dtd;
          i2 = (OOC_INT32)currentEntity;
          i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 91667)))), XML_DTD__EntityDesc_IsDocumentEntity)),XML_DTD__EntityDesc_IsDocumentEntity)((XML_DTD__Entity)i2);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 91557)))), XML_DTD__BuilderDesc_NewInternalEntity)),XML_DTD__BuilderDesc_NewInternalEntity)((XML_DTD__Builder)i1, (XML_UnicodeBuffer__CharArray)i4, i3, (XML_UnicodeBuffer__CharArray)i0, (!i2));
          entity = (XML_DTD__Entity)i0;
          
l38:
          XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
          i1 = (OOC_INT32)currentEntity;
          XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i1);
          XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'>');
          i1 = (OOC_INT32)p;
          i1 = *(OOC_UINT8*)((_check_pointer(i1, 92566))+63);
          if (!i1) goto l48;
          i1 = isPEntity;
          if (i1) goto l46;
          i1 = (OOC_INT32)dtd;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 92692))+4);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 92692))+4);
          i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 92705)))), XML_DTD__NamespaceDesc_Add)),XML_DTD__NamespaceDesc_Add)((XML_DTD__Namespace)i1, (XML_DTD__Declaration)i0);
          if (!i1) goto l48;
          i1 = (OOC_INT32)p;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 92738))+44);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 92738))+44);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 92747)))), XML_Builder__BuilderDesc_EntityDecl)),XML_Builder__BuilderDesc_EntityDecl)((XML_Builder__Builder)i1, (XML_DTD__Entity)i0);
          goto l48;
l46:
          i1 = (OOC_INT32)dtd;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 92645))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 92645))+8);
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 92658)))), XML_DTD__NamespaceDesc_Add)),XML_DTD__NamespaceDesc_Add)((XML_DTD__Namespace)i1, (XML_DTD__Declaration)i0);
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 93130))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 93130))+4);
          i0 = _check_pointer(i0, 93133);
          XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i1, 93133)), (RT0__Struct)((OOC_INT32)&_td_XML_Locator__Position));
          i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_TRUE);
          name = (XML_UnicodeBuffer__CharArray)i0;
          XML_Parser__ParserDesc_ParseDocument_S();
          XML_Parser__ParserDesc_ParseDocument_ExternalID(OOC_TRUE, (void*)(OOC_INT32)&_public, (void*)(OOC_INT32)&system, (void*)(OOC_INT32)&baseURI);
          XML_Parser__ParserDesc_ParseDocument_OptS(OOC_FALSE);
          i1 = (OOC_INT32)p;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 93430))+44);
          i3 = (OOC_INT32)dtd;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 93430))+44);
          i4 = (OOC_INT32)_public;
          i5 = (OOC_INT32)system;
          i6 = (OOC_INT32)baseURI;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 93454)))), XML_DTD__BuilderDesc_NewNotation)),XML_DTD__BuilderDesc_NewNotation)((XML_DTD__Builder)i3, (XML_UnicodeBuffer__CharArray)i0, (XML_UnicodeBuffer__CharArray)i4, (XML_UnicodeBuffer__CharArray)i5, (URI__URI)i6);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 93439)))), XML_Builder__BuilderDesc_Notation)),XML_Builder__BuilderDesc_Notation)((XML_Builder__Builder)i1, (XML_DTD__Notation)i0);
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
          i3 = _check_pointer(i2, 94523);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i5 = cpos;
          i3 = *(OOC_UINT16*)(i3+(_check_index(i5, i4, OOC_UINT32, 94523))*2);
          switch (i3) {
          case (OOC_CHAR16)0 ... (OOC_CHAR16)31:
          case (OOC_CHAR16)65534:
            XML_Parser__ParserDesc_ParseDocument_ControlChar((OOC_CHAR16)10);
            
            goto l1_loop;
          case (OOC_CHAR16)65535:
            XML_Parser__ParserDesc_ParseDocument_ErrPos(19, (void*)(OOC_INT32)&pos, (RT0__Struct)i0);
            goto l23;
          case (OOC_CHAR16)']':
            i2 = XML_Parser__ParserDesc_ParseDocument_LookingAt("]]>", 4, 0);
            if (i2) goto l8;
            i2 = (OOC_INT32)chars;
            i3 = _check_pointer(i2, 95071);
            i4 = cdelta;
            i5 = cpos;
            i6 = OOC_ARRAY_LENGTH(i3, 0);
            i2 = _check_pointer(i2, 95093);
            i7 = OOC_ARRAY_LENGTH(i2, 0);
            i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i7, OOC_UINT32, 95093))*2);
            *(OOC_UINT16*)(i3+(_check_index((i5-i4), i6, OOC_UINT32, 95071))*2) = i2;
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
          case (OOC_CHAR16)'<':
            i2 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<![", 4, 0);
            if (i2) goto l19;
            i2 = (OOC_INT32)chars;
            i3 = _check_pointer(i2, 95323);
            i4 = cdelta;
            i5 = cpos;
            i6 = OOC_ARRAY_LENGTH(i3, 0);
            i2 = _check_pointer(i2, 95345);
            i7 = OOC_ARRAY_LENGTH(i2, 0);
            i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i7, OOC_UINT32, 95345))*2);
            *(OOC_UINT16*)(i3+(_check_index((i5-i4), i6, OOC_UINT32, 95323))*2) = i2;
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
            i3 = _check_pointer(i2, 95412);
            i4 = cdelta;
            i6 = OOC_ARRAY_LENGTH(i3, 0);
            i2 = _check_pointer(i2, 95434);
            i7 = OOC_ARRAY_LENGTH(i2, 0);
            i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i7, OOC_UINT32, 95434))*2);
            *(OOC_UINT16*)(i3+(_check_index((i5-i4), i6, OOC_UINT32, 95412))*2) = i2;
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
      i2 = _check_pointer(i1, 95552);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = cpos;
      i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 95552))*2);
      i2 = i2==(OOC_CHAR16)'<';
      if (i2) goto l12;
      i1 = _check_pointer(i1, 96691);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 96691))*2);
      i1 = i1==(OOC_CHAR16)'%';
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
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 97552))+44);
              oldBuilder = (XML_Builder__Builder)i1;
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 97589));
              i2 = *(OOC_INT32*)(_check_pointer(i2, 97598));
              oldErrCount = i2;
              i0 = *(OOC_UINT8*)((_check_pointer(i0, 97638))+62);
              oldValidating = i0;
              i3 = (OOC_INT32)&_td_XML_Locator__Position;
              XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(OOC_INT32)&pos, (RT0__Struct)i3);
              i4 = (OOC_INT32)p;
              i5 = (OOC_INT32)XML_Builder__New();
              *(OOC_INT32*)((_check_pointer(i4, 97705))+44) = i5;
              i4 = (OOC_INT32)p;
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 97752))+48);
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 97757))+4);
              i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 97770));
              i5 = i4!=(OOC_INT32)0;
              decl = (XML_DTD__Declaration)i4;
              if (!i5) goto l14;
l3_loop:
              i5 = *(OOC_INT8*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 97839)))), &_td_XML_DTD__EntityDesc, 97839)), 97846))+8);
              i5 = i5==0;
              if (!i5) goto l9;
              i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 97932))+4);
              i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 97932))+4);
              i6 = OOC_ARRAY_LENGTH((_check_pointer(i6, 97938)), 0);
              i5 = LongStrings__Length((void*)(_check_pointer(i5, 97938)), i6);
              i5 = i5+2;
              i6 = cpos;
              len = i5;
              cpos = (i6+i5);
              XML_Parser__ParserDesc_ParseDocument_PushEntity((XML_DTD__Entity)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 97996)))), &_td_XML_DTD__EntityDesc, 97996)), OOC_TRUE);
              XML_Parser__ParserDesc_ParseDocument_content();
              i6 = (OOC_INT32)chars;
              i6 = _check_pointer(i6, 98073);
              i7 = OOC_ARRAY_LENGTH(i6, 0);
              i8 = cpos;
              i6 = *(OOC_UINT16*)(i6+(_check_index(i8, i7, OOC_UINT32, 98073))*2);
              i6 = i6!=(OOC_CHAR16)65535;
              if (!i6) goto l8;
              XML_Parser__ParserDesc_ParseDocument_ErrPos(302, (void*)(OOC_INT32)&pos, (RT0__Struct)i3);
              i6 = (OOC_INT32)p;
              i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 98174))+104);
              i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 98283))+4);
              i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 98283))+4);
              i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 98174))+104);
              i9 = OOC_ARRAY_LENGTH((_check_pointer(i9, 98289)), 0);
              i8 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i8, 98289)), i9);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 98185)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i6, "name", 5, (Msg__LStringPtr)i8);
l8:
              XML_Parser__ParserDesc_ParseDocument_PopEntity();
              i6 = cpos;
              cpos = (i6-i5);
l9:
              i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 98410));
              decl = (XML_DTD__Declaration)i4;
              i5 = i4!=(OOC_INT32)0;
              if (i5) goto l3_loop;
l14:
              i3 = (OOC_INT32)p;
              *(OOC_UINT8*)((_check_pointer(i3, 98517))+62) = i0;
              i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 98563));
              i0 = *(OOC_INT32*)(_check_pointer(i0, 98572));
              i0 = i0==i2;
              if (i0) goto l17;
              i0 = (OOC_INT32)XML_Builder__New();
              *(OOC_INT32*)((_check_pointer(i3, 98744))+44) = i0;
              goto l18;
l17:
              *(OOC_INT32*)((_check_pointer(i3, 98638))+44) = i1;
l18:
              return;
              ;
            }


          i0 = (OOC_INT32)p;
          *(OOC_UINT8*)((_check_pointer(i0, 98890))+66) = OOC_TRUE;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 98940))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 98940))+4);
          i0 = _check_pointer(i0, 98943);
          i0 = (OOC_INT32)&_td_XML_Locator__Position;
          XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i1, 98943)), (RT0__Struct)i0);
          i1 = (OOC_INT32)p;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 98956))+44);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 98978))+48);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 98956))+44);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 98965)))), XML_Builder__BuilderDesc_StartDTD)),XML_Builder__BuilderDesc_StartDTD)((XML_Builder__Builder)i1, (XML_DTD__Builder)i3);
          i1 = cpos;
          cpos = (i1+9);
          XML_Parser__ParserDesc_ParseDocument_S();
          i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(OOC_FALSE);
          rootName = (XML_UnicodeBuffer__CharArray)i1;
          i2 = (OOC_INT32)p;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 99135))+48);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 99135))+48);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 99140)))), XML_DTD__BuilderDesc_SetRootName)),XML_DTD__BuilderDesc_SetRootName)((XML_DTD__Builder)i2, (XML_UnicodeBuffer__CharArray)i1);
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
          i1 = _check_pointer(i1, 99583);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i3 = cpos;
          i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 99583))*2);
          i1 = i1==(OOC_CHAR16)'[';
          if (!i1) goto l28;
          XML_Parser__ParserDesc_ParseDocument_CheckChar((OOC_CHAR8)'[');
l11_loop:
          i1 = (OOC_INT32)chars;
          i2 = _check_pointer(i1, 99665);
          i3 = OOC_ARRAY_LENGTH(i2, 0);
          i4 = cpos;
          i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 99665))*2);
          i2 = i2==(OOC_CHAR16)'<';
          if (!i2) goto l13;
          goto l22;
l13:
          i1 = _check_pointer(i1, 99733);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 99733))*2);
          i1 = i1==(OOC_CHAR16)'%';
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
          i1 = *(OOC_INT32*)((_check_pointer(i1, 99927))+88);
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
          i2 = *(OOC_UINT8*)((_check_pointer(i2, 100190))+60);
          if (i2) goto l37;
          XML_Parser__ParserDesc_ParseDocument_SkippedEntity((XML_UnicodeBuffer__CharArray)(OOC_INT32)0);
          goto l45;
l37:
          i2 = (OOC_INT32)dtd;
          i3 = (OOC_INT32)baseURI;
          i4 = (OOC_INT32)system;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 100248)))), XML_DTD__BuilderDesc_NewExternalDTD)),XML_DTD__BuilderDesc_NewExternalDTD)((XML_DTD__Builder)i2, (XML_UnicodeBuffer__CharArray)i1, (XML_UnicodeBuffer__CharArray)i4, (URI__URI)i3);
          externalSubset = (XML_DTD__ExternalEntity)i1;
          XML_Parser__ParserDesc_ParseDocument_PushEntity((XML_DTD__Entity)i1, OOC_TRUE);
          i2 = (OOC_INT32)p;
          *(OOC_UINT8*)((_check_pointer(i2, 100352))+67) = OOC_TRUE;
          i2 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<?xml", 6, 1);
          if (!i2) goto l40;
          XML_Parser__ParserDesc_ParseDocument_XMLDecl((XML_DTD__ExternalEntity)i1);
l40:
          XML_Parser__ParserDesc_ParseDocument_extSubsetDecl();
          i1 = (OOC_INT32)p;
          *(OOC_UINT8*)((_check_pointer(i1, 100535))+67) = OOC_FALSE;
          i1 = (OOC_INT32)chars;
          i1 = _check_pointer(i1, 100585);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i3 = cpos;
          i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 100585))*2);
          i1 = i1!=(OOC_CHAR16)65535;
          if (!i1) goto l43;
          XML_Parser__ParserDesc_ParseDocument_Err(28);
l43:
          XML_Parser__ParserDesc_ParseDocument_PopEntity();
l45:
          i1 = (OOC_INT32)dtd;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 100869))+16);
          decl = (XML_DTD__Declaration)i1;
          i2 = i1!=(OOC_INT32)0;
          if (!i2) goto l56;
l48_loop:
          i2 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 100943)))), &_td_XML_DTD__AttrDeclDesc, 100943);
          attr = (XML_DTD__AttrDecl)i2;
          i3 = *(OOC_INT8*)((_check_pointer(i2, 100972))+20);
          i3 = i3>=2;
          if (!i3) goto l51;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 101031))+24);
          XML_Parser__ParserDesc_ParseDocument_Expand((XML_DTD__AttValue)i2);
l51:
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 101084));
          decl = (XML_DTD__Declaration)i1;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l48_loop;
l56:
          i1 = (OOC_INT32)dtd;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 101124)))), XML_DTD__BuilderDesc_AttachAttributes)),XML_DTD__BuilderDesc_AttachAttributes)((XML_DTD__Builder)i1);
          XML_Parser__ParserDesc_ParseDocument_prolog_doctypedecl_CheckGeneralEntities();
          i1 = (OOC_INT32)p;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101198))+4);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101198))+4);
          i1 = _check_pointer(i1, 101201);
          XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i2, 101201)), (RT0__Struct)i0);
          i0 = (OOC_INT32)p;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101214))+44);
          i2 = *(OOC_UINT8*)((_check_pointer(i0, 101250))+64);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101214))+44);
          i3 = (OOC_INT32)externalSubset;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 101223)))), XML_Builder__BuilderDesc_EndDTD)),XML_Builder__BuilderDesc_EndDTD)((XML_Builder__Builder)i0, (XML_DTD__ExternalEntity)i3, i2);
          i0 = (OOC_INT32)p;
          *(OOC_UINT8*)((_check_pointer(i0, 101294))+66) = OOC_FALSE;
          return;
          ;
        }


      i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<?xml", 6, 1);
      if (!i0) goto l3;
      i0 = (OOC_INT32)p;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101420))+52);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101615))+52);
  XML_Parser__ParserDesc_ParseDocument_SetFileEntity((XML_DTD__ExternalEntity)i0);
  XML_Parser__ParserDesc_ParseDocument_ResetLocator();
  i0 = (OOC_INT32)p;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101666))+36);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101670))+20);
  chars = (XML_UnicodeBuffer__CharArray)i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101691))+48);
  dtd = (XML_DTD__Builder)i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101723))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101723))+4);
  i0 = _check_pointer(i0, 101726);
  i0 = (OOC_INT32)&_td_XML_Locator__Position;
  XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i1, 101726)), (RT0__Struct)i0);
  i1 = (OOC_INT32)p;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101735))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101735))+44);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101759))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 101744)))), XML_Builder__BuilderDesc_SetLocator)),XML_Builder__BuilderDesc_SetLocator)((XML_Builder__Builder)i3, (XML_Locator__Locator)i4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101770))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101800))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101770))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 101779)))), XML_Builder__BuilderDesc_SetErrorListener)),XML_Builder__BuilderDesc_SetErrorListener)((XML_Builder__Builder)i4, (XML_Locator__ErrorListener)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101823))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101823))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101850))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 101832)))), XML_Builder__BuilderDesc_StartDocument)),XML_Builder__BuilderDesc_StartDocument)((XML_Builder__Builder)i3, (XML_DTD__ExternalEntity)i1);
  XML_Parser__ParserDesc_ParseDocument_prolog();
  i1 = (OOC_INT32)p;
  *(OOC_UINT8*)((_check_pointer(i1, 101906))+65) = OOC_TRUE;
  XML_Parser__ParserDesc_ParseDocument_element();
  i1 = (OOC_INT32)p;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 101957))+88);
  i1 = i1!=0;
  if (!i1) goto l3;
  XML_Parser__ParserDesc_ParseDocument_Err(301);
l3:
  i1 = (OOC_INT32)p;
  *(OOC_UINT8*)((_check_pointer(i1, 102022))+65) = OOC_FALSE;
  XML_Parser__ParserDesc_ParseDocument_MiscRep();
  i1 = (OOC_INT32)chars;
  i1 = _check_pointer(i1, 102078);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = cpos;
  i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 102078))*2);
  i1 = i1!=(OOC_CHAR16)65535;
  if (!i1) goto l6;
  XML_Parser__ParserDesc_ParseDocument_Err(2);
l6:
  XML_Parser__ParserDesc_ParseDocument_CheckInvalidChars();
  i1 = (OOC_INT32)p;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 102197))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 102197))+4);
  i1 = _check_pointer(i1, 102200);
  XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i2, 102200)), (RT0__Struct)i0);
  i0 = (OOC_INT32)p;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102209))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102209))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 102225)))), XML_Builder__BuilderDesc_EndDocument)),XML_Builder__BuilderDesc_EndDocument)((XML_Builder__Builder)i0);
  return;
  ;
}

static void XML_Parser__Init(XML_Parser__Parser p, OOC_CHAR8 _new, Channel__Reader reader, URI__URI baseURI, XML_UnicodeCodec__Factory codecFactory, XML_EntityResolver__Resolver entityResolver, XML_Builder__Builder builder) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)p;
  i1 = (OOC_INT32)XML_Error__NewList();
  *(OOC_INT32*)(_check_pointer(i0, 102556)) = i1;
  i1 = _new;
  if (i1) goto l3;
  _assert(OOC_FALSE, 127, 102808);
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 102614))+4) = ((OOC_INT32)RT0__NewObject(_td_XML_Locator__Locator.baseTypes[0]));
  *(OOC_INT32*)((_check_pointer(i0, 102632))+8) = ((OOC_INT32)RT0__NewObject(_td_XML_Parser__ErrorListener.baseTypes[0]));
  *(OOC_INT32*)((_check_pointer(i0, 102662))+76) = ((OOC_INT32)RT0__NewObject(_td_XML_Parser__NameList.baseTypes[0], 8));
  *(OOC_INT32*)((_check_pointer(i0, 102701))+84) = ((OOC_INT32)RT0__NewObject(_td_XML_Parser__PEInfoList.baseTypes[0], 4));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 102781));
  i2 = (OOC_INT32)reader;
  i3 = (OOC_INT32)codecFactory;
  i1 = (OOC_INT32)XML_UnicodeBuffer__NewInput((Channel__Reader)i2, (XML_UnicodeCodec__Factory)i3, (Msg__MsgList)i1);
  *(OOC_INT32*)((_check_pointer(i0, 102733))+36) = i1;
l4:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102901))+4);
  *(OOC_INT32*)((_check_pointer(i1, 102904))+16) = (OOC_INT32)0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102936))+8);
  *(OOC_INT32*)(_check_pointer(i1, 102951)) = i0;
  i1 = (OOC_INT32)XML_DTD__New();
  *(OOC_INT32*)((_check_pointer(i0, 102971))+48) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 103017))+48);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 103017))+48);
  i3 = (OOC_INT32)baseURI;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 103022)))), XML_DTD__BuilderDesc_NewDocumentEntity)),XML_DTD__BuilderDesc_NewDocumentEntity)((XML_DTD__Builder)i2, (URI__URI)i3);
  *(OOC_INT32*)((_check_pointer(i0, 102996))+52) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 103058))+52);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 103094))+36);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 103098))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 103058))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 103074)))), XML_DTD__ExternalEntityDesc_SetCodecFactory)),XML_DTD__ExternalEntityDesc_SetCodecFactory)((XML_DTD__ExternalEntity)i3, (XML_UnicodeCodec__Factory)i2);
  i1 = (OOC_INT32)builder;
  *(OOC_INT32*)((_check_pointer(i0, 103120))+44) = i1;
  i2 = (OOC_INT32)entityResolver;
  *(OOC_INT32*)((_check_pointer(i0, 103147))+40) = i1;
  i1 = i2==(OOC_INT32)0;
  if (!i1) goto l7;
  i1 = (OOC_INT32)XML_EntityResolver__New();
  entityResolver = (XML_EntityResolver__Resolver)i1;
l7:
  i1 = (OOC_INT32)entityResolver;
  *(OOC_INT32*)((_check_pointer(i0, 103270))+32) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 103309))+60) = OOC_TRUE;
  *(OOC_UINT8*)((_check_pointer(i0, 103343))+61) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i0, 103374))+62) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i0, 103402))+63) = OOC_TRUE;
  *(OOC_UINT8*)((_check_pointer(i0, 103438))+64) = OOC_TRUE;
  *(OOC_UINT8*)((_check_pointer(i0, 103475))+65) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i0, 103510))+66) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i0, 103533))+67) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i0, 103567))+68) = OOC_FALSE;
  *(OOC_INT32*)((_check_pointer(i0, 103606))+72) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 103637))+80) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 103662))+88) = 0;
  return;
  ;
}

XML_Parser__Parser XML_Parser__NewChannel(Channel__Channel ch, URI__URI baseURI, XML_UnicodeCodec__Factory codecFactory, XML_EntityResolver__Resolver entityResolver, XML_Builder__Builder builder) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  XML_Parser__Parser p;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_Parser__Parser.baseTypes[0]);
  p = (XML_Parser__Parser)i0;
  i1 = (OOC_INT32)ch;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 105793)))), Channel__ChannelDesc_NewReader)),Channel__ChannelDesc_NewReader)((Channel__Channel)i1);
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
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 106859)))), URI__URIDesc_GetChannel)),URI__URIDesc_GetChannel)((URI__URI)i0, 2, (void*)(OOC_INT32)res);
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
  _failed_function(106412); return 0;
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
      _cmp16((const void*)(OOC_INT32)s,(const void*)((OOC_CHAR16[]){0})))==0;
      if (i0) goto l3;
      i0 = LongStrings__Length((void*)(OOC_INT32)s, s_0d);
      i0 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], (i0+1));
      str = (XML_UnicodeBuffer__CharArray)i0;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 108215)), 0);
      _copy_16((OOC_INT32)s,(_check_pointer(i0, 108215)),i1);
      return (XML_UnicodeBuffer__CharArray)i0;
      goto l4;
l3:
      return (XML_UnicodeBuffer__CharArray)(OOC_INT32)0;
l4:
      _failed_function(108007); return 0;
      ;
    }


  OOC_INITIALIZE_VPAR(_public__ref,_public,OOC_CHAR16 ,(_public_0d*2))
  OOC_INITIALIZE_VPAR(system__ref,system,OOC_CHAR16 ,(system_0d*2))
  i0 = (OOC_INT32)entityResolver;
  i1 = (OOC_INT32)XML_Parser__NewExternalID_ToString((void*)(OOC_INT32)_public, _public_0d);
  i2 = (OOC_INT32)XML_Parser__NewExternalID_ToString((void*)(OOC_INT32)system, system_0d);
  i3 = (OOC_INT32)systemBaseURI;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 108295)))), XML_EntityResolver__ResolverDesc_GetURI)),XML_EntityResolver__ResolverDesc_GetURI)((XML_EntityResolver__Resolver)i0, (XML_UnicodeBuffer__CharArray)i1, (XML_UnicodeBuffer__CharArray)i2, (URI__URI)i3, (void*)(OOC_INT32)&uri, (void*)(OOC_INT32)res);
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
  _failed_function(107497); return 0;
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
    _copy_8("Invalid character in document",(OOC_INT32)t,128);
    goto l63;
  case 2:
    _copy_8("Junk after document element",(OOC_INT32)t,128);
    goto l63;
  case 3:
    _copy_8("String `]]>\047 not allowed in character data",(OOC_INT32)t,128);
    goto l63;
  case 4:
    _copy_8("String `--\047 not allowed in comment",(OOC_INT32)t,128);
    goto l63;
  case 5:
    _copy_8("Comment not closed",(OOC_INT32)t,128);
    goto l63;
  case 6:
    _copy_8("String not closed",(OOC_INT32)t,128);
    goto l63;
  case 7:
    _copy_8("Processing instruction not closed",(OOC_INT32)t,128);
    goto l63;
  case 8:
    _copy_8("CDATA section not closed",(OOC_INT32)t,128);
    goto l63;
  case 9:
    _copy_8("Expected whitespace",(OOC_INT32)t,128);
    goto l63;
  case 10:
    _copy_8("Expected name token",(OOC_INT32)t,128);
    goto l63;
  case 11:
    _copy_8("Expected Nmtoken",(OOC_INT32)t,128);
    goto l63;
  case 12:
    _copy_8("Expected character `${symbol}\047",(OOC_INT32)t,128);
    goto l63;
  case 13:
    _copy_8("Character `<\047 not allowed in attribute value",(OOC_INT32)t,128);
    goto l63;
  case 14:
    _copy_8("Expected digit [0-9]",(OOC_INT32)t,128);
    goto l63;
  case 15:
    _copy_8("Expected digit [0-9a-fA-F]",(OOC_INT32)t,128);
    goto l63;
  case 16:
    _copy_8("Expected string",(OOC_INT32)t,128);
    goto l63;
  case 17:
    _copy_8("Character reference designates illegal character",(OOC_INT32)t,128);
    goto l63;
  case 18:
    _copy_8("Exepcted `]]>\047",(OOC_INT32)t,128);
    goto l63;
  case 19:
    _copy_8("Ignored section not closed",(OOC_INT32)t,128);
    goto l63;
  case 20:
    _copy_8("Invalid character in public ID string",(OOC_INT32)t,128);
    goto l63;
  case 21:
    _copy_8("Invalid character in encoding name",(OOC_INT32)t,128);
    goto l63;
  case 22:
    _copy_8("Invalid character in version number",(OOC_INT32)t,128);
    goto l63;
  case 23:
    _copy_8("Expected non-empty string",(OOC_INT32)t,128);
    goto l63;
  case 24:
    _copy_8("Expected \047yes\047 or \047no\047",(OOC_INT32)t,128);
    goto l63;
  case 25:
    _copy_8("XML declaration must be at beginning of file",(OOC_INT32)t,128);
    goto l63;
  case 26:
    _copy_8("This target name is reserved",(OOC_INT32)t,128);
    goto l63;
  case 27:
    _copy_8("Document `${uri}\047 had ${encodings} character encoding errors",(OOC_INT32)t,128);
    goto l63;
  case 28:
    _copy_8("Junk after external DTD subset",(OOC_INT32)t,128);
    goto l63;
  case 29:
    _copy_8("Unknown character encoding",(OOC_INT32)t,128);
    goto l63;
  case 30:
    _copy_8("This name must not contain a colon character `:\047",(OOC_INT32)t,128);
    goto l63;
  case 31:
    _copy_8("Invalid use of colon in a qualified name",(OOC_INT32)t,128);
    goto l63;
  case 105:
    _copy_8("Expected markup declaration",(OOC_INT32)t,128);
    goto l63;
  case 106:
    _copy_8("Expected content specification: `EMPTY\047, `ANY\047, or `(\047",(OOC_INT32)t,128);
    goto l63;
  case 107:
    _copy_8("Expected attribute type (type name, `NOTATION\047, or enumeration)",(OOC_INT32)t,128);
    goto l63;
  case 108:
    _copy_8("Expected attribute value",(OOC_INT32)t,128);
    goto l63;
  case 109:
    _copy_8("Expected entity value",(OOC_INT32)t,128);
    goto l63;
  case 110:
    _copy_8("Expected content particle (name or `(\047)",(OOC_INT32)t,128);
    goto l63;
  case 111:
    _copy_8("Expected token `version\047",(OOC_INT32)t,128);
    goto l63;
  case 112:
    _copy_8("Expected `PUBLIC\047 or `SYSTEM\047",(OOC_INT32)t,128);
    goto l63;
  case 113:
    _copy_8("Expected `INCLUDE\047 or `IGNORE\047",(OOC_INT32)t,128);
    goto l63;
  case 114:
    _copy_8("Expected `?>\047",(OOC_INT32)t,128);
    goto l63;
  case 115:
    _copy_8("Parameter entity references are restricted to markup declarations in the internal subset of the DTD",(OOC_INT32)t,128);
    goto l63;
  case 116:
    _copy_8("Expected token `encoding\047",(OOC_INT32)t,128);
    goto l63;
  case 117:
    _copy_8("Malformed URI: ${uri_error}",(OOC_INT32)t,128);
    goto l63;
  case 118:
    _copy_8("Invalid redefinition of a predefined internal entity",(OOC_INT32)t,128);
    goto l63;
  case 208:
    _copy_8("Expected element",(OOC_INT32)t,128);
    goto l63;
  case 209:
    _copy_8("Expected end tag </${name}>",(OOC_INT32)t,128);
    goto l63;
  case 210:
    _copy_8("General entity `${name}\047 not defined",(OOC_INT32)t,128);
    goto l63;
  case 211:
    _copy_8("Parameter entity `${name}\047 not defined",(OOC_INT32)t,128);
    goto l63;
  case 212:
    _copy_8("Attribute `${name}\047 is already defined",(OOC_INT32)t,128);
    goto l63;
  case 213:
    _copy_8("General entity `${name}\047 is defined recursively",(OOC_INT32)t,128);
    goto l63;
  case 214:
    _copy_8("Required attribute `${name}\047 is not set",(OOC_INT32)t,128);
    goto l63;
  case 300:
    _copy_8("End tag `${name}\047 comes from a different entity than its start tag",(OOC_INT32)t,128);
    goto l63;
  case 301:
    _copy_8("Unbalanced general entity reference",(OOC_INT32)t,128);
    goto l63;
  case 302:
    _copy_8("Replacement text of general entity `${name}\047 is not valid content",(OOC_INT32)t,128);
    goto l63;
  case 303:
    _copy_8("Could not access URL `${uri}\047: ${channel_error}",(OOC_INT32)t,128);
    goto l63;
  case 304:
    _copy_8("Reference to unparsed entity `${name}\047 not allowed",(OOC_INT32)t,128);
    goto l63;
  case 305:
    _copy_8("Attribute value contains reference to external entity `${name}\047",(OOC_INT32)t,128);
    goto l63;
  case 306:
    _copy_8("Nesting violation: Opening and closing parenthesis not in same entity",(OOC_INT32)t,128);
    goto l63;
  default:
    _copy_8("",(OOC_INT32)t,128);
    goto l63;
  }
l63:
  i1 = (
  _cmp8((const void*)(OOC_INT32)t,(const void*)""))!=0;
  if (!i1) goto l66;
  i1 = (OOC_INT32)XML_Parser__parserContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 113391)))), XML_Error__ContextDesc_SetString)),XML_Error__ContextDesc_SetString)((XML_Error__Context)i1, i0, (void*)(OOC_INT32)t, 128);
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

  _copy_16(((OOC_CHAR16[]){45,39,40,41,43,44,46,47,58,61,63,59,33,42,35,64,36,95,37,0}),(OOC_INT32)XML_Parser__suplPubidChar,32);
  i0 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], 8);
  XML_Parser__noName = (XML_UnicodeBuffer__CharArray)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 113546)), 0);
  _copy_16(((OOC_CHAR16[]){35,110,111,95,110,97,109,101,0}),(_check_pointer(i0, 113546)),i1);
  i0 = (OOC_INT32)XML_Error__NewContext("XML:Parser", 11);
  XML_Parser__parserContext = (XML_Error__Context)i0;
  XML_Parser__SetErrorMessages();
  return;
  ;
}

/* --- */
