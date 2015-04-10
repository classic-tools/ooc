#include "OOC/Doc/Decoration.d"
#include "__oo2c.h"

OOC_Scanner_InputBuffer__CharArray OOC_Doc_Decoration__Remove(OOC_Scanner_Builder_BasicList__Symbol sym, OOC_Doc_Decoration__Decoration *deco) {
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
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 2455)));
      i1 = i1!=(OOC_CHAR8)'\000';
      if (!i1) goto l20;
l3_loop:
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 2483)));
      i1 = i1==(OOC_CHAR8)' ';
      if (i1) goto l14;
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 2540)));
      i1 = i1==(OOC_CHAR8)'\011';
      if (i1) goto l12;
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 2650)));
      i1 = i1==(OOC_CHAR8)'\012';
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
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 2455)));
      i1 = i1!=(OOC_CHAR8)'\000';
      if (i1) goto l3_loop;
l20:
      return 2147483647;
      ;
    }

    
    OOC_Doc_Decoration__PlainIndent OOC_Doc_Decoration__Remove_GetPlainIndent(OOC_Scanner_InputBuffer__CharArray str) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      OOC_INT32 len;
      OOC_INT32 i;
      OOC_Doc_Decoration__PlainIndent plainIndent;
      OOC_INT32 indent;
      OOC_INT32 max;

      i0 = (OOC_INT32)str;
      i1 = _check_pointer(i0, 3186);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT8, 3186)));
      _assert((i1==(OOC_CHAR8)'('), 127, 3175);
      i1 = _check_pointer(i0, 3207);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT8, 3207))) = (OOC_CHAR8)' ';
      i1 = _check_pointer(i0, 3236);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT8*)(i1+(_check_index(1, i2, OOC_UINT8, 3236)));
      _assert((i1==(OOC_CHAR8)'*'), 127, 3225);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3280)), 0);
      i1 = Strings__Length((void*)(_check_pointer(i0, 3280)), i1);
      len = i1;
      i = 1;
      i2 = _check_pointer(i0, 3314);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT8*)(i2+(_check_index(1, i3, OOC_UINT32, 3314)));
      i3 = i1-2;
      i2 = i2==(OOC_CHAR8)'*';
      if (i2) goto l3;
      i2=OOC_FALSE;
      goto l5;
l3:
      i2 = 1!=i3;
      
l5:
      if (!i2) goto l16;
      i2=1;
l7_loop:
      i4 = _check_pointer(i0, 3353);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT32, 3353))) = (OOC_CHAR8)' ';
      i2 = i2+1;
      i = i2;
      i4 = _check_pointer(i0, 3314);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT32, 3314)));
      i4 = i4==(OOC_CHAR8)'*';
      if (i4) goto l10;
      i4=OOC_FALSE;
      goto l12;
l10:
      i4 = i2!=i3;
      
l12:
      if (i4) goto l7_loop;
l16:
      i2 = _check_pointer(i0, 3416);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      i5 = i1-1;
      i2 = *(OOC_UINT8*)(i2+(_check_index(i5, i4, OOC_UINT32, 3416)));
      _assert((i2==(OOC_CHAR8)')'), 127, 3405);
      i2 = _check_pointer(i0, 3441);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      *(OOC_UINT8*)(i2+(_check_index(i5, i4, OOC_UINT32, 3441))) = (OOC_CHAR8)' ';
      i2 = _check_pointer(i0, 3474);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT8*)(i2+(_check_index(i3, i4, OOC_UINT32, 3474)));
      _assert((i2==(OOC_CHAR8)'*'), 127, 3463);
      i = i3;
      i2 = _check_pointer(i0, 3539);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT8*)(i2+(_check_index(i3, i4, OOC_UINT32, 3539)));
      i2 = i2==(OOC_CHAR8)'*';
      if (!i2) goto l24;
      i2=i3;
l19_loop:
      i3 = _check_pointer(i0, 3564);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 3564))) = (OOC_CHAR8)' ';
      i2 = i2-1;
      i = i2;
      i3 = _check_pointer(i0, 3539);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 3539)));
      i3 = i3==(OOC_CHAR8)'*';
      if (i3) goto l19_loop;
l24:
      i2 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc_Decoration__PlainIndent.baseTypes[0]);
      plainIndent = (OOC_Doc_Decoration__PlainIndent)i2;
      i3 = (OOC_INT32)sym;
      i4 = *(OOC_INT32*)((_check_pointer(i3, 3741))+24);
      *(OOC_INT32*)((_check_pointer(i2, 3721))+8) = i4;
      i3 = *(OOC_INT32*)((_check_pointer(i3, 3803))+24);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3794)), 0);
      i3 = OOC_Doc_Decoration__Remove_GetIndent((void*)(_check_pointer(i0, 3794)), i4, 0, i3);
      *(OOC_INT32*)(_check_pointer(i2, 3768)) = i3;
      *(OOC_INT32*)((_check_pointer(i2, 3831))+4) = 79;
      i3 = 0<=i5;
      i = 0;
      if (!i3) goto l38;
      i4=0;
l27_loop:
      i6 = _check_pointer(i0, 3895);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = *(OOC_UINT8*)(i6+(_check_index(i4, i7, OOC_UINT32, 3895)));
      i6 = i6==(OOC_CHAR8)'\012';
      i4 = i4+1;
      if (!i6) goto l33;
      i6 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3955)), 0);
      i6 = OOC_Doc_Decoration__Remove_GetIndent((void*)(_check_pointer(i0, 3955)), i6, i4, 0);
      indent = i6;
      i7 = *(OOC_INT32*)(_check_pointer(i2, 4001));
      i7 = i6<i7;
      if (!i7) goto l33;
      *(OOC_INT32*)(_check_pointer(i2, 4039)) = i6;
l33:
      i6 = i4<=i5;
      i = i4;
      if (i6) goto l27_loop;
l38:
      i4 = *(OOC_INT32*)(_check_pointer(i2, 4116));
      i4 = i4==2147483647;
      if (!i4) goto l41;
      *(OOC_INT32*)(_check_pointer(i2, 4161)) = 0;
l41:
      i4 = *(OOC_INT32*)(_check_pointer(i2, 4214));
      i4 = i4>0;
      if (!i4) goto l83;
      i = 0;
      if (!i3) goto l83;
      i3=0;
l46_loop:
      i4 = i3==0;
      if (i4) goto l49;
      i4 = _check_pointer(i0, 4483);
      i6 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i6, OOC_UINT32, 4483)));
      i4 = i4==(OOC_CHAR8)'\012';
      
      goto l51;
l49:
      i4=OOC_TRUE;
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
      i4 = *(OOC_INT32*)(_check_pointer(i2, 4621));
      i4 = i3+i4;
      max = i4;
      
l58_loop:
      i6 = i3==i4;
      if (i6) goto l61;
      i6 = i3>=i1;
      
      goto l63;
l61:
      i6=OOC_TRUE;
l63:
      if (i6) goto l65;
      i6 = _check_pointer(i0, 4696);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = *(OOC_UINT8*)(i6+(_check_index(i3, i7, OOC_UINT32, 4696)));
      i6 = i6==(OOC_CHAR8)'\012';
      
      goto l67;
l65:
      i6=OOC_TRUE;
l67:
      if (i6) goto l77;
      i6 = _check_pointer(i0, 4786);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = *(OOC_UINT8*)(i6+(_check_index(i3, i7, OOC_UINT32, 4786)));
      switch (i6) {
      case (OOC_CHAR8)' ':
        i6 = _check_pointer(i0, 4824);
        i7 = OOC_ARRAY_LENGTH(i6, 0);
        *(OOC_UINT8*)(i6+(_check_index(i3, i7, OOC_UINT32, 4824))) = (OOC_CHAR8)'\002';
        goto l74;
      case (OOC_CHAR8)'\011':
        i6 = _check_pointer(i0, 4875);
        i7 = OOC_ARRAY_LENGTH(i6, 0);
        *(OOC_UINT8*)(i6+(_check_index(i3, i7, OOC_UINT32, 4875))) = (OOC_CHAR8)'\003';
        goto l74;
      default:
        goto l74;
      }
l74:
      i3 = i3+1;
      i = i3;
      
      goto l58_loop;
l77:
      i4 = i3<=i5;
      if (i4) goto l46_loop;
l83:
      return (OOC_Doc_Decoration__PlainIndent)i2;
      ;
    }

    
    OOC_CHAR8 OOC_Doc_Decoration__Remove_IsDotLine(OOC_Scanner_InputBuffer__CharArray str) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_CHAR8 dot;
      OOC_INT32 i;

      dot = OOC_TRUE;
      i = 0;
      i0 = (OOC_INT32)str;
      i1 = _check_pointer(i0, 5413);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT32, 5413)));
      i1 = i1!=(OOC_CHAR8)'\000';
      if (i1) goto l3;
      i0=OOC_TRUE;
      goto l42;
l3:
      i1=0;i2=OOC_TRUE;
l4_loop:
      i3 = _check_pointer(i0, 5441);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i1, i4, OOC_UINT32, 5441)));
      i3 = i3==(OOC_CHAR8)'\012';
      if (i3) goto l7;
      i1 = i1+1;
      i = i1;
      
      goto l37;
l7:
      i1 = i1+1;
      i = i1;
      i3 = _check_pointer(i0, 5506);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i1, i4, OOC_UINT32, 5506)));
      i3 = i3!=(OOC_CHAR8)'\000';
      if (i3) goto l10;
      i3=OOC_FALSE;
      goto l12;
l10:
      i3 = _check_pointer(i0, 5522);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i1, i4, OOC_UINT32, 5522)));
      i3 = i3!=(OOC_CHAR8)'\012';
      
l12:
      if (i3) goto l14;
      i3=OOC_FALSE;
      goto l16;
l14:
      i3 = _check_pointer(i0, 5549);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i1, i4, OOC_UINT32, 5549)));
      i3 = i3<=(OOC_CHAR8)' ';
      
l16:
      if (!i3) goto l33;
l19_loop:
      i1 = i1+1;
      i = i1;
      i3 = _check_pointer(i0, 5506);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i1, i4, OOC_UINT32, 5506)));
      i3 = i3!=(OOC_CHAR8)'\000';
      if (i3) goto l22;
      i3=OOC_FALSE;
      goto l24;
l22:
      i3 = _check_pointer(i0, 5522);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i1, i4, OOC_UINT32, 5522)));
      i3 = i3!=(OOC_CHAR8)'\012';
      
l24:
      if (i3) goto l26;
      i3=OOC_FALSE;
      goto l28;
l26:
      i3 = _check_pointer(i0, 5549);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i1, i4, OOC_UINT32, 5549)));
      i3 = i3<=(OOC_CHAR8)' ';
      
l28:
      if (i3) goto l19_loop;
l33:
      if (i2) goto l35;
      i2=OOC_FALSE;
      goto l36;
l35:
      i2 = _check_pointer(i0, 5626);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT32, 5626)));
      i2 = i2==(OOC_CHAR8)'*';
      
l36:
      dot = i2;
      
l37:
      i3 = _check_pointer(i0, 5413);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i1, i4, OOC_UINT32, 5413)));
      i3 = i3!=(OOC_CHAR8)'\000';
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
      i2 = _check_pointer(i0, 5970);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 5970)));
      i2 = i2!=(OOC_CHAR8)'\000';
      if (!i2) goto l38;
      i2=0;
l3_loop:
      i3 = _check_pointer(i0, 5998);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 5998)));
      i3 = i3==(OOC_CHAR8)'\012';
      if (i3) goto l6;
      i2 = i2+1;
      i = i2;
      
      goto l33;
l6:
      i2 = i2+1;
      i = i2;
      i3 = _check_pointer(i0, 6063);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 6063)));
      i3 = i3!=(OOC_CHAR8)'\000';
      if (i3) goto l9;
      i3=OOC_FALSE;
      goto l11;
l9:
      i3 = _check_pointer(i0, 6079);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 6079)));
      i3 = i3<=(OOC_CHAR8)' ';
      
l11:
      if (!i3) goto l23;
l14_loop:
      i2 = i2+1;
      i = i2;
      i3 = _check_pointer(i0, 6063);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 6063)));
      i3 = i3!=(OOC_CHAR8)'\000';
      if (i3) goto l17;
      i3=OOC_FALSE;
      goto l19;
l17:
      i3 = _check_pointer(i0, 6079);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 6079)));
      i3 = i3<=(OOC_CHAR8)' ';
      
l19:
      if (i3) goto l14_loop;
l23:
      i3 = _check_pointer(i0, 6149);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 6149)));
      i3 = i3==(OOC_CHAR8)'*';
      if (!i3) goto l33;
l27_loop:
      i3 = _check_pointer(i0, 6178);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 6178))) = (OOC_CHAR8)' ';
      i2 = i2+1;
      i = i2;
      i3 = _check_pointer(i0, 6149);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 6149)));
      i3 = i3==(OOC_CHAR8)'*';
      if (i3) goto l27_loop;
l33:
      i3 = _check_pointer(i0, 5970);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 5970)));
      i3 = i3!=(OOC_CHAR8)'\000';
      if (i3) goto l3_loop;
l38:
      i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc_Decoration__DotLineIndent.baseTypes[0]);
      dotLineIndent = (OOC_Doc_Decoration__DotLineIndent)i0;
      i2 = *(OOC_INT32*)(_check_pointer(i1, 6354));
      *(OOC_INT32*)(_check_pointer(i0, 6331)) = i2;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 6408))+4);
      *(OOC_INT32*)((_check_pointer(i0, 6383))+4) = i2;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 6467))+8);
      *(OOC_INT32*)((_check_pointer(i0, 6439))+8) = i1;
      return (OOC_Doc_Decoration__Decoration)i0;
      ;
    }


  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6579))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6579))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 6584)), 0);
  i1 = Strings__Length((void*)(_check_pointer(i1, 6584)), i2);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i1+1));
  str = (OOC_Scanner_InputBuffer__CharArray)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6604))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6615)), 0);
  _copy_8((_check_pointer(i0, 6609)),(_check_pointer(i1, 6615)),i2);
  i = 0;
  delta = 0;
  i0 = _check_pointer(i1, 6734);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(0, i2, OOC_UINT32, 6734)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l3;
  i0=0;i2=0;
  goto l21;
l3:
  i0=0;i2=0;
l4_loop:
  i3 = _check_pointer(i1, 6760);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 6760)));
  i3 = i3==(OOC_CHAR8)'\015';
  if (i3) goto l11;
  i3 = _check_pointer(i1, 6917);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 6917)));
  i3 = i3==(OOC_CHAR8)'\012';
  if (i3) goto l9;
  i3 = _check_pointer(i1, 6998);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = _check_pointer(i1, 7014);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i0, i6, OOC_UINT32, 7014)));
  *(OOC_UINT8*)(i3+(_check_index((i0-i2), i4, OOC_UINT32, 6998))) = i5;
  goto l10;
l9:
  i3 = _check_pointer(i1, 6949);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_UINT8*)(i3+(_check_index((i0-i2), i4, OOC_UINT32, 6949))) = (OOC_CHAR8)'\012';
l10:
  {register OOC_INT32 h0=i0;i0=i2;i2=h0;}
  goto l16;
l11:
  i3 = _check_pointer(i1, 6792);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_UINT8*)(i3+(_check_index((i0-i2), i4, OOC_UINT32, 6792))) = (OOC_CHAR8)'\012';
  i3 = _check_pointer(i1, 6835);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = i0+1;
  i3 = *(OOC_UINT8*)(i3+(_check_index(i5, i4, OOC_UINT32, 6835)));
  i3 = i3==(OOC_CHAR8)'\012';
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
  i3 = _check_pointer(i1, 6734);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 6734)));
  i3 = i3!=(OOC_CHAR8)'\000';
  if (!i3) goto l20;
  {register OOC_INT32 h0=i0;i0=i2;i2=h0;}
  goto l4_loop;
l20:
  {register OOC_INT32 h0=i0;i0=i2;i2=h0;}
l21:
  i0 = i0-i2;
  len = i0;
  i2 = _check_pointer(i1, 7079);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 7079))) = (OOC_CHAR8)'\000';
  *deco = (OOC_Doc_Decoration__Decoration)(OOC_INT32)0;
  i0 = OOC_Doc_Decoration__Remove_IsDotLine((OOC_Scanner_InputBuffer__CharArray)i1);
  if (!i0) goto l24;
  i0 = (OOC_INT32)str;
  i0 = (OOC_INT32)OOC_Doc_Decoration__Remove_GetDotLineIndent((OOC_Scanner_InputBuffer__CharArray)i0);
  *deco = (OOC_Doc_Decoration__Decoration)i0;
l24:
  i0 = (OOC_INT32)*deco;
  i0 = i0==(OOC_INT32)0;
  if (!i0) goto l27;
  i0 = (OOC_INT32)str;
  i0 = (OOC_INT32)OOC_Doc_Decoration__Remove_GetPlainIndent((OOC_Scanner_InputBuffer__CharArray)i0);
  *deco = (OOC_Doc_Decoration__Decoration)i0;
l27:
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
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 7752)), 0);
  i1 = Strings__Length((void*)(_check_pointer(i0, 7752)), i1);
  len = i1;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], ((i1+3)+5));
  s2 = (OOC_Scanner_InputBuffer__CharArray)i2;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 7795)), 0);
  _copy_8((_check_pointer(i0, 7790)),(_check_pointer(i2, 7795)),i3);
  i0 = i1>0;
  if (i0) goto l3;
  i0=OOC_FALSE;
  goto l5;
l3:
  i0 = _check_pointer(i2, 7826);
  i3 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT8*)(i0+(_check_index((i1-1), i3, OOC_UINT32, 7826)));
  i0 = i0==(OOC_CHAR8)'\012';
  
l5:
  if (!i0) goto l7;
  i0 = _check_pointer(i2, 7864);
  i3 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_UINT8*)(i0+(_check_index((i1-1), i3, OOC_UINT32, 7864))) = (OOC_CHAR8)'\000';
l7:
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i2, 7917)), 0);
  Strings__Append("  *)", 5, (void*)(_check_pointer(i2, 7917)), i0);
  i0 = _check_pointer(i2, 7936);
  i1 = (OOC_INT32)d;
  i3 = *(OOC_INT32*)((_check_pointer(i1, 7938))+8);
  i4 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i4, OOC_UINT32, 7936)));
  i0 = i0==(OOC_CHAR8)' ';
  if (i0) goto l10;
  i0=OOC_FALSE;
  goto l12;
l10:
  i0 = _check_pointer(i2, 7965);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 7967))+8);
  i4 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT8*)(i0+(_check_index((i3+1), i4, OOC_UINT32, 7965)));
  i0 = i0==(OOC_CHAR8)' ';
  
l12:
  if (i0) goto l14;
  _copy_8("(*x",(OOC_INT32)ins,4);
  *(OOC_UINT8*)((OOC_INT32)ins+(_check_index(2, 4, OOC_UINT8, 8101))) = (OOC_CHAR8)'\012';
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i2, 8155)), 0);
  Strings__Insert((void*)(OOC_INT32)ins, 4, 0, (void*)(_check_pointer(i2, 8155)), i0);
  goto l15;
l14:
  i0 = _check_pointer(i2, 8004);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 8006))+8);
  i4 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_UINT8*)(i0+(_check_index(i3, i4, OOC_UINT32, 8004))) = (OOC_CHAR8)'(';
  i0 = _check_pointer(i2, 8037);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 8039))+8);
  i3 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_UINT8*)(i0+(_check_index((i1+1), i3, OOC_UINT32, 8037))) = (OOC_CHAR8)'*';
l15:
  return (OOC_Scanner_InputBuffer__CharArray)i2;
  ;
}

void OOC_OOC_Doc_Decoration_init(void) {

  return;
  ;
}

/* --- */
