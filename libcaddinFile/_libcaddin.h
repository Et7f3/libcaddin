#ifndef __LIB_C_ADDIN_
#define __LIB_C_ADDIN_

/*****************************************************************/
/*                                                               */
/*   CASIO fx-9860G SDK Library                                  */
/*                                                               */
/*   File name : [ProjectName].c                                 */
/*                                                               */
/*   Copyright (c) 2006 CASIO COMPUTER CO., LTD.                 */
/*                                                               */
/*****************************************************************/
#include "fxlib.h"


//****************************************************************************
//  AddIn_main (Sample program main function)
//
//  param   :   isAppli   : 1 = This application is launched by MAIN MENU.
//                        : 0 = This application is launched by a strip in eACT application.
//
//              OptionNum : Strip number (0~3)
//                         (This parameter is only used when isAppli parameter is 0.)
//
//  retval  :   1 = No error / 0 = Error
//
//****************************************************************************

typedef struct _lca_screenStruct {
unsigned char buff[147];
int x,y;
} _lca_screenStruct;

extern _lca_screenStruct _lca_screen;


/*Helper command section begin*/
/*don't use them in your code use real function of libc*/
/*prefix=_lca_*/
/*because of LibCAddin*/

//unsigned int* _lca_GetKeyChar(unsigned char * keyChar);

/*Helper command section end*/



//****************************************************************************
//**************                                              ****************
//**************                 Notice!                      ****************
//**************                                              ****************
//**************  Please do not change the following source.  ****************
//**************                                              ****************
//****************************************************************************
int AddIn_main(int isAppli, unsigned short OptionNum);

#pragma section _BR_Size
extern unsigned long BR_Size;
#pragma section

#pragma section _TOP

//****************************************************************************
//  InitializeSystem
//
//  param   :   isAppli   : 1 = Application / 0 = eActivity
//              OptionNum : Option Number (only eActivity)
//
//  retval  :   1 = No error / 0 = Error
//
//****************************************************************************
int InitializeSystem(int isAppli, unsigned short OptionNum);

#pragma section

#endif //__LIB_C_ADDIN_
