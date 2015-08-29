/* 	$Id: ProcessManagement.c,v 1.3 2002/12/28 13:21:27 mva Exp $	 */
#include <stdlib.h>

#include <__oo2c.h>
#include <OS/ProcessManagement.d>


int OS_ProcessManagement__system(const OOC_CHAR8* command, OOC_LEN command_0d) {
  return system((const char*)command);
}

void OOC_OS_ProcessManagement_init(void) {
}
