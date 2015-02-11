#pragma once


#include "stdafx.h"
#define DLL_API __declspec(dllexport)  

#pragma data_seg ("shareddata")
#pragma comment(linker,"/SECTION:shareddata,RWS")
float danmuX = NULL;
float danmuY = NULL;
float zijiX = NULL;
float zijiY = NULL;
float R = NULL;
BOOL GXC = NULL;
BYTE ci = NULL;
#pragma data_seg()


DLL_API void setdanmuX(float par);

DLL_API void setdanmuY(float par);
DLL_API void setzijiX(float par);

DLL_API void setzijiY(float par);

DLL_API void setcontinue(BOOL par);


DLL_API float getdanmuX();
DLL_API float getdanmuY();
DLL_API float getzijiX();

DLL_API float getzijiY();

DLL_API BOOL getcontinue();
DLL_API BYTE getci();
DLL_API void addCount();

DLL_API float getR();
DLL_API float setR();