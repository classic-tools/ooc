#include <OOC/Doc/Decoration.d>
#include <__oo2c.h>
#include <setjmp.h>

OOC_Scanner_InputBuffer__CharArray OOC_Doc_Decoration__Remove(OOC_Scanner_BasicList__Symbol sym, OOC_Doc_Decoration__Decoration *deco) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_Scanner_InputBuffer__CharArray str;
  OOC_INT32 i;
  OOC_INT32 delta;
  OOC_INT32 len;
  auto OOC_INT32 OOC_Doc_Decoration__Remove_GetIndent(OOC_CHAR8 str[], OOC_LEN str_0d, OOC_INT32 startOfLine, OOC_INT32 indent);
  auto OOC_Doc_Decoration__PlainIndent OOC_Doc_Decoration__Remove_GetPlainIndent(OOC_Scanner_InputBuffer__CharArray str);
  auto OOC_CHAR8 OOC_Doc_Decoration__Remove_IsDotLine(OOC_Scanner_InputBuffer__CharArray str);
  auto OOC_Doc_Decoration__Decoration OOC_Doc_Decoration__Remove_GetDotLineIndent(OOC_Scanner_InputBuffer__CharArray str);
    
    OOC_INT32 OOC_Doc_Decoration__Remove_GetIndent(OOC_CHAR8 str[], OOC_LEN str_0d, OOC_INT32 startOfLine, OOC_INT32 indent) {
      register OOC_INT32 i0,i1;

      i0 = startOfLine;
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 2447)));
      i1 = i1!=0u;
      if (!i1) goto l20;
l3_loop:
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 2475)));
      i1 = i1==32u;
      if (i1) goto l14;
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 2532)));
      i1 = i1==9u;
      if (i1) goto l12;
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 2642)));
      i1 = i1==10u;
      if (i1) goto l10;
      i1 = indent;
      return i1;
      goto l15;
l10:
      return 2147483647;
      goto l15;
l12:
      i1 = indent;
      indent = (i1+(8-(_mod(i1,8))));
      goto l15;
l14:
      i1 = indent;
      indent = (i1+1);
l15:
      i0 = i0+1;
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 2447)));
      i1 = i1!=0u;
      if (i1) goto l3_loop;
l20:
      return 2147483647;
      ;
    }

    
    OOC_Doc_Decoration__PlainIndent OOC_Doc_Decoration__Remove_GetPlainIndent(OOC_Scanner_InputBuffer__CharArray str) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_INT32 len;
      OOC_INT32 i;
      OOC_Doc_Decoration__PlainIndent plainIndent;
      OOC_INT32 indent;
      OOC_INT32 max;

      i0 = (OOC_INT32)str;
      i1 = _check_pointer(i0, 3178);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT8, 3178)));
      _assert((i1==40u), 127, 3167);
      i1 = _check_pointer(i0, 3199);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT8, 3199))) = 32u;
      i1 = _check_pointer(i0, 3228);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT8*)(i1+(_check_index(1, i2, OOC_UINT8, 3228)));
      _assert((i1==42u), 127, 3217);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3272)), 0);
      i1 = Strings__Length((void*)(_check_pointer(i0, 3272)), i1);
      len = i1;
      i = 1;
      i2 = _check_pointer(i0, 3306);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = i1-2;
      i2 = *(OOC_UINT8*)(i2+(_check_index(1, i3, OOC_UINT32, 3306)));
      i2 = i2==42u;
      if (i2) goto l3;
      i2=0u;
      goto l5;
l3:
      i2 = 1!=i4;
      
l5:
      if (!i2) goto l16;
      i2=1;
l7_loop:
      i3 = _check_pointer(i0, 3345);
      i5 = OOC_ARRAY_LENGTH(i3, 0);
      *(OOC_UINT8*)(i3+(_check_index(i2, i5, OOC_UINT32, 3345))) = 32u;
      i2 = i2+1;
      i = i2;
      i3 = _check_pointer(i0, 3306);
      i5 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i5, OOC_UINT32, 3306)));
      i3 = i3==42u;
      if (i3) goto l10;
      i3=0u;
      goto l12;
l10:
      i3 = i2!=i4;
      
l12:
      if (i3) goto l7_loop;
l16:
      i2 = _check_pointer(i0, 3408);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i5 = i1-1;
      i2 = *(OOC_UINT8*)(i2+(_check_index(i5, i3, OOC_UINT32, 3408)));
      _assert((i2==41u), 127, 3397);
      i2 = _check_pointer(i0, 3433);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      *(OOC_UINT8*)(i2+(_check_index(i5, i3, OOC_UINT32, 3433))) = 32u;
      i2 = _check_pointer(i0, 3466);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 3466)));
      _assert((i2==42u), 127, 3455);
      i = i4;
      i2 = _check_pointer(i0, 3531);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 3531)));
      i2 = i2==42u;
      if (!i2) goto l24;
      i2=i4;
l19_loop:
      i3 = _check_pointer(i0, 3556);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 3556))) = 32u;
      i2 = i2-1;
      i = i2;
      i3 = _check_pointer(i0, 3531);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 3531)));
      i3 = i3==42u;
      if (i3) goto l19_loop;
l24:
      i2 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc_Decoration__PlainIndent.baseTypes[0]);
      plainIndent = (OOC_Doc_Decoration__PlainIndent)i2;
      i3 = (OOC_INT32)sym;
      i4 = *(OOC_INT32*)((_check_pointer(i3, 3733))+24);
      *(OOC_INT32*)((_check_pointer(i2, 3713))+8) = i4;
      i3 = *(OOC_INT32*)((_check_pointer(i3, 3795))+24);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3786)), 0);
      i3 = OOC_Doc_Decoration__Remove_GetIndent((void*)(_check_pointer(i0, 3786)), i4, 0, i3);
      *(OOC_INT32*)(_check_pointer(i2, 3760)) = i3;
      *(OOC_INT32*)((_check_pointer(i2, 3823))+4) = 79;
      i = 0;
      i3 = 0<i1;
      if (!i3) goto l38;
      i4=0;
l27_loop:
      i5 = _check_pointer(i0, 3887);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 3887)));
      i4 = i4+1;
      i5 = i5==10u;
      if (!i5) goto l33;
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3947)), 0);
      i5 = OOC_Doc_Decoration__Remove_GetIndent((void*)(_check_pointer(i0, 3947)), i5, i4, 0);
      indent = i5;
      i6 = *(OOC_INT32*)(_check_pointer(i2, 3993));
      i6 = i5<i6;
      if (!i6) goto l33;
      *(OOC_INT32*)(_check_pointer(i2, 4031)) = i5;
l33:
      i = i4;
      i5 = i4<i1;
      if (i5) goto l27_loop;
l38:
      i4 = *(OOC_INT32*)(_check_pointer(i2, 4108));
      i4 = i4==2147483647;
      if (!i4) goto l41;
      *(OOC_INT32*)(_check_pointer(i2, 4153)) = 0;
l41:
      i4 = *(OOC_INT32*)(_check_pointer(i2, 4206));
      i4 = i4>0;
      if (!i4) goto l83;
      i = 0;
      if (!i3) goto l83;
      i3=0;
l46_loop:
      i4 = i3==0;
      if (i4) goto l49;
      i4 = _check_pointer(i0, 4475);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 4475)));
      i4 = i4==10u;
      
      goto l51;
l49:
      i4=1u;
l51:
      if (i4) goto l53;
      i3 = i3+1;
      i = i3;
      
      goto l77;
l53:
      i4 = i3!=0;
      if (!i4) goto l57;
      i3 = i3+1;
      i = i3;
      
l57:
      i4 = *(OOC_INT32*)(_check_pointer(i2, 4613));
      i4 = i3+i4;
      max = i4;
      
l58_loop:
      i5 = i3==i4;
      if (i5) goto l61;
      i5 = i3>=i1;
      
      goto l63;
l61:
      i5=1u;
l63:
      if (i5) goto l65;
      i5 = _check_pointer(i0, 4688);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = *(OOC_UINT8*)(i5+(_check_index(i3, i6, OOC_UINT32, 4688)));
      i5 = i5==10u;
      
      goto l67;
l65:
      i5=1u;
l67:
      if (i5) goto l77;
      i5 = _check_pointer(i0, 4778);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = *(OOC_UINT8*)(i5+(_check_index(i3, i6, OOC_UINT32, 4778)));
      switch (i5) {
      case 32u:
        i5 = _check_pointer(i0, 4816);
        i6 = OOC_ARRAY_LENGTH(i5, 0);
        *(OOC_UINT8*)(i5+(_check_index(i3, i6, OOC_UINT32, 4816))) = 2u;
        goto l74;
      case 9u:
        i5 = _check_pointer(i0, 4867);
        i6 = OOC_ARRAY_LENGTH(i5, 0);
        *(OOC_UINT8*)(i5+(_check_index(i3, i6, OOC_UINT32, 4867))) = 3u;
        goto l74;
      default:
        goto l74;
      }
l74:
      i3 = i3+1;
      i = i3;
      
      goto l58_loop;
l77:
      i4 = i3<i1;
      if (i4) goto l46_loop;
l83:
      return (OOC_Doc_Decoration__PlainIndent)i2;
      ;
    }

    
    OOC_CHAR8 OOC_Doc_Decoration__Remove_IsDotLine(OOC_Scanner_InputBuffer__CharArray str) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_CHAR8 dot;
      OOC_INT32 i;

      dot = 1u;
      i = 0;
      i0 = (OOC_INT32)str;
      i1 = _check_pointer(i0, 5405);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT32, 5405)));
      i1 = i1!=0u;
      if (i1) goto l3;
      i0=1u;
      goto l42;
l3:
      i1=0;i2=1u;
l4_loop:
      i3 = _check_pointer(i0, 5433);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i1, i4, OOC_UINT32, 5433)));
      i3 = i3==10u;
      if (i3) goto l7;
      i1 = i1+1;
      i = i1;
      
      goto l37;
l7:
      i1 = i1+1;
      i = i1;
      i3 = _check_pointer(i0, 5498);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i1, i4, OOC_UINT32, 5498)));
      i3 = i3!=0u;
      if (i3) goto l10;
      i3=0u;
      goto l12;
l10:
      i3 = _check_pointer(i0, 5514);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i1, i4, OOC_UINT32, 5514)));
      i3 = i3!=10u;
      
l12:
      if (i3) goto l14;
      i3=0u;
      goto l16;
l14:
      i3 = _check_pointer(i0, 5541);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i1, i4, OOC_UINT32, 5541)));
      i3 = (OOC_UINT8)i3<=(OOC_UINT8)32u;
      
l16:
      if (!i3) goto l33;
l19_loop:
      i1 = i1+1;
      i = i1;
      i3 = _check_pointer(i0, 5498);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i1, i4, OOC_UINT32, 5498)));
      i3 = i3!=0u;
      if (i3) goto l22;
      i3=0u;
      goto l24;
l22:
      i3 = _check_pointer(i0, 5514);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i1, i4, OOC_UINT32, 5514)));
      i3 = i3!=10u;
      
l24:
      if (i3) goto l26;
      i3=0u;
      goto l28;
l26:
      i3 = _check_pointer(i0, 5541);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i1, i4, OOC_UINT32, 5541)));
      i3 = (OOC_UINT8)i3<=(OOC_UINT8)32u;
      
l28:
      if (i3) goto l19_loop;
l33:
      if (i2) goto l35;
      i2=0u;
      goto l36;
l35:
      i2 = _check_pointer(i0, 5618);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT32, 5618)));
      i2 = i2==42u;
      
l36:
      dot = i2;
      
l37:
      i3 = _check_pointer(i0, 5405);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i1, i4, OOC_UINT32, 5405)));
      i3 = i3!=0u;
      if (i3) goto l4_loop;
l41:
      i0=i2;
l42:
      return i0;
      ;
    }

    
    OOC_Doc_Decoration__Decoration OOC_Doc_Decoration__Remove_GetDotLineIndent(OOC_Scanner_InputBuffer__CharArray str) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_Doc_Decoration__PlainIndent plainIndent;
      OOC_INT32 i;
      OOC_Doc_Decoration__DotLineIndent dotLineIndent;

      i0 = (OOC_INT32)str;
      i1 = (OOC_INT32)OOC_Doc_Decoration__Remove_GetPlainIndent((OOC_Scanner_InputBuffer__CharArray)i0);
      plainIndent = (OOC_Doc_Decoration__PlainIndent)i1;
      i = 0;
      i2 = _check_pointer(i0, 5962);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 5962)));
      i2 = i2!=0u;
      if (!i2) goto l38;
      i2=0;
l3_loop:
      i3 = _check_pointer(i0, 5990);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 5990)));
      i3 = i3==10u;
      if (i3) goto l6;
      i2 = i2+1;
      i = i2;
      
      goto l33;
l6:
      i2 = i2+1;
      i = i2;
      i3 = _check_pointer(i0, 6055);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 6055)));
      i3 = i3!=0u;
      if (i3) goto l9;
      i3=0u;
      goto l11;
l9:
      i3 = _check_pointer(i0, 6071);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 6071)));
      i3 = (OOC_UINT8)i3<=(OOC_UINT8)32u;
      
l11:
      if (!i3) goto l23;
l14_loop:
      i2 = i2+1;
      i = i2;
      i3 = _check_pointer(i0, 6055);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 6055)));
      i3 = i3!=0u;
      if (i3) goto l17;
      i3=0u;
      goto l19;
l17:
      i3 = _check_pointer(i0, 6071);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 6071)));
      i3 = (OOC_UINT8)i3<=(OOC_UINT8)32u;
      
l19:
      if (i3) goto l14_loop;
l23:
      i3 = _check_pointer(i0, 6141);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 6141)));
      i3 = i3==42u;
      if (!i3) goto l33;
l27_loop:
      i3 = _check_pointer(i0, 6170);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 6170))) = 32u;
      i2 = i2+1;
      i = i2;
      i3 = _check_pointer(i0, 6141);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 6141)));
      i3 = i3==42u;
      if (i3) goto l27_loop;
l33:
      i3 = _check_pointer(i0, 5962);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 5962)));
      i3 = i3!=0u;
      if (i3) goto l3_loop;
l38:
      i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc_Decoration__DotLineIndent.baseTypes[0]);
      dotLineIndent = (OOC_Doc_Decoration__DotLineIndent)i0;
      i2 = *(OOC_INT32*)(_check_pointer(i1, 6346));
      *(OOC_INT32*)(_check_pointer(i0, 6323)) = i2;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 6400))+4);
      *(OOC_INT32*)((_check_pointer(i0, 6375))+4) = i2;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 6459))+8);
      *(OOC_INT32*)((_check_pointer(i0, 6431))+8) = i1;
      return (OOC_Doc_Decoration__Decoration)i0;
      ;
    }


  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6571))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6571))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 6576)), 0);
  i1 = Strings__Length((void*)(_check_pointer(i1, 6576)), i2);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i1+1));
  str = (OOC_Scanner_InputBuffer__CharArray)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6596))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6607)), 0);
  _copy_8((const void*)(_check_pointer(i0, 6601)),(void*)(_check_pointer(i1, 6607)),i2);
  i = 0;
  delta = 0;
  i0 = _check_pointer(i1, 6726);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(0, i2, OOC_UINT32, 6726)));
  i0 = i0!=0u;
  if (i0) goto l3;
  i0=0;i2=0;
  goto l21;
l3:
  i0=0;i2=0;
l4_loop:
  i3 = _check_pointer(i1, 6752);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 6752)));
  i3 = i3==13u;
  if (i3) goto l11;
  i3 = _check_pointer(i1, 6909);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 6909)));
  i3 = i3==10u;
  if (i3) goto l9;
  i3 = _check_pointer(i1, 6990);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = _check_pointer(i1, 7006);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i0, i6, OOC_UINT32, 7006)));
  *(OOC_UINT8*)(i3+(_check_index((i0-i2), i4, OOC_UINT32, 6990))) = i5;
  goto l10;
l9:
  i3 = _check_pointer(i1, 6941);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_UINT8*)(i3+(_check_index((i0-i2), i4, OOC_UINT32, 6941))) = 10u;
l10:
  {register OOC_INT32 h0=i0;i0=i2;i2=h0;}
  goto l16;
l11:
  i3 = _check_pointer(i1, 6784);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_UINT8*)(i3+(_check_index((i0-i2), i4, OOC_UINT32, 6784))) = 10u;
  i3 = _check_pointer(i1, 6827);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = i0+1;
  i3 = *(OOC_UINT8*)(i3+(_check_index(i5, i4, OOC_UINT32, 6827)));
  i3 = i3==10u;
  if (i3) goto l14;
  {register OOC_INT32 h0=i0;i0=i2;i2=h0;}
  goto l16;
l14:
  i0 = i2+1;
  delta = i0;
  i2=i5;
l16:
  i2 = i2+1;
  i = i2;
  i3 = _check_pointer(i1, 6726);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 6726)));
  i3 = i3!=0u;
  if (!i3) goto l20;
  {register OOC_INT32 h0=i0;i0=i2;i2=h0;}
  goto l4_loop;
l20:
  {register OOC_INT32 h0=i0;i0=i2;i2=h0;}
l21:
  i0 = i0-i2;
  len = i0;
  i2 = _check_pointer(i1, 7071);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 7071))) = 0u;
  *deco = (OOC_Doc_Decoration__Decoration)(OOC_INT32)0;
  i0 = OOC_Doc_Decoration__Remove_IsDotLine((OOC_Scanner_InputBuffer__CharArray)i1);
  if (i0) goto l24;
  i0=(OOC_INT32)0;
  goto l25;
l24:
  i0 = (OOC_INT32)OOC_Doc_Decoration__Remove_GetDotLineIndent((OOC_Scanner_InputBuffer__CharArray)i1);
  *deco = (OOC_Doc_Decoration__Decoration)i0;
  
l25:
  i0 = i0==(OOC_INT32)0;
  if (!i0) goto l28;
  i0 = (OOC_INT32)str;
  i0 = (OOC_INT32)OOC_Doc_Decoration__Remove_GetPlainIndent((OOC_Scanner_InputBuffer__CharArray)i0);
  *deco = (OOC_Doc_Decoration__Decoration)i0;
l28:
  i0 = (OOC_INT32)str;
  return (OOC_Scanner_InputBuffer__CharArray)i0;
  ;
}

OOC_Scanner_InputBuffer__CharArray OOC_Doc_Decoration__DecorationDesc_Decorate(OOC_Doc_Decoration__Decoration d, OOC_Scanner_InputBuffer__CharArray s) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)s;
  return (OOC_Scanner_InputBuffer__CharArray)i0;
  ;
}

OOC_Scanner_InputBuffer__CharArray OOC_Doc_Decoration__PlainIndentDesc_Decorate(OOC_Doc_Decoration__PlainIndent d, OOC_Scanner_InputBuffer__CharArray s) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 len;
  OOC_Scanner_InputBuffer__CharArray s2;
  OOC_CHAR8 ins[4];

  i0 = (OOC_INT32)s;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 7744)), 0);
  i1 = Strings__Length((void*)(_check_pointer(i0, 7744)), i1);
  len = i1;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], ((i1+3)+5));
  s2 = (OOC_Scanner_InputBuffer__CharArray)i2;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 7787)), 0);
  _copy_8((const void*)(_check_pointer(i0, 7782)),(void*)(_check_pointer(i2, 7787)),i3);
  i0 = i1>0;
  if (i0) goto l3;
  i0=0u;
  goto l5;
l3:
  i0 = _check_pointer(i2, 7818);
  i3 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT8*)(i0+(_check_index((i1-1), i3, OOC_UINT32, 7818)));
  i0 = i0==10u;
  
l5:
  if (!i0) goto l7;
  i0 = _check_pointer(i2, 7856);
  i3 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_UINT8*)(i0+(_check_index((i1-1), i3, OOC_UINT32, 7856))) = 0u;
l7:
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i2, 7909)), 0);
  Strings__Append("  *)", 5, (void*)(_check_pointer(i2, 7909)), i0);
  i0 = _check_pointer(i2, 7928);
  i1 = (OOC_INT32)d;
  i3 = *(OOC_INT32*)((_check_pointer(i1, 7930))+8);
  i4 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i4, OOC_UINT32, 7928)));
  i0 = i0==32u;
  if (i0) goto l10;
  i0=0u;
  goto l12;
l10:
  i0 = _check_pointer(i2, 7957);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 7959))+8);
  i4 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT8*)(i0+(_check_index((i3+1), i4, OOC_UINT32, 7957)));
  i0 = i0==32u;
  
l12:
  if (i0) goto l14;
  _copy_8((const void*)"(*x",(void*)(OOC_INT32)ins,4);
  *(OOC_UINT8*)((OOC_INT32)ins+(_check_index(2, 4, OOC_UINT8, 8093))) = 10u;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i2, 8147)), 0);
  Strings__Insert((void*)(OOC_INT32)ins, 4, 0, (void*)(_check_pointer(i2, 8147)), i0);
  goto l15;
l14:
  i0 = _check_pointer(i2, 7996);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 7998))+8);
  i4 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_UINT8*)(i0+(_check_index(i3, i4, OOC_UINT32, 7996))) = 40u;
  i0 = _check_pointer(i2, 8029);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 8031))+8);
  i3 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_UINT8*)(i0+(_check_index((i1+1), i3, OOC_UINT32, 8029))) = 42u;
l15:
  return (OOC_Scanner_InputBuffer__CharArray)i2;
  ;
}

void OOC_OOC_Doc_Decoration_init(void) {

  return;
  ;
}

/* --- */
