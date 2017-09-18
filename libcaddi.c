#include "./libcaddinFile/_libcaddin.h"

int main(void)
{
    unsigned int key;

    Bdisp_AllClr_DDVRAM();

    Print((unsigned char*)"This application is");
    locate(1,3);
    _lca_print_o((unsigned char*)"coucou je suis un tres long texte",1);
    locate(1,2);
    Print((unsigned char*)" sample Add-In.");

    while(1){
        GetKey(&key);
    }

    return 0;
}
