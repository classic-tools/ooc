#include <OS/Path.d>
#include <__oo2c.h>
#include <setjmp.h>

void OS_Path__dirname(const OOC_CHAR8 path__ref[], OOC_LEN path_0d, OOC_CHAR8 dirname[], OOC_LEN dirname_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(path,OOC_CHAR8 ,path_0d)

  OOC_INITIALIZE_VPAR(path__ref,path,OOC_CHAR8 ,path_0d)
  i0 = Strings__Length((void*)(OOC_INT32)path, path_0d);
  i1 = i0>0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index((i0-1), path_0d, OOC_UINT16, 1401)));
  i1 = i1!=47u;
  
l5:
  if (!i1) goto l17;
l8_loop:
  i0 = i0-1;
  i1 = i0>0;
  if (i1) goto l11;
  i1=0u;
  goto l13;
l11:
  i1 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index((i0-1), path_0d, OOC_UINT16, 1401)));
  i1 = i1!=47u;
  
l13:
  if (i1) goto l8_loop;
l17:
  i1 = 0<i0;
  if (!i1) goto l28;
  i1=0;
l20_loop:
  i2 = i1<dirname_0d;
  if (!i2) goto l23;
  i2 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index(i1, path_0d, OOC_UINT16, 1515)));
  *(OOC_UINT8*)((OOC_INT32)dirname+(_check_index(i1, dirname_0d, OOC_UINT16, 1504))) = i2;
l23:
  i1 = i1+1;
  i2 = i1<i0;
  if (i2) goto l20_loop;
l28:
  i1 = i0>=dirname_0d;
  if (!i1) goto l32;
  i0 = dirname_0d-1;
  
l32:
  *(OOC_UINT8*)((OOC_INT32)dirname+(_check_index(i0, dirname_0d, OOC_UINT16, 1606))) = 0u;
  i0 = *(OOC_UINT8*)((OOC_INT32)dirname+(_check_index(0, dirname_0d, OOC_UINT16, 1768)));
  i0 = i0!=0u;
  if (i0) goto l35;
  i0=(-1);
  goto l45;
l35:
  i0=0;i1=(-1);
l36_loop:
  i2 = *(OOC_UINT8*)((OOC_INT32)dirname+(_check_index(i0, dirname_0d, OOC_UINT16, 1798)));
  i2 = i2!=47u;
  i3 = i0+1;
  if (i2) goto l40;
  i0=i1;
l40:
  i1 = *(OOC_UINT8*)((OOC_INT32)dirname+(_check_index(i3, dirname_0d, OOC_UINT16, 1768)));
  i1 = i1!=0u;
  if (!i1) goto l45;
  i1=i0;i0=i3;
  goto l36_loop;
l45:
  i1 = i0>=0;
  if (!i1) goto l48;
  *(OOC_UINT8*)((OOC_INT32)dirname+(_check_index((i0+1), dirname_0d, OOC_UINT16, 1897))) = 0u;
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
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index((i0-1), path_0d, OOC_UINT16, 2514)));
  i1 = i1!=47u;
  
l5:
  if (!i1) goto l17;
l8_loop:
  i0 = i0-1;
  i1 = i0>0;
  if (i1) goto l11;
  i1=0u;
  goto l13;
l11:
  i1 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index((i0-1), path_0d, OOC_UINT16, 2514)));
  i1 = i1!=47u;
  
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
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index((i0-1), path_0d, OOC_UINT16, 3108)));
  i1 = i1!=47u;
  
l5:
  if (i1) goto l7;
  i1=0u;
  goto l9;
l7:
  i1 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index(i0, path_0d, OOC_UINT16, 3128)));
  i1 = i1!=46u;
  
l9:
  if (!i1) goto l25;
l12_loop:
  i0 = i0-1;
  i1 = i0>0;
  if (i1) goto l15;
  i1=0u;
  goto l17;
l15:
  i1 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index((i0-1), path_0d, OOC_UINT16, 3108)));
  i1 = i1!=47u;
  
l17:
  if (i1) goto l19;
  i1=0u;
  goto l21;
l19:
  i1 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index(i0, path_0d, OOC_UINT16, 3128)));
  i1 = i1!=46u;
  
l21:
  if (i1) goto l12_loop;
l25:
  i1 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index(i0, path_0d, OOC_UINT16, 3177)));
  i1 = i1==46u;
  if (i1) goto l28;
  _copy_8((const void*)(OOC_INT32)path,(void*)(OOC_INT32)root,root_0d);
  _copy_8((const void*)"",(void*)(OOC_INT32)ext,ext_0d);
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
