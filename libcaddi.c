#include "./libcaddinFile/_libcaddin.h"

int main(void)
{
    unsigned int key;

    Bdisp_AllClr_DDVRAM();

    //locate(1,3);
    Print((unsigned char*)"This application is");
    locate(1,5);
    Print((unsigned char*)" sample Addp-In.");

    while(1){
        GetKey(&key);
    }

    return 0;
}
