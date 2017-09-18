#ifndef __LIB_C_ADDIN_
#define __LIB_C_ADDIN_

#include "fxlib.h"

typedef struct _lca_screenStruct {
unsigned char buff[147];
int x,y;
} _lca_screenStruct;

extern _lca_screenStruct _lca_screen;

#endif //__LIB_C_ADDIN_
