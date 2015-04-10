#include "OS/Path.d"
#include "__oo2c.h"

void OS_Path__dirname(const OOC_CHAR8 path__ref[], OOC_LEN path_0d, OOC_CHAR8 dirname[], OOC_LEN dirname_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(path,OOC_CHAR8 ,path_0d)

  OOC_INITIALIZE_VPAR(path__ref,path,OOC_CHAR8 ,path_0d)
  i0 = Strings__Length((void*)(OOC_INT32)path, path_0d);
  i1 = i0>0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index((i0-1), path_0d, OOC_UINT16, 1401)));
  i1 = i1!=(OOC_CHAR8)'/';
  
l5:
  if (!i1) goto l17;
l8_loop:
  i0 = i0-1;
  i1 = i0>0;
  if (i1) goto l11;
  i1=OOC_FALSE;
  goto l13;
l11:
  i1 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index((i0-1), path_0d, OOC_UINT16, 1401)));
  i1 = i1!=(OOC_CHAR8)'/';
  
l13:
  if (i1) goto l8_loop;
l17:
  i1 = i0-1;
  i2 = 0<=i1;
  if (!i2) goto l28;
  i2=0;
l20_loop:
  i3 = i2<dirname_0d;
  if (!i3) goto l23;
  i3 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index(i2, path_0d, OOC_UINT16, 1515)));
  *(OOC_UINT8*)((OOC_INT32)dirname+(_check_index(i2, dirname_0d, OOC_UINT16, 1504))) = i3;
l23:
  i2 = i2+1;
  i3 = i2<=i1;
  if (i3) goto l20_loop;
l28:
  i1 = i0>=dirname_0d;
  if (!i1) goto l32;
  i0 = dirname_0d-1;
  
l32:
  *(OOC_UINT8*)((OOC_INT32)dirname+(_check_index(i0, dirname_0d, OOC_UINT16, 1606))) = (OOC_CHAR8)'\000';
  i0 = *(OOC_UINT8*)((OOC_INT32)dirname+(_check_index(0, dirname_0d, OOC_UINT16, 1768)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l35;
  i0=-1;
  goto l45;
l35:
  i0=0;i1=-1;
l36_loop:
  i2 = *(OOC_UINT8*)((OOC_INT32)dirname+(_check_index(i0, dirname_0d, OOC_UINT16, 1798)));
  i2 = i2!=(OOC_CHAR8)'/';
  if (!i2) goto l40;
  i1=i0;
l40:
  i0 = i0+1;
  i2 = *(OOC_UINT8*)((OOC_INT32)dirname+(_check_index(i0, dirname_0d, OOC_UINT16, 1768)));
  i2 = i2!=(OOC_CHAR8)'\000';
  if (i2) goto l36_loop;
l44:
  i0=i1;
l45:
  i1 = i0>=0;
  if (!i1) goto l48;
  *(OOC_UINT8*)((OOC_INT32)dirname+(_check_index((i0+1), dirname_0d, OOC_UINT16, 1897))) = (OOC_CHAR8)'\000';
l48:
  return;
  ;
}

void OS_Path__basename(const OOC_CHAR8 path__ref[], OOC_LEN path_0d, OOC_CHAR8 basename[], OOC_LEN basename_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(path,OOC_CHAR8 ,path_0d)

  OOC_INITIALIZE_VPAR(path__ref,path,OOC_CHAR8 ,path_0d)
  i0 = Strings__Length((void*)(OOC_INT32)path, path_0d);
  i1 = i0>0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index((i0-1), path_0d, OOC_UINT16, 2514)));
  i1 = i1!=(OOC_CHAR8)'/';
  
l5:
  if (!i1) goto l17;
l8_loop:
  i0 = i0-1;
  i1 = i0>0;
  if (i1) goto l11;
  i1=OOC_FALSE;
  goto l13;
l11:
  i1 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index((i0-1), path_0d, OOC_UINT16, 2514)));
  i1 = i1!=(OOC_CHAR8)'/';
  
l13:
  if (i1) goto l8_loop;
l17:
  Strings__Extract((void*)(OOC_INT32)path, path_0d, i0, 32767, (void*)(OOC_INT32)basename, basename_0d);
  return;
  ;
}

void OS_Path__splitext(const OOC_CHAR8 path__ref[], OOC_LEN path_0d, OOC_CHAR8 root[], OOC_LEN root_0d, OOC_CHAR8 ext[], OOC_LEN ext_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(path,OOC_CHAR8 ,path_0d)

  OOC_INITIALIZE_VPAR(path__ref,path,OOC_CHAR8 ,path_0d)
  i0 = Strings__Length((void*)(OOC_INT32)path, path_0d);
  i1 = i0>0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index((i0-1), path_0d, OOC_UINT16, 3108)));
  i1 = i1!=(OOC_CHAR8)'/';
  
l5:
  if (i1) goto l7;
  i1=OOC_FALSE;
  goto l9;
l7:
  i1 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index(i0, path_0d, OOC_UINT16, 3128)));
  i1 = i1!=(OOC_CHAR8)'.';
  
l9:
  if (!i1) goto l25;
l12_loop:
  i0 = i0-1;
  i1 = i0>0;
  if (i1) goto l15;
  i1=OOC_FALSE;
  goto l17;
l15:
  i1 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index((i0-1), path_0d, OOC_UINT16, 3108)));
  i1 = i1!=(OOC_CHAR8)'/';
  
l17:
  if (i1) goto l19;
  i1=OOC_FALSE;
  goto l21;
l19:
  i1 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index(i0, path_0d, OOC_UINT16, 3128)));
  i1 = i1!=(OOC_CHAR8)'.';
  
l21:
  if (i1) goto l12_loop;
l25:
  i1 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index(i0, path_0d, OOC_UINT16, 3177)));
  i1 = i1==(OOC_CHAR8)'.';
  if (i1) goto l28;
  _copy_8((OOC_INT32)path,(OOC_INT32)root,root_0d);
  _copy_8("",(OOC_INT32)ext,ext_0d);
  goto l29;
l28:
  Strings__Extract((void*)(OOC_INT32)path, path_0d, 0, i0, (void*)(OOC_INT32)root, root_0d);
  Strings__Extract((void*)(OOC_INT32)path, path_0d, i0, 32767, (void*)(OOC_INT32)ext, ext_0d);
l29:
  return;
  ;
}

void OOC_OS_Path_init(void) {

  return;
  ;
}

/* --- */
