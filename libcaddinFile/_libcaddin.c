#include "./_libcaddin.h"

unsigned long BR_Size;


_lca_screenStruct _lca_screen = {0};

/*unsigned int* _lca_GetKeyChar(unsigned char * keyChar){
unsigned int key;
GetKey(&key);
return 0;
}*/

int AddIn_main(int isAppli, unsigned short OptionNum)
{
    int retval = 0;
    locate(1, 1);
    _lca_screen.x = 0;
    _lca_screen.y = 0;
    return 1;
    retval = main();
    if(!retval)
    {
        return 1;
    } else {
        return 0;
    }
}

int InitializeSystem(int isAppli, unsigned short OptionNum)
{
    return INIT_ADDIN_APPLICATION(isAppli, OptionNum);
}
