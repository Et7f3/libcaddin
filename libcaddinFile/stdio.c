#include "./_libcaddin.h"
int printf(const char * format, ...)
{
    return _lca_print_o((unsigned char*)format,0);
}

static int tailleBuffer=0, char * _lca_pointer=NULL, char currChar=0;

static inline _lca_format_inline(bool a){
  if(a){
    a++;
  }else{
    *_lca_pointer=currChar;
_lcal_pointer++;
  }
}