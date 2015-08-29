#include <XML/UnicodeBuffer.d>
#include <__oo2c.h>

static OOC_INT32 XML_UnicodeBuffer__AutodetectEnc(XML_UnicodeBuffer__Input input, OOC_CHAR8 enc[], OOC_LEN enc_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_CHAR8 str[16];
  OOC_INT32 skip;
  XML_InputBuffer__CharArray x;

  i0 = (OOC_INT32)input;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4895));
  i1 = *(OOC_INT32*)((_check_pointer(i1, 4907))+8);
  _assert((i1==0), 127, 4882);
  _copy_8((const void*)"UTF-8",(void*)(OOC_INT32)str,16);
  skip = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4976));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4988))+4);
  x = (XML_InputBuffer__CharArray)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5010));
  i0 = *(OOC_INT32*)((_check_pointer(i0, 5022))+12);
  i0 = i0>=4;
  if (i0) goto l3;
  i0=0;
  goto l161;
l3:
  i0 = _check_pointer(i1, 5059);
  i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(0, i2, OOC_UINT8, 5059)));
  switch (i0) {
  case (OOC_CHAR8)'\000':
    i0 = _check_pointer(i1, 5093);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(1, i2, OOC_UINT8, 5093)));
    i0 = i0==(OOC_CHAR8)'\000';
    if (i0) goto l31;
    i0 = _check_pointer(i1, 5589);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(1, i2, OOC_UINT8, 5589)));
    i0 = i0==(OOC_CHAR8)'<';
    if (i0) goto l10;
    i0=OOC_FALSE;
    goto l12;
l10:
    i0 = _check_pointer(i1, 5604);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(2, i2, OOC_UINT8, 5604)));
    i0 = i0==(OOC_CHAR8)'\000';
    
l12:
    if (i0) goto l14;
    i0=OOC_FALSE;
    goto l16;
l14:
    i0 = _check_pointer(i1, 5618);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(3, i2, OOC_UINT8, 5618)));
    i0 = i0==(OOC_CHAR8)'\000';
    
l16:
    if (i0) goto l29;
    i0 = _check_pointer(i1, 5713);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(1, i2, OOC_UINT8, 5713)));
    i0 = i0==(OOC_CHAR8)'<';
    if (i0) goto l20;
    i0=OOC_FALSE;
    goto l22;
l20:
    i0 = _check_pointer(i1, 5728);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(2, i2, OOC_UINT8, 5728)));
    i0 = i0==(OOC_CHAR8)'\000';
    
l22:
    if (i0) goto l24;
    i0=OOC_FALSE;
    goto l26;
l24:
    i0 = _check_pointer(i1, 5742);
    i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(3, i1, OOC_UINT8, 5742)));
    i0 = i0==(OOC_CHAR8)'?';
    
l26:
    if (!i0) goto l30;
    _copy_8((const void*)"UTF16-LE",(void*)(OOC_INT32)str,16);
    goto l30;
l29:
    _copy_8((const void*)"UCS-4-3412",(void*)(OOC_INT32)str,16);
l30:
    i0=0;
    goto l161;
l31:
    i0 = _check_pointer(i1, 5123);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(2, i2, OOC_UINT8, 5123)));
    i0 = i0==(OOC_CHAR8)'\000';
    if (i0) goto l34;
    i0=OOC_FALSE;
    goto l36;
l34:
    i0 = _check_pointer(i1, 5137);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(3, i2, OOC_UINT8, 5137)));
    i0 = i0==(OOC_CHAR8)'<';
    
l36:
    if (i0) goto l62;
    i0 = _check_pointer(i1, 5228);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(2, i2, OOC_UINT8, 5228)));
    i0 = i0==(OOC_CHAR8)'<';
    if (i0) goto l40;
    i0=OOC_FALSE;
    goto l42;
l40:
    i0 = _check_pointer(i1, 5243);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(3, i2, OOC_UINT8, 5243)));
    i0 = i0==(OOC_CHAR8)'\000';
    
l42:
    if (i0) goto l60;
    i0 = _check_pointer(i1, 5333);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(2, i2, OOC_UINT8, 5333)));
    i0 = i0==(OOC_CHAR8)'\376';
    if (i0) goto l46;
    i0=OOC_FALSE;
    goto l48;
l46:
    i0 = _check_pointer(i1, 5349);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(3, i2, OOC_UINT8, 5349)));
    i0 = i0==(OOC_CHAR8)'\377';
    
l48:
    if (i0) goto l58;
    i0 = _check_pointer(i1, 5455);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(2, i2, OOC_UINT8, 5455)));
    i0 = i0==(OOC_CHAR8)'\377';
    if (i0) goto l52;
    i0=OOC_FALSE;
    goto l54;
l52:
    i0 = _check_pointer(i1, 5471);
    i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(3, i1, OOC_UINT8, 5471)));
    i0 = i0==(OOC_CHAR8)'\376';
    
l54:
    if (i0) goto l56;
    i0=0;
    goto l161;
l56:
    _copy_8((const void*)"UCS-4-2143",(void*)(OOC_INT32)str,16);
    i0=4;
    goto l161;
l58:
    _copy_8((const void*)"UCS-4-1234",(void*)(OOC_INT32)str,16);
    i0=4;
    goto l161;
l60:
    _copy_8((const void*)"UCS-4-2143",(void*)(OOC_INT32)str,16);
    i0=0;
    goto l161;
l62:
    _copy_8((const void*)"UCS-4-1234",(void*)(OOC_INT32)str,16);
    i0=0;
    goto l161;
  case (OOC_CHAR8)'<':
    i0 = _check_pointer(i1, 5841);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(1, i2, OOC_UINT8, 5841)));
    i0 = i0==(OOC_CHAR8)'\000';
    if (i0) goto l79;
    i0 = _check_pointer(i1, 6095);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(1, i2, OOC_UINT8, 6095)));
    i0 = i0==(OOC_CHAR8)'?';
    if (i0) goto l70;
    i0=OOC_FALSE;
    goto l72;
l70:
    i0 = _check_pointer(i1, 6110);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(2, i2, OOC_UINT8, 6110)));
    i0 = i0==(OOC_CHAR8)'x';
    
l72:
    if (i0) goto l74;
    i0=OOC_FALSE;
    goto l76;
l74:
    i0 = _check_pointer(i1, 6125);
    i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(3, i1, OOC_UINT8, 6125)));
    i0 = i0==(OOC_CHAR8)'m';
    
l76:
    if (!i0) goto l95;
    _copy_8((const void*)"UTF-8",(void*)(OOC_INT32)str,16);
    goto l95;
l79:
    i0 = _check_pointer(i1, 5871);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(2, i2, OOC_UINT8, 5871)));
    i0 = i0==(OOC_CHAR8)'\000';
    if (i0) goto l82;
    i0=OOC_FALSE;
    goto l84;
l82:
    i0 = _check_pointer(i1, 5885);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(3, i2, OOC_UINT8, 5885)));
    i0 = i0==(OOC_CHAR8)'\000';
    
l84:
    if (i0) goto l93;
    i0 = _check_pointer(i1, 5976);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(2, i2, OOC_UINT8, 5976)));
    i0 = i0==(OOC_CHAR8)'?';
    if (i0) goto l88;
    i0=OOC_FALSE;
    goto l90;
l88:
    i0 = _check_pointer(i1, 5991);
    i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(3, i1, OOC_UINT8, 5991)));
    i0 = i0==(OOC_CHAR8)'\000';
    
l90:
    if (!i0) goto l95;
    _copy_8((const void*)"UTF-16LE",(void*)(OOC_INT32)str,16);
    goto l95;
l93:
    _copy_8((const void*)"UCS-4-4321",(void*)(OOC_INT32)str,16);
l95:
    i0=0;
    goto l161;
  case (OOC_CHAR8)'L':
    i0 = _check_pointer(i1, 6205);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(1, i2, OOC_UINT8, 6205)));
    i0 = i0==(OOC_CHAR8)'o';
    if (i0) goto l99;
    i0=OOC_FALSE;
    goto l101;
l99:
    i0 = _check_pointer(i1, 6220);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(2, i2, OOC_UINT8, 6220)));
    i0 = i0==(OOC_CHAR8)'\247';
    
l101:
    if (i0) goto l103;
    i0=OOC_FALSE;
    goto l105;
l103:
    i0 = _check_pointer(i1, 6236);
    i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(3, i1, OOC_UINT8, 6236)));
    i0 = i0==(OOC_CHAR8)'\224';
    
l105:
    if (!i0) goto l107;
    _copy_8((const void*)"EBCDIC",(void*)(OOC_INT32)str,16);
l107:
    i0=0;
    goto l161;
  case (OOC_CHAR8)'\357':
    i0 = _check_pointer(i1, 6429);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(1, i2, OOC_UINT8, 6429)));
    i0 = i0==(OOC_CHAR8)'\273';
    if (i0) goto l111;
    i0=OOC_FALSE;
    goto l113;
l111:
    i0 = _check_pointer(i1, 6445);
    i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(2, i1, OOC_UINT8, 6445)));
    i0 = i0==(OOC_CHAR8)'\277';
    
l113:
    if (i0) goto l115;
    i0=0;
    goto l161;
l115:
    _copy_8((const void*)"UTF-8",(void*)(OOC_INT32)str,16);
    i0=3;
    goto l161;
  case (OOC_CHAR8)'\376':
    i0 = _check_pointer(i1, 6581);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(1, i2, OOC_UINT8, 6581)));
    i0 = i0==(OOC_CHAR8)'\377';
    if (i0) goto l120;
    i0=0;
    goto l161;
l120:
    i0 = _check_pointer(i1, 6613);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(2, i2, OOC_UINT8, 6613)));
    i0 = i0!=(OOC_CHAR8)'\000';
    if (i0) goto l123;
    i0 = _check_pointer(i1, 6628);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(3, i2, OOC_UINT8, 6628)));
    i0 = i0!=(OOC_CHAR8)'\000';
    
    goto l125;
l123:
    i0=OOC_TRUE;
l125:
    if (i0) goto l135;
    i0 = _check_pointer(i1, 6760);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(2, i2, OOC_UINT8, 6760)));
    i0 = i0==(OOC_CHAR8)'\000';
    if (i0) goto l129;
    i0=OOC_FALSE;
    goto l131;
l129:
    i0 = _check_pointer(i1, 6774);
    i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(3, i1, OOC_UINT8, 6774)));
    i0 = i0==(OOC_CHAR8)'\000';
    
l131:
    if (i0) goto l133;
    i0=0;
    goto l161;
l133:
    _copy_8((const void*)"UCS-4-3412",(void*)(OOC_INT32)str,16);
    i0=4;
    goto l161;
l135:
    _copy_8((const void*)"UTF-16BE",(void*)(OOC_INT32)str,16);
    i0=2;
    goto l161;
  case (OOC_CHAR8)'\377':
    i0 = _check_pointer(i1, 6913);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(1, i2, OOC_UINT8, 6913)));
    i0 = i0==(OOC_CHAR8)'\376';
    if (i0) goto l141;
    i0=0;
    goto l161;
l141:
    i0 = _check_pointer(i1, 6945);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(2, i2, OOC_UINT8, 6945)));
    i0 = i0!=(OOC_CHAR8)'\000';
    if (i0) goto l144;
    i0 = _check_pointer(i1, 6960);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(3, i2, OOC_UINT8, 6960)));
    i0 = i0!=(OOC_CHAR8)'\000';
    
    goto l146;
l144:
    i0=OOC_TRUE;
l146:
    if (i0) goto l156;
    i0 = _check_pointer(i1, 7095);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(2, i2, OOC_UINT8, 7095)));
    i0 = i0==(OOC_CHAR8)'\000';
    if (i0) goto l150;
    i0=OOC_FALSE;
    goto l152;
l150:
    i0 = _check_pointer(i1, 7109);
    i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(3, i1, OOC_UINT8, 7109)));
    i0 = i0==(OOC_CHAR8)'\000';
    
l152:
    if (i0) goto l154;
    i0=0;
    goto l161;
l154:
    _copy_8((const void*)"UCS-4-4321",(void*)(OOC_INT32)str,16);
    i0=4;
    goto l161;
l156:
    _copy_8((const void*)"UTF-16LE",(void*)(OOC_INT32)str,16);
    i0=2;
    goto l161;
  default:
    i0=0;
    goto l161;
  }
l161:
  _copy_8((const void*)(OOC_INT32)str,(void*)(OOC_INT32)enc,enc_0d);
  return i0;
  ;
}

OOC_CHAR8 XML_UnicodeBuffer__InputDesc_NextBlock(XML_UnicodeBuffer__Input in) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11;
  OOC_INT32 len;
  XML_UnicodeBuffer__CharArray nChars;

  i0 = (OOC_INT32)in;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8366))+20);
  i1 = _check_pointer(i1, 8373);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 8376))+28);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_UINT16*)(i1+(_check_index(i2, i3, OOC_UINT32, 8373))*2);
  i1 = i1==(OOC_CHAR16)65535;
  if (i1) goto l10;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 8441))+4);
  i1 = !i1;
  if (i1) goto l5;
  i1=OOC_FALSE;
  goto l7;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8469));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8505));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8517))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 8524)), (OOC_INT32)0);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 8481))+16);
  i1 = i1>=(i2>>1);
  
l7:
  if (!i1) goto l11;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8569));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8569));
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8581)))), XML_InputBuffer__BufferDesc_NextBlock)),XML_InputBuffer__BufferDesc_NextBlock)((XML_InputBuffer__Buffer)i2);
  *(OOC_UINT8*)((_check_pointer(i0, 8547))+4) = (!i1);
  goto l11;
l10:
  return OOC_FALSE;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8623))+20);
  i1 = _check_pointer(i1, 8630);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 8633))+28);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_UINT16*)(i1+(_check_index(i2, i3, OOC_UINT32, 8630))*2);
  _assert((i1==(OOC_CHAR16)65534), 127, 8613);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8672))+32);
  i1 = i1>=4096;
  if (!i1) goto l17;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8768))+28);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 8786))+32);
  i1 = i1-i2;
  len = i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 8819))+32);
  i2 = i1<i2;
  if (!i2) goto l17;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9099))+20);
  i2 = _check_pointer(i2, 9106);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 9109))+32);
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9162))+20);
  _move_block((i2+(_check_index(i3, i4, OOC_UINT32, 9106))*2),(_check_pointer(i0, 9169)),((i1+1)*2));
  i0 = (OOC_INT32)in;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 9231))+24);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 9251))+32);
  *(OOC_INT32*)((_check_pointer(i0, 9231))+24) = (i1+i2);
  i1 = len;
  *(OOC_INT32*)((_check_pointer(i0, 9277))+28) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 9309))+32) = 0;
l17:
  i0 = (OOC_INT32)in;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9361))+20);
  i1 = _check_pointer(i1, 9368);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 9371))+28);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_UINT16*)(i1+(_check_index(i2, i3, OOC_UINT32, 9368))*2);
  _assert((i1==(OOC_CHAR16)65534), 127, 9351);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9448))+20);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 9411))+28);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9455)), (OOC_INT32)0);
  i1 = (i2+4096)>=i1;
  if (!i1) goto l25;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9577))+20);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9584)), (OOC_INT32)0);
  
l20_loop:
  i1 = i1+4096;
  len = i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 9648))+28);
  i2 = (i2+4096)<i1;
  if (!i2) goto l20_loop;
l24:
  i1 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], i1);
  nChars = (XML_UnicodeBuffer__CharArray)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9741))+20);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 9815))+28);
  _move_block((_check_pointer(i2, 9748)),(_check_pointer(i1, 9789)),((i0+1)*2));
  i0 = (OOC_INT32)in;
  i1 = (OOC_INT32)nChars;
  *(OOC_INT32*)((_check_pointer(i0, 9854))+20) = i1;
l25:
  i0 = (OOC_INT32)in;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9896));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9926));
  i2 = *(OOC_INT32*)((_check_pointer(i2, 9938))+12);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 9908))+16);
  i1 = i1!=i2;
  if (i1) goto l28;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10476))+20);
  i1 = _check_pointer(i1, 10483);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 10486))+28);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  *(OOC_UINT16*)(i1+(_check_index(i0, i2, OOC_UINT32, 10483))*2) = (OOC_CHAR16)65535;
  return OOC_FALSE;
  goto l29;
l28:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10060))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10079));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10091))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10079));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 10091))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10124));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10153));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10203))+20);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10203))+20);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10258))+20);
  i9 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10294));
  i8 = OOC_ARRAY_LENGTH((_check_pointer(i8, 10265)), (OOC_INT32)0);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10060))+12);
  i4 = *(OOC_INT32*)((_check_pointer(i4, 10136))+16);
  i5 = *(OOC_INT32*)((_check_pointer(i5, 10165))+12);
  i11 = *(OOC_INT32*)((_check_pointer(i0, 10236))+28);
  i7 = OOC_ARRAY_LENGTH((_check_pointer(i7, 10210)), (OOC_INT32)0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 10098)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10067)))), XML_UnicodeCodec__CodecDesc_Decode)),XML_UnicodeCodec__CodecDesc_Decode)((XML_UnicodeCodec__Codec)i10, (void*)(_check_pointer(i2, 10098)), i3, i4, i5, (void*)(_check_pointer(i6, 10210)), i7, i11, (i8-1), (void*)((_check_pointer(i9, 10306))+16), (void*)((_check_pointer(i0, 10323))+28));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10347))+20);
  i1 = _check_pointer(i1, 10354);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 10357))+28);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  *(OOC_UINT16*)(i1+(_check_index(i0, i2, OOC_UINT32, 10354))*2) = (OOC_CHAR16)65534;
  return OOC_TRUE;
l29:
  _failed_function(7690); return 0;
  ;
}

void XML_UnicodeBuffer__InputDesc_Close(XML_UnicodeBuffer__Input in) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)in;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10790));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10790));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10802)))), XML_InputBuffer__BufferDesc_Close)),XML_InputBuffer__BufferDesc_Close)((XML_InputBuffer__Buffer)i2);
  *(OOC_INT32*)(_check_pointer(i0, 10817)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 10844))+12) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 10866))+20) = (OOC_INT32)0;
  return;
  ;
}

void XML_UnicodeBuffer__InputDesc_SetCodec(XML_UnicodeBuffer__Input in, XML_UnicodeCodec__Factory cf, OOC_CHAR8 autoDetect) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_CHAR8 dummy;

  i0 = (OOC_INT32)in;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11060));
  i1 = *(OOC_INT32*)((_check_pointer(i1, 11072))+8);
  _assert((i1==0), 127, 11050);
  i1 = (OOC_INT32)cf;
  *(OOC_INT32*)((_check_pointer(i0, 11101))+8) = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11165));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11177))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11165));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11177))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11192));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11228));
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 11184)), (OOC_INT32)0);
  i4 = *(OOC_INT32*)((_check_pointer(i4, 11204))+12);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11142)))), XML_UnicodeCodec__FactoryDesc_NewCodecBOM)),XML_UnicodeCodec__FactoryDesc_NewCodecBOM)((XML_UnicodeCodec__Factory)i1, (void*)(_check_pointer(i2, 11184)), i3, 0, i4, (void*)((_check_pointer(i5, 11240))+16));
  *(OOC_INT32*)((_check_pointer(i0, 11129))+12) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11262))+20);
  i1 = _check_pointer(i1, 11269);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  *(OOC_UINT16*)(i1+(_check_index(0, i2, OOC_UINT8, 11269))*2) = (OOC_CHAR16)65534;
  *(OOC_INT32*)((_check_pointer(i0, 11293))+32) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 11319))+24) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 11348))+28) = 0;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11383)))), XML_UnicodeBuffer__InputDesc_NextBlock)),XML_UnicodeBuffer__InputDesc_NextBlock)((XML_UnicodeBuffer__Input)i0);
  dummy = i1;
  i1 = autoDetect;
  *(OOC_UINT8*)((_check_pointer(i0, 11404))+16) = i1;
  return;
  ;
}

void XML_UnicodeBuffer__InitInput(XML_UnicodeBuffer__Input input, OOC_CHAR8 _new, Channel__Reader reader, XML_UnicodeCodec__Factory codecFactory, Msg__MsgList errList) {
  register OOC_INT32 i0,i1,i2;
  OOC_CHAR8 autoDetect;
  OOC_INT32 skip;
  OOC_CHAR8 encoding[256];

  i0 = _new;
  i1 = (OOC_INT32)errList;
  i2 = (OOC_INT32)input;
  if (i0) goto l3;
  _assert(OOC_FALSE, 127, 11854);
  goto l4;
l3:
  i0 = (OOC_INT32)reader;
  i0 = (OOC_INT32)XML_InputBuffer__New((Channel__Reader)i0, (Msg__MsgList)i1);
  *(OOC_INT32*)(_check_pointer(i2, 11743)) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 11810))+20) = ((OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], 16352));
l4:
  *(OOC_UINT8*)((_check_pointer(i2, 11946))+4) = OOC_FALSE;
  *(OOC_INT32*)((_check_pointer(i2, 11981))+36) = i1;
  i0 = (OOC_INT32)codecFactory;
  i0 = i0==(OOC_INT32)0;
  autoDetect = OOC_FALSE;
  if (i0) goto l7;
  i0=OOC_FALSE;
  goto l8;
l7:
  i0 = XML_UnicodeBuffer__AutodetectEnc((XML_UnicodeBuffer__Input)i2, (void*)(OOC_INT32)encoding, 256);
  skip = i0;
  i0 = (OOC_INT32)XML_UnicodeCodec__GetFactory((void*)(OOC_INT32)encoding, 256);
  codecFactory = (XML_UnicodeCodec__Factory)i0;
  _assert((i0!=(OOC_INT32)0), 127, 12170);
  autoDetect = OOC_TRUE;
  i0=OOC_TRUE;
l8:
  i1 = (OOC_INT32)codecFactory;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12247)))), XML_UnicodeBuffer__InputDesc_SetCodec)),XML_UnicodeBuffer__InputDesc_SetCodec)((XML_UnicodeBuffer__Input)i2, (XML_UnicodeCodec__Factory)i1, i0);
  return;
  ;
}

XML_UnicodeBuffer__Input XML_UnicodeBuffer__NewInput(Channel__Reader reader, XML_UnicodeCodec__Factory codecFactory, Msg__MsgList errList) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__Input.baseTypes[0]);
  i1 = (OOC_INT32)reader;
  i2 = (OOC_INT32)codecFactory;
  i3 = (OOC_INT32)errList;
  XML_UnicodeBuffer__InitInput((XML_UnicodeBuffer__Input)i0, OOC_TRUE, (Channel__Reader)i1, (XML_UnicodeCodec__Factory)i2, (Msg__MsgList)i3);
  return (XML_UnicodeBuffer__Input)i0;
  ;
}

static void XML_UnicodeBuffer__FlushBytes(XML_UnicodeBuffer__Output out) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)out;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13623))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13648))+12);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 13669))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13623))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13631)))), Channel__WriterDesc_WriteBytes)),Channel__WriterDesc_WriteBytes)((Channel__Writer)i4, (void*)(_check_pointer(i2, 13660)), 8192, 0, i3);
  *(OOC_INT32*)((_check_pointer(i0, 13688))+20) = 0;
  return;
  ;
}

static void XML_UnicodeBuffer__Encode(XML_UnicodeBuffer__Output out, OOC_CHAR8 all) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_INT32 start;
  OOC_INT32 limit;
  OOC_INT32 len;
  OOC_INT32 i;

  start = 0;
  i0 = all;
  if (i0) goto l3;
  i1 = (OOC_INT32)out;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 13935))+28);
  i1 = i1-1024;
  limit = i1;
  
  goto l4;
l3:
  i1 = (OOC_INT32)out;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 13867))+28);
  i1 = i1-2;
  limit = i1;
  
l4:
  i2 = 0<=i1;
  if (!i2) goto l16;
  i2 = (OOC_INT32)out;
l7_loop:
  i3 = *(OOC_INT32*)((_check_pointer(i2, 14052))+20);
  i3 = (8192-i3)<6;
  if (!i3) goto l10;
  XML_UnicodeBuffer__FlushBytes((XML_UnicodeBuffer__Output)i2);
l10:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14143))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14163))+24);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14232))+12);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14143))+4);
  i7 = *(OOC_INT32*)((_check_pointer(i2, 14191))+28);
  i8 = *(OOC_INT32*)((_check_pointer(i2, 14250))+20);
  i9 = start;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14150)))), XML_UnicodeCodec__CodecDesc_Encode)),XML_UnicodeCodec__CodecDesc_Encode)((XML_UnicodeCodec__Codec)i6, (void*)(_check_pointer(i4, 14178)), 8192, i9, i7, (void*)(_check_pointer(i5, 14244)), 8192, i8, 8192, (void*)(OOC_INT32)&start, (void*)((_check_pointer(i2, 14319))+20));
  i3 = start;
  i3 = i3<=i1;
  if (i3) goto l7_loop;
l16:
  if (i0) goto l18;
  i0=OOC_FALSE;
  goto l20;
l18:
  i0 = (OOC_INT32)out;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 14369))+28);
  i1 = start;
  i0 = i1!=i0;
  
l20:
  if (i0) goto l30;
  i0 = (OOC_INT32)out;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 14767))+28);
  i2 = start;
  i1 = i1-i2;
  i3 = i1-1;
  len = i1;
  i4 = 0<=i3;
  i = 0;
  if (!i4) goto l29;
  i4=0;
l24_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14827))+24);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14852))+24);
  i6 = *(OOC_UINT16*)((_check_pointer(i6, 14867))+(_check_index((i2+i4), 8192, OOC_UINT32, 14867))*2);
  *(OOC_UINT16*)((_check_pointer(i5, 14842))+(_check_index(i4, 8192, OOC_UINT32, 14842))*2) = i6;
  i4 = i4+1;
  i5 = i4<=i3;
  i = i4;
  if (i5) goto l24_loop;
l29:
  *(OOC_INT32*)((_check_pointer(i0, 14897))+28) = i1;
  goto l34;
l30:
  i0 = (OOC_INT32)out;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 14424))+20);
  i1 = (8192-i1)<6;
  if (!i1) goto l33;
  XML_UnicodeBuffer__FlushBytes((XML_UnicodeBuffer__Output)i0);
l33:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14515))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14535))+24);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14604))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14515))+4);
  i5 = *(OOC_INT32*)((_check_pointer(i0, 14563))+28);
  i6 = *(OOC_INT32*)((_check_pointer(i0, 14622))+20);
  i7 = start;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14522)))), XML_UnicodeCodec__CodecDesc_Encode)),XML_UnicodeCodec__CodecDesc_Encode)((XML_UnicodeCodec__Codec)i4, (void*)(_check_pointer(i2, 14550)), 8192, i7, i5, (void*)(_check_pointer(i3, 14616)), 8192, i6, 8192, (void*)(OOC_INT32)&start, (void*)((_check_pointer(i0, 14691))+20));
  i0 = *(OOC_INT32*)((_check_pointer(i0, 14728))+28);
  i1 = start;
  _assert((i1==i0), 127, 14709);
l34:
  return;
  ;
}

void XML_UnicodeBuffer__OutputDesc_Write16I(XML_UnicodeBuffer__Output out, const OOC_CHAR16 str[], OOC_LEN str_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 len;

  i0 = end;
  i1 = start;
  i2 = i0-i1;
  i3 = i2!=0;
  len = i2;
  if (i3) goto l3;
  i3=OOC_FALSE;
  goto l4;
l3:
  i3 = (OOC_INT32)out;
  i3 = *(OOC_INT32*)((_check_pointer(i3, 15144))+28);
  i3 = (i3+i2)<=8192;
  
l4:
  if (i3) goto l22;
  i1 = i1!=i0;
  if (!i1) goto l23;
  i1 = (OOC_INT32)out;
l9_loop:
  i2 = *(OOC_INT32*)((_check_pointer(i1, 15432))+28);
  i2 = i2==8192;
  if (!i2) goto l12;
  XML_UnicodeBuffer__Encode((XML_UnicodeBuffer__Output)i1, OOC_FALSE);
l12:
  i2 = *(OOC_INT32*)((_check_pointer(i1, 15566))+28);
  i3 = start;
  i4 = i0-i3;
  i2 = 8192-i2;
  i5 = i2>i4;
  len = i2;
  if (!i5) goto l16;
  len = i4;
  i2=i4;
l16:
  i2 = i3+i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15665)))), XML_UnicodeBuffer__OutputDesc_Write16I)),XML_UnicodeBuffer__OutputDesc_Write16I)((XML_UnicodeBuffer__Output)i1, (void*)(OOC_INT32)str, str_0d, i3, i2);
  i3 = i2!=i0;
  start = i2;
  if (i3) goto l9_loop;
  goto l23;
l22:
  i0 = (OOC_INT32)out;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15274))+24);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 15293))+28);
  _move_block(((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 15230))*2),((_check_pointer(i3, 15289))+(_check_index(i0, 8192, OOC_UINT32, 15289))*2),(i2*2));
  i0 = (OOC_INT32)out;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 15360))+28);
  i2 = len;
  *(OOC_INT32*)((_check_pointer(i0, 15360))+28) = (i1+i2);
l23:
  return;
  ;
}

void XML_UnicodeBuffer__OutputDesc_Write8I(XML_UnicodeBuffer__Output out, const OOC_CHAR8 str[], OOC_LEN str_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 len;
  OOC_INT32 pos;

  i0 = end;
  i1 = start;
  i2 = i0-i1;
  i3 = i2!=0;
  len = i2;
  if (i3) goto l3;
  i3=OOC_FALSE;
  goto l4;
l3:
  i3 = (OOC_INT32)out;
  i3 = *(OOC_INT32*)((_check_pointer(i3, 15962))+28);
  i3 = (i3+i2)<=8192;
  
l4:
  if (i3) goto l22;
  i1 = i1!=i0;
  if (!i1) goto l31;
  i1 = (OOC_INT32)out;
l9_loop:
  i2 = *(OOC_INT32*)((_check_pointer(i1, 16249))+28);
  i2 = i2==8192;
  if (!i2) goto l12;
  XML_UnicodeBuffer__Encode((XML_UnicodeBuffer__Output)i1, OOC_FALSE);
l12:
  i2 = *(OOC_INT32*)((_check_pointer(i1, 16383))+28);
  i3 = start;
  i4 = i0-i3;
  i2 = 8192-i2;
  i5 = i2>i4;
  len = i2;
  if (!i5) goto l16;
  len = i4;
  i2=i4;
l16:
  i2 = i3+i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16482)))), XML_UnicodeBuffer__OutputDesc_Write8I)),XML_UnicodeBuffer__OutputDesc_Write8I)((XML_UnicodeBuffer__Output)i1, (void*)(OOC_INT32)str, str_0d, i3, i2);
  i3 = i2!=i0;
  start = i2;
  if (i3) goto l9_loop;
  goto l31;
l22:
  i3 = (OOC_INT32)out;
  i4 = *(OOC_INT32*)((_check_pointer(i3, 16030))+28);
  i4 = i4-i1;
  i1 = i1!=i0;
  pos = i4;
  if (!i1) goto l30;
l25_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16090))+24);
  i5 = start;
  i6 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i5, str_0d, OOC_UINT32, 16123)));
  *(OOC_UINT16*)((_check_pointer(i1, 16105))+(_check_index((i4+i5), 8192, OOC_UINT32, 16105))*2) = i6;
  i1 = i5+1;
  i5 = i1!=i0;
  start = i1;
  if (i5) goto l25_loop;
l30:
  i0 = *(OOC_INT32*)((_check_pointer(i3, 16177))+28);
  *(OOC_INT32*)((_check_pointer(i3, 16177))+28) = (i0+i2);
l31:
  return;
  ;
}

void XML_UnicodeBuffer__OutputDesc_Write16(XML_UnicodeBuffer__Output out, const OOC_CHAR16 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)out;
  i1 = LongStrings__Length((void*)(OOC_INT32)str, str_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16655)))), XML_UnicodeBuffer__OutputDesc_Write16I)),XML_UnicodeBuffer__OutputDesc_Write16I)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)str, str_0d, 0, i1);
  return;
  ;
}

void XML_UnicodeBuffer__OutputDesc_Write8(XML_UnicodeBuffer__Output out, const OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)out;
  i1 = Strings__Length((void*)(OOC_INT32)str, str_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16795)))), XML_UnicodeBuffer__OutputDesc_Write8I)),XML_UnicodeBuffer__OutputDesc_Write8I)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)str, str_0d, 0, i1);
  return;
  ;
}

void XML_UnicodeBuffer__OutputDesc_Flush(XML_UnicodeBuffer__Output out) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)out;
  XML_UnicodeBuffer__Encode((XML_UnicodeBuffer__Output)i0, OOC_TRUE);
  XML_UnicodeBuffer__FlushBytes((XML_UnicodeBuffer__Output)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17058))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 17066));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17058))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17066));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17072)))), Channel__ChannelDesc_Flush)),Channel__ChannelDesc_Flush)((Channel__Channel)i0);
  return;
  ;
}

void XML_UnicodeBuffer__InitOutput(XML_UnicodeBuffer__Output out, OOC_CHAR8 _new, Channel__Writer writer, XML_UnicodeCodec__Factory codecFactory, OOC_CHAR8 createBOM) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = _new;
  i1 = (OOC_INT32)out;
  if (!i0) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 17302))+12) = ((OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__3617.baseTypes[0]));
  *(OOC_INT32*)((_check_pointer(i1, 17331))+24) = ((OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__3716.baseTypes[0]));
l3:
  i0 = (OOC_INT32)codecFactory;
  *(OOC_INT32*)(_check_pointer(i1, 17370)) = i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17432)))), XML_UnicodeCodec__FactoryDesc_NewCodec)),XML_UnicodeCodec__FactoryDesc_NewCodec)((XML_UnicodeCodec__Factory)i0);
  *(OOC_INT32*)((_check_pointer(i1, 17409))+4) = i0;
  i0 = (OOC_INT32)writer;
  *(OOC_INT32*)((_check_pointer(i1, 17453))+8) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 17480))+16) = 0;
  *(OOC_INT32*)((_check_pointer(i1, 17501))+20) = 0;
  *(OOC_INT32*)((_check_pointer(i1, 17524))+28) = 0;
  i0 = createBOM;
  if (!i0) goto l6;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17579))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17602))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17579))+4);
  i4 = *(OOC_INT32*)((_check_pointer(i1, 17620))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17586)))), XML_UnicodeCodec__CodecDesc_EncodeBOM)),XML_UnicodeCodec__CodecDesc_EncodeBOM)((XML_UnicodeCodec__Codec)i3, (void*)(_check_pointer(i2, 17614)), 8192, i4, 8192, (void*)((_check_pointer(i1, 17687))+20));
l6:
  return;
  ;
}

XML_UnicodeBuffer__Output XML_UnicodeBuffer__NewOutput(Channel__Writer writer, XML_UnicodeCodec__Factory codecFactory, OOC_CHAR8 createBOM) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__Output.baseTypes[0]);
  i1 = (OOC_INT32)writer;
  i2 = (OOC_INT32)codecFactory;
  i3 = createBOM;
  XML_UnicodeBuffer__InitOutput((XML_UnicodeBuffer__Output)i0, OOC_TRUE, (Channel__Writer)i1, (XML_UnicodeCodec__Factory)i2, i3);
  return (XML_UnicodeBuffer__Output)i0;
  ;
}

void OOC_XML_UnicodeBuffer_init(void) {

  _assert(OOC_TRUE, 127, 18797);
  return;
  ;
}

/* --- */
