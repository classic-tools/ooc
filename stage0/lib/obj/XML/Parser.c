#include <XML/Parser.d>
#include <__oo2c.h>
#include <setjmp.h>

static OOC_CHAR8 XML_Parser__IsCharUCS4(OOC_INT32 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = 32<=i0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = i0<=55295;
  
l5:
  if (i1) goto l7;
  i1 = i0==9;
  
  goto l9;
l7:
  i1=1u;
l9:
  if (i1) goto l11;
  i1 = i0==10;
  
  goto l13;
l11:
  i1=1u;
l13:
  if (i1) goto l15;
  i1 = i0==13;
  
  goto l17;
l15:
  i1=1u;
l17:
  if (i1) goto l23;
  i1 = 57344<=i0;
  if (i1) goto l21;
  i1=0u;
  goto l25;
l21:
  i1 = i0<=65533;
  
  goto l25;
l23:
  i1=1u;
l25:
  if (i1) goto l31;
  i1 = 65536<=i0;
  if (i1) goto l29;
  i0=0u;
  goto l32;
l29:
  i0 = i0<=1114111;
  
  goto l32;
l31:
  i0=1u;
l32:
  return i0;
  ;
}

static OOC_CHAR8 XML_Parser__IsDigit(OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = (OOC_UINT16)i0<(OOC_UINT16)256u;
  if (i1) goto l6;
  switch (i0) {
  case 1632u ... 1641u:
  case 1776u ... 1785u:
  case 2406u ... 2415u:
  case 2534u ... 2543u:
  case 2662u ... 2671u:
  case 2790u ... 2799u:
  case 2918u ... 2927u:
  case 3047u ... 3055u:
  case 3174u ... 3183u:
  case 3302u ... 3311u:
  case 3430u ... 3439u:
  case 3664u ... 3673u:
  case 3792u ... 3801u:
  case 3872u ... 3881u:
    return 1u;
    goto l11;
  default:
    return 0u;
    goto l11;
  }
l6:
  i1 = (OOC_UINT8)48u<=(OOC_UINT8)i0;
  if (i1) goto l9;
  i0=0u;
  goto l10;
l9:
  i0 = (OOC_UINT16)i0<=(OOC_UINT16)57u;
  
l10:
  return i0;
l11:
  _failed_function(9281); return 0;
  ;
}

static OOC_CHAR8 XML_Parser__IsBaseChar(OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = (OOC_UINT16)i0<(OOC_UINT16)256u;
  if (i1) goto l41;
  i1 = (OOC_UINT16)i0<(OOC_UINT16)1024u;
  if (i1) goto l36;
  i1 = (OOC_UINT16)i0<(OOC_UINT16)2048u;
  if (i1) goto l31;
  i1 = (OOC_UINT16)i0<(OOC_UINT16)3072u;
  if (i1) goto l26;
  i1 = (OOC_UINT16)i0<(OOC_UINT16)4096u;
  if (i1) goto l21;
  i1 = (OOC_UINT16)i0<(OOC_UINT16)5120u;
  if (i1) goto l16;
  switch (i0) {
  case 7680u ... 7835u:
  case 7840u ... 7929u:
  case 7936u ... 7957u:
  case 7960u ... 7965u:
  case 7968u ... 8005u:
  case 8008u ... 8013u:
  case 8016u ... 8023u:
  case 8025u:
  case 8027u:
  case 8029u:
  case 8031u ... 8061u:
  case 8064u ... 8116u:
  case 8118u ... 8124u:
  case 8126u:
  case 8130u ... 8132u:
  case 8134u ... 8140u:
  case 8144u ... 8147u:
  case 8150u ... 8155u:
  case 8160u ... 8172u:
  case 8178u ... 8180u:
  case 8182u ... 8188u:
  case 8486u:
  case 8490u ... 8491u:
  case 8494u:
  case 8576u ... 8578u:
  case 12353u ... 12436u:
  case 12449u ... 12538u:
  case 12549u ... 12588u:
  case 44032u ... 55203u:
    return 1u;
    goto l45;
  default:
    return 0u;
    goto l45;
  }
l16:
  switch (i0) {
  case 4256u ... 4293u:
  case 4304u ... 4342u:
  case 4352u:
  case 4354u ... 4355u:
  case 4357u ... 4359u:
  case 4361u:
  case 4363u ... 4364u:
  case 4366u ... 4370u:
  case 4412u:
  case 4414u:
  case 4416u:
  case 4428u:
  case 4430u:
  case 4432u:
  case 4436u ... 4437u:
  case 4441u:
  case 4447u ... 4449u:
  case 4451u:
  case 4453u:
  case 4455u:
  case 4457u:
  case 4461u ... 4462u:
  case 4466u ... 4467u:
  case 4469u:
  case 4510u:
  case 4520u:
  case 4523u:
  case 4526u ... 4527u:
  case 4535u ... 4536u:
  case 4538u:
  case 4540u ... 4546u:
  case 4587u:
  case 4592u:
  case 4601u:
    return 1u;
    goto l45;
  default:
    return 0u;
    goto l45;
  }
l21:
  switch (i0) {
  case 3077u ... 3084u:
  case 3086u ... 3088u:
  case 3090u ... 3112u:
  case 3114u ... 3123u:
  case 3125u ... 3129u:
  case 3168u ... 3169u:
  case 3205u ... 3212u:
  case 3214u ... 3216u:
  case 3218u ... 3240u:
  case 3242u ... 3251u:
  case 3253u ... 3257u:
  case 3294u:
  case 3296u ... 3297u:
  case 3333u ... 3340u:
  case 3342u ... 3344u:
  case 3346u ... 3368u:
  case 3370u ... 3385u:
  case 3424u ... 3425u:
  case 3585u ... 3630u:
  case 3632u:
  case 3634u ... 3635u:
  case 3648u ... 3653u:
  case 3713u ... 3714u:
  case 3716u:
  case 3719u ... 3720u:
  case 3722u:
  case 3725u:
  case 3732u ... 3735u:
  case 3737u ... 3743u:
  case 3745u ... 3747u:
  case 3749u:
  case 3751u:
  case 3754u ... 3755u:
  case 3757u ... 3758u:
  case 3760u:
  case 3762u ... 3763u:
  case 3773u:
  case 3776u ... 3780u:
  case 3904u ... 3911u:
  case 3913u ... 3945u:
    return 1u;
    goto l45;
  default:
    return 0u;
    goto l45;
  }
l26:
  switch (i0) {
  case 2309u ... 2361u:
  case 2365u:
  case 2392u ... 2401u:
  case 2437u ... 2444u:
  case 2447u ... 2448u:
  case 2451u ... 2472u:
  case 2474u ... 2480u:
  case 2482u:
  case 2486u ... 2489u:
  case 2524u ... 2525u:
  case 2527u ... 2529u:
  case 2544u ... 2545u:
  case 2565u ... 2570u:
  case 2575u ... 2576u:
  case 2579u ... 2600u:
  case 2602u ... 2608u:
  case 2610u ... 2611u:
  case 2613u ... 2614u:
  case 2616u ... 2617u:
  case 2649u ... 2652u:
  case 2654u:
  case 2674u ... 2676u:
  case 2693u ... 2699u:
  case 2701u:
  case 2703u ... 2705u:
  case 2707u ... 2728u:
  case 2730u ... 2736u:
  case 2738u ... 2739u:
  case 2741u ... 2745u:
  case 2749u:
  case 2784u:
  case 2821u ... 2828u:
  case 2831u ... 2832u:
  case 2835u ... 2856u:
  case 2858u ... 2864u:
  case 2866u ... 2867u:
  case 2870u ... 2873u:
  case 2877u:
  case 2908u ... 2909u:
  case 2911u ... 2913u:
  case 2949u ... 2954u:
  case 2958u ... 2960u:
  case 2962u ... 2965u:
  case 2969u ... 2970u:
  case 2972u:
  case 2974u ... 2975u:
  case 2979u ... 2980u:
  case 2984u ... 2986u:
  case 2990u ... 2997u:
  case 2999u ... 3001u:
    return 1u;
    goto l45;
  default:
    return 0u;
    goto l45;
  }
l31:
  switch (i0) {
  case 1025u ... 1036u:
  case 1038u ... 1103u:
  case 1105u ... 1116u:
  case 1118u ... 1153u:
  case 1168u ... 1220u:
  case 1223u ... 1224u:
  case 1227u ... 1228u:
  case 1232u ... 1259u:
  case 1262u ... 1269u:
  case 1272u ... 1273u:
  case 1329u ... 1366u:
  case 1369u:
  case 1377u ... 1414u:
  case 1488u ... 1514u:
  case 1520u ... 1522u:
  case 1569u ... 1594u:
  case 1601u ... 1610u:
  case 1649u ... 1719u:
  case 1722u ... 1726u:
  case 1728u ... 1742u:
  case 1744u ... 1747u:
  case 1749u:
  case 1765u ... 1766u:
    return 1u;
    goto l45;
  default:
    return 0u;
    goto l45;
  }
l36:
  switch (i0) {
  case 256u ... 305u:
  case 308u ... 318u:
  case 321u ... 328u:
  case 330u ... 382u:
  case 384u ... 451u:
  case 461u ... 496u:
  case 500u ... 501u:
  case 506u ... 535u:
  case 592u ... 680u:
  case 699u ... 705u:
  case 902u:
  case 904u ... 906u:
  case 908u:
  case 910u ... 929u:
  case 931u ... 974u:
  case 976u ... 982u:
  case 986u:
  case 988u:
  case 990u:
  case 992u:
  case 994u ... 1011u:
    return 1u;
    goto l45;
  default:
    return 0u;
    goto l45;
  }
l41:
  switch (i0) {
  case 65u ... 90u:
  case 97u ... 122u:
  case 192u ... 214u:
  case 216u ... 246u:
  case 248u ... 255u:
    return 1u;
    goto l45;
  default:
    return 0u;
    goto l45;
  }
l45:
  _failed_function(9767); return 0;
  ;
}

static OOC_CHAR8 XML_Parser__IsIdeographic(OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = (OOC_UINT16)19968u<=(OOC_UINT16)i0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_UINT16)i0<=(OOC_UINT16)40869u;
  
l5:
  if (i1) goto l7;
  i1 = i0==12295u;
  
  goto l9;
l7:
  i1=1u;
l9:
  if (i1) goto l15;
  i1 = (OOC_UINT16)12321u<=(OOC_UINT16)i0;
  if (i1) goto l13;
  i0=0u;
  goto l16;
l13:
  i0 = (OOC_UINT16)i0<=(OOC_UINT16)12329u;
  
  goto l16;
l15:
  i0=1u;
l16:
  return i0;
  ;
}

static OOC_CHAR8 XML_Parser__IsCombiningChar(OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = (OOC_UINT16)i0<(OOC_UINT16)768u;
  if (i1) goto l31;
  i1 = (OOC_UINT16)i0<(OOC_UINT16)2560u;
  if (i1) goto l26;
  i1 = (OOC_UINT16)i0<(OOC_UINT16)3328u;
  if (i1) goto l21;
  i1 = (OOC_UINT16)i0<(OOC_UINT16)4096u;
  if (i1) goto l16;
  i1 = (OOC_UINT16)i0<(OOC_UINT16)8192u;
  if (i1) goto l14;
  switch (i0) {
  case 8400u ... 8412u:
  case 8417u:
  case 12330u ... 12335u:
  case 12441u:
  case 12442u:
    return 1u;
    goto l32;
  default:
    return 0u;
    goto l32;
  }
l14:
  return 0u;
  goto l32;
l16:
  switch (i0) {
  case 3330u ... 3331u:
  case 3390u ... 3395u:
  case 3398u ... 3400u:
  case 3402u ... 3405u:
  case 3415u:
  case 3633u:
  case 3636u ... 3642u:
  case 3655u ... 3662u:
  case 3761u:
  case 3764u ... 3769u:
  case 3771u ... 3772u:
  case 3784u ... 3789u:
  case 3864u ... 3865u:
  case 3893u:
  case 3895u:
  case 3897u:
  case 3902u:
  case 3903u:
  case 3953u ... 3972u:
  case 3974u ... 3979u:
  case 3984u ... 3989u:
  case 3991u:
  case 3993u ... 4013u:
  case 4017u ... 4023u:
  case 4025u:
    return 1u;
    goto l32;
  default:
    return 0u;
    goto l32;
  }
l21:
  switch (i0) {
  case 2562u:
  case 2620u:
  case 2622u:
  case 2623u:
  case 2624u ... 2626u:
  case 2631u ... 2632u:
  case 2635u ... 2637u:
  case 2672u ... 2673u:
  case 2689u ... 2691u:
  case 2748u:
  case 2750u ... 2757u:
  case 2759u ... 2761u:
  case 2763u ... 2765u:
  case 2817u ... 2819u:
  case 2876u:
  case 2878u ... 2883u:
  case 2887u ... 2888u:
  case 2891u ... 2893u:
  case 2902u ... 2903u:
  case 2946u ... 2947u:
  case 3006u ... 3010u:
  case 3014u ... 3016u:
  case 3018u ... 3021u:
  case 3031u:
  case 3073u ... 3075u:
  case 3134u ... 3140u:
  case 3142u ... 3144u:
  case 3146u ... 3149u:
  case 3157u ... 3158u:
  case 3202u ... 3203u:
  case 3262u ... 3268u:
  case 3270u ... 3272u:
  case 3274u ... 3277u:
  case 3285u ... 3286u:
    return 1u;
    goto l32;
  default:
    return 0u;
    goto l32;
  }
l26:
  switch (i0) {
  case 768u ... 837u:
  case 864u ... 865u:
  case 1155u ... 1158u:
  case 1425u ... 1441u:
  case 1443u ... 1465u:
  case 1467u ... 1469u:
  case 1471u:
  case 1473u ... 1474u:
  case 1476u:
  case 1611u ... 1618u:
  case 1648u:
  case 1750u ... 1756u:
  case 1757u ... 1759u:
  case 1760u ... 1764u:
  case 1767u ... 1768u:
  case 1770u ... 1773u:
  case 2305u ... 2307u:
  case 2364u:
  case 2366u ... 2380u:
  case 2381u:
  case 2385u ... 2388u:
  case 2402u ... 2403u:
  case 2433u ... 2435u:
  case 2492u:
  case 2494u:
  case 2495u:
  case 2496u ... 2500u:
  case 2503u ... 2504u:
  case 2507u ... 2509u:
  case 2519u:
  case 2530u ... 2531u:
    return 1u;
    goto l32;
  default:
    return 0u;
    goto l32;
  }
l31:
  return 0u;
l32:
  _failed_function(13943); return 0;
  ;
}

static OOC_CHAR8 XML_Parser__IsExtender(OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = i0==183u;
  if (i1) goto l10;
  i1 = (OOC_UINT16)i0>=(OOC_UINT16)720u;
  if (i1) goto l5;
  return 0u;
  goto l11;
l5:
  switch (i0) {
  case 720u:
  case 721u:
  case 903u:
  case 1600u:
  case 3654u:
  case 3782u:
  case 12293u:
  case 12337u ... 12341u:
  case 12445u ... 12446u:
  case 12540u ... 12542u:
    return 1u;
    goto l11;
  default:
    return 0u;
    goto l11;
  }
l10:
  return 1u;
l11:
  _failed_function(15981); return 0;
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
  i0=1u;
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
  i1=1u;
l5:
  if (i1) goto l7;
  i1 = i0==46u;
  
  goto l9;
l7:
  i1=1u;
l9:
  if (i1) goto l11;
  i1 = i0==45u;
  
  goto l13;
l11:
  i1=1u;
l13:
  if (i1) goto l15;
  i1 = i0==95u;
  
  goto l17;
l15:
  i1=1u;
l17:
  if (i1) goto l19;
  i1 = i0==58u;
  
  goto l21;
l19:
  i1=1u;
l21:
  if (i1) goto l23;
  i1 = XML_Parser__IsCombiningChar(i0);
  
  goto l25;
l23:
  i1=1u;
l25:
  if (i1) goto l27;
  i0 = XML_Parser__IsExtender(i0);
  
  goto l28;
l27:
  i0=1u;
l28:
  return i0;
  ;
}

OOC_CHAR8 XML_Parser__IsNameChar0(OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = XML_Parser__IsLetter(i0);
  if (i1) goto l3;
  i1 = i0==95u;
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l7;
  i0 = i0==58u;
  
  goto l8;
l7:
  i0=1u;
l8:
  return i0;
  ;
}

static OOC_CHAR8 XML_Parser__IsPubidChar(OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1,i2;

  i0 = ch;
  i1 = _cap(i0);
  i2 = (OOC_UINT8)65u<=(OOC_UINT8)i1;
  if (i2) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_UINT16)i1<=(OOC_UINT16)90u;
  
l5:
  if (i1) goto l11;
  i1 = (OOC_UINT8)48u<=(OOC_UINT8)i0;
  if (i1) goto l9;
  i1=0u;
  goto l13;
l9:
  i1 = (OOC_UINT16)i0<=(OOC_UINT16)57u;
  
  goto l13;
l11:
  i1=1u;
l13:
  if (i1) goto l15;
  i1 = i0==32u;
  
  goto l17;
l15:
  i1=1u;
l17:
  if (i1) goto l19;
  i1 = i0==13u;
  
  goto l21;
l19:
  i1=1u;
l21:
  if (i1) goto l23;
  i1 = i0==10u;
  
  goto l25;
l23:
  i1=1u;
l25:
  if (i1) goto l44;
  i1 = *(OOC_UINT16*)((OOC_INT32)XML_Parser__suplPubidChar+(_check_index(0, 32, OOC_UINT32, 17132))*2);
  i1 = i1!=0u;
  if (i1) goto l29;
  i1=0u;
  goto l31;
l29:
  i1 = *(OOC_UINT16*)((OOC_INT32)XML_Parser__suplPubidChar+(_check_index(0, 32, OOC_UINT32, 17158))*2);
  i1 = i1!=i0;
  
l31:
  if (i1) goto l33;
  i0=0;
  goto l43;
l33:
  i1=0;
l34_loop:
  i1 = i1+1;
  i2 = *(OOC_UINT16*)((OOC_INT32)XML_Parser__suplPubidChar+(_check_index(i1, 32, OOC_UINT32, 17132))*2);
  i2 = i2!=0u;
  if (i2) goto l37;
  i2=0u;
  goto l39;
l37:
  i2 = *(OOC_UINT16*)((OOC_INT32)XML_Parser__suplPubidChar+(_check_index(i1, 32, OOC_UINT32, 17158))*2);
  i2 = i2!=i0;
  
l39:
  if (i2) goto l34_loop;
l42:
  i0=i1;
l43:
  i0 = *(OOC_UINT16*)((OOC_INT32)XML_Parser__suplPubidChar+(_check_index(i0, 32, OOC_UINT32, 17225))*2);
  return (i0!=0u);
  goto l45;
l44:
  return 1u;
l45:
  _failed_function(16850); return 0;
  ;
}

static OOC_CHAR8 XML_Parser__IsVersionNumChar(OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1,i2;

  i0 = ch;
  i1 = _cap(i0);
  i2 = (OOC_UINT8)65u<=(OOC_UINT8)i1;
  if (i2) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_UINT16)i1<=(OOC_UINT16)90u;
  
l5:
  if (i1) goto l11;
  i1 = (OOC_UINT8)48u<=(OOC_UINT8)i0;
  if (i1) goto l9;
  i1=0u;
  goto l13;
l9:
  i1 = (OOC_UINT16)i0<=(OOC_UINT16)57u;
  
  goto l13;
l11:
  i1=1u;
l13:
  if (i1) goto l15;
  i1 = i0==95u;
  
  goto l17;
l15:
  i1=1u;
l17:
  if (i1) goto l19;
  i1 = i0==46u;
  
  goto l21;
l19:
  i1=1u;
l21:
  if (i1) goto l23;
  i1 = i0==58u;
  
  goto l25;
l23:
  i1=1u;
l25:
  if (i1) goto l27;
  i0 = i0==45u;
  
  goto l28;
l27:
  i0=1u;
l28:
  return i0;
  ;
}

static OOC_CHAR8 XML_Parser__IsEncNameChar(OOC_CHAR16 ch, OOC_CHAR8 first) {
  register OOC_INT32 i0,i1,i2;

  i0 = ch;
  i1 = _cap(i0);
  i2 = (OOC_UINT8)65u<=(OOC_UINT8)i1;
  if (i2) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_UINT16)i1<=(OOC_UINT16)90u;
  
l5:
  if (i1) goto l27;
  i1 = first;
  i1 = !i1;
  if (i1) goto l9;
  return 0u;
  goto l28;
l9:
  i1 = (OOC_UINT8)48u<=(OOC_UINT8)i0;
  if (i1) goto l12;
  i1=0u;
  goto l14;
l12:
  i1 = (OOC_UINT16)i0<=(OOC_UINT16)57u;
  
l14:
  if (i1) goto l16;
  i1 = i0==46u;
  
  goto l18;
l16:
  i1=1u;
l18:
  if (i1) goto l20;
  i1 = i0==95u;
  
  goto l22;
l20:
  i1=1u;
l22:
  if (i1) goto l24;
  i0 = i0==45u;
  
  goto l25;
l24:
  i0=1u;
l25:
  return i0;
  goto l28;
l27:
  return 1u;
l28:
  _failed_function(17517); return 0;
  ;
}

Msg__Msg XML_Parser__ErrorListenerDesc_Error(XML_Parser__ErrorListener el, XML_Error__Context context, OOC_INT32 code, OOC_CHAR8 fatalError, const struct XML_Locator__Position *pos__ref) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(pos,XML_Locator__Position ,1)
  XML_Parser__Parser p;
  Msg__Msg err;

  OOC_INITIALIZE_VPAR(pos__ref,pos,XML_Locator__Position ,20)
  i0 = (OOC_INT32)el;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18178));
  p = (XML_Parser__Parser)i0;
  i1 = (OOC_INT32)context;
  i2 = code;
  i1 = (OOC_INT32)XML_Error__New((XML_Error__Context)i1, i2);
  err = (Msg__Msg)i1;
  i2 = *(OOC_INT32*)(OOC_INT32)pos;
  i3 = XML_Error__errMsgCharPosBase;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18228)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "char", 5, (i2+i3));
  i2 = *(OOC_INT32*)((OOC_INT32)pos+4);
  i3 = XML_Error__errMsgLineBase;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18300)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "line", 5, (i2+i3));
  i2 = *(OOC_INT32*)((OOC_INT32)pos+8);
  i3 = XML_Error__errMsgColumnBase;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18364)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "column", 7, (i2+i3));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18483))+56);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18495))+36);
  i2 = (OOC_INT32)URI__NewURIAttribute("baseURI", 8, (URI__URI)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18434)))), Msg__MsgDesc_SetAttribute)),Msg__MsgDesc_SetAttribute)((Msg__Msg)i1, (Msg__Attribute)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)pos+16);
  i3 = i2!=0;
  if (!i3) goto l3;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18663))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18663))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 18669)), 0);
  i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i3, 18669)), i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18559)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i1, "entity_name", 12, (Msg__LStringPtr)i2);
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18687));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18687));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18696)))), Msg__MsgListDesc_Append)),Msg__MsgListDesc_Append)((Msg__MsgList)i3, (Msg__Msg)i1);
  i2 = fatalError;
  if (i2) goto l6;
  i2=0u;
  goto l8;
l6:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18747))+40);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18734))+44);
  i2 = i3==i2;
  
l8:
  if (!i2) goto l10;
  i2 = (OOC_INT32)XML_Builder__New();
  *(OOC_INT32*)((_check_pointer(i0, 18777))+44) = i2;
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
  auto void XML_Parser__ParserDesc_ParseDocument_ResetLocator(void);
  auto void XML_Parser__ParserDesc_ParseDocument_SetFileEntity(XML_DTD__ExternalEntity _new);
  auto void XML_Parser__ParserDesc_ParseDocument_ErrPosNF(OOC_INT32 code, struct XML_Locator__Position *pos, RT0__Struct pos__tag);
  auto void XML_Parser__ParserDesc_ParseDocument_ErrPos(OOC_INT32 code, struct XML_Locator__Position *pos, RT0__Struct pos__tag);
  auto void XML_Parser__ParserDesc_ParseDocument_WriteBuffer(const OOC_CHAR8 msg__ref[], OOC_LEN msg_0d);
  auto void XML_Parser__ParserDesc_ParseDocument_ErrNF(OOC_INT32 code);
  auto void XML_Parser__ParserDesc_ParseDocument_Err(OOC_INT32 code);
  auto XML_UnicodeBuffer__CharArray XML_Parser__ParserDesc_ParseDocument_Clone(XML_UnicodeBuffer__CharArray string);
  auto XML_UnicodeBuffer__CharArray XML_Parser__ParserDesc_ParseDocument_GetString(OOC_INT32 start, OOC_INT32 end);
  auto XML_UnicodeBuffer__Input XML_Parser__ParserDesc_ParseDocument_GetBuffer(XML_DTD__ExternalEntity entity);
  auto void XML_Parser__ParserDesc_ParseDocument_CheckInvalidChars(void);
  auto XML_UnicodeBuffer__CharArray XML_Parser__ParserDesc_ParseDocument_Internalize(XML_DTD__ExternalEntity entity);
  auto void XML_Parser__ParserDesc_ParseDocument_PushEntity(XML_DTD__Entity entity, OOC_CHAR8 syncEntity);
  auto void XML_Parser__ParserDesc_ParseDocument_PopEntity(void);
  auto void XML_Parser__ParserDesc_ParseDocument_NextBlock(void);
  auto void XML_Parser__ParserDesc_ParseDocument_DiscardPreviousInput(void);
  auto void XML_Parser__ParserDesc_ParseDocument_EndOfLine(void);
  auto void XML_Parser__ParserDesc_ParseDocument_Tab(void);
  auto OOC_CHAR8 XML_Parser__ParserDesc_ParseDocument_LookingAtS(void);
  auto OOC_CHAR8 XML_Parser__ParserDesc_ParseDocument_LookingAtSnoPE(void);
  auto OOC_CHAR8 XML_Parser__ParserDesc_ParseDocument_LookingAt(const OOC_CHAR8 str__ref[], OOC_LEN str_0d, OOC_INT8 followedBy);
  auto void XML_Parser__ParserDesc_ParseDocument_NextChar(void);
  auto XML_UnicodeBuffer__CharArray XML_Parser__ParserDesc_ParseDocument_Nmtoken(OOC_CHAR8 checkForQName, OOC_CHAR8 noColon);
  auto XML_UnicodeBuffer__CharArray XML_Parser__ParserDesc_ParseDocument_Name(OOC_CHAR8 noColon);
  auto void XML_Parser__ParserDesc_ParseDocument_CheckChar(OOC_CHAR8 ch);
  auto void XML_Parser__ParserDesc_ParseDocument_XMLDecl(XML_DTD__ExternalEntity entity);
  auto void XML_Parser__ParserDesc_ParseDocument_extSubsetDecl(void);
  auto void XML_Parser__ParserDesc_ParseDocument_SkippedEntity(XML_UnicodeBuffer__CharArray name);
  auto void XML_Parser__ParserDesc_ParseDocument_PEReference(OOC_CHAR8 declSep);
  auto void XML_Parser__ParserDesc_ParseDocument_OptS(OOC_CHAR8 noPE);
  auto void XML_Parser__ParserDesc_ParseDocument_S(void);
  auto void XML_Parser__ParserDesc_ParseDocument_SnoPE(void);
  auto void XML_Parser__ParserDesc_ParseDocument_ControlChar(OOC_CHAR16 eolReplacement);
  auto XML_UnicodeBuffer__CharArray XML_Parser__ParserDesc_ParseDocument_String(OOC_INT8 type);
  auto void XML_Parser__ParserDesc_ParseDocument_Eq(void);
  auto void XML_Parser__ParserDesc_ParseDocument_XMLDecl(XML_DTD__ExternalEntity entity);
  auto XML_DTD__Entity XML_Parser__ParserDesc_ParseDocument_CurrentEntity(void);
  auto void XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity(XML_DTD__Entity reference);
  auto void XML_Parser__ParserDesc_ParseDocument_PI(void);
  auto void XML_Parser__ParserDesc_ParseDocument_Comment(void);
  auto void XML_Parser__ParserDesc_ParseDocument_CDSect(void);
  auto void XML_Parser__ParserDesc_ParseDocument_CharRef(void);
  auto XML_DTD__EntityRef XML_Parser__ParserDesc_ParseDocument_EntityRef(OOC_CHAR8 enforceDecl, OOC_CHAR8 permitExternal);
  auto XML_DTD__AttValue XML_Parser__ParserDesc_ParseDocument_AttValue(OOC_CHAR8 isAttDecl);
  auto void XML_Parser__ParserDesc_ParseDocument_Expand(XML_DTD__AttValue attValue);
  auto void XML_Parser__ParserDesc_ParseDocument_element(void);
  auto void XML_Parser__ParserDesc_ParseDocument_content(void);
  auto void XML_Parser__ParserDesc_ParseDocument_element(void);
  auto void XML_Parser__ParserDesc_ParseDocument_MiscRep(void);
  auto void XML_Parser__ParserDesc_ParseDocument_ExternalID(OOC_CHAR8 optionJustPubid, XML_UnicodeBuffer__CharArray *_public, XML_UnicodeBuffer__CharArray *system, URI__URI *baseURI);
  auto void XML_Parser__ParserDesc_ParseDocument_markupdecl(void);
  auto void XML_Parser__ParserDesc_ParseDocument_extSubsetDecl(void);
  auto void XML_Parser__ParserDesc_ParseDocument_prolog(void);
    
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21244))+36);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21268))+36);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21272))+20);
      i2 = (OOC_INT32)chars;
      i1 = i2==i1;
      
l5:
      if (i1) goto l23;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21600))+36);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l18;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 21663))+88);
      i1 = i1-1;
      i = i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21697))+84);
      i2 = _check_pointer(i2, 21706);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21723))+36);
      i2 = (OOC_INT32)*(OOC_INT32*)(i2+((_check_index(i1, i3, OOC_UINT32, 21706))*28));
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21727))+20);
      i2 = i2!=i3;
      if (!i2) goto l19;
l12_loop:
      i1 = i1-1;
      i = i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21697))+84);
      i2 = _check_pointer(i2, 21706);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21723))+36);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21727))+20);
      i2 = (OOC_INT32)*(OOC_INT32*)(i2+((_check_index(i1, i3, OOC_UINT32, 21706))*28));
      i2 = i2!=i4;
      if (i2) goto l12_loop;
      goto l19;
l18:
      i = 0;
      i1=0;
l19:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21813))+84);
      i2 = _check_pointer(i2, 21822);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21836))+84);
      i4 = _check_pointer(i4, 21845);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i1, i5, OOC_UINT32, 21845))*28))+24);
      i2 = *(OOC_INT32*)((i2+((_check_index(i1, i3, OOC_UINT32, 21822))*28))+4);
      i3 = *(OOC_INT32*)((_check_pointer(i4, 21852))+24);
      *(OOC_INT32*)(OOC_INT32)pos = (i2+i3);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 21892))+92);
      *(OOC_INT32*)((OOC_INT32)pos+4) = i2;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21928))+84);
      i2 = _check_pointer(i2, 21937);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_INT32*)((i2+((_check_index(i1, i3, OOC_UINT32, 21937))*28))+4);
      i3 = *(OOC_INT32*)((_check_pointer(i0, 21977))+96);
      i4 = *(OOC_INT32*)((_check_pointer(i0, 21992))+100);
      *(OOC_INT32*)((OOC_INT32)pos+8) = ((i2-i3)+i4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22020))+84);
      i2 = _check_pointer(i2, 22029);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i1, i3, OOC_UINT32, 22029))*28))+20);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22040))+4);
      i2 = i2!=(OOC_INT32)0;
      if (!i2) goto l24;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22106))+84);
      i2 = _check_pointer(i2, 22115);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i1, i3, OOC_UINT32, 22115))*28))+20);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22126))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22106))+84);
      i0 = _check_pointer(i0, 22115);
      i3 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)((i0+((_check_index(i1, i3, OOC_UINT32, 22115))*28))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22126))+4);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 22132)), 0);
      i0 = LongStrings__Length((void*)(_check_pointer(i2, 22132)), i0);
      XML_Parser__ParserDesc_ParseDocument_DecLength((void*)(OOC_INT32)pos, (RT0__Struct)((OOC_INT32)pos__tag), (i0+2));
      goto l24;
l23:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21318))+36);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 21322))+24);
      i2 = cpos;
      *(OOC_INT32*)(OOC_INT32)pos = (i2+i1);
      i1 = *(OOC_INT32*)((_check_pointer(i0, 21362))+92);
      *(OOC_INT32*)((OOC_INT32)pos+4) = i1;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 21403))+96);
      i0 = *(OOC_INT32*)((_check_pointer(i0, 21418))+100);
      *(OOC_INT32*)((OOC_INT32)pos+8) = ((i2-i1)+i0);
l24:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_ResetLocator(void) {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)p;
      *(OOC_INT32*)((_check_pointer(i0, 22229))+92) = 0;
      *(OOC_INT32*)((_check_pointer(i0, 22253))+96) = 0;
      *(OOC_INT32*)((_check_pointer(i0, 22280))+100) = 0;
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
      *(OOC_INT32*)((_check_pointer(i0, 22449))+56) = i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22477))+4);
      *(OOC_INT32*)((_check_pointer(i0, 22480))+12) = i1;
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
      *(OOC_INT32*)((_check_pointer(i0, 22637))+104) = i1;
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22692))+104);
      i2 = *(OOC_INT32*)(OOC_INT32)pos;
      i3 = XML_Error__errMsgCharPosBase;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22692))+104);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22703)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "char", 5, (i2+i3));
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22775))+104);
      i2 = *(OOC_INT32*)((OOC_INT32)pos+4);
      i3 = XML_Error__errMsgLineBase;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22775))+104);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22786)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, (i2+i3));
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22850))+104);
      i2 = *(OOC_INT32*)((OOC_INT32)pos+8);
      i3 = XML_Error__errMsgColumnBase;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22850))+104);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22861)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, (i2+i3));
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22931))+104);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22991))+56);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23003))+36);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22931))+104);
      i2 = (OOC_INT32)URI__NewURIAttribute("baseURI", 8, (URI__URI)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22942)))), Msg__MsgDesc_SetAttribute)),Msg__MsgDesc_SetAttribute)((Msg__Msg)i0, (Msg__Attribute)i2);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23035))+36);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23039))+20);
      i2 = (OOC_INT32)chars;
      i1 = i2!=i1;
      if (!i1) goto l4;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 23067))+88);
      i1 = i1-1;
      i = i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23092))+104);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23189))+84);
      i3 = _check_pointer(i3, 23198);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)((i3+((_check_index(i1, i4, OOC_UINT32, 23198))*28))+20);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 23209))+4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23189))+84);
      i4 = _check_pointer(i4, 23198);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i1, i5, OOC_UINT32, 23198))*28))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23209))+4);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 23215)), 0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23092))+104);
      i1 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i3, 23215)), i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23103)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "entity_name", 12, (Msg__LStringPtr)i1);
l4:
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 23237));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23257))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 23237));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23246)))), Msg__MsgListDesc_Append)),Msg__MsgListDesc_Append)((Msg__MsgList)i0, (Msg__Msg)i2);
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_ErrPos(OOC_INT32 code, struct XML_Locator__Position *pos, RT0__Struct pos__tag) {
      register OOC_INT32 i0,i1,i2;

      i0 = code;
      XML_Parser__ParserDesc_ParseDocument_ErrPosNF(i0, (void*)(OOC_INT32)pos, (RT0__Struct)((OOC_INT32)pos__tag));
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23406))+44);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23419))+40);
      i1 = i1==i2;
      if (!i1) goto l4;
      i1 = (OOC_INT32)XML_Builder__New();
      *(OOC_INT32*)((_check_pointer(i0, 23451))+44) = i1;
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
      i2 = _check_pointer(i2, 23780);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT16*)(i2+(_check_index(i0, i3, OOC_UINT32, 23780))*2);
      i2 = (OOC_UINT16)i2<(OOC_UINT16)65534u;
      if (i2) goto l3;
      i2=0u;
      goto l5;
l3:
      i2 = i0<=i1;
      
l5:
      if (!i2) goto l20;
l7_loop:
      i2 = (OOC_INT32)chars;
      i3 = _check_pointer(i2, 23837);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT16*)(i3+(_check_index(i0, i4, OOC_UINT32, 23837))*2);
      i3 = (OOC_UINT16)i3>(OOC_UINT16)255u;
      if (i3) goto l10;
      i2 = _check_pointer(i2, 23922);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT16*)(i2+(_check_index(i0, i3, OOC_UINT32, 23922))*2);
      Out__Char(i2);
      goto l11;
l10:
      Out__Char(63u);
l11:
      i0 = i0+1;
      i = i0;
      i2 = (OOC_INT32)chars;
      i2 = _check_pointer(i2, 23780);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT16*)(i2+(_check_index(i0, i3, OOC_UINT32, 23780))*2);
      i2 = (OOC_UINT16)i2<(OOC_UINT16)65534u;
      if (i2) goto l14;
      i2=0u;
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
      i1 = _check_pointer(i0, 24140);
      i1 = (OOC_INT32)&_td_XML_Locator__Position;
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)((_check_pointer(i0, 24140))+12), (RT0__Struct)i1);
      i0 = (OOC_INT32)p;
      i2 = _check_pointer(i0, 24176);
      i2 = code;
      XML_Parser__ParserDesc_ParseDocument_ErrPosNF(i2, (void*)((_check_pointer(i0, 24176))+12), (RT0__Struct)i1);
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_Err(OOC_INT32 code) {
      register OOC_INT32 i0,i1,i2;

      i0 = code;
      XML_Parser__ParserDesc_ParseDocument_ErrNF(i0);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24283))+44);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24296))+40);
      i1 = i1==i2;
      if (!i1) goto l4;
      i1 = (OOC_INT32)XML_Builder__New();
      *(OOC_INT32*)((_check_pointer(i0, 24328))+44) = i1;
l4:
      return;
      ;
    }

    
    XML_UnicodeBuffer__CharArray XML_Parser__ParserDesc_ParseDocument_Clone(XML_UnicodeBuffer__CharArray string) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      XML_UnicodeBuffer__CharArray clone;
      OOC_INT32 i;

      i0 = (OOC_INT32)string;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 24605)), 0);
      i1 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], i1);
      clone = (XML_UnicodeBuffer__CharArray)i1;
      i = 0;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 24641)), 0);
      i3 = 0<i2;
      if (!i3) goto l8;
      i3=0;
l3_loop:
      i4 = _check_pointer(i1, 24662);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = _check_pointer(i0, 24675);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = *(OOC_UINT16*)(i6+(_check_index(i3, i7, OOC_UINT32, 24675))*2);
      *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 24662))*2) = i6;
      i3 = i3+1;
      i = i3;
      i4 = i3<i2;
      if (i4) goto l3_loop;
l8:
      return (XML_UnicodeBuffer__CharArray)i1;
      ;
    }

    
    XML_UnicodeBuffer__CharArray XML_Parser__ParserDesc_ParseDocument_GetString(OOC_INT32 start, OOC_INT32 end) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
      XML_UnicodeBuffer__CharArray string;
      OOC_INT32 i;

      i0 = end;
      i1 = start;
      i2 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], ((i0-i1)+1));
      string = (XML_UnicodeBuffer__CharArray)i2;
      i = 0;
      i3 = i1!=i0;
      if (i3) goto l3;
      i0=0;
      goto l9;
l3:
      i3 = (OOC_INT32)chars;
      i4=i1;i1=0;
l4_loop:
      i5 = _check_pointer(i2, 24944);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i7 = _check_pointer(i3, 24956);
      i8 = OOC_ARRAY_LENGTH(i7, 0);
      i7 = *(OOC_UINT16*)(i7+(_check_index(i4, i8, OOC_UINT32, 24956))*2);
      *(OOC_UINT16*)(i5+(_check_index(i1, i6, OOC_UINT32, 24944))*2) = i7;
      i4 = i4+1;
      start = i4;
      i1 = i1+1;
      i = i1;
      i5 = i4!=i0;
      if (i5) goto l4_loop;
l8:
      i0=i1;
l9:
      i1 = _check_pointer(i2, 25017);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      *(OOC_UINT16*)(i1+(_check_index(i0, i3, OOC_UINT32, 25017))*2) = 0u;
      return (XML_UnicodeBuffer__CharArray)i2;
      ;
    }

    
    XML_UnicodeBuffer__Input XML_Parser__ParserDesc_ParseDocument_GetBuffer(XML_DTD__ExternalEntity entity) {
      register OOC_INT32 i0,i1,i2;
      IO__ByteChannel ch;
      XML_UnicodeBuffer__Input in;

      i0 = (OOC_INT32)entity;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25238))+36);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25310))+36);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25310))+36);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25319)))), URI__URIDesc_GetChannel)),URI__URIDesc_GetChannel)((URI__URI)i2, 2);
      ch = (IO__ByteChannel)i1;
      i2 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 25391));
      i1 = (OOC_INT32)XML_UnicodeBuffer__NewInput((IO__ByteChannel)i1, (XML_UnicodeCodec__Factory)(OOC_INT32)0, (Msg__MsgList)i2);
      in = (XML_UnicodeBuffer__Input)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25438))+8);
      XML_DTD__ExternalEntityDesc_SetCodecFactory((XML_DTD__ExternalEntity)i0, (XML_UnicodeCodec__Factory)i2);
      return (XML_UnicodeBuffer__Input)i1;
      goto l4;
l3:
      return (XML_UnicodeBuffer__Input)(OOC_INT32)0;
l4:
      _failed_function(25082); return 0;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_CheckInvalidChars(void) {
      register OOC_INT32 i0,i1,i2;
      OOC_CHAR8 str[2048];

      i0 = (OOC_INT32)p;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25598))+36);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25602))+12);
      i0 = *(OOC_INT32*)(_check_pointer(i0, 25609));
      i0 = i0!=0;
      if (!i0) goto l4;
      XML_Parser__ParserDesc_ParseDocument_Err(27);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25684))+56);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25696))+36);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25684))+56);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25696))+36);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25705)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)str, 2048);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25733))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25733))+104);
      i2 = (OOC_INT32)Msg__GetStringPtr((void*)(OOC_INT32)str, 2048);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25744)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "uri", 4, (Msg__StringPtr)i2);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25804))+104);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25845))+36);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 25849))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25804))+104);
      i2 = *(OOC_INT32*)(_check_pointer(i2, 25856));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25815)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "encodings", 10, i2);
l4:
      return;
      ;
    }

    
    XML_UnicodeBuffer__CharArray XML_Parser__ParserDesc_ParseDocument_Internalize(XML_DTD__ExternalEntity entity) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
      XML_UnicodeBuffer__Input in;
      OOC_INT32 len;
      OOC_INT32 i;
      OOC_INT32 delta;
      XML_UnicodeBuffer__CharArray str;

      i0 = (OOC_INT32)entity;
      i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_GetBuffer((XML_DTD__ExternalEntity)i0);
      in = (XML_UnicodeBuffer__Input)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l3;
      i1 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], 2);
      str = (XML_UnicodeBuffer__CharArray)i1;
      len = 0;
      i2=0;
      goto l36;
l3:
      i2 = XML_UnicodeBuffer__InputDesc_NextBlock((XML_UnicodeBuffer__Input)i1);
      if (!i2) goto l10;
l5_loop:
      i2 = XML_UnicodeBuffer__InputDesc_NextBlock((XML_UnicodeBuffer__Input)i1);
      if (i2) goto l5_loop;
l10:
      i2 = *(OOC_INT32*)((_check_pointer(i1, 26250))+28);
      len = i2;
      i = 0;
      delta = 0;
      i3 = 0!=i2;
      if (i3) goto l13;
      i3=0;
      goto l27;
l13:
      i3=0;i4=0;
l14_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26337))+20);
      i5 = _check_pointer(i5, 26344);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = *(OOC_UINT16*)(i5+(_check_index(i3, i6, OOC_UINT32, 26344))*2);
      switch (i5) {
      case 13u:
        i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26387))+20);
        i5 = _check_pointer(i5, 26394);
        i6 = OOC_ARRAY_LENGTH(i5, 0);
        *(OOC_UINT16*)(i5+(_check_index((i3-i4), i6, OOC_UINT32, 26394))*2) = 10u;
        i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26435))+20);
        i5 = _check_pointer(i5, 26442);
        i6 = OOC_ARRAY_LENGTH(i5, 0);
        i7 = i3+1;
        i5 = *(OOC_UINT16*)(i5+(_check_index(i7, i6, OOC_UINT32, 26442))*2);
        i5 = i5==10u;
        if (i5) goto l19;
        {register OOC_INT32 h0=i3;i3=i4;i4=h0;}
        goto l22;
l19:
        i3 = i4+1;
        delta = i3;
        i4=i7;
        goto l22;
      default:
        i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26545))+20);
        i5 = _check_pointer(i5, 26552);
        i6 = OOC_ARRAY_LENGTH(i5, 0);
        i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26567))+20);
        i7 = _check_pointer(i7, 26574);
        i8 = OOC_ARRAY_LENGTH(i7, 0);
        i7 = *(OOC_UINT16*)(i7+(_check_index(i3, i8, OOC_UINT32, 26574))*2);
        *(OOC_UINT16*)(i5+(_check_index((i3-i4), i6, OOC_UINT32, 26552))*2) = i7;
        {register OOC_INT32 h0=i3;i3=i4;i4=h0;}
        goto l22;
      }
l22:
      i4 = i4+1;
      i = i4;
      i5 = i4!=i2;
      if (!i5) goto l27;
      {register OOC_INT32 h0=i3;i3=i4;i4=h0;}
      goto l14_loop;
l27:
      i2 = i2-i3;
      len = i2;
      i3 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], (i2+2));
      str = (XML_UnicodeBuffer__CharArray)i3;
      i = 0;
      i4 = 0<i2;
      if (!i4) goto l35;
      i4=0;
l30_loop:
      i5 = _check_pointer(i3, 26721);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26730))+20);
      i7 = _check_pointer(i7, 26737);
      i8 = OOC_ARRAY_LENGTH(i7, 0);
      i7 = *(OOC_UINT16*)(i7+(_check_index(i4, i8, OOC_UINT32, 26737))*2);
      *(OOC_UINT16*)(i5+(_check_index(i4, i6, OOC_UINT32, 26721))*2) = i7;
      i4 = i4+1;
      i = i4;
      i5 = i4<i2;
      if (i5) goto l30_loop;
l35:
      XML_Parser__ParserDesc_ParseDocument_CheckInvalidChars();
      XML_UnicodeBuffer__InputDesc_Close((XML_UnicodeBuffer__Input)i1);
      i1=i3;
l36:
      i0 = *(OOC_INT8*)((_check_pointer(i0, 26877))+8);
      switch (i0) {
      case 2:
        i0 = _check_pointer(i1, 26933);
        i3 = OOC_ARRAY_LENGTH(i0, 0);
        *(OOC_UINT16*)(i0+(_check_index(i2, i3, OOC_UINT32, 26933))*2) = 65535u;
        goto l41;
      case 3:
        i0 = _check_pointer(i1, 27007);
        i3 = OOC_ARRAY_LENGTH(i0, 0);
        *(OOC_UINT16*)(i0+(_check_index(i2, i3, OOC_UINT32, 27007))*2) = 65534u;
        goto l41;
      default:
        _failed_case(i0, 26866);
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
      *(OOC_UINT8*)((_check_pointer(i0, 27501))+17) = 1u;
l3:
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27571))+84);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 27550))+88);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 27580)), 0);
      i2 = i3==i2;
      if (!i2) goto l14;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27617))+84);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 27626)), 0);
      i2 = (OOC_INT32)RT0__NewObject(_td_XML_Parser__PEInfoList.baseTypes[0], (i2+4));
      newList = (XML_Parser__PEInfoList)i2;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27671))+84);
      i = 0;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 27680)), 0);
      i4 = 0<i3;
      if (!i4) goto l13;
      i4=0;
l8_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27713))+84);
      i5 = _check_pointer(i5, 27722);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i7 = _check_pointer(i2, 27705);
      i8 = OOC_ARRAY_LENGTH(i7, 0);
      _copy_block((i5+((_check_index(i4, i6, OOC_UINT32, 27722))*28)),(i7+((_check_index(i4, i8, OOC_UINT32, 27705))*28)),28);
      i4 = i4+1;
      i = i4;
      i5 = i4<i3;
      if (i5) goto l8_loop;
l13:
      *(OOC_INT32*)((_check_pointer(i1, 27748))+84) = i2;
l14:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27787))+84);
      i2 = _check_pointer(i2, 27796);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 27798))+88);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      *(OOC_INT32*)((i2+((_check_index(i3, i4, OOC_UINT32, 27796))*28))+20) = i0;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27838))+84);
      i2 = _check_pointer(i2, 27847);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 27849))+88);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      i5 = (OOC_INT32)chars;
      *(OOC_INT32*)(i2+((_check_index(i3, i4, OOC_UINT32, 27847))*28)) = i5;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27890))+84);
      i2 = _check_pointer(i2, 27899);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 27901))+88);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      i5 = cpos;
      *(OOC_INT32*)((i2+((_check_index(i3, i4, OOC_UINT32, 27899))*28))+4) = i5;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27940))+84);
      i2 = _check_pointer(i2, 27949);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 27951))+88);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      i5 = *(OOC_INT32*)((_check_pointer(i1, 27982))+92);
      *(OOC_INT32*)((i2+((_check_index(i3, i4, OOC_UINT32, 27949))*28))+8) = i5;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28001))+84);
      i2 = _check_pointer(i2, 28010);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 28012))+88);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      i5 = *(OOC_INT32*)((_check_pointer(i1, 28046))+96);
      *(OOC_INT32*)((i2+((_check_index(i3, i4, OOC_UINT32, 28010))*28))+12) = i5;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28068))+84);
      i2 = _check_pointer(i2, 28077);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 28079))+88);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      i5 = *(OOC_INT32*)((_check_pointer(i1, 28113))+100);
      *(OOC_INT32*)((i2+((_check_index(i3, i4, OOC_UINT32, 28077))*28))+16) = i5;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28135))+84);
      i2 = _check_pointer(i2, 28144);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 28146))+88);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28168))+36);
      *(OOC_INT32*)((i2+((_check_index(i3, i4, OOC_UINT32, 28144))*28))+24) = i5;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 28186))+88);
      *(OOC_INT32*)((_check_pointer(i1, 28186))+88) = (i2+1);
      i2 = syncEntity;
      if (i2) goto l17;
      i3=0u;
      goto l19;
l17:
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28238)))), &_td_XML_DTD__ExternalEntityDesc);
      
l19:
      if (i3) goto l47;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28897)))), &_td_XML_DTD__ExternalEntityDesc);
      if (i1) goto l23;
      i1=0u;
      goto l25;
l23:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28929))+12);
      i1 = i1==(OOC_INT32)0;
      
l25:
      if (!i1) goto l27;
      i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Internalize((XML_DTD__ExternalEntity)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29013)))), &_td_XML_DTD__ExternalEntityDesc, 29013)));
      XML_DTD__EntityDesc_SetEntityValue((XML_DTD__Entity)i0, (XML_UnicodeBuffer__CharArray)i1);
l27:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29074))+12);
      i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Clone((XML_UnicodeBuffer__CharArray)i1);
      chars = (XML_UnicodeBuffer__CharArray)i1;
      i3 = *(OOC_INT8*)((_check_pointer(i0, 29118))+8);
      switch (i3) {
      case 0:
      case 2:
        i2 = _check_pointer(i1, 29207);
        i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 29218)), 0);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        *(OOC_UINT16*)(i2+(_check_index((i1-2), i3, OOC_UINT32, 29207))*2) = 65535u;
        goto l39;
      case 1:
      case 3:
        i3 = _check_pointer(i1, 29327);
        i4 = OOC_ARRAY_LENGTH((_check_pointer(i1, 29338)), 0);
        i5 = OOC_ARRAY_LENGTH(i3, 0);
        *(OOC_UINT16*)(i3+(_check_index((i4-2), i5, OOC_UINT32, 29327))*2) = 65534u;
        i3 = (OOC_INT32)p;
        i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 29732))+72);
        i3 = i3==(OOC_INT32)0;
        if (!i3) goto l39;
        i3 = _check_pointer(i1, 29779);
        i4 = OOC_ARRAY_LENGTH((_check_pointer(i1, 29790)), 0);
        i5 = OOC_ARRAY_LENGTH(i3, 0);
        *(OOC_UINT16*)(i3+(_check_index((i4-2), i5, OOC_UINT32, 29779))*2) = 32u;
        if (i2) goto l35;
        i2 = _check_pointer(i1, 29927);
        i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 29938)), 0);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        *(OOC_UINT16*)(i2+(_check_index((i1-1), i3, OOC_UINT32, 29927))*2) = 65534u;
        goto l39;
l35:
        i2 = _check_pointer(i1, 29854);
        i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 29865)), 0);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        *(OOC_UINT16*)(i2+(_check_index((i1-1), i3, OOC_UINT32, 29854))*2) = 65535u;
        goto l39;
      default:
        _failed_case(i3, 29107);
        goto l39;
      }
l39:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 30034))+8);
      i1 = i1==0;
      if (i1) goto l42;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 30091))+8);
      i1 = i1==1;
      
      goto l44;
l42:
      i1=1u;
l44:
      if (!i1) goto l52;
      i1 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30145))+4);
      *(OOC_INT32*)((_check_pointer(i1, 30148))+16) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30181)))), &_td_XML_DTD__InternalEntityDesc, 30181));
      goto l52;
l47:
      i2 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_GetBuffer((XML_DTD__ExternalEntity)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28350)))), &_td_XML_DTD__ExternalEntityDesc, 28350)));
      *(OOC_INT32*)((_check_pointer(i1, 28320))+36) = i2;
      XML_Parser__ParserDesc_ParseDocument_SetFileEntity((XML_DTD__ExternalEntity)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28402)))), &_td_XML_DTD__ExternalEntityDesc, 28402)));
      XML_Parser__ParserDesc_ParseDocument_ResetLocator();
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28455))+36);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l50;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28619))+36);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28623))+20);
      chars = (XML_UnicodeBuffer__CharArray)i0;
      goto l52;
l50:
      i0 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], 2);
      chars = (XML_UnicodeBuffer__CharArray)i0;
      i0 = _check_pointer(i0, 28562);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      *(OOC_UINT16*)(i0+(_check_index(0, i1, OOC_UINT8, 28562))*2) = 65535u;
l52:
      cpos = 0;
      cdelta = 0;
      cstart = 0;
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_PopEntity(void) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 i;

      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30373))+72);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l3;
      i1 = (OOC_INT32)dtd;
      i2 = cdelta;
      i3 = cpos;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30545))+72);
      i4 = cstart;
      i5 = (OOC_INT32)chars;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30575)))), XML_DTD__BuilderDesc_NewCharacters)),XML_DTD__BuilderDesc_NewCharacters)((XML_DTD__Builder)i1, (XML_UnicodeBuffer__CharArray)i5, i4, (i3-i2), 1u);
      XML_DTD__AttValueDesc_Append((XML_DTD__AttValue)i0, (XML_DTD__Fragment)i1);
l3:
      i0 = (OOC_INT32)p;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 30657))+88);
      *(OOC_INT32*)((_check_pointer(i0, 30657))+88) = (i1-1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30683))+36);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l6;
      i0=0u;
      goto l8;
l6:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30707))+84);
      i1 = _check_pointer(i1, 30716);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 30718))+88);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30699))+36);
      i1 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 30716))*28))+24);
      i0 = i0!=i1;
      
l8:
      if (!i0) goto l10;
      XML_Parser__ParserDesc_ParseDocument_CheckInvalidChars();
      i0 = (OOC_INT32)p;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30778))+36);
      XML_UnicodeBuffer__InputDesc_Close((XML_UnicodeBuffer__Input)i0);
l10:
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30872))+84);
      i1 = _check_pointer(i1, 30881);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 30883))+88);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i1+((_check_index(i2, i3, OOC_UINT32, 30881))*28));
      chars = (XML_UnicodeBuffer__CharArray)i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30923))+84);
      i1 = _check_pointer(i1, 30932);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 30934))+88);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 30932))*28))+4);
      cpos = i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30980))+84);
      i1 = _check_pointer(i1, 30989);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 30991))+88);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 30989))*28))+8);
      *(OOC_INT32*)((_check_pointer(i0, 30965))+92) = i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31044))+84);
      i1 = _check_pointer(i1, 31053);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 31055))+88);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 31053))*28))+12);
      *(OOC_INT32*)((_check_pointer(i0, 31026))+96) = i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31111))+84);
      i1 = _check_pointer(i1, 31120);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 31122))+88);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 31120))*28))+16);
      *(OOC_INT32*)((_check_pointer(i0, 31093))+100) = i1;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 31165))+88);
      i1 = i1-1;
      i = i1;
      i2 = i1>=0;
      if (i2) goto l13;
      i2=0u;
      goto l15;
l13:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31207))+84);
      i2 = _check_pointer(i2, 31216);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i1, i3, OOC_UINT32, 31216))*28))+20);
      i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31228)))), &_td_XML_DTD__ExternalEntityDesc));
      
l15:
      if (!i2) goto l27;
l18_loop:
      i1 = i1-1;
      i = i1;
      i2 = i1>=0;
      if (i2) goto l21;
      i2=0u;
      goto l23;
l21:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31207))+84);
      i2 = _check_pointer(i2, 31216);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i1, i3, OOC_UINT32, 31216))*28))+20);
      i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31228)))), &_td_XML_DTD__ExternalEntityDesc));
      
l23:
      if (i2) goto l18_loop;
l27:
      i2 = i1>=0;
      if (i2) goto l30;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31405))+52);
      XML_Parser__ParserDesc_ParseDocument_SetFileEntity((XML_DTD__ExternalEntity)i0);
      goto l31;
l30:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31328))+84);
      i0 = _check_pointer(i0, 31337);
      i2 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)((i0+((_check_index(i1, i2, OOC_UINT32, 31337))*28))+20);
      XML_Parser__ParserDesc_ParseDocument_SetFileEntity((XML_DTD__ExternalEntity)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31353)))), &_td_XML_DTD__ExternalEntityDesc, 31353)));
l31:
      i0 = (OOC_INT32)p;
      i2 = *(OOC_INT32*)((_check_pointer(i0, 31456))+88);
      i1 = i1!=(i2-1);
      if (i1) goto l34;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31697))+4);
      *(OOC_INT32*)((_check_pointer(i1, 31700))+16) = (OOC_INT32)0;
      goto l35;
l34:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31557))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31583))+84);
      i2 = _check_pointer(i2, 31592);
      i3 = *(OOC_INT32*)((_check_pointer(i0, 31594))+88);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index((i3-1), i4, OOC_UINT32, 31592))*28))+20);
      *(OOC_INT32*)((_check_pointer(i1, 31560))+16) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31622)))), &_td_XML_DTD__InternalEntityDesc, 31622));
l35:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31760))+84);
      i1 = _check_pointer(i1, 31769);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 31771))+88);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 31769))*28))+24);
      *(OOC_INT32*)((_check_pointer(i0, 31751))+36) = i1;
      i1 = cpos;
      cstart = i1;
      cdelta = 0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31843))+84);
      i1 = _check_pointer(i1, 31852);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 31854))+88);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 31852))*28))+20);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l38;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31897))+84);
      i1 = _check_pointer(i1, 31906);
      i0 = *(OOC_INT32*)((_check_pointer(i0, 31908))+88);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index(i0, i2, OOC_UINT32, 31906))*28))+20);
      *(OOC_UINT8*)((_check_pointer(i0, 31929))+17) = 0u;
l38:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_NextBlock(void) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT32 oldOffset;
      OOC_CHAR8 res;

      i0 = (OOC_INT32)chars;
      i1 = _check_pointer(i0, 32113);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 32113))*2);
      _assert((i1==65534u), 127, 32100);
      i1 = (OOC_INT32)p;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 32152))+88);
      i2 = i2!=0;
      if (i2) goto l3;
      i2=0u;
      goto l5;
l3:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32174))+36);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 32178))+20);
      i2 = i2!=i0;
      
l5:
      if (i2) goto l7;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32700))+36);
      i0 = *(OOC_INT32*)((_check_pointer(i0, 32704))+24);
      oldOffset = i0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32738))+36);
      i1 = XML_UnicodeBuffer__InputDesc_NextBlock((XML_UnicodeBuffer__Input)i1);
      res = i1;
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32775))+36);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 32779))+20);
      chars = (XML_UnicodeBuffer__CharArray)i2;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32808))+36);
      i2 = *(OOC_INT32*)((_check_pointer(i2, 32812))+24);
      i3 = cpos;
      cpos = (i3-(i2-i0));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32863))+36);
      i2 = *(OOC_INT32*)((_check_pointer(i2, 32867))+24);
      i3 = cstart;
      cstart = (i3-(i2-i0));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32926))+36);
      i2 = *(OOC_INT32*)((_check_pointer(i2, 32930))+24);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 32910))+96);
      *(OOC_INT32*)((_check_pointer(i1, 32910))+96) = (i3-(i2-i0));
      goto l11;
l7:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32316))+72);
      i1 = i1==(OOC_INT32)0;
      if (!i1) goto l10;
      i1 = _check_pointer(i0, 32369);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 32380)), 0);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT16*)(i1+(_check_index((i2-2), i3, OOC_UINT32, 32369))*2);
      _assert((i1==32u), 127, 32356);
      i1 = _check_pointer(i0, 32409);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 32420)), 0);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      *(OOC_UINT16*)(i1+(_check_index((i0-2), i2, OOC_UINT32, 32409))*2) = 65534u;
l10:
      XML_Parser__ParserDesc_ParseDocument_PopEntity();
l11:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_DiscardPreviousInput(void) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33046))+36);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33050))+20);
      i2 = (OOC_INT32)chars;
      i1 = i1==i2;
      if (!i1) goto l4;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33081))+36);
      i1 = cpos;
      *(OOC_INT32*)((_check_pointer(i0, 33085))+32) = i1;
      cstart = i1;
l4:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_EndOfLine(void) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33324))+36);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33328))+20);
      i2 = (OOC_INT32)chars;
      i1 = i2==i1;
      if (!i1) goto l4;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 33356))+92);
      *(OOC_INT32*)((_check_pointer(i0, 33356))+92) = (i1+1);
      i1 = cpos;
      *(OOC_INT32*)((_check_pointer(i0, 33378))+96) = i1;
      *(OOC_INT32*)((_check_pointer(i0, 33410))+100) = 0;
l4:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_Tab(void) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT32 currColumn;

      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33629))+36);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33633))+20);
      i2 = (OOC_INT32)chars;
      i1 = i2==i1;
      if (!i1) goto l4;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 33675))+96);
      i2 = cpos;
      i3 = *(OOC_INT32*)((_check_pointer(i0, 33690))+100);
      i1 = (i2-i1)+i3;
      currColumn = i1;
      i2 = *(OOC_INT32*)((_check_pointer(i0, 33719))+100);
      *(OOC_INT32*)((_check_pointer(i0, 33719))+100) = (i2+((8-(_mod(i1,8)))-1));
l4:
      return;
      ;
    }

    
    OOC_CHAR8 XML_Parser__ParserDesc_ParseDocument_LookingAtS(void) {
      register OOC_INT32 i0,i1,i2,i3,i4;

      i0 = (OOC_INT32)chars;
      i1 = _check_pointer(i0, 33906);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 33906))*2);
      i1 = (OOC_UINT16)i1<=(OOC_UINT16)32u;
      if (i1) goto l23;
      i1 = (OOC_INT32)p;
      i2 = *(OOC_UINT8*)((_check_pointer(i1, 33960))+67);
      if (i2) goto l5;
      i2 = *(OOC_UINT8*)((_check_pointer(i1, 33983))+68);
      
      goto l7;
l5:
      i2=1u;
l7:
      if (i2) goto l9;
      i2=0u;
      goto l11;
l9:
      i2 = _check_pointer(i0, 34023);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT16*)(i2+(_check_index(i3, i4, OOC_UINT32, 34023))*2);
      i2 = i2==37u;
      
l11:
      if (i2) goto l13;
      return 0u;
      goto l24;
l13:
      i2 = _check_pointer(i0, 34058);
      i3 = i3+1;
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT16*)(i2+(_check_index(i3, i4, OOC_UINT32, 34058))*2);
      i2 = i2==65534u;
      if (i2) goto l16;
      i0 = _check_pointer(i0, 34400);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i1, OOC_UINT32, 34400))*2);
      i0 = XML_Parser__IsNameChar(i0);
      return i0;
      goto l24;
l16:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34114))+36);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34118))+20);
      i0 = i0==i1;
      if (i0) goto l19;
      return 0u;
      goto l24;
l19:
      cpos = i3;
      XML_Parser__ParserDesc_ParseDocument_NextBlock();
      i0 = cpos;
      i0 = i0-1;
      cpos = i0;
      i1 = (OOC_INT32)chars;
      i1 = _check_pointer(i1, 34294);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i0 = *(OOC_UINT16*)(i1+(_check_index((i0+1), i2, OOC_UINT32, 34294))*2);
      i0 = XML_Parser__IsNameChar(i0);
      return i0;
      goto l24;
l23:
      return 1u;
l24:
      _failed_function(33808); return 0;
      ;
    }

    
    OOC_CHAR8 XML_Parser__ParserDesc_ParseDocument_LookingAtSnoPE(void) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 34588);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 34588))*2);
      return ((OOC_UINT16)i0<=(OOC_UINT16)32u);
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
      i3 = _check_pointer(i2, 35479);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i5 = cpos;
      i3 = *(OOC_UINT16*)(i3+(_check_index(i5, i4, OOC_UINT32, 35479))*2);
      i3 = i3==65534u;
      if (i3) goto l17;
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 35789)));
      i3 = i3==0u;
      if (i3) goto l10;
      i2 = _check_pointer(i2, 36030);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 36019)));
      i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i3, OOC_UINT32, 36030))*2);
      i2 = i4==i2;
      if (!i2) goto l7;
      goto l8;
l7:
      cpos = (i5-i1);
      return 0u;
      
      goto l1_loop;
l8:
      i1 = i1+1;
      i = i1;
      cpos = (i5+1);
      
      goto l1_loop;
l10:
      i3 = i5-i1;
      cpos = i3;
      switch (i0) {
      case 1:
        i2 = _check_pointer(i2, 35926);
        i4 = OOC_ARRAY_LENGTH(i2, 0);
        i2 = *(OOC_UINT16*)(i2+(_check_index((i3+i1), i4, OOC_UINT32, 35926))*2);
        i2 = XML_Parser__IsNameChar(i2);
        return (!i2);
        goto l1_loop;
      case 0:
        return 1u;
        goto l1_loop;
      default:
        _failed_case(i0, 35839);
        goto l1_loop;
      }
l17:
      i3 = (OOC_INT32)p;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 35534))+36);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 35538))+20);
      i2 = i2==i3;
      if (!i2) goto l19;
      goto l20;
l19:
      cpos = (i5-i1);
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 35747)));
      return (i2==0u);
      goto l1_loop;
l20:
      XML_Parser__ParserDesc_ParseDocument_NextBlock();
      goto l1_loop;
l24:
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_NextChar(void) {
      register OOC_INT32 i0,i1,i2,i3;

      i0 = (OOC_INT32)chars;
      i1 = _check_pointer(i0, 36243);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 36243))*2);
      i1 = i1!=65535u;
      if (!i1) goto l6;
      i1 = i3+1;
      cpos = i1;
      i0 = _check_pointer(i0, 36312);
      i2 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = *(OOC_UINT16*)(i0+(_check_index(i1, i2, OOC_UINT32, 36312))*2);
      i0 = i0==65534u;
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
      i0 = _check_pointer(i0, 36632);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 36632))*2);
      i0 = XML_Parser__IsNameChar(i0);
      if (i0) goto l3;
      XML_Parser__ParserDesc_ParseDocument_Err(11);
      XML_Parser__ParserDesc_ParseDocument_NextChar();
      i0 = (OOC_INT32)XML_Parser__noName;
      return (XML_UnicodeBuffer__CharArray)i0;
      goto l50;
l3:
      i0 = cpos;
      cstart = i0;
      i1 = (OOC_INT32)chars;
      i1 = _check_pointer(i1, 36686);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT16*)(i1+(_check_index(i0, i2, OOC_UINT32, 36686))*2);
      i1 = i1==58u;
      if (i1) goto l6;
      colon = (-1);
      i0=(-1);
      goto l14;
l6:
      colon = i0;
      i1 = checkForQName;
      if (!i1) goto l14;
      i1 = noColon;
      if (i1) goto l11;
      XML_Parser__ParserDesc_ParseDocument_Err(31);
      goto l14;
l11:
      XML_Parser__ParserDesc_ParseDocument_Err(30);
l14:
      i1 = cpos;
      cpos = (i1+1);
      i1 = noColon;
      i2 = checkForQName;
      
l15_loop:
      i3 = (OOC_INT32)chars;
      i4 = _check_pointer(i3, 37093);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = cpos;
      i4 = *(OOC_UINT16*)(i4+(_check_index(i6, i5, OOC_UINT32, 37093))*2);
      i4 = i4==65534u;
      if (i4) goto l36;
      i4 = _check_pointer(i3, 37372);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = *(OOC_UINT16*)(i4+(_check_index(i6, i5, OOC_UINT32, 37372))*2);
      i4 = i4==58u;
      if (i4) goto l20;
      i4=0u;
      goto l22;
l20:
      i4=i2;
l22:
      if (i4) goto l28;
      i3 = _check_pointer(i3, 37711);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT16*)(i3+(_check_index(i6, i4, OOC_UINT32, 37711))*2);
      i3 = XML_Parser__IsNameChar(i3);
      if (!i3) goto l25;
      goto l26;
l25:
      i0 = cpos;
      i1 = cstart;
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_GetString(i1, i0);
      string = (XML_UnicodeBuffer__CharArray)i0;
      
      goto l43;
l26:
      i3 = cpos;
      cpos = (i3+1);
      goto l15_loop;
l28:
      if (i1) goto l33;
      i0 = i0>=0;
      if (i0) goto l31;
      goto l34;
l31:
      XML_Parser__ParserDesc_ParseDocument_Err(31);
      goto l34;
l33:
      XML_Parser__ParserDesc_ParseDocument_Err(30);
l34:
      i0 = cpos;
      colon = i0;
      cpos = (i0+1);
      
      goto l15_loop;
l36:
      i4 = (OOC_INT32)p;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 37150))+36);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 37154))+20);
      i3 = i3!=i4;
      if (i3) goto l40;
      XML_Parser__ParserDesc_ParseDocument_NextBlock();
      goto l15_loop;
l40:
      i0 = cstart;
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_GetString(i0, i6);
      string = (XML_UnicodeBuffer__CharArray)i0;
      XML_Parser__ParserDesc_ParseDocument_NextBlock();
      
l43:
      if (i2) goto l45;
      i1=0u;
      goto l47;
l45:
      i1 = _check_pointer(i0, 37888);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 37900)), 0);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT16*)(i1+(_check_index((i2-2), i3, OOC_UINT32, 37888))*2);
      i1 = i1==58u;
      
l47:
      if (!i1) goto l49;
      XML_Parser__ParserDesc_ParseDocument_Err(31);
l49:
      return (XML_UnicodeBuffer__CharArray)i0;
l50:
      _failed_function(36419); return 0;
      ;
    }

    
    XML_UnicodeBuffer__CharArray XML_Parser__ParserDesc_ParseDocument_Name(OOC_CHAR8 noColon) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 38290);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 38290))*2);
      i0 = XML_Parser__IsNameChar0(i0);
      if (i0) goto l3;
      XML_Parser__ParserDesc_ParseDocument_Err(10);
      XML_Parser__ParserDesc_ParseDocument_NextChar();
      i0 = (OOC_INT32)XML_Parser__noName;
      return (XML_UnicodeBuffer__CharArray)i0;
      goto l4;
l3:
      i0 = (OOC_INT32)p;
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 38328))+61);
      i1 = noColon;
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Nmtoken(i0, i1);
      return (XML_UnicodeBuffer__CharArray)i0;
l4:
      _failed_function(38154); return 0;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_CheckChar(OOC_CHAR8 ch) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_CHAR8 str[2];

      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 38674);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 38674))*2);
      i1 = ch;
      i0 = i0!=i1;
      if (!i0) goto l3;
      XML_Parser__ParserDesc_ParseDocument_Err(12);
      _copy_8((const void*)"X",(void*)(OOC_INT32)str,2);
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 2, OOC_UINT8, 38751))) = i1;
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38771))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38771))+104);
      i2 = (OOC_INT32)Msg__GetStringPtr((void*)(OOC_INT32)str, 2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38782)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "symbol", 7, (Msg__StringPtr)i2);
l3:
      i0 = (OOC_INT32)chars;
      i1 = _check_pointer(i0, 38861);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 38861))*2);
      i1 = i1!=65535u;
      if (!i1) goto l9;
      i1 = i3+1;
      cpos = i1;
      i0 = _check_pointer(i0, 38930);
      i2 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = *(OOC_UINT16*)(i0+(_check_index(i1, i2, OOC_UINT32, 38930))*2);
      i0 = i0==65534u;
      if (!i0) goto l9;
      XML_Parser__ParserDesc_ParseDocument_NextBlock();
l9:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_SkippedEntity(XML_UnicodeBuffer__CharArray name) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)p;
      *(OOC_UINT8*)((_check_pointer(i0, 39275))+64) = 0u;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39314))+52);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 39330))+48);
      i1 = i1!=0;
      if (!i1) goto l3;
      *(OOC_UINT8*)((_check_pointer(i0, 39378))+63) = 0u;
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
      i1=0u;
      goto l9;
l3:
      i1 = (OOC_INT32)p;
      i2 = *(OOC_UINT8*)((_check_pointer(i1, 39739))+67);
      i2 = !i2;
      if (i2) goto l6;
      i1=0u;
      goto l9;
l6:
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 39762))+68);
      i1 = !i1;
      
l9:
      if (!i1) goto l11;
      XML_Parser__ParserDesc_ParseDocument_Err(115);
l11:
      XML_Parser__ParserDesc_ParseDocument_CheckChar(37u);
      i1 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39881))+36);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 39885))+24);
      i2 = cstart;
      i1 = i2+i1;
      oldCStart = i1;
      i2 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(1u);
      name = (XML_UnicodeBuffer__CharArray)i2;
      i3 = (OOC_INT32)p;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 39957))+36);
      i3 = *(OOC_INT32*)((_check_pointer(i3, 39961))+24);
      cstart = (i1-i3);
      XML_Parser__ParserDesc_ParseDocument_CheckChar(59u);
      i1 = (OOC_INT32)dtd;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40019))+8);
      i1 = (OOC_INT32)XML_DTD__NamespaceDesc_Get((XML_DTD__Namespace)i1, (XML_UnicodeBuffer__CharArray)i2);
      decl = (XML_DTD__Declaration)i1;
      i3 = i1==(OOC_INT32)0;
      if (i3) goto l48;
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40424)))), &_td_XML_DTD__EntityDesc, 40424);
      entity = (XML_DTD__Entity)i1;
      if (i0) goto l19;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41766)))), &_td_XML_DTD__ExternalEntityDesc);
      if (!i0) goto l18;
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Internalize((XML_DTD__ExternalEntity)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41854)))), &_td_XML_DTD__ExternalEntityDesc, 41854)));
      XML_DTD__EntityDesc_SetEntityValue((XML_DTD__Entity)i1, (XML_UnicodeBuffer__CharArray)i0);
l18:
      XML_Parser__ParserDesc_ParseDocument_PushEntity((XML_DTD__Entity)i1, 0u);
      goto l61;
l19:
      i0 = (OOC_INT32)p;
      i3 = *(OOC_UINT8*)((_check_pointer(i0, 40624))+60);
      if (i3) goto l22;
      i3 = *(OOC_INT8*)((_check_pointer(i1, 40667))+8);
      i3 = i3==1;
      
      goto l24;
l22:
      i3=1u;
l24:
      if (i3) goto l26;
      XML_Parser__ParserDesc_ParseDocument_SkippedEntity((XML_UnicodeBuffer__CharArray)i2);
      goto l61;
l26:
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 40745))+67);
      if (i2) goto l29;
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 40768))+68);
      
      goto l30;
l29:
      i0=1u;
l30:
      i0 = !i0;
      inInternalSubset = i0;
      XML_Parser__ParserDesc_ParseDocument_PushEntity((XML_DTD__Entity)i1, i0);
      i2 = (OOC_INT32)p;
      i3 = *(OOC_UINT8*)((_check_pointer(i2, 40943))+68);
      oldFlag = i3;
      i4 = *(OOC_INT8*)((_check_pointer(i1, 40985))+8);
      i4 = i4==3;
      if (!i4) goto l36;
      *(OOC_UINT8*)((_check_pointer(i2, 41043))+68) = 1u;
      i2 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<?xml", 6, 1);
      if (!i2) goto l36;
      XML_Parser__ParserDesc_ParseDocument_XMLDecl((XML_DTD__ExternalEntity)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41168)))), &_td_XML_DTD__ExternalEntityDesc, 41168)));
l36:
      XML_Parser__ParserDesc_ParseDocument_extSubsetDecl();
      i2 = (OOC_INT32)chars;
      i2 = _check_pointer(i2, 41281);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      i5 = cpos;
      i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i4, OOC_UINT32, 41281))*2);
      i2 = i2!=65535u;
      if (!i2) goto l39;
      XML_Parser__ParserDesc_ParseDocument_Err(28);
l39:
      i1 = *(OOC_INT8*)((_check_pointer(i1, 41404))+8);
      i1 = i1==3;
      if (!i1) goto l43;
      i1 = (OOC_INT32)p;
      *(OOC_UINT8*)((_check_pointer(i1, 41462))+68) = i3;
l43:
      if (!i0) goto l61;
      XML_Parser__ParserDesc_ParseDocument_PopEntity();
      goto l61;
l48:
      i0 = (OOC_INT32)p;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 40134))+62);
      if (i1) goto l55;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 40163))+63);
      if (i1) goto l53;
      i0=0u;
      goto l57;
l53:
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 40188))+60);
      
      goto l57;
l55:
      i0=1u;
l57:
      if (i0) goto l59;
      XML_Parser__ParserDesc_ParseDocument_SkippedEntity((XML_UnicodeBuffer__CharArray)i2);
      goto l61;
l59:
      XML_Parser__ParserDesc_ParseDocument_Err(211);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40264))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40264))+104);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 40326)), 0);
      i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 40326)), i3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40275)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i2);
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
      i3 = _check_pointer(i2, 42417);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i5 = cpos;
      i3 = *(OOC_UINT16*)(i3+(_check_index(i5, i4, OOC_UINT32, 42417))*2);
      switch (i3) {
      case 65534u:
        XML_Parser__ParserDesc_ParseDocument_NextBlock();
        goto l1_loop;
      case 32u:
        cpos = (i5+1);
        goto l1_loop;
      case 10u:
        cpos = (i5+1);
        XML_Parser__ParserDesc_ParseDocument_EndOfLine();
        goto l1_loop;
      case 13u:
        i3 = i5+1;
        cpos = i3;
        i2 = _check_pointer(i2, 42624);
        i4 = OOC_ARRAY_LENGTH(i2, 0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i3, i4, OOC_UINT32, 42624))*2);
        i2 = i2==65534u;
        if (!i2) goto l9;
        XML_Parser__ParserDesc_ParseDocument_NextBlock();
l9:
        i2 = (OOC_INT32)chars;
        i2 = _check_pointer(i2, 42712);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        i4 = cpos;
        i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 42712))*2);
        i2 = i2==10u;
        if (i2) goto l11;
        goto l12;
l11:
        cpos = (i4+1);
l12:
        XML_Parser__ParserDesc_ParseDocument_EndOfLine();
        goto l1_loop;
      case 9u:
        XML_Parser__ParserDesc_ParseDocument_Tab();
        i2 = cpos;
        cpos = (i2+1);
        goto l1_loop;
      case 37u:
        if (!i1) goto l25;
        XML_Parser__ParserDesc_ParseDocument_PEReference(0u);
        XML_Parser__ParserDesc_ParseDocument_OptS(i0);
        goto l1_loop;
      default:
        i2 = _check_pointer(i2, 43014);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i3, OOC_UINT32, 43014))*2);
        i2 = (OOC_UINT16)i2<(OOC_UINT16)32u;
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

    
    void XML_Parser__ParserDesc_ParseDocument_S(void) {
      register OOC_INT32 i0;

      i0 = XML_Parser__ParserDesc_ParseDocument_LookingAtS();
      if (i0) goto l3;
      XML_Parser__ParserDesc_ParseDocument_Err(9);
      goto l4;
l3:
      XML_Parser__ParserDesc_ParseDocument_OptS(0u);
l4:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_SnoPE(void) {
      register OOC_INT32 i0;

      i0 = XML_Parser__ParserDesc_ParseDocument_LookingAtSnoPE();
      if (i0) goto l3;
      XML_Parser__ParserDesc_ParseDocument_Err(9);
      goto l4;
l3:
      XML_Parser__ParserDesc_ParseDocument_OptS(1u);
l4:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_ControlChar(OOC_CHAR16 eolReplacement) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 cend;

      i0 = (OOC_INT32)chars;
      i1 = _check_pointer(i0, 44056);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 44056))*2);
      i1 = (OOC_UINT16)i1<(OOC_UINT16)32u;
      if (i1) goto l3;
      i1 = _check_pointer(i0, 44079);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 44079))*2);
      i1 = i1==65534u;
      
      goto l4;
l3:
      i1=1u;
l4:
      i2 = cdelta;
      i2 = i3-i2;
      _assert(i1, 127, 44042);
      cend = i2;
      i1 = _check_pointer(i0, 44151);
      i4 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i4, OOC_UINT32, 44151))*2);
      switch (i1) {
      case 65534u:
        XML_Parser__ParserDesc_ParseDocument_NextBlock();
        goto l30;
      case 32u:
        i0 = _check_pointer(i0, 44231);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 44231))*2) = 32u;
        cpos = (i3+1);
        goto l30;
      case 10u:
        i1 = (OOC_INT32)p;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44296))+36);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44300))+20);
        i1 = i0==i1;
        if (i1) goto l11;
        i1 = _check_pointer(i0, 44521);
        i4 = OOC_ARRAY_LENGTH(i1, 0);
        i0 = _check_pointer(i0, 44536);
        i5 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i5, OOC_UINT32, 44536))*2);
        *(OOC_UINT16*)(i1+(_check_index(i2, i4, OOC_UINT32, 44521))*2) = i0;
        cpos = (i3+1);
        goto l30;
l11:
        i0 = _check_pointer(i0, 44329);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        i4 = eolReplacement;
        *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 44329))*2) = i4;
        cpos = (i3+1);
        XML_Parser__ParserDesc_ParseDocument_EndOfLine();
        goto l30;
      case 13u:
        i1 = (OOC_INT32)p;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44606))+36);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44610))+20);
        i1 = i0==i1;
        if (i1) goto l16;
        i1 = _check_pointer(i0, 45034);
        i4 = OOC_ARRAY_LENGTH(i1, 0);
        i0 = _check_pointer(i0, 45049);
        i5 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i5, OOC_UINT32, 45049))*2);
        *(OOC_UINT16*)(i1+(_check_index(i2, i4, OOC_UINT32, 45034))*2) = i0;
        cpos = (i3+1);
        goto l30;
l16:
        i1 = _check_pointer(i0, 44639);
        i4 = OOC_ARRAY_LENGTH(i1, 0);
        i5 = eolReplacement;
        *(OOC_UINT16*)(i1+(_check_index(i2, i4, OOC_UINT32, 44639))*2) = i5;
        i1 = i3+1;
        cpos = i1;
        i0 = _check_pointer(i0, 44706);
        i2 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = *(OOC_UINT16*)(i0+(_check_index(i1, i2, OOC_UINT32, 44706))*2);
        i0 = i0==65534u;
        if (!i0) goto l19;
        XML_Parser__ParserDesc_ParseDocument_NextBlock();
l19:
        i0 = (OOC_INT32)chars;
        i0 = _check_pointer(i0, 44794);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        i2 = cpos;
        i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 44794))*2);
        i0 = i0==10u;
        if (!i0) goto l22;
        i0 = cdelta;
        cpos = (i2+1);
        cdelta = (i0+1);
l22:
        XML_Parser__ParserDesc_ParseDocument_EndOfLine();
        goto l30;
      case 9u:
        i1 = eolReplacement;
        i1 = i1==32u;
        if (i1) goto l27;
        i0 = _check_pointer(i0, 45194);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 45194))*2) = 9u;
        goto l28;
l27:
        i0 = _check_pointer(i0, 45152);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 45152))*2) = 32u;
l28:
        XML_Parser__ParserDesc_ParseDocument_Tab();
        i0 = cpos;
        cpos = (i0+1);
        goto l30;
      default:
        i0 = _check_pointer(i0, 45274);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 45274))*2) = 65533u;
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
      auto void XML_Parser__ParserDesc_ParseDocument_String_NormalizeWhitespace(void);
        
        void XML_Parser__ParserDesc_ParseDocument_String_NormalizeWhitespace(void) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10;
          OOC_INT32 i;
          OOC_INT32 delta;

          i0 = cpos;
          i1 = cdelta;
          i2 = i0-i1;
          i3 = cstart;
          i4 = i3!=i2;
          if (i4) goto l3;
          i4=0u;
          goto l5;
l3:
          i4 = (OOC_INT32)chars;
          i4 = _check_pointer(i4, 45897);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 45897))*2);
          i4 = (OOC_UINT16)i4<=(OOC_UINT16)32u;
          
l5:
          if (!i4) goto l17;
          i4 = (OOC_INT32)chars;
          
l8_loop:
          i3 = i3+1;
          cstart = i3;
          i5 = i3!=i2;
          if (i5) goto l11;
          i5=0u;
          goto l13;
l11:
          i5 = _check_pointer(i4, 45897);
          i6 = OOC_ARRAY_LENGTH(i5, 0);
          i5 = *(OOC_UINT16*)(i5+(_check_index(i3, i6, OOC_UINT32, 45897))*2);
          i5 = (OOC_UINT16)i5<=(OOC_UINT16)32u;
          
l13:
          if (i5) goto l8_loop;
l17:
          i = i3;
          delta = 0;
          i4 = i3!=i2;
          if (i4) goto l20;
          i2=0;
          goto l47;
l20:
          i4 = (OOC_INT32)chars;
          i5=i3;i6=0;
l21_loop:
          i7 = _check_pointer(i4, 46040);
          i8 = OOC_ARRAY_LENGTH(i7, 0);
          i7 = *(OOC_UINT16*)(i7+(_check_index(i5, i8, OOC_UINT32, 46040))*2);
          i7 = (OOC_UINT16)i7<=(OOC_UINT16)32u;
          if (i7) goto l24;
          i7 = _check_pointer(i4, 46302);
          i8 = OOC_ARRAY_LENGTH(i7, 0);
          i9 = _check_pointer(i4, 46320);
          i10 = OOC_ARRAY_LENGTH(i9, 0);
          i9 = *(OOC_UINT16*)(i9+(_check_index(i5, i10, OOC_UINT32, 46320))*2);
          *(OOC_UINT16*)(i7+(_check_index((i5-i6), i8, OOC_UINT32, 46302))*2) = i9;
          {register OOC_INT32 h0=i5;i5=i6;i6=h0;}
          goto l42;
l24:
          i7 = _check_pointer(i4, 46138);
          i8 = OOC_ARRAY_LENGTH(i7, 0);
          *(OOC_UINT16*)(i7+(_check_index((i5-i6), i8, OOC_UINT32, 46138))*2) = 32u;
          i7 = i5+1;
          i8 = i7!=i2;
          if (i8) goto l27;
          i8=0u;
          goto l29;
l27:
          i8 = _check_pointer(i4, 46202);
          i9 = OOC_ARRAY_LENGTH(i8, 0);
          i8 = *(OOC_UINT16*)(i8+(_check_index(i7, i9, OOC_UINT32, 46202))*2);
          i8 = (OOC_UINT16)i8<=(OOC_UINT16)32u;
          
l29:
          if (i8) goto l31;
          {register OOC_INT32 h0=i5;i5=i6;i6=h0;}
          goto l42;
l31:
          i5=i6;i6=i7;
l32_loop:
          i = i6;
          i5 = i5+1;
          delta = i5;
          i7 = i6+1;
          i8 = i7!=i2;
          if (i8) goto l35;
          i8=0u;
          goto l37;
l35:
          i8 = _check_pointer(i4, 46202);
          i9 = OOC_ARRAY_LENGTH(i8, 0);
          i8 = *(OOC_UINT16*)(i8+(_check_index(i7, i9, OOC_UINT32, 46202))*2);
          i8 = (OOC_UINT16)i8<=(OOC_UINT16)32u;
          
l37:
          if (!i8) goto l42;
          i6=i7;
          goto l32_loop;
l42:
          i6 = i6+1;
          i = i6;
          i7 = i6!=i2;
          if (!i7) goto l46;
          {register OOC_INT32 h0=i5;i5=i6;i6=h0;}
          goto l21_loop;
l46:
          i2=i5;
l47:
          i1 = i1+i2;
          cdelta = i1;
          i0 = i0-i1;
          i2 = i0!=i3;
          if (i2) goto l50;
          i0=0u;
          goto l52;
l50:
          i2 = (OOC_INT32)chars;
          i2 = _check_pointer(i2, 46514);
          i3 = OOC_ARRAY_LENGTH(i2, 0);
          i0 = *(OOC_UINT16*)(i2+(_check_index((i0-1), i3, OOC_UINT32, 46514))*2);
          i0 = i0==32u;
          
l52:
          if (!i0) goto l54;
          cdelta = (i1+1);
l54:
          return;
          ;
        }


      i0 = (OOC_INT32)chars;
      i1 = _check_pointer(i0, 46638);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 46638))*2);
      i1 = i1==39u;
      if (i1) goto l3;
      i0 = _check_pointer(i0, 46661);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i1, OOC_UINT32, 46661))*2);
      i0 = i0==34u;
      
      goto l5;
l3:
      i0=1u;
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
      i1 = _check_pointer(i1, 46733);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 46733))*2);
      endChar = i1;
      i1 = i3+1;
      cpos = i1;
      cstart = i1;
      cdelta = 0;
l8_loop:
      i1 = (OOC_INT32)chars;
      i2 = _check_pointer(i1, 46831);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = cpos;
      i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 46831))*2);
      switch (i2) {
      case 0u ... 31u:
      case 65534u:
        i2 = type;
        i2 = i2==2;
        if (i2) goto l13;
        i1=0u;
        goto l15;
l13:
        i1 = _check_pointer(i1, 46932);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 46932))*2);
        i1 = i1==9u;
        
l15:
        if (i1) goto l16;
        goto l17;
l16:
        XML_Parser__ParserDesc_ParseDocument_Err(20);
l17:
        XML_Parser__ParserDesc_ParseDocument_ControlChar(10u);
        goto l8_loop;
      case 65535u:
        XML_Parser__ParserDesc_ParseDocument_ErrPos(6, (void*)(OOC_INT32)&pos, (RT0__Struct)i0);
        i1 = cpos;
        i2 = cdelta;
        i3 = cstart;
        i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_GetString(i3, (i1-i2));
        return (XML_UnicodeBuffer__CharArray)i1;
        goto l8_loop;
      default:
        i2 = _check_pointer(i1, 47205);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 47205))*2);
        i3 = endChar;
        i2 = i2==i3;
        if (i2) goto l37;
        i2 = type;
        switch (i2) {
        case 2:
          i1 = _check_pointer(i1, 48009);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 48009))*2);
          i1 = XML_Parser__IsPubidChar(i1);
          i1 = !i1;
          if (i1) goto l25;
          goto l36;
l25:
          XML_Parser__ParserDesc_ParseDocument_Err(20);
          goto l36;
        case 4:
          i1 = _check_pointer(i1, 48155);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i3 = cstart;
          i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 48155))*2);
          i1 = XML_Parser__IsEncNameChar(i1, (i4==i3));
          i1 = !i1;
          if (i1) goto l29;
          goto l36;
l29:
          XML_Parser__ParserDesc_ParseDocument_Err(21);
          goto l36;
        case 3:
          i1 = _check_pointer(i1, 48320);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 48320))*2);
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
        i2 = _check_pointer(i1, 48469);
        i3 = cdelta;
        i4 = cpos;
        i5 = OOC_ARRAY_LENGTH(i2, 0);
        i1 = _check_pointer(i1, 48491);
        i6 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i6, OOC_UINT32, 48491))*2);
        *(OOC_UINT16*)(i2+(_check_index((i4-i3), i5, OOC_UINT32, 48469))*2) = i1;
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
          _cmp16((const void*)(_check_pointer(i1, 47535)),(const void*)((OOC_CHAR16[]){121,101,115,0})))!=0;
          if (i2) goto l45;
          i2=0u;
          goto l47;
l45:
          i2 = (
          _cmp16((const void*)(_check_pointer(i1, 47555)),(const void*)((OOC_CHAR16[]){110,111,0})))!=0;
          
l47:
          if (i2) goto l48;
          goto l55;
l48:
          XML_Parser__ParserDesc_ParseDocument_ErrPos(24, (void*)(OOC_INT32)&pos, (RT0__Struct)i0);
          goto l55;
        case 4:
        case 3:
          i2 = (
          _cmp16((const void*)(_check_pointer(i1, 47709)),(const void*)((OOC_CHAR16[]){0})))==0;
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
      _failed_function(45399); return 0;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_Eq(void) {

      XML_Parser__ParserDesc_ParseDocument_OptS(1u);
      XML_Parser__ParserDesc_ParseDocument_CheckChar(61u);
      XML_Parser__ParserDesc_ParseDocument_OptS(1u);
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
      _assert((i0==0), 127, 49072);
      _assert((i1!=(OOC_INT32)0), 127, 49097);
      i0 = i0+5;
      cpos = i0;
      i2 = (OOC_INT32)chars;
      i2 = _check_pointer(i2, 49198);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i0 = *(OOC_UINT16*)(i2+(_check_index(i0, i3, OOC_UINT32, 49198))*2);
      i0 = i0!=63u;
      if (!i0) goto l3;
      XML_Parser__ParserDesc_ParseDocument_S();
l3:
      i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("version", 8, 1);
      if (i0) goto l9;
      i0 = *(OOC_INT8*)((_check_pointer(i1, 49470))+8);
      i0 = i0==5;
      if (!i0) goto l13;
      XML_Parser__ParserDesc_ParseDocument_Err(111);
      goto l13;
l9:
      i0 = cpos;
      cpos = (i0+7);
      XML_Parser__ParserDesc_ParseDocument_Eq();
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_String(3);
      XML_DTD__ExternalEntityDesc_SetVersion((XML_DTD__ExternalEntity)i1, (XML_UnicodeBuffer__CharArray)i0);
      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 49426);
      i2 = OOC_ARRAY_LENGTH(i0, 0);
      i3 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i2, OOC_UINT32, 49426))*2);
      i0 = i0!=63u;
      if (!i0) goto l13;
      XML_Parser__ParserDesc_ParseDocument_S();
l13:
      i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("encoding", 9, 1);
      if (i0) goto l19;
      i0 = *(OOC_INT8*)((_check_pointer(i1, 50633))+8);
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 49743))+36);
      i2 = *(OOC_UINT8*)((_check_pointer(i2, 49747))+16);
      if (i2) goto l22;
      i2=0u;
      goto l24;
l22:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49776))+44);
      i2 = i2==(OOC_INT32)0;
      
l24:
      if (!i2) goto l42;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 49994)), 0);
      i2 = LongStrings__Length((void*)(_check_pointer(i0, 49994)), i2);
      i2 = (OOC_INT32)RT0__NewObject(_td_XML_Parser__48977.baseTypes[0], (i2+1));
      encoding = (void*)i2;
      i = 0;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 50038)), 0);
      i4 = 0<i3;
      if (!i4) goto l37;
      i4=0;
l28_loop:
      i5 = _check_pointer(i0, 50068);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = *(OOC_UINT16*)(i5+(_check_index(i4, i6, OOC_UINT32, 50068))*2);
      i5 = (OOC_UINT16)i5>(OOC_UINT16)255u;
      if (i5) goto l31;
      i5 = _check_pointer(i2, 50163);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i7 = _check_pointer(i0, 50183);
      i8 = OOC_ARRAY_LENGTH(i7, 0);
      i7 = *(OOC_UINT16*)(i7+(_check_index(i4, i8, OOC_UINT32, 50183))*2);
      *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 50163))) = i7;
      goto l32;
l31:
      i5 = _check_pointer(i2, 50113);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 50113))) = 63u;
l32:
      i4 = i4+1;
      i = i4;
      i5 = i4<i3;
      if (i5) goto l28_loop;
l37:
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 50271)), 0);
      i2 = (OOC_INT32)XML_UnicodeCodec__GetFactory((void*)(_check_pointer(i2, 50271)), i3);
      codecFactory = (XML_UnicodeCodec__Factory)i2;
      i3 = i2==(OOC_INT32)0;
      if (i3) goto l40;
      i3 = (OOC_INT32)p;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 50385))+36);
      XML_UnicodeBuffer__InputDesc_SetCodec((XML_UnicodeBuffer__Input)i3, (XML_UnicodeCodec__Factory)i2, 0u);
      XML_Parser__ParserDesc_ParseDocument_ResetLocator();
      XML_Parser__ParserDesc_ParseDocument_XMLDecl((XML_DTD__ExternalEntity)i1);
      return;
      goto l42;
l40:
      XML_Parser__ParserDesc_ParseDocument_Err(29);
l42:
      XML_DTD__ExternalEntityDesc_SetEncoding((XML_DTD__ExternalEntity)i1, (XML_UnicodeBuffer__CharArray)i0);
      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 50589);
      i2 = OOC_ARRAY_LENGTH(i0, 0);
      i3 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i2, OOC_UINT32, 50589))*2);
      i0 = i0!=63u;
      if (!i0) goto l46;
      XML_Parser__ParserDesc_ParseDocument_S();
l46:
      i0 = *(OOC_INT8*)((_check_pointer(i1, 50729))+8);
      i0 = i0==5;
      if (i0) goto l49;
      i0=0u;
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
      _cmp16((const void*)(_check_pointer(i0, 50959)),(const void*)((OOC_CHAR16[]){121,101,115,0})))==0;
      if (i0) goto l55;
      XML_DTD__ExternalEntityDesc_SetStandalone((XML_DTD__ExternalEntity)i1, 1);
      goto l57;
l55:
      XML_DTD__ExternalEntityDesc_SetStandalone((XML_DTD__ExternalEntity)i1, 0);
l57:
      XML_Parser__ParserDesc_ParseDocument_OptS(1u);
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

    
    XML_DTD__Entity XML_Parser__ParserDesc_ParseDocument_CurrentEntity(void) {
      register OOC_INT32 i0,i1,i2,i3;

      i0 = (OOC_INT32)p;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 51332))+88);
      i1 = i1==0;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51458))+84);
      i1 = _check_pointer(i1, 51467);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 51469))+88);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index((i2-1), i3, OOC_UINT32, 51467))*28))+20);
      _assert((i1!=(OOC_INT32)0), 127, 51449);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51517))+84);
      i1 = _check_pointer(i1, 51526);
      i0 = *(OOC_INT32*)((_check_pointer(i0, 51528))+88);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index((i0-1), i2, OOC_UINT32, 51526))*28))+20);
      return (XML_DTD__Entity)i0;
      goto l4;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51372))+52);
      _assert((i1!=(OOC_INT32)0), 127, 51363);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51413))+52);
      return (XML_DTD__Entity)i0;
l4:
      _failed_function(51281); return 0;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity(XML_DTD__Entity reference) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)p;
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 51664))+62);
      if (i0) goto l3;
      i0=0u;
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

    
    void XML_Parser__ParserDesc_ParseDocument_PI(void) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
      XML_DTD__Entity currentEntity;
      XML_UnicodeBuffer__CharArray target;
      auto OOC_CHAR8 XML_Parser__ParserDesc_ParseDocument_PI_IsReserved(const OOC_CHAR16 name__ref[], OOC_LEN name_0d);
        
        OOC_CHAR8 XML_Parser__ParserDesc_ParseDocument_PI_IsReserved(const OOC_CHAR16 name__ref[], OOC_LEN name_0d) {
          register OOC_INT32 i0;
          OOC_ALLOCATE_VPAR(name,OOC_CHAR16 ,name_0d)

          OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR16 ,(name_0d*2))
          i0 = *(OOC_UINT16*)((OOC_INT32)name+(_check_index(0, name_0d, OOC_UINT8, 52024))*2);
          i0 = (_cap(i0))==88u;
          if (i0) goto l3;
          i0=0u;
          goto l5;
l3:
          i0 = *(OOC_UINT16*)((OOC_INT32)name+(_check_index(1, name_0d, OOC_UINT8, 52063))*2);
          i0 = (_cap(i0))==77u;
          
l5:
          if (i0) goto l7;
          i0=0u;
          goto l8;
l7:
          i0 = *(OOC_UINT16*)((OOC_INT32)name+(_check_index(2, name_0d, OOC_UINT8, 52102))*2);
          i0 = (_cap(i0))==76u;
          
l8:
          return i0;
          ;
        }


      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52173))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52173))+4);
      i0 = _check_pointer(i0, 52176);
      i0 = (OOC_INT32)&_td_XML_Locator__Position;
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i1, 52176)), (RT0__Struct)i0);
      i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_CurrentEntity();
      i2 = cpos;
      currentEntity = (XML_DTD__Entity)i1;
      cpos = (i2+2);
      i2 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(1u);
      target = (XML_UnicodeBuffer__CharArray)i2;
      i3 = (
      _cmp16((const void*)(_check_pointer(i2, 52327)),(const void*)((OOC_CHAR16[]){120,109,108,0})))==0;
      if (i3) goto l6;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 52419)), 0);
      i3 = XML_Parser__ParserDesc_ParseDocument_PI_IsReserved((void*)(_check_pointer(i2, 52419)), i3);
      if (!i3) goto l7;
      i3 = (OOC_INT32)p;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 52462))+4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 52462))+4);
      i3 = _check_pointer(i3, 52465);
      XML_Parser__ParserDesc_ParseDocument_ErrPos(26, (void*)(_check_pointer(i4, 52465)), (RT0__Struct)i0);
      goto l7;
l6:
      i3 = (OOC_INT32)p;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 52383))+4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 52383))+4);
      i3 = _check_pointer(i3, 52386);
      XML_Parser__ParserDesc_ParseDocument_ErrPos(25, (void*)(_check_pointer(i4, 52386)), (RT0__Struct)i0);
l7:
      i3 = XML_Parser__ParserDesc_ParseDocument_LookingAt("?>", 3, 0);
      if (i3) goto l22;
      XML_Parser__ParserDesc_ParseDocument_S();
      i3 = cpos;
      cstart = i3;
      cdelta = 0;
l10_loop:
      i3 = (OOC_INT32)chars;
      i4 = _check_pointer(i3, 52794);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = cpos;
      i4 = *(OOC_UINT16*)(i4+(_check_index(i6, i5, OOC_UINT32, 52794))*2);
      switch (i4) {
      case 0u ... 31u:
      case 65534u:
        XML_Parser__ParserDesc_ParseDocument_ControlChar(10u);
        goto l10_loop;
      case 65535u:
        i1 = (OOC_INT32)p;
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52943))+4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52943))+4);
        i1 = _check_pointer(i1, 52946);
        XML_Parser__ParserDesc_ParseDocument_ErrPos(7, (void*)(_check_pointer(i2, 52946)), (RT0__Struct)i0);
        goto l23;
      case 63u:
        i3 = XML_Parser__ParserDesc_ParseDocument_LookingAt("?>", 3, 0);
        if (i3) goto l18;
        i3 = (OOC_INT32)chars;
        i4 = _check_pointer(i3, 53394);
        i5 = cdelta;
        i6 = cpos;
        i7 = OOC_ARRAY_LENGTH(i4, 0);
        i3 = _check_pointer(i3, 53416);
        i8 = OOC_ARRAY_LENGTH(i3, 0);
        i3 = *(OOC_UINT16*)(i3+(_check_index(i6, i8, OOC_UINT32, 53416))*2);
        *(OOC_UINT16*)(i4+(_check_index((i6-i5), i7, OOC_UINT32, 53394))*2) = i3;
        cpos = (i6+1);
        
        goto l10_loop;
l18:
        XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i1);
        i0 = (OOC_INT32)p;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53101))+44);
        i3 = (OOC_INT32)chars;
        i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53286))+56);
        i5 = cpos;
        i6 = cdelta;
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53101))+44);
        i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 53298))+36);
        i7 = OOC_ARRAY_LENGTH((_check_pointer(i3, 53148)), 0);
        i8 = cstart;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 53110)))), XML_Builder__BuilderDesc_ProcessingInstruction)),XML_Builder__BuilderDesc_ProcessingInstruction)((XML_Builder__Builder)i0, (XML_UnicodeBuffer__CharArray)i2, (void*)(_check_pointer(i3, 53148)), i7, i8, (i5-i6), (URI__URI)i4);
        i0 = cpos;
        cpos = (i0+2);
        goto l23;
      default:
        i4 = _check_pointer(i3, 53483);
        i5 = cdelta;
        i7 = OOC_ARRAY_LENGTH(i4, 0);
        i3 = _check_pointer(i3, 53505);
        i8 = OOC_ARRAY_LENGTH(i3, 0);
        i3 = *(OOC_UINT16*)(i3+(_check_index(i6, i8, OOC_UINT32, 53505))*2);
        *(OOC_UINT16*)(i4+(_check_index((i6-i5), i7, OOC_UINT32, 53483))*2) = i3;
        cpos = (i6+1);
        goto l10_loop;
      }
l22:
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52541))+44);
      i3 = (OOC_INT32)chars;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52656))+56);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52541))+44);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 52668))+36);
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i3, 52588)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52550)))), XML_Builder__BuilderDesc_ProcessingInstruction)),XML_Builder__BuilderDesc_ProcessingInstruction)((XML_Builder__Builder)i0, (XML_UnicodeBuffer__CharArray)i2, (void*)(_check_pointer(i3, 52588)), i5, 0, 0, (URI__URI)i4);
      i0 = cpos;
      cpos = (i0+2);
l23:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_Comment(void) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      XML_DTD__Entity currentEntity;

      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53716))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53716))+4);
      i0 = _check_pointer(i0, 53719);
      i0 = (OOC_INT32)&_td_XML_Locator__Position;
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i1, 53719)), (RT0__Struct)i0);
      i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_CurrentEntity();
      i2 = cpos;
      currentEntity = (XML_DTD__Entity)i1;
      i2 = i2+4;
      cpos = i2;
      cstart = i2;
      cdelta = 0;
l1_loop:
      i2 = (OOC_INT32)chars;
      i3 = _check_pointer(i2, 53891);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i5 = cpos;
      i3 = *(OOC_UINT16*)(i3+(_check_index(i5, i4, OOC_UINT32, 53891))*2);
      switch (i3) {
      case 0u ... 31u:
      case 65534u:
        XML_Parser__ParserDesc_ParseDocument_ControlChar(10u);
        goto l1_loop;
      case 65535u:
        i1 = (OOC_INT32)p;
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54037))+4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54037))+4);
        i1 = _check_pointer(i1, 54040);
        XML_Parser__ParserDesc_ParseDocument_ErrPos(5, (void*)(_check_pointer(i2, 54040)), (RT0__Struct)i0);
        goto l15;
      case 45u:
        i2 = XML_Parser__ParserDesc_ParseDocument_LookingAt("-->", 4, 0);
        if (i2) goto l12;
        i2 = XML_Parser__ParserDesc_ParseDocument_LookingAt("--", 3, 0);
        if (i2) goto l9;
        goto l11;
l9:
        XML_Parser__ParserDesc_ParseDocument_Err(4);
l11:
        i2 = (OOC_INT32)chars;
        i3 = _check_pointer(i2, 54419);
        i4 = cpos;
        i5 = cdelta;
        i6 = OOC_ARRAY_LENGTH(i3, 0);
        i2 = _check_pointer(i2, 54441);
        i7 = OOC_ARRAY_LENGTH(i2, 0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i7, OOC_UINT32, 54441))*2);
        *(OOC_UINT16*)(i3+(_check_index((i4-i5), i6, OOC_UINT32, 54419))*2) = i2;
        cpos = (i4+1);
        goto l1_loop;
l12:
        XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i1);
        i0 = (OOC_INT32)p;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54186))+44);
        i2 = (OOC_INT32)chars;
        i3 = cpos;
        i4 = cdelta;
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54186))+44);
        i5 = OOC_ARRAY_LENGTH((_check_pointer(i2, 54211)), 0);
        i6 = cstart;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 54195)))), XML_Builder__BuilderDesc_Comment)),XML_Builder__BuilderDesc_Comment)((XML_Builder__Builder)i0, (void*)(_check_pointer(i2, 54211)), i5, i6, (i3-i4));
        i0 = cpos;
        cpos = (i0+3);
        goto l15;
      default:
        i3 = _check_pointer(i2, 54489);
        i4 = cdelta;
        i6 = OOC_ARRAY_LENGTH(i3, 0);
        i2 = _check_pointer(i2, 54511);
        i7 = OOC_ARRAY_LENGTH(i2, 0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i7, OOC_UINT32, 54511))*2);
        *(OOC_UINT16*)(i3+(_check_index((i5-i4), i6, OOC_UINT32, 54489))*2) = i2;
        cpos = (i5+1);
        goto l1_loop;
      }
l15:
      XML_Parser__ParserDesc_ParseDocument_DiscardPreviousInput();
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_CDSect(void) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;

      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54704))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54704))+4);
      i0 = _check_pointer(i0, 54707);
      i0 = (OOC_INT32)&_td_XML_Locator__Position;
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i1, 54707)), (RT0__Struct)i0);
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54718))+44);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54718))+44);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 54727)))), XML_Builder__BuilderDesc_StartCDATA)),XML_Builder__BuilderDesc_StartCDATA)((XML_Builder__Builder)i1);
      i1 = cpos;
      i1 = i1+9;
      cpos = i1;
      cstart = i1;
      cdelta = 0;
l1_loop:
      i1 = (OOC_INT32)chars;
      i2 = _check_pointer(i1, 54900);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = cpos;
      i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 54900))*2);
      switch (i2) {
      case 0u ... 31u:
      case 65534u:
        XML_Parser__ParserDesc_ParseDocument_ControlChar(10u);
        goto l1_loop;
      case 65535u:
        i1 = (OOC_INT32)p;
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55044))+4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55044))+4);
        i1 = _check_pointer(i1, 55047);
        XML_Parser__ParserDesc_ParseDocument_ErrPos(8, (void*)(_check_pointer(i2, 55047)), (RT0__Struct)i0);
        goto l12;
      case 93u:
        i1 = XML_Parser__ParserDesc_ParseDocument_LookingAt("]]>", 4, 0);
        if (i1) goto l9;
        i1 = (OOC_INT32)chars;
        i2 = _check_pointer(i1, 55476);
        i3 = cdelta;
        i4 = cpos;
        i5 = OOC_ARRAY_LENGTH(i2, 0);
        i1 = _check_pointer(i1, 55498);
        i6 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i6, OOC_UINT32, 55498))*2);
        *(OOC_UINT16*)(i2+(_check_index((i4-i3), i5, OOC_UINT32, 55476))*2) = i1;
        cpos = (i4+1);
        goto l1_loop;
l9:
        i1 = (OOC_INT32)p;
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55156))+4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55156))+4);
        i1 = _check_pointer(i1, 55159);
        XML_Parser__ParserDesc_ParseDocument_DecLength((void*)(_check_pointer(i2, 55159)), (RT0__Struct)i0, (-9));
        i1 = (OOC_INT32)p;
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55180))+44);
        i3 = (OOC_INT32)chars;
        i4 = cpos;
        i5 = cdelta;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55180))+44);
        i6 = OOC_ARRAY_LENGTH((_check_pointer(i3, 55208)), 0);
        i7 = cstart;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 55189)))), XML_Builder__BuilderDesc_Characters)),XML_Builder__BuilderDesc_Characters)((XML_Builder__Builder)i1, (void*)(_check_pointer(i3, 55208)), i6, i7, (i4-i5), 1);
        i1 = cpos;
        cpos = (i1+3);
        i1 = (OOC_INT32)p;
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55364))+4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55364))+4);
        i1 = _check_pointer(i1, 55367);
        XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i2, 55367)), (RT0__Struct)i0);
        i0 = (OOC_INT32)p;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55384))+44);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55384))+44);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55393)))), XML_Builder__BuilderDesc_EndCDATA)),XML_Builder__BuilderDesc_EndCDATA)((XML_Builder__Builder)i0);
        goto l12;
      default:
        i2 = _check_pointer(i1, 55559);
        i3 = cdelta;
        i5 = OOC_ARRAY_LENGTH(i2, 0);
        i1 = _check_pointer(i1, 55581);
        i6 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i6, OOC_UINT32, 55581))*2);
        *(OOC_UINT16*)(i2+(_check_index((i4-i3), i5, OOC_UINT32, 55559))*2) = i1;
        cpos = (i4+1);
        goto l1_loop;
      }
l12:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_CharRef(void) {
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
          i2 = _check_pointer(i1, 56339);
          i3 = cdelta;
          i4 = cpos;
          i3 = i4-i3;
          i4 = OOC_ARRAY_LENGTH(i2, 0);
          *(OOC_UINT16*)(i2+(_check_index(i3, i4, OOC_UINT32, 56339))*2) = (55296+(i0>>10));
          i1 = _check_pointer(i1, 56405);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          *(OOC_UINT16*)(i1+(_check_index((i3+1), i2, OOC_UINT32, 56405))*2) = (56320+(_mod(i0,1024)));
          return 2;
          goto l4;
l3:
          i1 = (OOC_INT32)chars;
          i1 = _check_pointer(i1, 56229);
          i2 = cdelta;
          i3 = cpos;
          i4 = OOC_ARRAY_LENGTH(i1, 0);
          *(OOC_UINT16*)(i1+(_check_index((i3-i2), i4, OOC_UINT32, 56229))*2) = i0;
          return 1;
l4:
          _failed_function(56129); return 0;
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
      i3 = _check_pointer(i2, 57371);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i5 = cpos;
      i3 = *(OOC_UINT16*)(i3+(_check_index(i5, i4, OOC_UINT32, 57371))*2);
      switch (i3) {
      case 65534u:
        XML_Parser__ParserDesc_ParseDocument_NextBlock();
        
        goto l3_loop;
      case 59u:
      case 65535u:
        
        goto l33;
      case 48u ... 57u:
        i3 = i1<=131072;
        if (i3) goto l10;
        goto l11;
l10:
        i2 = _check_pointer(i2, 57588);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i3, OOC_UINT32, 57588))*2);
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
      i3 = _check_pointer(i2, 56689);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i5 = cpos;
      i3 = *(OOC_UINT16*)(i3+(_check_index(i5, i4, OOC_UINT32, 56689))*2);
      switch (i3) {
      case 65534u:
        XML_Parser__ParserDesc_ParseDocument_NextBlock();
        
        goto l16_loop;
      case 59u:
      case 65535u:
        
        goto l33;
      case 48u ... 57u:
        i3 = i1<=131072;
        if (i3) goto l23;
        goto l24;
l23:
        i2 = _check_pointer(i2, 56906);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i3, OOC_UINT32, 56906))*2);
        i1 = ((i1*16)+i2)-48;
        cval = i1;
        
l24:
        i2 = cdelta;
        cpos = (i5+1);
        cdelta = (i2+1);
        
        goto l16_loop;
      case 97u ... 102u:
      case 65u ... 70u:
        i3 = i1<=131072;
        if (i3) goto l28;
        goto l29;
l28:
        i2 = _check_pointer(i2, 57099);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i3, OOC_UINT32, 57099))*2);
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
      i2 = _check_pointer(i2, 57795);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = cpos;
      i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 57795))*2);
      i2 = i2==59u;
      if (!i2) goto l36;
      i2 = cdelta;
      cdelta = (i2+1);
l36:
      XML_Parser__ParserDesc_ParseDocument_CheckChar(59u);
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
      XML_Parser__ParserDesc_ParseDocument_CheckChar(38u);
      i1 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 58437))+36);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 58441))+24);
      i2 = cstart;
      i1 = i1+i2;
      localCStart = i1;
      i2 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(1u);
      name = (XML_UnicodeBuffer__CharArray)i2;
      i3 = (OOC_INT32)p;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 58522))+36);
      i3 = *(OOC_INT32*)((_check_pointer(i3, 58526))+24);
      cstart = (i1-i3);
      XML_Parser__ParserDesc_ParseDocument_CheckChar(59u);
      i1 = (OOC_INT32)dtd;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 58591))+4);
      i1 = (OOC_INT32)XML_DTD__NamespaceDesc_Get((XML_DTD__Namespace)i1, (XML_UnicodeBuffer__CharArray)i2);
      decl = (XML_DTD__Declaration)i1;
      i3 = i1==(OOC_INT32)0;
      if (i3) goto l15;
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58911)))), &_td_XML_DTD__EntityDesc, 58911);
      entity = (XML_DTD__Entity)i1;
      i3 = *(OOC_INT8*)((_check_pointer(i1, 58938))+8);
      i3 = i3==4;
      if (i3) goto l13;
      i3 = permitExternal;
      i3 = !i3;
      if (i3) goto l7;
      i3=0u;
      goto l9;
l7:
      i3 = *(OOC_INT8*)((_check_pointer(i1, 59159))+8);
      i3 = i3==2;
      
l9:
      if (i3) goto l11;
      i0=i2;
      goto l27;
l11:
      XML_Parser__ParserDesc_ParseDocument_ErrPos(305, (void*)(OOC_INT32)&pos, (RT0__Struct)i0);
      i0 = (OOC_INT32)p;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 59260))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 59260))+104);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 59322)), 0);
      i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 59322)), i4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 59271)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i2);
      i0 = (OOC_INT32)XML_Parser__noName;
      name = (XML_UnicodeBuffer__CharArray)i0;
      
      goto l27;
l13:
      XML_Parser__ParserDesc_ParseDocument_ErrPos(304, (void*)(OOC_INT32)&pos, (RT0__Struct)i0);
      i0 = (OOC_INT32)p;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 59028))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 59028))+104);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 59090)), 0);
      i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 59090)), i4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 59039)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i2);
      i0 = (OOC_INT32)XML_Parser__noName;
      name = (XML_UnicodeBuffer__CharArray)i0;
      
      goto l27;
l15:
      entity = (XML_DTD__Entity)(OOC_INT32)0;
      i1 = enforceDecl;
      if (i1) goto l18;
      i1=0u;
      goto l20;
l18:
      i1 = (OOC_INT32)p;
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 58694))+63);
      
l20:
      if (i1) goto l22;
      i1=0u;
      goto l24;
l22:
      i1 = (OOC_INT32)XML_Parser__noName;
      i1 = i2!=i1;
      
l24:
      if (!i1) goto l26;
      XML_Parser__ParserDesc_ParseDocument_ErrPos(210, (void*)(OOC_INT32)&pos, (RT0__Struct)i0);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 58795))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 58795))+104);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 58857)), 0);
      i3 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 58857)), i3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58806)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i3);
l26:
      i0=i2;i1=(OOC_INT32)0;
l27:
      i2 = (OOC_INT32)dtd;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 59391)))), XML_DTD__BuilderDesc_NewEntityRef)),XML_DTD__BuilderDesc_NewEntityRef)((XML_DTD__Builder)i2, (XML_UnicodeBuffer__CharArray)i0, (XML_DTD__Entity)i1);
      return (XML_DTD__EntityRef)i0;
      ;
    }

    
    XML_DTD__AttValue XML_Parser__ParserDesc_ParseDocument_AttValue(OOC_CHAR8 isAttDecl) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      XML_DTD__AttValue attValue;
      struct XML_Locator__Position pos;
      OOC_CHAR16 endChar;
      auto void XML_Parser__ParserDesc_ParseDocument_AttValue_Flush(void);
        
        void XML_Parser__ParserDesc_ParseDocument_AttValue_Flush(void) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;

          i0 = cpos;
          i1 = cdelta;
          i0 = i0-i1;
          i1 = cstart;
          i2 = i0!=i1;
          if (!i2) goto l4;
          i2 = (OOC_INT32)dtd;
          i3 = (OOC_INT32)attValue;
          i4 = (OOC_INT32)chars;
          i5 = isAttDecl;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 60022)))), XML_DTD__BuilderDesc_NewCharacters)),XML_DTD__BuilderDesc_NewCharacters)((XML_DTD__Builder)i2, (XML_UnicodeBuffer__CharArray)i4, i1, i0, i5);
          XML_DTD__AttValueDesc_Append((XML_DTD__AttValue)i3, (XML_DTD__Fragment)i0);
l4:
          return;
          ;
        }


      i0 = (OOC_INT32)dtd;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60145)))), XML_DTD__BuilderDesc_NewAttValue)),XML_DTD__BuilderDesc_NewAttValue)((XML_DTD__Builder)i0);
      attValue = (XML_DTD__AttValue)i0;
      i0 = (OOC_INT32)chars;
      i1 = _check_pointer(i0, 60177);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 60177))*2);
      i1 = i1==39u;
      if (i1) goto l3;
      i0 = _check_pointer(i0, 60200);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i1, OOC_UINT32, 60200))*2);
      i0 = i0==34u;
      
      goto l5;
l3:
      i0=1u;
l5:
      if (i0) goto l7;
      XML_Parser__ParserDesc_ParseDocument_Err(108);
      XML_Parser__ParserDesc_ParseDocument_NextChar();
      goto l25;
l7:
      i0 = (OOC_INT32)&_td_XML_Locator__Position;
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(OOC_INT32)&pos, (RT0__Struct)i0);
      i1 = (OOC_INT32)chars;
      i1 = _check_pointer(i1, 60272);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 60272))*2);
      endChar = i1;
      i1 = i3+1;
      cpos = i1;
      cstart = i1;
      cdelta = 0;
l8_loop:
      i1 = (OOC_INT32)chars;
      i2 = _check_pointer(i1, 60369);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = cpos;
      i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 60369))*2);
      switch (i2) {
      case 0u ... 31u:
      case 65534u:
        XML_Parser__ParserDesc_ParseDocument_ControlChar(32u);
        goto l8_loop;
      case 65535u:
        XML_Parser__ParserDesc_ParseDocument_ErrPos(6, (void*)(OOC_INT32)&pos, (RT0__Struct)i0);
        XML_Parser__ParserDesc_ParseDocument_AttValue_Flush();
        goto l25;
      case 60u:
        XML_Parser__ParserDesc_ParseDocument_Err(13);
        i1 = (OOC_INT32)chars;
        i1 = _check_pointer(i1, 60628);
        i2 = cpos;
        i3 = cdelta;
        i4 = OOC_ARRAY_LENGTH(i1, 0);
        *(OOC_UINT16*)(i1+(_check_index((i2-i3), i4, OOC_UINT32, 60628))*2) = 32u;
        cpos = (i2+1);
        goto l8_loop;
      case 38u:
        i1 = XML_Parser__ParserDesc_ParseDocument_LookingAt("&#", 3, 0);
        if (!i1) goto l15;
        goto l16;
l15:
        XML_Parser__ParserDesc_ParseDocument_AttValue_Flush();
        i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_EntityRef(1u, 0u);
        i2 = (OOC_INT32)attValue;
        XML_DTD__AttValueDesc_Append((XML_DTD__AttValue)i2, (XML_DTD__Fragment)i1);
        i1 = cpos;
        cstart = i1;
        cdelta = 0;
        goto l8_loop;
l16:
        XML_Parser__ParserDesc_ParseDocument_CharRef();
        goto l8_loop;
      default:
        i2 = _check_pointer(i1, 61017);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 61017))*2);
        i3 = endChar;
        i2 = i2==i3;
        if (i2) goto l22;
        i2 = _check_pointer(i1, 61382);
        i3 = cdelta;
        i5 = OOC_ARRAY_LENGTH(i2, 0);
        i1 = _check_pointer(i1, 61404);
        i6 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i6, OOC_UINT32, 61404))*2);
        *(OOC_UINT16*)(i2+(_check_index((i4-i3), i5, OOC_UINT32, 61382))*2) = i1;
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
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 61959))+17);
          if (i1) goto l24;
          *(OOC_UINT8*)((_check_pointer(i0, 62027))+17) = 1u;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 62068))+20);
          i1 = i1==(OOC_INT32)0;
          if (!i1) goto l5;
          i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Expand_ExpandAttValue((XML_DTD__Entity)i0);
          *(OOC_INT32*)((_check_pointer(i0, 62109))+20) = i1;
l5:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 62190))+20);
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 62200));
          fragment = (XML_DTD__Fragment)i1;
          i2 = i1!=(OOC_INT32)0;
          if (!i2) goto l23;
l8_loop:
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 62277)))), &_td_XML_DTD__EntityRefDesc);
          if (!i2) goto l18;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 62322))+8);
          i2 = i2!=(OOC_INT32)0;
          if (i2) goto l13;
          i2=0u;
          goto l15;
l13:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 62378))+8);
          i2 = XML_Parser__ParserDesc_ParseDocument_Expand_IsRecursive((XML_DTD__Entity)i2);
          
l15:
          if (!i2) goto l18;
          *(OOC_UINT8*)((_check_pointer(i0, 62415))+17) = 0u;
          return 1u;
l18:
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 62588));
          fragment = (XML_DTD__Fragment)i1;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l8_loop;
l23:
          *(OOC_UINT8*)((_check_pointer(i0, 62626))+17) = 0u;
          return 0u;
          goto l25;
l24:
          return 1u;
l25:
          _failed_function(61829); return 0;
          ;
        }

        
        XML_DTD__AttValue XML_Parser__ParserDesc_ParseDocument_Expand_ExpandAttValue(XML_DTD__Entity entity) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          XML_DTD__AttValue attValue;
          auto void XML_Parser__ParserDesc_ParseDocument_Expand_ExpandAttValue_Flush(void);
            
            void XML_Parser__ParserDesc_ParseDocument_Expand_ExpandAttValue_Flush(void) {
              register OOC_INT32 i0,i1,i2,i3,i4;

              i0 = cpos;
              i1 = cstart;
              i2 = i0!=i1;
              if (!i2) goto l3;
              i2 = (OOC_INT32)dtd;
              i3 = (OOC_INT32)attValue;
              i4 = (OOC_INT32)chars;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 62939)))), XML_DTD__BuilderDesc_NewCharacters)),XML_DTD__BuilderDesc_NewCharacters)((XML_DTD__Builder)i2, (XML_UnicodeBuffer__CharArray)i4, i1, i0, 0u);
              XML_DTD__AttValueDesc_Append((XML_DTD__AttValue)i3, (XML_DTD__Fragment)i0);
l3:
              return;
              ;
            }


          i0 = (OOC_INT32)entity;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63050)))), &_td_XML_DTD__ExternalEntityDesc);
          if (!i1) goto l3;
          i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Internalize((XML_DTD__ExternalEntity)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63136)))), &_td_XML_DTD__ExternalEntityDesc, 63136)));
          XML_DTD__EntityDesc_SetEntityValue((XML_DTD__Entity)i0, (XML_UnicodeBuffer__CharArray)i1);
l3:
          XML_Parser__ParserDesc_ParseDocument_PushEntity((XML_DTD__Entity)i0, 0u);
          i0 = (OOC_INT32)dtd;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63227)))), XML_DTD__BuilderDesc_NewAttValue)),XML_DTD__BuilderDesc_NewAttValue)((XML_DTD__Builder)i0);
          attValue = (XML_DTD__AttValue)i0;
          i0 = cpos;
          cstart = i0;
l4_loop:
          i0 = (OOC_INT32)chars;
          i1 = _check_pointer(i0, 63301);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i3 = cpos;
          i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 63301))*2);
          switch (i1) {
          case 65535u:
            XML_Parser__ParserDesc_ParseDocument_Expand_ExpandAttValue_Flush();
            goto l19;
          case 0u ... 31u:
            i1 = _check_pointer(i0, 63605);
            i2 = OOC_ARRAY_LENGTH(i1, 0);
            i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 63605))*2);
            i1 = i1!=9u;
            if (!i1) goto l4_loop;
            i0 = _check_pointer(i0, 63648);
            i1 = OOC_ARRAY_LENGTH(i0, 0);
            *(OOC_UINT16*)(i0+(_check_index(i3, i1, OOC_UINT32, 63648))*2) = 32u;
            goto l4_loop;
          case 60u:
            XML_Parser__ParserDesc_ParseDocument_Err(13);
            i0 = cpos;
            cpos = (i0+1);
            goto l4_loop;
          case 38u:
            XML_Parser__ParserDesc_ParseDocument_Expand_ExpandAttValue_Flush();
            i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("&#", 3, 0);
            if (i0) goto l15;
            i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_EntityRef(1u, 0u);
            i1 = (OOC_INT32)attValue;
            XML_DTD__AttValueDesc_Append((XML_DTD__AttValue)i1, (XML_DTD__Fragment)i0);
            goto l16;
l15:
            i0 = cpos;
            cstart = i0;
            cdelta = 0;
            XML_Parser__ParserDesc_ParseDocument_CharRef();
            i0 = (OOC_INT32)dtd;
            i1 = cpos;
            i2 = cdelta;
            i3 = (OOC_INT32)chars;
            i4 = cstart;
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 64017)))), XML_DTD__BuilderDesc_NewCharacters)),XML_DTD__BuilderDesc_NewCharacters)((XML_DTD__Builder)i0, (XML_UnicodeBuffer__CharArray)i3, i4, (i1-i2), 0u);
            i1 = (OOC_INT32)attValue;
            XML_DTD__AttValueDesc_Append((XML_DTD__AttValue)i1, (XML_DTD__Fragment)i0);
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
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 64359));
      fragment = (XML_DTD__Fragment)i0;
      i1 = i0!=0;
      if (!i1) goto l22;
l3_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 64428)))), &_td_XML_DTD__EntityRefDesc);
      if (!i1) goto l17;
      i1 = (OOC_INT32)dtd;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 64468))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64496))+4);
      i1 = (OOC_INT32)XML_DTD__NamespaceDesc_Get((XML_DTD__Namespace)i1, (XML_UnicodeBuffer__CharArray)i2);
      decl = (XML_DTD__Declaration)i1;
      i2 = i1==0;
      if (i2) goto l15;
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64710)))), &_td_XML_DTD__EntityDesc, 64710);
      entity = (XML_DTD__Entity)i1;
      *(OOC_INT32*)((_check_pointer(i0, 64739))+8) = i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 64781))+20);
      i0 = i0==0;
      if (i0) goto l10;
      i0=i1;
      goto l11;
l10:
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Expand_ExpandAttValue((XML_DTD__Entity)i1);
      *(OOC_INT32*)((_check_pointer(i1, 64824))+20) = i0;
      i0 = (OOC_INT32)entity;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64891))+20);
      XML_Parser__ParserDesc_ParseDocument_Expand((XML_DTD__AttValue)i1);
      
l11:
      i0 = XML_Parser__ParserDesc_ParseDocument_Expand_IsRecursive((XML_DTD__Entity)i0);
      if (!i0) goto l17;
      XML_Parser__ParserDesc_ParseDocument_Err(213);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 65021))+104);
      i2 = (OOC_INT32)entity;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 65085))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 65085))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 65021))+104);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 65091)), 0);
      i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i3, 65091)), i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 65032)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i2);
      i0 = (OOC_INT32)fragment;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 65118))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 65126))+20);
      XML_DTD__AttValueDesc_Clear((XML_DTD__AttValue)i0);
      goto l17;
l15:
      XML_Parser__ParserDesc_ParseDocument_Err(210);
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 64588))+104);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64654))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64654))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 64588))+104);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 64660)), 0);
      i0 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i3, 64660)), i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 64599)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i1, "name", 5, (Msg__LStringPtr)i0);
l17:
      i0 = (OOC_INT32)fragment;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 65283));
      fragment = (XML_DTD__Fragment)i0;
      i1 = i0!=0;
      if (i1) goto l3_loop;
l22:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_content(void) {
      register OOC_INT32 i0,i1,i2;
      auto void XML_Parser__ParserDesc_ParseDocument_content_CharData(void);
      auto void XML_Parser__ParserDesc_ParseDocument_content_FollowEntityRef(XML_DTD__EntityRef entityRef);
        
        void XML_Parser__ParserDesc_ParseDocument_content_CharData(void) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
          OOC_INT8 elementWhitespace;

          i0 = (OOC_INT32)p;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 65824))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 65824))+4);
          i0 = _check_pointer(i0, 65827);
          XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i1, 65827)), (RT0__Struct)((OOC_INT32)&_td_XML_Locator__Position));
          i0 = cpos;
          cstart = i0;
          cdelta = 0;
          elementWhitespace = 2;
          i0=2;
l1_loop:
          i1 = (OOC_INT32)chars;
          i2 = _check_pointer(i1, 66188);
          i3 = OOC_ARRAY_LENGTH(i2, 0);
          i4 = cpos;
          i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 66188))*2);
          switch (i2) {
          case 0u ... 31u:
          case 65534u:
            i2 = (OOC_INT32)p;
            i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 66263))+36);
            i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 66267))+20);
            i1 = i1!=i2;
            if (!i1) goto l5;
            goto l9;
l5:
            XML_Parser__ParserDesc_ParseDocument_ControlChar(10u);
            i1 = cdelta;
            i1 = i1!=0;
            if (!i1) goto l1_loop;
            goto l21_loop;
l9:
            cpos = (i4+1);
            goto l1_loop;
          case 32u:
            cpos = (i4+1);
            
            goto l1_loop;
          case 60u:
          case 38u:
          case 65535u:
            goto l21_loop;
          case 93u:
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
          i2 = _check_pointer(i1, 66912);
          i3 = OOC_ARRAY_LENGTH(i2, 0);
          i4 = cpos;
          i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 66912))*2);
          switch (i2) {
          case 0u ... 31u:
          case 65534u:
            i2 = (OOC_INT32)p;
            i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 66987))+36);
            i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 66991))+20);
            i2 = i1!=i2;
            if (!i2) goto l25;
            goto l26;
l25:
            XML_Parser__ParserDesc_ParseDocument_ControlChar(10u);
            goto l21_loop;
l26:
            i2 = _check_pointer(i1, 67387);
            i3 = cdelta;
            i5 = OOC_ARRAY_LENGTH(i2, 0);
            i1 = _check_pointer(i1, 67409);
            i6 = OOC_ARRAY_LENGTH(i1, 0);
            i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i6, OOC_UINT32, 67409))*2);
            *(OOC_UINT16*)(i2+(_check_index((i4-i3), i5, OOC_UINT32, 67387))*2) = i1;
            cpos = (i4+1);
            goto l21_loop;
          case 32u:
            i2 = _check_pointer(i1, 67532);
            i3 = cdelta;
            i5 = OOC_ARRAY_LENGTH(i2, 0);
            i1 = _check_pointer(i1, 67554);
            i6 = OOC_ARRAY_LENGTH(i1, 0);
            i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i6, OOC_UINT32, 67554))*2);
            *(OOC_UINT16*)(i2+(_check_index((i4-i3), i5, OOC_UINT32, 67532))*2) = i1;
            cpos = (i4+1);
            
            goto l21_loop;
          case 60u:
          case 65535u:
            goto l41;
          case 38u:
            i1 = XML_Parser__ParserDesc_ParseDocument_LookingAt("&#", 3, 0);
            if (!i1) goto l41;
            elementWhitespace = 1;
            XML_Parser__ParserDesc_ParseDocument_CharRef();
            i0=1;
            goto l21_loop;
          case 93u:
            i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("]]>", 4, 0);
            if (i0) goto l37;
            goto l38;
l37:
            XML_Parser__ParserDesc_ParseDocument_Err(3);
l38:
            elementWhitespace = 1;
            i0 = (OOC_INT32)chars;
            i1 = _check_pointer(i0, 68056);
            i2 = cdelta;
            i3 = cpos;
            i4 = OOC_ARRAY_LENGTH(i1, 0);
            i0 = _check_pointer(i0, 68078);
            i5 = OOC_ARRAY_LENGTH(i0, 0);
            i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i5, OOC_UINT32, 68078))*2);
            *(OOC_UINT16*)(i1+(_check_index((i3-i2), i4, OOC_UINT32, 68056))*2) = i0;
            cpos = (i3+1);
            i0=1;
            goto l21_loop;
          default:
            elementWhitespace = 1;
            i0 = _check_pointer(i1, 68187);
            i2 = cdelta;
            i3 = OOC_ARRAY_LENGTH(i0, 0);
            i1 = _check_pointer(i1, 68209);
            i5 = OOC_ARRAY_LENGTH(i1, 0);
            i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i5, OOC_UINT32, 68209))*2);
            *(OOC_UINT16*)(i0+(_check_index((i4-i2), i3, OOC_UINT32, 68187))*2) = i1;
            cpos = (i4+1);
            i0=1;
            goto l21_loop;
          }
l41:
          i1 = cdelta;
          i2 = cpos;
          i1 = i2-i1;
          i2 = cstart;
          i3 = i1!=i2;
          if (!i3) goto l44;
          i3 = (OOC_INT32)p;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 68306))+44);
          i5 = (OOC_INT32)chars;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 68306))+44);
          i6 = OOC_ARRAY_LENGTH((_check_pointer(i5, 68334)), 0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 68315)))), XML_Builder__BuilderDesc_Characters)),XML_Builder__BuilderDesc_Characters)((XML_Builder__Builder)i3, (void*)(_check_pointer(i5, 68334)), i6, i2, i1, i0);
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
          i1 = (OOC_INT32)entityRef;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68664))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 68693))+4);
          i0 = (OOC_INT32)XML_DTD__NamespaceDesc_Get((XML_DTD__Namespace)i0, (XML_UnicodeBuffer__CharArray)i2);
          decl = (XML_DTD__Declaration)i0;
          entity = (XML_DTD__Entity)(OOC_INT32)0;
          i2 = i0!=(OOC_INT32)0;
          if (i2) goto l3;
          i2=(OOC_INT32)0;
          goto l4;
l3:
          i2 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68783)))), &_td_XML_DTD__EntityDesc, 68783);
          entity = (XML_DTD__Entity)i2;
          
l4:
          i3 = (OOC_INT32)p;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 68828))+4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 68828))+4);
          i3 = _check_pointer(i3, 68831);
          i3 = (OOC_INT32)&_td_XML_Locator__Position;
          XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i4, 68831)), (RT0__Struct)i3);
          i4 = (OOC_INT32)p;
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 68856))+36);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 68860))+20);
          i6 = (OOC_INT32)chars;
          i5 = i6==i5;
          if (!i5) goto l7;
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 68896))+4);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 68896))+4);
          i4 = _check_pointer(i4, 68899);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 68931))+4);
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 68931))+4);
          i6 = OOC_ARRAY_LENGTH((_check_pointer(i6, 68937)), 0);
          i4 = LongStrings__Length((void*)(_check_pointer(i4, 68937)), i6);
          XML_Parser__ParserDesc_ParseDocument_DecLength((void*)(_check_pointer(i5, 68899)), (RT0__Struct)i3, (i4+2));
l7:
          i4 = i2==(OOC_INT32)0;
          if (i4) goto l32;
          i4 = *(OOC_UINT8*)((_check_pointer(i2, 69182))+17);
          if (i4) goto l30;
          i4 = *(OOC_INT8*)((_check_pointer(i2, 69387))+8);
          i4 = i4==2;
          if (i4) goto l14;
          i4=0u;
          goto l16;
l14:
          i4 = (OOC_INT32)p;
          i4 = *(OOC_UINT8*)((_check_pointer(i4, 69441))+60);
          i4 = !i4;
          
l16:
          if (i4) goto l28;
          i4 = (OOC_INT32)p;
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 69567))+44);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 69567))+44);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 69576)))), XML_Builder__BuilderDesc_StartEntity)),XML_Builder__BuilderDesc_StartEntity)((XML_Builder__Builder)i4, (XML_DTD__Entity)i2);
          XML_Parser__ParserDesc_ParseDocument_PushEntity((XML_DTD__Entity)i2, 1u);
          XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(OOC_INT32)&pos, (RT0__Struct)i3);
          i4 = *(OOC_INT8*)((_check_pointer(i2, 69770))+8);
          i4 = i4==2;
          if (i4) goto l20;
          i4=0u;
          goto l22;
l20:
          i4 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<?xml", 6, 1);
          
l22:
          if (!i4) goto l24;
          XML_Parser__ParserDesc_ParseDocument_XMLDecl((XML_DTD__ExternalEntity)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69895)))), &_td_XML_DTD__ExternalEntityDesc, 69895)));
l24:
          XML_Parser__ParserDesc_ParseDocument_content();
          i0 = (OOC_INT32)chars;
          i0 = _check_pointer(i0, 69965);
          i4 = OOC_ARRAY_LENGTH(i0, 0);
          i5 = cpos;
          i0 = *(OOC_UINT16*)(i0+(_check_index(i5, i4, OOC_UINT32, 69965))*2);
          i0 = i0!=65535u;
          if (!i0) goto l27;
          XML_Parser__ParserDesc_ParseDocument_ErrPos(302, (void*)(OOC_INT32)&pos, (RT0__Struct)i3);
          i0 = (OOC_INT32)p;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 70058))+104);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 70165))+4);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 70165))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 70058))+104);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 70171)), 0);
          i1 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i5, 70171)), i1);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 70069)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i1);
l27:
          XML_Parser__ParserDesc_ParseDocument_PopEntity();
          i0 = (OOC_INT32)p;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 70237))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 70237))+4);
          i0 = _check_pointer(i0, 70240);
          XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i1, 70240)), (RT0__Struct)i3);
          i0 = (OOC_INT32)p;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 70255))+44);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 70255))+44);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 70264)))), XML_Builder__BuilderDesc_EndEntity)),XML_Builder__BuilderDesc_EndEntity)((XML_Builder__Builder)i0, (XML_DTD__Entity)i2);
          goto l33;
l28:
          i0 = (OOC_INT32)p;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69477))+44);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69477))+44);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 69512))+4);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 69486)))), XML_Builder__BuilderDesc_SkippedEntity)),XML_Builder__BuilderDesc_SkippedEntity)((XML_Builder__Builder)i0, (XML_UnicodeBuffer__CharArray)i1, (XML_DTD__Entity)i2);
          goto l33;
l30:
          XML_Parser__ParserDesc_ParseDocument_Err(213);
          i0 = (OOC_INT32)p;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69250))+104);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 69356))+4);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 69356))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69250))+104);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 69362)), 0);
          i1 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i3, 69362)), i1);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 69261)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i1);
          goto l33;
l32:
          i0 = (OOC_INT32)p;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69028))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69028))+4);
          i0 = _check_pointer(i0, 69031);
          XML_Parser__ParserDesc_ParseDocument_ErrPos(210, (void*)(_check_pointer(i2, 69031)), (RT0__Struct)i3);
          i0 = (OOC_INT32)p;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69046))+104);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 69152))+4);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 69152))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69046))+104);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 69158)), 0);
          i1 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i3, 69158)), i1);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 69057)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i1);
l33:
          return;
          ;
        }


l1_loop:
      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 70380);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 70380))*2);
      switch (i0) {
      case 65535u:
        goto l28;
      case 60u:
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
        i0 = _check_pointer(i0, 70689);
        i1 = cpos;
        i2 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = *(OOC_UINT16*)(i0+(_check_index((i1+1), i2, OOC_UINT32, 70689))*2);
        i0 = i0!=47u;
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
      case 38u:
        i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("&#", 3, 0);
        if (!i0) goto l23;
        goto l24;
l23:
        i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_EntityRef(0u, 1u);
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

    
    void XML_Parser__ParserDesc_ParseDocument_element(void) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
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
      auto void XML_Parser__ParserDesc_ParseDocument_element_ErrEndTag(void);
        
        void XML_Parser__ParserDesc_ParseDocument_element_NoteName(XML_UnicodeBuffer__CharArray name) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
          XML_Parser__NameList newList;
          OOC_INT32 i;

          i0 = (OOC_INT32)p;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71469))+76);
          i2 = *(OOC_INT32*)((_check_pointer(i0, 71447))+80);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 71479)), 0);
          i1 = i2==i1;
          if (!i1) goto l11;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71518))+76);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 71528)), 0);
          i1 = (OOC_INT32)RT0__NewObject(_td_XML_Parser__NameList.baseTypes[0], (i1+8));
          newList = (XML_Parser__NameList)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71576))+76);
          i = 0;
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 71586)), 0);
          i3 = 0<i2;
          if (!i3) goto l10;
          i3=0;
l5_loop:
          i4 = _check_pointer(i1, 71613);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71621))+76);
          i6 = _check_pointer(i6, 71631);
          i7 = OOC_ARRAY_LENGTH(i6, 0);
          i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 71631))*4);
          *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 71613))*4) = i6;
          i3 = i3+1;
          i = i3;
          i4 = i3<i2;
          if (i4) goto l5_loop;
l10:
          *(OOC_INT32*)((_check_pointer(i0, 71661))+76) = i1;
l11:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71705))+76);
          i1 = _check_pointer(i1, 71715);
          i2 = *(OOC_INT32*)((_check_pointer(i0, 71717))+80);
          i3 = OOC_ARRAY_LENGTH(i1, 0);
          i4 = (OOC_INT32)name;
          *(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 71715))*4) = i4;
          i1 = *(OOC_INT32*)((_check_pointer(i0, 71755))+80);
          *(OOC_INT32*)((_check_pointer(i0, 71755))+80) = (i1+1);
          return;
          ;
        }

        
        OOC_CHAR8 XML_Parser__ParserDesc_ParseDocument_element_AttributeNameUsed(XML_UnicodeBuffer__CharArray name) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_INT32 i;

          i0 = (OOC_INT32)p;
          i = 0;
          i1 = *(OOC_INT32*)((_check_pointer(i0, 71921))+80);
          i2 = 0<i1;
          if (!i2) goto l11;
          i2 = (OOC_INT32)name;
          i3=0;
l3_loop:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71963))+76);
          i4 = _check_pointer(i4, 71973);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 71973))*4);
          i4 = (
          _cmp16((const void*)(_check_pointer(i2, 71958)),(const void*)(_check_pointer(i4, 71976))))==0;
          if (!i4) goto l6;
          return 1u;
l6:
          i3 = i3+1;
          i = i3;
          i4 = i3<i1;
          if (i4) goto l3_loop;
l11:
          return 0u;
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
              i1 = *(OOC_INT32*)((_check_pointer(i0, 72404))+80);
              i1 = 0!=i1;
              if (!i1) goto l11;
              i1 = (OOC_INT32)name;
              i2=0;
l3_loop:
              i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 72439))+76);
              i3 = _check_pointer(i3, 72449);
              i4 = OOC_ARRAY_LENGTH(i3, 0);
              i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 72449))*4);
              i3 = (
              _cmp16((const void*)(_check_pointer(i3, 72452)),(const void*)(_check_pointer(i1, 72460))))==0;
              if (!i3) goto l6;
              return 1u;
l6:
              i2 = i2+1;
              i = i2;
              i3 = *(OOC_INT32*)((_check_pointer(i0, 72404))+80);
              i3 = i2!=i3;
              if (i3) goto l3_loop;
l11:
              return 0u;
              ;
            }


          i0 = (OOC_INT32)elemDecl;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 72642))+20);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 72657));
          decl = (XML_DTD__Declaration)i0;
          i1 = i0!=0;
          if (!i1) goto l22;
          i1 = (OOC_INT32)&_td_XML_Locator__Position;
          
l3_loop:
          i2 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 72730)))), &_td_XML_DTD__AttrDeclDesc, 72730);
          attrDecl = (XML_DTD__AttrDecl)i2;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 72781))+4);
          i3 = XML_Parser__ParserDesc_ParseDocument_element_AddDefaultAttributes_AttributeDefined((XML_UnicodeBuffer__CharArray)i3);
          i3 = !i3;
          if (!i3) goto l17;
          i3 = *(OOC_INT8*)((_check_pointer(i2, 72818))+20);
          i3 = i3>=2;
          if (i3) goto l15;
          i3 = (OOC_INT32)p;
          i4 = *(OOC_UINT8*)((_check_pointer(i3, 73051))+62);
          if (i4) goto l10;
          i4=0u;
          goto l12;
l10:
          i4 = *(OOC_INT8*)((_check_pointer(i2, 73093))+20);
          i4 = i4==0;
          
l12:
          if (!i4) goto l17;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 73174))+4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 73174))+4);
          i3 = _check_pointer(i3, 73177);
          XML_Parser__ParserDesc_ParseDocument_ErrPosNF(214, (void*)(_check_pointer(i4, 73177)), (RT0__Struct)i1);
          i3 = (OOC_INT32)p;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 73196))+104);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 73262))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 73262))+4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 73196))+104);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 73268)), 0);
          i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i5, 73268)), i2);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 73207)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i3, "name", 5, (Msg__LStringPtr)i2);
          goto l17;
l15:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 72883))+24);
          XML_Parser__ParserDesc_ParseDocument_Expand((XML_DTD__AttValue)i3);
          i3 = (OOC_INT32)p;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 72915))+44);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 72915))+44);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 72946))+4);
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 73009))+24);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 72924)))), XML_Builder__BuilderDesc_Attribute)),XML_Builder__BuilderDesc_Attribute)((XML_Builder__Builder)i3, (XML_DTD__NamespaceDeclaration)0, (XML_UnicodeBuffer__CharArray)i5, (XML_DTD__AttrDecl)i2, (XML_DTD__AttValue)i6, 0u);
l17:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 73325));
          decl = (XML_DTD__Declaration)i0;
          i2 = i0!=0;
          if (i2) goto l3_loop;
l22:
          return;
          ;
        }

        
        void XML_Parser__ParserDesc_ParseDocument_element_ErrEndTag(void) {
          register OOC_INT32 i0,i1,i2,i3;

          i0 = (OOC_INT32)startName;
          i1 = (OOC_INT32)XML_Parser__noName;
          i0 = i0!=i1;
          if (!i0) goto l4;
          XML_Parser__ParserDesc_ParseDocument_ErrPos(209, (void*)(OOC_INT32)&pos, (RT0__Struct)((OOC_INT32)&_td_XML_Locator__Position));
          i0 = (OOC_INT32)p;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 73506))+104);
          i2 = (OOC_INT32)startName;
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 73573)), 0);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 73506))+104);
          i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 73573)), i3);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 73517)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i2);
l4:
          return;
          ;
        }


      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 73640);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 73640))*2);
      i0 = i0==60u;
      if (i0) goto l3;
      XML_Parser__ParserDesc_ParseDocument_Err(208);
      goto l51;
l3:
      XML_Parser__ParserDesc_ParseDocument_CheckChar(60u);
      i0 = (OOC_INT32)p;
      *(OOC_INT32*)((_check_pointer(i0, 73693))+80) = 0;
      emptyElementTag = 0u;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 73771))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 73771))+4);
      i0 = _check_pointer(i0, 73774);
      i0 = (OOC_INT32)&_td_XML_Locator__Position;
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i1, 73774)), (RT0__Struct)i0);
      i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(0u);
      startName = (XML_UnicodeBuffer__CharArray)i1;
      i2 = (OOC_INT32)dtd;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 73832))+12);
      i2 = (OOC_INT32)XML_DTD__NamespaceDesc_Get((XML_DTD__Namespace)i2, (XML_UnicodeBuffer__CharArray)i1);
      decl = (XML_DTD__Declaration)i2;
      i3 = (OOC_INT32)p;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 73878))+44);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 73878))+44);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 73887)))), XML_Builder__BuilderDesc_StartElement)),XML_Builder__BuilderDesc_StartElement)((XML_Builder__Builder)i3, (XML_DTD__NamespaceDeclaration)(OOC_INT32)0, (XML_UnicodeBuffer__CharArray)i1);
      i1 = i2!=(OOC_INT32)0;
      {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
l4_loop:
      i3 = (OOC_INT32)chars;
      i4 = _check_pointer(i3, 73967);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = cpos;
      i4 = *(OOC_UINT16*)(i4+(_check_index(i6, i5, OOC_UINT32, 73967))*2);
      i4 = i4==65535u;
      if (i4) goto l34;
      i4 = _check_pointer(i3, 74038);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = *(OOC_UINT16*)(i4+(_check_index(i6, i5, OOC_UINT32, 74038))*2);
      i4 = i4!=62u;
      if (i4) goto l9;
      i3=0u;
      goto l11;
l9:
      i3 = _check_pointer(i3, 74060);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT16*)(i3+(_check_index(i6, i4, OOC_UINT32, 74060))*2);
      i3 = i3!=47u;
      
l11:
      if (!i3) goto l14;
      XML_Parser__ParserDesc_ParseDocument_S();
l14:
      i3 = (OOC_INT32)chars;
      i4 = _check_pointer(i3, 74127);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = cpos;
      i4 = *(OOC_UINT16*)(i4+(_check_index(i6, i5, OOC_UINT32, 74127))*2);
      i4 = i4==47u;
      if (i4) goto l32;
      i3 = _check_pointer(i3, 74251);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT16*)(i3+(_check_index(i6, i4, OOC_UINT32, 74251))*2);
      i3 = i3==62u;
      if (i3) goto l34;
l20:
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74339))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74339))+4);
      i1 = _check_pointer(i1, 74342);
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i2, 74342)), (RT0__Struct)i0);
      i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(0u);
      attrName = (XML_UnicodeBuffer__CharArray)i1;
      i2 = XML_Parser__ParserDesc_ParseDocument_element_AttributeNameUsed((XML_UnicodeBuffer__CharArray)i1);
      if (!i2) goto l23;
      i2 = (OOC_INT32)p;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 74468))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 74468))+4);
      i2 = _check_pointer(i2, 74471);
      XML_Parser__ParserDesc_ParseDocument_ErrPos(212, (void*)(_check_pointer(i3, 74471)), (RT0__Struct)i0);
      i2 = (OOC_INT32)p;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 74488))+104);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 74488))+104);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i1, 74554)), 0);
      i4 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i1, 74554)), i4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 74499)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i2, "name", 5, (Msg__LStringPtr)i4);
l23:
      XML_Parser__ParserDesc_ParseDocument_element_NoteName((XML_UnicodeBuffer__CharArray)i1);
      XML_Parser__ParserDesc_ParseDocument_Eq();
      attrDecl = (XML_DTD__AttrDecl)(OOC_INT32)0;
      i1 = (OOC_INT32)decl;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l26;
      i3=(OOC_INT32)0;
      goto l31;
l26:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74706)))), &_td_XML_DTD__ElementDeclDesc, 74706)), 74718))+20);
      i4 = (OOC_INT32)attrName;
      i3 = (OOC_INT32)XML_DTD__NamespaceDesc_Get((XML_DTD__Namespace)i3, (XML_UnicodeBuffer__CharArray)i4);
      decl0 = (XML_DTD__Declaration)i3;
      i4 = i3!=(OOC_INT32)0;
      if (i4) goto l29;
      i3=(OOC_INT32)0;
      goto l31;
l29:
      i3 = _type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 74821)))), &_td_XML_DTD__AttrDeclDesc, 74821);
      attrDecl = (XML_DTD__AttrDecl)i3;
      
l31:
      i4 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_AttValue(1u);
      attrValue = (XML_DTD__AttValue)i4;
      XML_Parser__ParserDesc_ParseDocument_Expand((XML_DTD__AttValue)i4);
      i5 = (OOC_INT32)p;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 74943))+44);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 74943))+44);
      i7 = (OOC_INT32)attrName;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 74952)))), XML_Builder__BuilderDesc_Attribute)),XML_Builder__BuilderDesc_Attribute)((XML_Builder__Builder)i5, (XML_DTD__NamespaceDeclaration)(OOC_INT32)0, (XML_UnicodeBuffer__CharArray)i7, (XML_DTD__AttrDecl)i3, (XML_DTD__AttValue)i4, 1u);
      
      goto l4_loop;
l32:
      XML_Parser__ParserDesc_ParseDocument_CheckChar(47u);
      emptyElementTag = 1u;
l34:
      i3 = (OOC_INT32)p;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 75068))+4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 75068))+4);
      i3 = _check_pointer(i3, 75071);
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i4, 75071)), (RT0__Struct)i0);
      if (!i2) goto l37;
      XML_Parser__ParserDesc_ParseDocument_element_AddDefaultAttributes((XML_DTD__ElementDecl)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75145)))), &_td_XML_DTD__ElementDeclDesc, 75145)));
l37:
      XML_Parser__ParserDesc_ParseDocument_CheckChar(62u);
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 75206))+44);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 75206))+44);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 75215)))), XML_Builder__BuilderDesc_AttributesDone)),XML_Builder__BuilderDesc_AttributesDone)((XML_Builder__Builder)i1);
      XML_Parser__ParserDesc_ParseDocument_DiscardPreviousInput();
      i1 = emptyElementTag;
      if (i1) goto l49;
      XML_Parser__ParserDesc_ParseDocument_content();
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(OOC_INT32)&pos, (RT0__Struct)i0);
      i1 = (OOC_INT32)chars;
      i1 = _check_pointer(i1, 75504);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 75504))*2);
      i1 = i1!=60u;
      if (!i1) goto l42;
      XML_Parser__ParserDesc_ParseDocument_element_ErrEndTag();
l42:
      XML_Parser__ParserDesc_ParseDocument_CheckChar(60u);
      i1 = (OOC_INT32)chars;
      i1 = _check_pointer(i1, 75584);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = cpos;
      i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 75584))*2);
      i1 = i1!=47u;
      if (!i1) goto l45;
      XML_Parser__ParserDesc_ParseDocument_element_ErrEndTag();
l45:
      XML_Parser__ParserDesc_ParseDocument_CheckChar(47u);
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 75671))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 75671))+4);
      i1 = _check_pointer(i1, 75674);
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i2, 75674)), (RT0__Struct)i0);
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(0u);
      endName = (XML_UnicodeBuffer__CharArray)i0;
      i1 = (OOC_INT32)startName;
      i0 = (
      _cmp16((const void*)(_check_pointer(i0, 75734)),(const void*)(_check_pointer(i1, 75747))))!=0;
      if (!i0) goto l48;
      XML_Parser__ParserDesc_ParseDocument_element_ErrEndTag();
l48:
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 75781))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 75781))+44);
      i2 = (OOC_INT32)startName;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75790)))), XML_Builder__BuilderDesc_EndElement)),XML_Builder__BuilderDesc_EndElement)((XML_Builder__Builder)i0, (XML_DTD__NamespaceDeclaration)(OOC_INT32)0, (XML_UnicodeBuffer__CharArray)i2);
      XML_Parser__ParserDesc_ParseDocument_OptS(1u);
      XML_Parser__ParserDesc_ParseDocument_CheckChar(62u);
      goto l51;
l49:
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 75350))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 75350))+4);
      i1 = _check_pointer(i1, 75353);
      XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i2, 75353)), (RT0__Struct)i0);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 75368))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 75368))+44);
      i2 = (OOC_INT32)startName;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75377)))), XML_Builder__BuilderDesc_EndElement)),XML_Builder__BuilderDesc_EndElement)((XML_Builder__Builder)i0, (XML_DTD__NamespaceDeclaration)(OOC_INT32)0, (XML_UnicodeBuffer__CharArray)i2);
l51:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_MiscRep(void) {
      register OOC_INT32 i0,i1,i2;

l1_loop:
      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 76091);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 76091))*2);
      switch (i0) {
      case 65534u:
        XML_Parser__ParserDesc_ParseDocument_NextBlock();
        goto l1_loop;
      case 60u:
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
      case 0u ... 32u:
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
      *_public = (XML_UnicodeBuffer__CharArray)i0;
      i0 = optionJustPubid;
      i0 = !i0;
      if (i0) goto l8;
      i1 = XML_Parser__ParserDesc_ParseDocument_LookingAtS();
      
      goto l10;
l8:
      i1=1u;
l10:
      if (!i1) goto l23;
      XML_Parser__ParserDesc_ParseDocument_S();
      if (i0) goto l14;
      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 77420);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 77420))*2);
      i0 = i0==39u;
      
      goto l16;
l14:
      i0=1u;
l16:
      if (i0) goto l18;
      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 77443);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i2 = cpos;
      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 77443))*2);
      i0 = i0==34u;
      
      goto l20;
l18:
      i0=1u;
l20:
      if (!i0) goto l23;
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_String(2);
      *system = (XML_UnicodeBuffer__CharArray)i0;
l23:
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77548))+32);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77579))+56);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77548))+32);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 77590))+36);
      i3 = (OOC_INT32)*_public;
      i4 = (OOC_INT32)*system;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 77552)))), XML_EntityResolver__ResolverDesc_GetURI)),XML_EntityResolver__ResolverDesc_GetURI)((XML_EntityResolver__Resolver)i0, (XML_UnicodeBuffer__CharArray)i3, (XML_UnicodeBuffer__CharArray)i4, (URI__URI)i2, (void*)(OOC_INT32)baseURI, (void*)(OOC_INT32)&res);
      i0 = (OOC_INT32)res;
      i0 = i0!=(OOC_INT32)0;
      if (!i0) goto l32;
      XML_Parser__ParserDesc_ParseDocument_Err(117);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77684))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77684))+104);
      i2 = (OOC_INT32)res;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 77695)))), Msg__MsgDesc_SetMsgAttrib)),Msg__MsgDesc_SetMsgAttrib)((Msg__Msg)i0, "uri_error", 10, (Msg__Msg)i2);
      goto l32;
l28:
      i0 = cpos;
      cpos = (i0+6);
      XML_Parser__ParserDesc_ParseDocument_S();
      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_String(1);
      *system = (XML_UnicodeBuffer__CharArray)i0;
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 76937))+32);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 76965))+56);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 76937))+32);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 76977))+36);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 76941)))), XML_EntityResolver__ResolverDesc_GetURI)),XML_EntityResolver__ResolverDesc_GetURI)((XML_EntityResolver__Resolver)i1, (XML_UnicodeBuffer__CharArray)(OOC_INT32)0, (XML_UnicodeBuffer__CharArray)i0, (URI__URI)i3, (void*)(OOC_INT32)baseURI, (void*)(OOC_INT32)&res);
      i0 = (OOC_INT32)res;
      i0 = i0!=(OOC_INT32)0;
      if (!i0) goto l32;
      XML_Parser__ParserDesc_ParseDocument_Err(117);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77072))+104);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77072))+104);
      i2 = (OOC_INT32)res;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 77083)))), Msg__MsgDesc_SetMsgAttrib)),Msg__MsgDesc_SetMsgAttrib)((Msg__Msg)i0, "uri_error", 10, (Msg__Msg)i2);
l32:
      return;
      ;
    }

    
    void XML_Parser__ParserDesc_ParseDocument_markupdecl(void) {
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
          auto XML_DTD__CP XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec(void);
            
            XML_DTD__CP XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec(void) {
              register OOC_INT32 i0,i1,i2;
              XML_DTD__Entity currentEntity;
              auto XML_DTD__CP XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_Mixed(XML_DTD__Entity currentEntity);
              auto XML_DTD__CP XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children(XML_DTD__Entity currentEntity);
                
                XML_DTD__CP XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_Mixed(XML_DTD__Entity currentEntity) {
                  register OOC_INT32 i0,i1,i2,i3,i4,i5;
                  XML_DTD__CP first;
                  XML_DTD__CP last;
                  OOC_CHAR8 hasAlternative;

                  i0 = (OOC_INT32)dtd;
                  i1 = cpos;
                  i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_GetString(i1, (i1+7));
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78502)))), XML_DTD__BuilderDesc_NewNameCP)),XML_DTD__BuilderDesc_NewNameCP)((XML_DTD__Builder)i0, 0, (XML_UnicodeBuffer__CharArray)i1);
                  i1 = cpos;
                  first = (XML_DTD__CP)i0;
                  i1 = i1+7;
                  cpos = i1;
                  last = (XML_DTD__CP)i0;
                  XML_Parser__ParserDesc_ParseDocument_OptS(0u);
                  hasAlternative = 0u;
                  i2 = (OOC_INT32)chars;
                  i2 = _check_pointer(i2, 78733);
                  i3 = OOC_ARRAY_LENGTH(i2, 0);
                  i1 = *(OOC_UINT16*)(i2+(_check_index(i1, i3, OOC_UINT32, 78733))*2);
                  i2 = (OOC_INT32)currentEntity;
                  i1 = i1==124u;
                  if (i1) goto l3;
                  i1=0u;
                  goto l9;
l3:
                  i1=i0;
l4_loop:
                  hasAlternative = 1u;
                  XML_Parser__ParserDesc_ParseDocument_CheckChar(124u);
                  XML_Parser__ParserDesc_ParseDocument_OptS(0u);
                  i3 = (OOC_INT32)dtd;
                  i4 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(0u);
                  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 78879)))), XML_DTD__BuilderDesc_NewNameCP)),XML_DTD__BuilderDesc_NewNameCP)((XML_DTD__Builder)i3, 0, (XML_UnicodeBuffer__CharArray)i4);
                  XML_DTD__CPDesc_SetNext((XML_DTD__CP)i1, (XML_DTD__CP)i3);
                  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 78946))+4);
                  last = (XML_DTD__CP)i1;
                  XML_Parser__ParserDesc_ParseDocument_OptS(0u);
                  i3 = (OOC_INT32)chars;
                  i3 = _check_pointer(i3, 78733);
                  i4 = OOC_ARRAY_LENGTH(i3, 0);
                  i5 = cpos;
                  i3 = *(OOC_UINT16*)(i3+(_check_index(i5, i4, OOC_UINT32, 78733))*2);
                  i3 = i3==124u;
                  if (i3) goto l4_loop;
l8:
                  i1=1u;
l9:
                  XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i2);
                  XML_Parser__ParserDesc_ParseDocument_CheckChar(41u);
                  if (i1) goto l12;
                  i1 = (OOC_INT32)chars;
                  i1 = _check_pointer(i1, 79114);
                  i2 = OOC_ARRAY_LENGTH(i1, 0);
                  i3 = cpos;
                  i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 79114))*2);
                  i1 = i1==42u;
                  
                  goto l14;
l12:
                  i1=1u;
l14:
                  if (i1) goto l16;
                  i1 = (OOC_INT32)dtd;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 79266)))), XML_DTD__BuilderDesc_NewChoiceCP)),XML_DTD__BuilderDesc_NewChoiceCP)((XML_DTD__Builder)i1, 0, (XML_DTD__CP)i0);
                  return (XML_DTD__CP)i0;
                  goto l17;
l16:
                  XML_Parser__ParserDesc_ParseDocument_CheckChar(42u);
                  i1 = (OOC_INT32)dtd;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 79188)))), XML_DTD__BuilderDesc_NewChoiceCP)),XML_DTD__BuilderDesc_NewChoiceCP)((XML_DTD__Builder)i1, 2, (XML_DTD__CP)i0);
                  return (XML_DTD__CP)i0;
l17:
                  _failed_function(78259); return 0;
                  ;
                }

                
                XML_DTD__CP XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children(XML_DTD__Entity currentEntity) {
                  register OOC_INT32 i0,i1;
                  XML_DTD__CP cp;
                  auto OOC_INT8 XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_Quantifier(void);
                  auto XML_DTD__CP XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_choiceseq(XML_DTD__Entity currentEntity);
                    
                    OOC_INT8 XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_Quantifier(void) {
                      register OOC_INT32 i0,i1,i2;

                      i0 = (OOC_INT32)chars;
                      i0 = _check_pointer(i0, 79677);
                      i1 = OOC_ARRAY_LENGTH(i0, 0);
                      i2 = cpos;
                      i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 79677))*2);
                      switch (i0) {
                      case 42u:
                        XML_Parser__ParserDesc_ParseDocument_CheckChar(42u);
                        return 2;
                        goto l6;
                      case 43u:
                        XML_Parser__ParserDesc_ParseDocument_CheckChar(43u);
                        return 3;
                        goto l6;
                      case 63u:
                        XML_Parser__ParserDesc_ParseDocument_CheckChar(63u);
                        return 1;
                        goto l6;
                      default:
                        return 0;
                        goto l6;
                      }
l6:
                      _failed_function(79544); return 0;
                      ;
                    }

                    
                    XML_DTD__CP XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_choiceseq(XML_DTD__Entity currentEntity) {
                      register OOC_INT32 i0,i1,i2,i3,i4;
                      OOC_CHAR16 _class;
                      XML_DTD__CP first;
                      XML_DTD__CP last;
                      auto XML_DTD__CP XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_choiceseq_cp(void);
                        
                        XML_DTD__CP XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_choiceseq_cp(void) {
                          register OOC_INT32 i0,i1,i2,i3;

                          i0 = (OOC_INT32)chars;
                          i1 = _check_pointer(i0, 80435);
                          i2 = OOC_ARRAY_LENGTH(i1, 0);
                          i3 = cpos;
                          i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 80435))*2);
                          i1 = i1==40u;
                          if (i1) goto l7;
                          i0 = _check_pointer(i0, 80663);
                          i1 = OOC_ARRAY_LENGTH(i0, 0);
                          i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i1, OOC_UINT32, 80663))*2);
                          i0 = XML_Parser__IsNameChar0(i0);
                          if (i0) goto l5;
                          XML_Parser__ParserDesc_ParseDocument_Err(110);
                          i0 = (OOC_INT32)dtd;
                          i1 = (OOC_INT32)XML_Parser__noName;
                          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80826)))), XML_DTD__BuilderDesc_NewNameCP)),XML_DTD__BuilderDesc_NewNameCP)((XML_DTD__Builder)i0, 0, (XML_UnicodeBuffer__CharArray)i1);
                          
                          goto l8;
l5:
                          i0 = (OOC_INT32)dtd;
                          i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(0u);
                          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80703)))), XML_DTD__BuilderDesc_NewNameCP)),XML_DTD__BuilderDesc_NewNameCP)((XML_DTD__Builder)i0, 0, (XML_UnicodeBuffer__CharArray)i1);
                          
                          goto l8;
l7:
                          i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_CurrentEntity();
                          XML_Parser__ParserDesc_ParseDocument_CheckChar(40u);
                          XML_Parser__ParserDesc_ParseDocument_OptS(0u);
                          i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_choiceseq((XML_DTD__Entity)i0);
                          
l8:
                          i1 = XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_Quantifier();
                          XML_DTD__CPDesc_SetMode((XML_DTD__CP)i0, i1);
                          return (XML_DTD__CP)i0;
                          ;
                        }


                      _class = 0u;
                      i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_choiceseq_cp();
                      first = (XML_DTD__CP)i0;
                      XML_Parser__ParserDesc_ParseDocument_OptS(0u);
                      last = (XML_DTD__CP)i0;
                      
l1_loop:
                      i1 = (OOC_INT32)chars;
                      i2 = _check_pointer(i1, 81149);
                      i3 = OOC_ARRAY_LENGTH(i2, 0);
                      i4 = cpos;
                      i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 81149))*2);
                      switch (i2) {
                      case 65534u:
                        XML_Parser__ParserDesc_ParseDocument_NextBlock();
                        
                        goto l1_loop;
                      case 44u:
                      case 124u:
                        i2 = _class;
                        i2 = i2==0u;
                        if (i2) goto l6;
                        goto l7;
l6:
                        i1 = _check_pointer(i1, 81324);
                        i2 = OOC_ARRAY_LENGTH(i1, 0);
                        i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 81324))*2);
                        _class = i1;
l7:
                        i1 = _class;
                        XML_Parser__ParserDesc_ParseDocument_CheckChar(i1);
                        XML_Parser__ParserDesc_ParseDocument_OptS(0u);
                        i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_choiceseq_cp();
                        XML_DTD__CPDesc_SetNext((XML_DTD__CP)i0, (XML_DTD__CP)i1);
                        i0 = (OOC_INT32)last;
                        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 81501))+4);
                        last = (XML_DTD__CP)i0;
                        XML_Parser__ParserDesc_ParseDocument_OptS(0u);
                        
                        goto l1_loop;
                      default:
                        goto l10;
                      }
l10:
                      XML_Parser__ParserDesc_ParseDocument_CheckChar(41u);
                      i0 = (OOC_INT32)currentEntity;
                      XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i0);
                      i0 = _class;
                      i0 = i0==44u;
                      if (i0) goto l13;
                      i0 = (OOC_INT32)dtd;
                      i1 = (OOC_INT32)first;
                      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81912)))), XML_DTD__BuilderDesc_NewChoiceCP)),XML_DTD__BuilderDesc_NewChoiceCP)((XML_DTD__Builder)i0, 0, (XML_DTD__CP)i1);
                      return (XML_DTD__CP)i0;
                      goto l14;
l13:
                      i0 = (OOC_INT32)dtd;
                      i1 = (OOC_INT32)first;
                      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81836)))), XML_DTD__BuilderDesc_NewSeqCP)),XML_DTD__BuilderDesc_NewSeqCP)((XML_DTD__Builder)i0, 0, (XML_DTD__CP)i1);
                      return (XML_DTD__CP)i0;
l14:
                      _failed_function(79985); return 0;
                      ;
                    }


                  i0 = (OOC_INT32)currentEntity;
                  i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_choiceseq((XML_DTD__Entity)i0);
                  cp = (XML_DTD__CP)i0;
                  i1 = XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec_children_Quantifier();
                  XML_DTD__CPDesc_SetMode((XML_DTD__CP)i0, i1);
                  i0 = (OOC_INT32)cp;
                  return (XML_DTD__CP)i0;
                  ;
                }


              i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("EMPTY", 6, 1);
              if (i0) goto l15;
              i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("ANY", 4, 1);
              if (i0) goto l13;
              i0 = (OOC_INT32)chars;
              i0 = _check_pointer(i0, 82413);
              i1 = OOC_ARRAY_LENGTH(i0, 0);
              i2 = cpos;
              i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 82413))*2);
              i0 = i0==40u;
              if (i0) goto l7;
              XML_Parser__ParserDesc_ParseDocument_Err(106);
              i0 = (OOC_INT32)dtd;
              i1 = (OOC_INT32)XML_Parser__noName;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82792)))), XML_DTD__BuilderDesc_NewNameCP)),XML_DTD__BuilderDesc_NewNameCP)((XML_DTD__Builder)i0, 0, (XML_UnicodeBuffer__CharArray)i1);
              return (XML_DTD__CP)i0;
              goto l16;
l7:
              i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_CurrentEntity();
              currentEntity = (XML_DTD__Entity)i0;
              XML_Parser__ParserDesc_ParseDocument_CheckChar(40u);
              XML_Parser__ParserDesc_ParseDocument_OptS(0u);
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
              i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(0u);
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82352)))), XML_DTD__BuilderDesc_NewNameCP)),XML_DTD__BuilderDesc_NewNameCP)((XML_DTD__Builder)i0, 0, (XML_UnicodeBuffer__CharArray)i1);
              return (XML_DTD__CP)i0;
              goto l16;
l15:
              i0 = (OOC_INT32)dtd;
              i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(0u);
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82233)))), XML_DTD__BuilderDesc_NewNameCP)),XML_DTD__BuilderDesc_NewNameCP)((XML_DTD__Builder)i0, 0, (XML_UnicodeBuffer__CharArray)i1);
              return (XML_DTD__CP)i0;
l16:
              _failed_function(78136); return 0;
              ;
            }


          i0 = cpos;
          cpos = (i0+9);
          XML_Parser__ParserDesc_ParseDocument_S();
          i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(0u);
          elementName = (XML_UnicodeBuffer__CharArray)i0;
          XML_Parser__ParserDesc_ParseDocument_S();
          i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_markupdecl_elementdecl_contentspec();
          cp = (XML_DTD__CP)i0;
          XML_Parser__ParserDesc_ParseDocument_OptS(0u);
          i1 = (OOC_INT32)dtd;
          i2 = (OOC_INT32)currentEntity;
          i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 83130)))), XML_DTD__EntityDesc_IsDocumentEntity)),XML_DTD__EntityDesc_IsDocumentEntity)((XML_DTD__Entity)i2);
          i4 = (OOC_INT32)elementName;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 83081)))), XML_DTD__BuilderDesc_NewElementDecl)),XML_DTD__BuilderDesc_NewElementDecl)((XML_DTD__Builder)i1, (XML_UnicodeBuffer__CharArray)i4, (XML_DTD__CP)i0, (!i3));
          elementDecl = (XML_DTD__ElementDecl)i0;
          i1 = (OOC_INT32)dtd;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 83168))+12);
          i0 = XML_DTD__NamespaceDesc_Add((XML_DTD__Namespace)i1, (XML_DTD__Declaration)i0);
          i0 = !i0;
          if (!i0) goto l3;
          i0 = (OOC_INT32)dtd;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 83232))+12);
          i0 = (OOC_INT32)XML_DTD__NamespaceDesc_Get((XML_DTD__Namespace)i0, (XML_UnicodeBuffer__CharArray)i4);
          decl = (XML_DTD__Declaration)i0;
          XML_DTD__ElementDeclDesc_SetMultipleDecl((XML_DTD__ElementDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83290)))), &_td_XML_DTD__ElementDeclDesc, 83290)));
l3:
          XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i2);
          XML_Parser__ParserDesc_ParseDocument_CheckChar(62u);
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
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84106)))), XML_DTD__BuilderDesc_NewEnumeration)),XML_DTD__BuilderDesc_NewEnumeration)((XML_DTD__Builder)i0);
                  *_enum = (XML_DTD__Enumeration)i0;
                  XML_Parser__ParserDesc_ParseDocument_CheckChar(40u);
                  i0 = attrType;
l1_loop:
                  XML_Parser__ParserDesc_ParseDocument_OptS(0u);
                  switch (i0) {
                  case 7:
                    i1 = (OOC_INT32)*_enum;
                    i2 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(1u);
                    XML_DTD__EnumerationDesc_Append((XML_DTD__Enumeration)i1, (XML_UnicodeBuffer__CharArray)i2);
                    goto l6;
                  case 8:
                    i1 = (OOC_INT32)*_enum;
                    i2 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Nmtoken(0u, 0u);
                    XML_DTD__EnumerationDesc_Append((XML_DTD__Enumeration)i1, (XML_UnicodeBuffer__CharArray)i2);
                    goto l6;
                  default:
                    _failed_case(i0, 84214);
                    goto l6;
                  }
l6:
                  XML_Parser__ParserDesc_ParseDocument_OptS(0u);
                  i1 = (OOC_INT32)chars;
                  i1 = _check_pointer(i1, 84468);
                  i2 = OOC_ARRAY_LENGTH(i1, 0);
                  i3 = cpos;
                  i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 84468))*2);
                  i1 = i1==124u;
                  if (!i1) goto l11;
                  XML_Parser__ParserDesc_ParseDocument_CheckChar(124u);
                  goto l1_loop;
l11:
                  XML_Parser__ParserDesc_ParseDocument_CheckChar(41u);
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
              i0 = _check_pointer(i0, 85806);
              i1 = OOC_ARRAY_LENGTH(i0, 0);
              i2 = cpos;
              i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 85806))*2);
              i0 = i0==40u;
              
              goto l21;
l19:
              i0=1u;
l21:
              if (i0) goto l23;
              XML_Parser__ParserDesc_ParseDocument_Err(107);
              XML_Parser__ParserDesc_ParseDocument_NextChar();
              *attrType = 9;
              goto l44;
l23:
              i0 = (OOC_INT32)chars;
              i0 = _check_pointer(i0, 85846);
              i1 = OOC_ARRAY_LENGTH(i0, 0);
              i2 = cpos;
              i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 85846))*2);
              i0 = i0==40u;
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
              i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_AttValue(1u);
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
          i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(0u);
          elementName = (XML_UnicodeBuffer__CharArray)i0;
l1_loop:
          i0 = (OOC_INT32)chars;
          i0 = _check_pointer(i0, 87275);
          i1 = OOC_ARRAY_LENGTH(i0, 0);
          i2 = cpos;
          i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 87275))*2);
          i0 = i0!=62u;
          if (!i0) goto l4;
          XML_Parser__ParserDesc_ParseDocument_S();
l4:
          i0 = (OOC_INT32)chars;
          i1 = _check_pointer(i0, 87342);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i3 = cpos;
          i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 87342))*2);
          i1 = i1==62u;
          if (i1) goto l7;
          i0 = _check_pointer(i0, 87365);
          i1 = OOC_ARRAY_LENGTH(i0, 0);
          i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i1, OOC_UINT32, 87365))*2);
          i0 = i0==65535u;
          
          goto l9;
l7:
          i0=1u;
l9:
          if (i0) goto l15;
          i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(0u);
          attrName = (XML_UnicodeBuffer__CharArray)i0;
          XML_Parser__ParserDesc_ParseDocument_S();
          XML_Parser__ParserDesc_ParseDocument_markupdecl_AttListDecl_AttType((void*)(OOC_INT32)&attrType, (void*)(OOC_INT32)&attrEnumeration);
          XML_Parser__ParserDesc_ParseDocument_S();
          i0 = attrType;
          XML_Parser__ParserDesc_ParseDocument_markupdecl_AttListDecl_DefaultDecl(i0, (void*)(OOC_INT32)&_default, (void*)(OOC_INT32)&defaultValue);
          i0 = (OOC_INT32)p;
          i0 = *(OOC_UINT8*)((_check_pointer(i0, 87610))+63);
          if (!i0) goto l1_loop;
          i0 = (OOC_INT32)dtd;
          i1 = (OOC_INT32)currentEntity;
          i2 = (OOC_INT32)defaultValue;
          i3 = _default;
          i4 = (OOC_INT32)attrEnumeration;
          i5 = attrType;
          i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 87794)))), XML_DTD__EntityDesc_IsDocumentEntity)),XML_DTD__EntityDesc_IsDocumentEntity)((XML_DTD__Entity)i1);
          i6 = (OOC_INT32)attrName;
          i7 = (OOC_INT32)elementName;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 87664)))), XML_DTD__BuilderDesc_NewAttrDecl)),XML_DTD__BuilderDesc_NewAttrDecl)((XML_DTD__Builder)i0, (XML_UnicodeBuffer__CharArray)i7, (XML_UnicodeBuffer__CharArray)i6, i5, (XML_DTD__Enumeration)i4, i3, (XML_DTD__AttValue)i2, (!i1));
          attrDecl = (XML_DTD__AttrDecl)i0;
          i1 = (OOC_INT32)dtd;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 87832)))), XML_DTD__BuilderDesc_AddAttribute)),XML_DTD__BuilderDesc_AddAttribute)((XML_DTD__Builder)i1, (XML_DTD__AttrDecl)i0);
          goto l1_loop;
l15:
          i0 = (OOC_INT32)currentEntity;
          XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i0);
          XML_Parser__ParserDesc_ParseDocument_CheckChar(62u);
          return;
          ;
        }

        
        void XML_Parser__ParserDesc_ParseDocument_markupdecl_EntityDecl(XML_DTD__Entity currentEntity) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
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
              register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
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
                  i2 = i0!=i1;
                  if (!i2) goto l8;
                  i2 = cdelta;
                  i3 = (OOC_INT32)chars;
                  i2 = (i2*(-1))+i0;
                  
l3_loop:
                  i4 = _check_pointer(i3, 88787);
                  i5 = OOC_ARRAY_LENGTH(i4, 0);
                  i6 = _check_pointer(i3, 88810);
                  i7 = OOC_ARRAY_LENGTH(i6, 0);
                  i6 = *(OOC_UINT16*)(i6+(_check_index(i0, i7, OOC_UINT32, 88810))*2);
                  *(OOC_UINT16*)(i4+(_check_index(i2, i5, OOC_UINT32, 88787))*2) = i6;
                  i0 = i0+1;
                  start = i0;
                  i2 = i2+1;
                  i4 = i0!=i1;
                  if (i4) goto l3_loop;
l8:
                  return;
                  ;
                }


              i0 = (OOC_INT32)XML_Parser__noName;
              string = (XML_UnicodeBuffer__CharArray)i0;
              i1 = (OOC_INT32)chars;
              i2 = _check_pointer(i1, 88943);
              i3 = OOC_ARRAY_LENGTH(i2, 0);
              i4 = cpos;
              i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 88943))*2);
              i2 = i2==39u;
              if (i2) goto l3;
              i1 = _check_pointer(i1, 88966);
              i2 = OOC_ARRAY_LENGTH(i1, 0);
              i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 88966))*2);
              i1 = i1==34u;
              
              goto l5;
l3:
              i1=1u;
l5:
              if (i1) goto l7;
              XML_Parser__ParserDesc_ParseDocument_Err(109);
              XML_Parser__ParserDesc_ParseDocument_NextChar();
              
              goto l32;
l7:
              i0 = (OOC_INT32)p;
              i1 = (OOC_INT32)dtd;
              i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 89251)))), XML_DTD__BuilderDesc_NewAttValue)),XML_DTD__BuilderDesc_NewAttValue)((XML_DTD__Builder)i1);
              *(OOC_INT32*)((_check_pointer(i0, 89227))+72) = i1;
              i0 = (OOC_INT32)&_td_XML_Locator__Position;
              XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(OOC_INT32)&pos, (RT0__Struct)i0);
              i1 = (OOC_INT32)p;
              i1 = *(OOC_INT32*)((_check_pointer(i1, 89341))+88);
              startLevel = i1;
              i1 = (OOC_INT32)chars;
              i1 = _check_pointer(i1, 89383);
              i2 = OOC_ARRAY_LENGTH(i1, 0);
              i3 = cpos;
              i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 89383))*2);
              endChar = i1;
              i1 = i3+1;
              cpos = i1;
              cstart = i1;
              cdelta = 0;
l8_loop:
              i1 = (OOC_INT32)chars;
              i2 = _check_pointer(i1, 89497);
              i3 = OOC_ARRAY_LENGTH(i2, 0);
              i4 = cpos;
              i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 89497))*2);
              switch (i2) {
              case 0u ... 31u:
              case 65534u:
                XML_Parser__ParserDesc_ParseDocument_ControlChar(10u);
                goto l8_loop;
              case 65535u:
                XML_Parser__ParserDesc_ParseDocument_ErrPos(6, (void*)(OOC_INT32)&pos, (RT0__Struct)i0);
                i0 = (OOC_INT32)p;
                i1 = (OOC_INT32)dtd;
                i2 = cpos;
                i3 = cdelta;
                i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 89688))+72);
                i4 = (OOC_INT32)chars;
                i5 = cstart;
                i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 89718)))), XML_DTD__BuilderDesc_NewCharacters)),XML_DTD__BuilderDesc_NewCharacters)((XML_DTD__Builder)i1, (XML_UnicodeBuffer__CharArray)i4, i5, (i2-i3), 1u);
                XML_DTD__AttValueDesc_Append((XML_DTD__AttValue)i0, (XML_DTD__Fragment)i1);
                goto l31;
              case 37u:
                i2 = cdelta;
                i2 = i4-i2;
                i3 = cstart;
                i4 = i3!=i2;
                if (i4) goto l14;
                goto l15;
l14:
                i4 = (OOC_INT32)p;
                i5 = (OOC_INT32)dtd;
                i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 89995))+72);
                i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 90025)))), XML_DTD__BuilderDesc_NewCharacters)),XML_DTD__BuilderDesc_NewCharacters)((XML_DTD__Builder)i5, (XML_UnicodeBuffer__CharArray)i1, i3, i2, 1u);
                XML_DTD__AttValueDesc_Append((XML_DTD__AttValue)i4, (XML_DTD__Fragment)i1);
l15:
                XML_Parser__ParserDesc_ParseDocument_PEReference(0u);
                goto l8_loop;
              case 38u:
                i1 = XML_Parser__ParserDesc_ParseDocument_LookingAt("&#", 3, 0);
                if (!i1) goto l18;
                goto l19;
l18:
                i1 = (OOC_INT32)p;
                i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 90566))+36);
                i1 = *(OOC_INT32*)((_check_pointer(i1, 90570))+24);
                i2 = cpos;
                i1 = i2+i1;
                storedPos = i1;
                i2 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_EntityRef(0u, 1u);
                fragment = (XML_DTD__Fragment)i2;
                i2 = (OOC_INT32)p;
                i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 90678))+36);
                i2 = *(OOC_INT32*)((_check_pointer(i2, 90682))+24);
                i3 = cpos;
                XML_Parser__ParserDesc_ParseDocument_markupdecl_EntityDecl_EntityValue_Copy((i1-i2), i3);
                goto l8_loop;
l19:
                XML_Parser__ParserDesc_ParseDocument_CharRef();
                goto l8_loop;
              default:
                i2 = _check_pointer(i1, 90770);
                i3 = OOC_ARRAY_LENGTH(i2, 0);
                i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 90770))*2);
                i3 = endChar;
                i2 = i2==i3;
                if (i2) goto l24;
                i2=0u;
                goto l26;
l24:
                i2 = (OOC_INT32)p;
                i2 = *(OOC_INT32*)((_check_pointer(i2, 90792))+88);
                i5 = startLevel;
                i2 = i2==i5;
                
l26:
                if (i2) goto l29;
                i2 = _check_pointer(i1, 91171);
                i3 = cdelta;
                i5 = OOC_ARRAY_LENGTH(i2, 0);
                i1 = _check_pointer(i1, 91193);
                i6 = OOC_ARRAY_LENGTH(i1, 0);
                i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i6, OOC_UINT32, 91193))*2);
                *(OOC_UINT16*)(i2+(_check_index((i4-i3), i5, OOC_UINT32, 91171))*2) = i1;
                cpos = (i4+1);
                goto l8_loop;
l29:
                i0 = (OOC_INT32)p;
                i2 = (OOC_INT32)dtd;
                i5 = cdelta;
                i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 90974))+72);
                i6 = cstart;
                i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 91004)))), XML_DTD__BuilderDesc_NewCharacters)),XML_DTD__BuilderDesc_NewCharacters)((XML_DTD__Builder)i2, (XML_UnicodeBuffer__CharArray)i1, i6, (i4-i5), 1u);
                XML_DTD__AttValueDesc_Append((XML_DTD__AttValue)i0, (XML_DTD__Fragment)i1);
                XML_Parser__ParserDesc_ParseDocument_CheckChar(i3);
                goto l31;
              }
l31:
              i0 = (OOC_INT32)p;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 91290))+72);
              i0 = (OOC_INT32)XML_DTD__AttValueDesc_Flatten((XML_DTD__AttValue)i0, (XML_DTD__AttrDecl)(OOC_INT32)0);
              string = (XML_UnicodeBuffer__CharArray)i0;
              i1 = (OOC_INT32)p;
              *(OOC_INT32*)((_check_pointer(i1, 91337))+72) = (OOC_INT32)0;
              
l32:
              return (XML_UnicodeBuffer__CharArray)i0;
              ;
            }


          i0 = cpos;
          cpos = (i0+8);
          XML_Parser__ParserDesc_ParseDocument_SnoPE();
          i0 = (OOC_INT32)chars;
          i0 = _check_pointer(i0, 91606);
          i1 = OOC_ARRAY_LENGTH(i0, 0);
          i2 = cpos;
          i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 91606))*2);
          i0 = i0==37u;
          isPEntity = i0;
          if (!i0) goto l3;
          XML_Parser__ParserDesc_ParseDocument_CheckChar(37u);
          XML_Parser__ParserDesc_ParseDocument_S();
l3:
          i1 = (OOC_INT32)p;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 91723))+4);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 91723))+4);
          i1 = _check_pointer(i1, 91726);
          i1 = (OOC_INT32)&_td_XML_Locator__Position;
          XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i2, 91726)), (RT0__Struct)i1);
          i2 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(1u);
          name = (XML_UnicodeBuffer__CharArray)i2;
          XML_Parser__ParserDesc_ParseDocument_S();
          i3 = (OOC_INT32)chars;
          i4 = _check_pointer(i3, 91787);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i6 = cpos;
          i4 = *(OOC_UINT16*)(i4+(_check_index(i6, i5, OOC_UINT32, 91787))*2);
          i4 = i4==39u;
          if (i4) goto l6;
          i3 = _check_pointer(i3, 91810);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = *(OOC_UINT16*)(i3+(_check_index(i6, i4, OOC_UINT32, 91810))*2);
          i3 = i3==34u;
          
          goto l8;
l6:
          i3=1u;
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
          XML_Parser__ParserDesc_ParseDocument_ExternalID(0u, (void*)(OOC_INT32)&_public, (void*)(OOC_INT32)&system, (void*)(OOC_INT32)&baseURI);
          ndata = (XML_UnicodeBuffer__CharArray)(OOC_INT32)0;
          i3 = !i0;
          if (i3) goto l16;
          i3=0u;
          goto l18;
l16:
          i3 = XML_Parser__ParserDesc_ParseDocument_LookingAtS();
          
l18:
          if (i3) goto l20;
          i3=(OOC_INT32)0;
          goto l25;
l20:
          XML_Parser__ParserDesc_ParseDocument_S();
          i3 = XML_Parser__ParserDesc_ParseDocument_LookingAt("NDATA", 6, 1);
          if (i3) goto l23;
          i3=(OOC_INT32)0;
          goto l25;
l23:
          i1 = cpos;
          entityType = 4;
          cpos = (i1+5);
          XML_Parser__ParserDesc_ParseDocument_S();
          i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(0u);
          ndata = (XML_UnicodeBuffer__CharArray)i1;
          i3=i1;i1=4;
l25:
          i4 = (OOC_INT32)dtd;
          i5 = (OOC_INT32)currentEntity;
          i6 = (OOC_INT32)baseURI;
          i7 = (OOC_INT32)_public;
          i8 = (OOC_INT32)system;
          i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 93133)))), XML_DTD__EntityDesc_IsDocumentEntity)),XML_DTD__EntityDesc_IsDocumentEntity)((XML_DTD__Entity)i5);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 93019)))), XML_DTD__BuilderDesc_NewExternalEntity)),XML_DTD__BuilderDesc_NewExternalEntity)((XML_DTD__Builder)i4, (XML_UnicodeBuffer__CharArray)i2, i1, (XML_UnicodeBuffer__CharArray)i7, (XML_UnicodeBuffer__CharArray)i8, (XML_UnicodeBuffer__CharArray)i3, (URI__URI)i6, (!i5));
          entity = (XML_DTD__Entity)i1;
          
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
          i4 = (OOC_INT32)name;
          i5 = !i2;
          if (i5) goto l33;
          i5=0u;
          goto l35;
l33:
          i5 = (OOC_INT32)dtd;
          i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 92128)))), XML_DTD__BuilderDesc_IsValidEntityDecl)),XML_DTD__BuilderDesc_IsValidEntityDecl)((XML_DTD__Builder)i5, (XML_UnicodeBuffer__CharArray)i4, (XML_UnicodeBuffer__CharArray)i0);
          i5 = !i5;
          
l35:
          if (!i5) goto l37;
          i5 = (OOC_INT32)p;
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 92219))+4);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 92219))+4);
          i5 = _check_pointer(i5, 92222);
          XML_Parser__ParserDesc_ParseDocument_ErrPos(118, (void*)(_check_pointer(i6, 92222)), (RT0__Struct)i1);
l37:
          i1 = (OOC_INT32)dtd;
          i5 = (OOC_INT32)currentEntity;
          i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 92373)))), XML_DTD__EntityDesc_IsDocumentEntity)),XML_DTD__EntityDesc_IsDocumentEntity)((XML_DTD__Entity)i5);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 92263)))), XML_DTD__BuilderDesc_NewInternalEntity)),XML_DTD__BuilderDesc_NewInternalEntity)((XML_DTD__Builder)i1, (XML_UnicodeBuffer__CharArray)i4, i3, (XML_UnicodeBuffer__CharArray)i0, (!i5));
          entity = (XML_DTD__Entity)i0;
          i1=i0;i0=i2;
l38:
          XML_Parser__ParserDesc_ParseDocument_OptS(0u);
          i2 = (OOC_INT32)currentEntity;
          XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i2);
          XML_Parser__ParserDesc_ParseDocument_CheckChar(62u);
          i2 = (OOC_INT32)p;
          i2 = *(OOC_UINT8*)((_check_pointer(i2, 93272))+63);
          if (!i2) goto l48;
l41:
          if (i0) goto l46;
          i0 = (OOC_INT32)dtd;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 93398))+4);
          i0 = XML_DTD__NamespaceDesc_Add((XML_DTD__Namespace)i0, (XML_DTD__Declaration)i1);
          if (!i0) goto l48;
          i0 = (OOC_INT32)p;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 93444))+44);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 93444))+44);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 93453)))), XML_Builder__BuilderDesc_EntityDecl)),XML_Builder__BuilderDesc_EntityDecl)((XML_Builder__Builder)i0, (XML_DTD__Entity)i1);
          goto l48;
l46:
          i0 = (OOC_INT32)dtd;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 93351))+8);
          i0 = XML_DTD__NamespaceDesc_Add((XML_DTD__Namespace)i0, (XML_DTD__Declaration)i1);
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 93856))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 93856))+4);
          i0 = _check_pointer(i0, 93859);
          XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i1, 93859)), (RT0__Struct)((OOC_INT32)&_td_XML_Locator__Position));
          i0 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(1u);
          name = (XML_UnicodeBuffer__CharArray)i0;
          XML_Parser__ParserDesc_ParseDocument_S();
          XML_Parser__ParserDesc_ParseDocument_ExternalID(1u, (void*)(OOC_INT32)&_public, (void*)(OOC_INT32)&system, (void*)(OOC_INT32)&baseURI);
          XML_Parser__ParserDesc_ParseDocument_OptS(0u);
          i1 = (OOC_INT32)p;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 94156))+44);
          i3 = (OOC_INT32)dtd;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 94156))+44);
          i4 = (OOC_INT32)_public;
          i5 = (OOC_INT32)system;
          i6 = (OOC_INT32)baseURI;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 94180)))), XML_DTD__BuilderDesc_NewNotation)),XML_DTD__BuilderDesc_NewNotation)((XML_DTD__Builder)i3, (XML_UnicodeBuffer__CharArray)i0, (XML_UnicodeBuffer__CharArray)i4, (XML_UnicodeBuffer__CharArray)i5, (URI__URI)i6);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 94165)))), XML_Builder__BuilderDesc_Notation)),XML_Builder__BuilderDesc_Notation)((XML_Builder__Builder)i1, (XML_DTD__Notation)i0);
          i0 = (OOC_INT32)currentEntity;
          XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i0);
          XML_Parser__ParserDesc_ParseDocument_CheckChar(62u);
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

    
    void XML_Parser__ParserDesc_ParseDocument_extSubsetDecl(void) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      XML_DTD__Entity currentEntity;
      struct XML_Locator__Position pos;
      auto void XML_Parser__ParserDesc_ParseDocument_extSubsetDecl_ignoreSectContents(void);
        
        void XML_Parser__ParserDesc_ParseDocument_extSubsetDecl_ignoreSectContents(void) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
          OOC_INT32 level;

          level = 1;
          i0 = cpos;
          cstart = i0;
          i0 = (OOC_INT32)&_td_XML_Locator__Position;
          cdelta = 0;
          i1=1;
l1_loop:
          i2 = (OOC_INT32)chars;
          i3 = _check_pointer(i2, 95285);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i5 = cpos;
          i3 = *(OOC_UINT16*)(i3+(_check_index(i5, i4, OOC_UINT32, 95285))*2);
          switch (i3) {
          case 0u ... 31u:
          case 65534u:
            XML_Parser__ParserDesc_ParseDocument_ControlChar(10u);
            
            goto l1_loop;
          case 65535u:
            XML_Parser__ParserDesc_ParseDocument_ErrPos(19, (void*)(OOC_INT32)&pos, (RT0__Struct)i0);
            goto l23;
          case 93u:
            i2 = XML_Parser__ParserDesc_ParseDocument_LookingAt("]]>", 4, 0);
            if (i2) goto l8;
            i2 = (OOC_INT32)chars;
            i3 = _check_pointer(i2, 95833);
            i4 = cdelta;
            i5 = cpos;
            i6 = OOC_ARRAY_LENGTH(i3, 0);
            i2 = _check_pointer(i2, 95855);
            i7 = OOC_ARRAY_LENGTH(i2, 0);
            i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i7, OOC_UINT32, 95855))*2);
            *(OOC_UINT16*)(i3+(_check_index((i5-i4), i6, OOC_UINT32, 95833))*2) = i2;
            cpos = (i5+1);
            
            goto l1_loop;
l8:
            i2 = i1==1;
            if (!i2) goto l11;
            i2 = (OOC_INT32)currentEntity;
            XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i2);
l11:
            i2 = cpos;
            cpos = (i2+3);
            i1 = i1-1;
            level = i1;
            i2 = i1==0;
            if (!i2) goto l1_loop;
            goto l23;
          case 60u:
            i2 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<![", 4, 0);
            if (!i2) goto l18;
            goto l19;
l18:
            i2 = (OOC_INT32)chars;
            i3 = _check_pointer(i2, 96085);
            i4 = cdelta;
            i5 = cpos;
            i6 = OOC_ARRAY_LENGTH(i3, 0);
            i2 = _check_pointer(i2, 96107);
            i7 = OOC_ARRAY_LENGTH(i2, 0);
            i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i7, OOC_UINT32, 96107))*2);
            *(OOC_UINT16*)(i3+(_check_index((i5-i4), i6, OOC_UINT32, 96085))*2) = i2;
            cpos = (i5+1);
            
            goto l1_loop;
l19:
            i2 = cpos;
            cpos = (i2+3);
            i1 = i1+1;
            level = i1;
            
            goto l1_loop;
          default:
            i3 = _check_pointer(i2, 96174);
            i4 = cdelta;
            i6 = OOC_ARRAY_LENGTH(i3, 0);
            i2 = _check_pointer(i2, 96196);
            i7 = OOC_ARRAY_LENGTH(i2, 0);
            i2 = *(OOC_UINT16*)(i2+(_check_index(i5, i7, OOC_UINT32, 96196))*2);
            *(OOC_UINT16*)(i3+(_check_index((i5-i4), i6, OOC_UINT32, 96174))*2) = i2;
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
      i2 = _check_pointer(i1, 96314);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = cpos;
      i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 96314))*2);
      i2 = i2==60u;
      if (i2) goto l12;
      i1 = _check_pointer(i1, 97453);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 97453))*2);
      i1 = i1==37u;
      if (!i1) goto l5;
      goto l10;
l5:
      i1 = XML_Parser__ParserDesc_ParseDocument_LookingAtSnoPE();
      if (!i1) goto l30;
      XML_Parser__ParserDesc_ParseDocument_SnoPE();
      goto l1_loop;
l10:
      XML_Parser__ParserDesc_ParseDocument_PEReference(1u);
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
      XML_Parser__ParserDesc_ParseDocument_OptS(0u);
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
      XML_Parser__ParserDesc_ParseDocument_OptS(0u);
      XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i1);
      XML_Parser__ParserDesc_ParseDocument_CheckChar(91u);
      XML_Parser__ParserDesc_ParseDocument_extSubsetDecl_ignoreSectContents();
      goto l1_loop;
l22:
      i2 = cpos;
      cpos = (i2+7);
      XML_Parser__ParserDesc_ParseDocument_OptS(0u);
      XML_Parser__ParserDesc_ParseDocument_CheckCurrentEntity((XML_DTD__Entity)i1);
      XML_Parser__ParserDesc_ParseDocument_CheckChar(91u);
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

    
    void XML_Parser__ParserDesc_ParseDocument_prolog(void) {
      register OOC_INT32 i0;
      auto void XML_Parser__ParserDesc_ParseDocument_prolog_doctypedecl(void);
        
        void XML_Parser__ParserDesc_ParseDocument_prolog_doctypedecl(void) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          XML_UnicodeBuffer__CharArray rootName;
          XML_UnicodeBuffer__CharArray _public;
          XML_UnicodeBuffer__CharArray system;
          URI__URI baseURI;
          XML_DTD__ExternalEntity externalSubset;
          XML_DTD__Declaration decl;
          XML_DTD__AttrDecl attr;
          auto void XML_Parser__ParserDesc_ParseDocument_prolog_doctypedecl_CheckGeneralEntities(void);
            
            void XML_Parser__ParserDesc_ParseDocument_prolog_doctypedecl_CheckGeneralEntities(void) {
              register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
              XML_Builder__Builder oldBuilder;
              OOC_INT32 oldErrCount;
              OOC_CHAR8 oldValidating;
              struct XML_Locator__Position pos;
              XML_DTD__Declaration decl;
              OOC_INT32 len;

              i0 = (OOC_INT32)p;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 98368))+44);
              oldBuilder = (XML_Builder__Builder)i1;
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 98405));
              i2 = *(OOC_INT32*)(_check_pointer(i2, 98414));
              oldErrCount = i2;
              i0 = *(OOC_UINT8*)((_check_pointer(i0, 98454))+62);
              oldValidating = i0;
              i3 = (OOC_INT32)&_td_XML_Locator__Position;
              XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(OOC_INT32)&pos, (RT0__Struct)i3);
              i4 = (OOC_INT32)p;
              i5 = (OOC_INT32)XML_Builder__New();
              *(OOC_INT32*)((_check_pointer(i4, 98521))+44) = i5;
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 98568))+48);
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 98573))+4);
              i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 98586));
              decl = (XML_DTD__Declaration)i4;
              i5 = i4!=0;
              if (!i5) goto l14;
l3_loop:
              i5 = *(OOC_INT8*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 98655)))), &_td_XML_DTD__EntityDesc, 98655)), 98662))+8);
              i5 = i5==0;
              if (!i5) goto l9;
              i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 98748))+4);
              i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 98748))+4);
              i6 = OOC_ARRAY_LENGTH((_check_pointer(i6, 98754)), 0);
              i5 = LongStrings__Length((void*)(_check_pointer(i5, 98754)), i6);
              i5 = i5+2;
              i6 = cpos;
              len = i5;
              cpos = (i6+i5);
              XML_Parser__ParserDesc_ParseDocument_PushEntity((XML_DTD__Entity)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 98812)))), &_td_XML_DTD__EntityDesc, 98812)), 1u);
              XML_Parser__ParserDesc_ParseDocument_content();
              i6 = (OOC_INT32)chars;
              i6 = _check_pointer(i6, 98889);
              i7 = OOC_ARRAY_LENGTH(i6, 0);
              i8 = cpos;
              i6 = *(OOC_UINT16*)(i6+(_check_index(i8, i7, OOC_UINT32, 98889))*2);
              i6 = i6!=65535u;
              if (!i6) goto l8;
              XML_Parser__ParserDesc_ParseDocument_ErrPos(302, (void*)(OOC_INT32)&pos, (RT0__Struct)i3);
              i6 = (OOC_INT32)p;
              i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 98990))+104);
              i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 99099))+4);
              i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 99099))+4);
              i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 98990))+104);
              i9 = OOC_ARRAY_LENGTH((_check_pointer(i9, 99105)), 0);
              i8 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i8, 99105)), i9);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 99001)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i6, "name", 5, (Msg__LStringPtr)i8);
l8:
              XML_Parser__ParserDesc_ParseDocument_PopEntity();
              i6 = cpos;
              cpos = (i6-i5);
l9:
              i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 99226));
              decl = (XML_DTD__Declaration)i4;
              i5 = i4!=0;
              if (i5) goto l3_loop;
l14:
              i3 = (OOC_INT32)p;
              *(OOC_UINT8*)((_check_pointer(i3, 99333))+62) = i0;
              i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 99379));
              i0 = *(OOC_INT32*)(_check_pointer(i0, 99388));
              i0 = i0==i2;
              if (i0) goto l17;
              i0 = (OOC_INT32)XML_Builder__New();
              *(OOC_INT32*)((_check_pointer(i3, 99560))+44) = i0;
              goto l18;
l17:
              *(OOC_INT32*)((_check_pointer(i3, 99454))+44) = i1;
l18:
              return;
              ;
            }


          i0 = (OOC_INT32)p;
          *(OOC_UINT8*)((_check_pointer(i0, 99706))+66) = 1u;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 99756))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 99756))+4);
          i0 = _check_pointer(i0, 99759);
          i0 = (OOC_INT32)&_td_XML_Locator__Position;
          XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i1, 99759)), (RT0__Struct)i0);
          i1 = (OOC_INT32)p;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 99772))+44);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 99794))+48);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 99772))+44);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 99781)))), XML_Builder__BuilderDesc_StartDTD)),XML_Builder__BuilderDesc_StartDTD)((XML_Builder__Builder)i1, (XML_DTD__Builder)i3);
          i1 = cpos;
          cpos = (i1+9);
          XML_Parser__ParserDesc_ParseDocument_S();
          i1 = (OOC_INT32)XML_Parser__ParserDesc_ParseDocument_Name(0u);
          rootName = (XML_UnicodeBuffer__CharArray)i1;
          i2 = (OOC_INT32)p;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 99951))+48);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 99951))+48);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 99956)))), XML_DTD__BuilderDesc_SetRootName)),XML_DTD__BuilderDesc_SetRootName)((XML_DTD__Builder)i2, (XML_UnicodeBuffer__CharArray)i1);
          XML_Parser__ParserDesc_ParseDocument_OptS(0u);
          i1 = XML_Parser__ParserDesc_ParseDocument_LookingAt("SYSTEM", 7, 0);
          if (i1) goto l3;
          i1 = XML_Parser__ParserDesc_ParseDocument_LookingAt("PUBLIC", 7, 0);
          
          goto l5;
l3:
          i1=1u;
l5:
          if (i1) goto l7;
          system = (XML_UnicodeBuffer__CharArray)(OOC_INT32)0;
          _public = (XML_UnicodeBuffer__CharArray)(OOC_INT32)0;
          baseURI = (URI__URI)(OOC_INT32)0;
          goto l8;
l7:
          XML_Parser__ParserDesc_ParseDocument_ExternalID(0u, (void*)(OOC_INT32)&_public, (void*)(OOC_INT32)&system, (void*)(OOC_INT32)&baseURI);
          XML_Parser__ParserDesc_ParseDocument_OptS(0u);
l8:
          i1 = (OOC_INT32)chars;
          i1 = _check_pointer(i1, 100399);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i3 = cpos;
          i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 100399))*2);
          i1 = i1==91u;
          if (!i1) goto l28;
          XML_Parser__ParserDesc_ParseDocument_CheckChar(91u);
l11_loop:
          i1 = (OOC_INT32)chars;
          i2 = _check_pointer(i1, 100481);
          i3 = OOC_ARRAY_LENGTH(i2, 0);
          i4 = cpos;
          i2 = *(OOC_UINT16*)(i2+(_check_index(i4, i3, OOC_UINT32, 100481))*2);
          i2 = i2==60u;
          if (!i2) goto l13;
          goto l22;
l13:
          i1 = _check_pointer(i1, 100549);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i1 = *(OOC_UINT16*)(i1+(_check_index(i4, i2, OOC_UINT32, 100549))*2);
          i1 = i1==37u;
          if (!i1) goto l15;
          goto l20;
l15:
          i1 = XML_Parser__ParserDesc_ParseDocument_LookingAtSnoPE();
          if (!i1) goto l24;
          XML_Parser__ParserDesc_ParseDocument_SnoPE();
          goto l11_loop;
l20:
          XML_Parser__ParserDesc_ParseDocument_PEReference(1u);
          goto l11_loop;
l22:
          XML_Parser__ParserDesc_ParseDocument_markupdecl();
          goto l11_loop;
l24:
          i1 = (OOC_INT32)p;
          i1 = *(OOC_INT32*)((_check_pointer(i1, 100743))+88);
          i1 = i1!=0;
          if (!i1) goto l27;
          XML_Parser__ParserDesc_ParseDocument_Err(300);
l27:
          XML_Parser__ParserDesc_ParseDocument_CheckChar(93u);
          XML_Parser__ParserDesc_ParseDocument_OptS(0u);
l28:
          XML_Parser__ParserDesc_ParseDocument_CheckChar(62u);
          externalSubset = (XML_DTD__ExternalEntity)(OOC_INT32)0;
          i1 = (OOC_INT32)_public;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l31;
          i2 = (OOC_INT32)system;
          i2 = i2!=(OOC_INT32)0;
          
          goto l33;
l31:
          i2=1u;
l33:
          if (!i2) goto l45;
          i2 = (OOC_INT32)p;
          i2 = *(OOC_UINT8*)((_check_pointer(i2, 101006))+60);
          if (i2) goto l37;
          XML_Parser__ParserDesc_ParseDocument_SkippedEntity((XML_UnicodeBuffer__CharArray)(OOC_INT32)0);
          goto l45;
l37:
          i2 = (OOC_INT32)dtd;
          i3 = (OOC_INT32)baseURI;
          i4 = (OOC_INT32)system;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 101064)))), XML_DTD__BuilderDesc_NewExternalDTD)),XML_DTD__BuilderDesc_NewExternalDTD)((XML_DTD__Builder)i2, (XML_UnicodeBuffer__CharArray)i1, (XML_UnicodeBuffer__CharArray)i4, (URI__URI)i3);
          externalSubset = (XML_DTD__ExternalEntity)i1;
          XML_Parser__ParserDesc_ParseDocument_PushEntity((XML_DTD__Entity)i1, 1u);
          i2 = (OOC_INT32)p;
          *(OOC_UINT8*)((_check_pointer(i2, 101168))+67) = 1u;
          i2 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<?xml", 6, 1);
          if (!i2) goto l40;
          XML_Parser__ParserDesc_ParseDocument_XMLDecl((XML_DTD__ExternalEntity)i1);
l40:
          XML_Parser__ParserDesc_ParseDocument_extSubsetDecl();
          i1 = (OOC_INT32)p;
          *(OOC_UINT8*)((_check_pointer(i1, 101351))+67) = 0u;
          i1 = (OOC_INT32)chars;
          i1 = _check_pointer(i1, 101401);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i3 = cpos;
          i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 101401))*2);
          i1 = i1!=65535u;
          if (!i1) goto l43;
          XML_Parser__ParserDesc_ParseDocument_Err(28);
l43:
          XML_Parser__ParserDesc_ParseDocument_PopEntity();
l45:
          i1 = (OOC_INT32)dtd;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101685))+16);
          decl = (XML_DTD__Declaration)i1;
          i2 = i1!=(OOC_INT32)0;
          if (!i2) goto l56;
l48_loop:
          i2 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 101759)))), &_td_XML_DTD__AttrDeclDesc, 101759);
          attr = (XML_DTD__AttrDecl)i2;
          i3 = *(OOC_INT8*)((_check_pointer(i2, 101788))+20);
          i3 = i3>=2;
          if (!i3) goto l51;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 101847))+24);
          XML_Parser__ParserDesc_ParseDocument_Expand((XML_DTD__AttValue)i2);
l51:
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 101900));
          decl = (XML_DTD__Declaration)i1;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l48_loop;
l56:
          i1 = (OOC_INT32)dtd;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 101940)))), XML_DTD__BuilderDesc_AttachAttributes)),XML_DTD__BuilderDesc_AttachAttributes)((XML_DTD__Builder)i1);
          XML_Parser__ParserDesc_ParseDocument_prolog_doctypedecl_CheckGeneralEntities();
          i1 = (OOC_INT32)p;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 102014))+4);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 102014))+4);
          i1 = _check_pointer(i1, 102017);
          XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i2, 102017)), (RT0__Struct)i0);
          i0 = (OOC_INT32)p;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102030))+44);
          i2 = *(OOC_UINT8*)((_check_pointer(i0, 102066))+64);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102030))+44);
          i3 = (OOC_INT32)externalSubset;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 102039)))), XML_Builder__BuilderDesc_EndDTD)),XML_Builder__BuilderDesc_EndDTD)((XML_Builder__Builder)i0, (XML_DTD__ExternalEntity)i3, i2);
          i0 = (OOC_INT32)p;
          *(OOC_UINT8*)((_check_pointer(i0, 102110))+66) = 0u;
          return;
          ;
        }


      i0 = XML_Parser__ParserDesc_ParseDocument_LookingAt("<?xml", 6, 1);
      if (!i0) goto l3;
      i0 = (OOC_INT32)p;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102236))+52);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102431))+52);
  XML_Parser__ParserDesc_ParseDocument_SetFileEntity((XML_DTD__ExternalEntity)i0);
  XML_Parser__ParserDesc_ParseDocument_ResetLocator();
  i0 = (OOC_INT32)p;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102482))+36);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 102486))+20);
  chars = (XML_UnicodeBuffer__CharArray)i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102507))+48);
  dtd = (XML_DTD__Builder)i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102539))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102539))+4);
  i0 = _check_pointer(i0, 102542);
  i0 = (OOC_INT32)&_td_XML_Locator__Position;
  XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i1, 102542)), (RT0__Struct)i0);
  i1 = (OOC_INT32)p;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 102551))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 102551))+44);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 102575))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 102560)))), XML_Builder__BuilderDesc_SetLocator)),XML_Builder__BuilderDesc_SetLocator)((XML_Builder__Builder)i3, (XML_Locator__Locator)i4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 102586))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 102616))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 102586))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 102595)))), XML_Builder__BuilderDesc_SetErrorListener)),XML_Builder__BuilderDesc_SetErrorListener)((XML_Builder__Builder)i4, (XML_Locator__ErrorListener)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 102639))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 102639))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 102666))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 102648)))), XML_Builder__BuilderDesc_StartDocument)),XML_Builder__BuilderDesc_StartDocument)((XML_Builder__Builder)i3, (XML_DTD__ExternalEntity)i1);
  XML_Parser__ParserDesc_ParseDocument_prolog();
  i1 = (OOC_INT32)p;
  *(OOC_UINT8*)((_check_pointer(i1, 102722))+65) = 1u;
  XML_Parser__ParserDesc_ParseDocument_element();
  i1 = (OOC_INT32)p;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 102773))+88);
  i1 = i1!=0;
  if (!i1) goto l3;
  XML_Parser__ParserDesc_ParseDocument_Err(301);
l3:
  i1 = (OOC_INT32)p;
  *(OOC_UINT8*)((_check_pointer(i1, 102838))+65) = 0u;
  XML_Parser__ParserDesc_ParseDocument_MiscRep();
  i1 = (OOC_INT32)chars;
  i1 = _check_pointer(i1, 102894);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = cpos;
  i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 102894))*2);
  i1 = i1!=65535u;
  if (!i1) goto l6;
  XML_Parser__ParserDesc_ParseDocument_Err(2);
l6:
  XML_Parser__ParserDesc_ParseDocument_CheckInvalidChars();
  i1 = (OOC_INT32)p;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 103013))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 103013))+4);
  i1 = _check_pointer(i1, 103016);
  XML_Parser__ParserDesc_ParseDocument_StorePosition((void*)(_check_pointer(i2, 103016)), (RT0__Struct)i0);
  i0 = (OOC_INT32)p;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 103025))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 103025))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 103041)))), XML_Builder__BuilderDesc_EndDocument)),XML_Builder__BuilderDesc_EndDocument)((XML_Builder__Builder)i0);
  return;
  ;
}

static void XML_Parser__Init(XML_Parser__Parser p, OOC_CHAR8 _new, IO__ByteChannel reader, URI__URI baseURI, XML_UnicodeCodec__Factory codecFactory, XML_EntityResolver__Resolver entityResolver, XML_Builder__Builder builder) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)p;
  i1 = (OOC_INT32)XML_Error__NewList();
  *(OOC_INT32*)(_check_pointer(i0, 103388)) = i1;
  i1 = _new;
  if (i1) goto l3;
  _assert(0u, 127, 103640);
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 103446))+4) = ((OOC_INT32)RT0__NewObject(_td_XML_Locator__Locator.baseTypes[0]));
  *(OOC_INT32*)((_check_pointer(i0, 103464))+8) = ((OOC_INT32)RT0__NewObject(_td_XML_Parser__ErrorListener.baseTypes[0]));
  *(OOC_INT32*)((_check_pointer(i0, 103494))+76) = ((OOC_INT32)RT0__NewObject(_td_XML_Parser__NameList.baseTypes[0], 8));
  *(OOC_INT32*)((_check_pointer(i0, 103533))+84) = ((OOC_INT32)RT0__NewObject(_td_XML_Parser__PEInfoList.baseTypes[0], 4));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 103613));
  i2 = (OOC_INT32)reader;
  i3 = (OOC_INT32)codecFactory;
  i1 = (OOC_INT32)XML_UnicodeBuffer__NewInput((IO__ByteChannel)i2, (XML_UnicodeCodec__Factory)i3, (Msg__MsgList)i1);
  *(OOC_INT32*)((_check_pointer(i0, 103565))+36) = i1;
l4:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 103733))+4);
  *(OOC_INT32*)((_check_pointer(i1, 103736))+16) = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 103768))+8);
  *(OOC_INT32*)(_check_pointer(i1, 103783)) = i0;
  i1 = (OOC_INT32)XML_DTD__New();
  *(OOC_INT32*)((_check_pointer(i0, 103803))+48) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 103849))+48);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 103849))+48);
  i3 = (OOC_INT32)baseURI;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 103854)))), XML_DTD__BuilderDesc_NewDocumentEntity)),XML_DTD__BuilderDesc_NewDocumentEntity)((XML_DTD__Builder)i2, (URI__URI)i3);
  *(OOC_INT32*)((_check_pointer(i0, 103828))+52) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 103926))+36);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 103930))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 103890))+52);
  XML_DTD__ExternalEntityDesc_SetCodecFactory((XML_DTD__ExternalEntity)i2, (XML_UnicodeCodec__Factory)i1);
  i1 = (OOC_INT32)builder;
  *(OOC_INT32*)((_check_pointer(i0, 103952))+44) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 103979))+40) = i1;
  i1 = (OOC_INT32)entityResolver;
  i1 = i1==0;
  if (!i1) goto l7;
  i1 = (OOC_INT32)XML_EntityResolver__New();
  entityResolver = (XML_EntityResolver__Resolver)i1;
l7:
  i1 = (OOC_INT32)entityResolver;
  *(OOC_INT32*)((_check_pointer(i0, 104102))+32) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 104141))+60) = 1u;
  *(OOC_UINT8*)((_check_pointer(i0, 104175))+61) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 104206))+62) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 104234))+63) = 1u;
  *(OOC_UINT8*)((_check_pointer(i0, 104270))+64) = 1u;
  *(OOC_UINT8*)((_check_pointer(i0, 104307))+65) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 104342))+66) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 104365))+67) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 104399))+68) = 0u;
  *(OOC_INT32*)((_check_pointer(i0, 104438))+72) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 104469))+80) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 104494))+88) = 0;
  return;
  ;
}

XML_Parser__Parser XML_Parser__NewChannel(IO__ByteChannel ch, URI__URI baseURI, XML_UnicodeCodec__Factory codecFactory, XML_EntityResolver__Resolver entityResolver, XML_Builder__Builder builder) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_Parser__Parser.baseTypes[0]);
  i1 = (OOC_INT32)ch;
  i2 = (OOC_INT32)baseURI;
  i3 = (OOC_INT32)codecFactory;
  i4 = (OOC_INT32)entityResolver;
  i5 = (OOC_INT32)builder;
  XML_Parser__Init((XML_Parser__Parser)i0, 1u, (IO__ByteChannel)i1, (URI__URI)i2, (XML_UnicodeCodec__Factory)i3, (XML_EntityResolver__Resolver)i4, (XML_Builder__Builder)i5);
  return (XML_Parser__Parser)i0;
  ;
}

XML_Parser__Parser XML_Parser__NewURI(URI__URI uri, URI__URI baseURI, XML_UnicodeCodec__Factory codecFactory, XML_EntityResolver__Resolver entityResolver, XML_Builder__Builder builder) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)uri;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107074)))), URI__URIDesc_GetChannel)),URI__URIDesc_GetChannel)((URI__URI)i0, 2);
  i2 = (OOC_INT32)codecFactory;
  i3 = (OOC_INT32)entityResolver;
  i4 = (OOC_INT32)builder;
  i0 = (OOC_INT32)XML_Parser__NewChannel((IO__ByteChannel)i1, (URI__URI)i0, (XML_UnicodeCodec__Factory)i2, (XML_EntityResolver__Resolver)i3, (XML_Builder__Builder)i4);
  return (XML_Parser__Parser)i0;
  ;
}

XML_Parser__Parser XML_Parser__NewFile(const OOC_CHAR8 filePath__ref[], OOC_LEN filePath_0d, URI__URI baseURI, XML_UnicodeCodec__Factory codecFactory, XML_EntityResolver__Resolver entityResolver, XML_Builder__Builder builder) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_ALLOCATE_VPAR(filePath,OOC_CHAR8 ,filePath_0d)

  OOC_INITIALIZE_VPAR(filePath__ref,filePath,OOC_CHAR8 ,filePath_0d)
  i0 = (OOC_INT32)URI_Scheme_File__ToURI((void*)(OOC_INT32)filePath, filePath_0d);
  i1 = (OOC_INT32)baseURI;
  i2 = (OOC_INT32)codecFactory;
  i3 = (OOC_INT32)entityResolver;
  i4 = (OOC_INT32)builder;
  i0 = (OOC_INT32)XML_Parser__NewURI((URI__URI)i0, (URI__URI)i1, (XML_UnicodeCodec__Factory)i2, (XML_EntityResolver__Resolver)i3, (XML_Builder__Builder)i4);
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
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 108376)), 0);
      _copy_16((const void*)(OOC_INT32)s,(void*)(_check_pointer(i0, 108376)),i1);
      return (XML_UnicodeBuffer__CharArray)i0;
      goto l4;
l3:
      return (XML_UnicodeBuffer__CharArray)(OOC_INT32)0;
l4:
      _failed_function(108168); return 0;
      ;
    }


  OOC_INITIALIZE_VPAR(_public__ref,_public,OOC_CHAR16 ,(_public_0d*2))
  OOC_INITIALIZE_VPAR(system__ref,system,OOC_CHAR16 ,(system_0d*2))
  i0 = (OOC_INT32)entityResolver;
  i1 = (OOC_INT32)XML_Parser__NewExternalID_ToString((void*)(OOC_INT32)_public, _public_0d);
  i2 = (OOC_INT32)XML_Parser__NewExternalID_ToString((void*)(OOC_INT32)system, system_0d);
  i3 = (OOC_INT32)systemBaseURI;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 108456)))), XML_EntityResolver__ResolverDesc_GetURI)),XML_EntityResolver__ResolverDesc_GetURI)((XML_EntityResolver__Resolver)i0, (XML_UnicodeBuffer__CharArray)i1, (XML_UnicodeBuffer__CharArray)i2, (URI__URI)i3, (void*)(OOC_INT32)&uri, (void*)(OOC_INT32)res);
  i0 = (OOC_INT32)uri;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)codecFactory;
  i2 = (OOC_INT32)builder;
  i3 = (OOC_INT32)entityResolver;
  i0 = (OOC_INT32)XML_Parser__NewURI((URI__URI)i0, (URI__URI)(OOC_INT32)0, (XML_UnicodeCodec__Factory)i1, (XML_EntityResolver__Resolver)i3, (XML_Builder__Builder)i2);
  return (XML_Parser__Parser)i0;
  goto l4;
l3:
  return (XML_Parser__Parser)(OOC_INT32)0;
l4:
  _failed_function(107642); return 0;
  ;
}

static void XML_Parser__SetErrorMessages(void) {
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
  _cmp8((const void*)(OOC_INT32)t,(const void*)""))!=0;
  if (!i1) goto l66;
  i1 = (OOC_INT32)XML_Parser__parserContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 113547)))), XML_Error__ContextDesc_SetString)),XML_Error__ContextDesc_SetString)((XML_Error__Context)i1, i0, (void*)(OOC_INT32)t, 128);
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
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 113702)), 0);
  _copy_16((const void*)((OOC_CHAR16[]){35,110,111,95,110,97,109,101,0}),(void*)(_check_pointer(i0, 113702)),i1);
  i0 = (OOC_INT32)XML_Error__NewContext("XML:Parser", 11);
  XML_Parser__parserContext = (XML_Error__Context)i0;
  XML_Parser__SetErrorMessages();
  return;
  ;
}

/* --- */
