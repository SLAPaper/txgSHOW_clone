// ReadMemory.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "readm.h"





DLL_API void setdanmuX(float par)
{

	danmuX = par;
}

DLL_API void setdanmuY(float par)
{

	danmuY = par;
}

DLL_API void setzijiX(float par)
{

	zijiX = par;
}

DLL_API void setzijiY(float par)
{

	zijiY = par;
}

DLL_API void setcontinue(BOOL par)
{

	GXC = par;
}


DLL_API float getdanmuX()
{

	return danmuX;
}

DLL_API float getdanmuY()
{

	return danmuY;
}

DLL_API float getzijiX()
{

	return zijiX;
}

DLL_API float getzijiY()
{

	return zijiY;
}

DLL_API BOOL getcontinue()
{

	return GXC;
}

DLL_API void addCount()
{
	if (ci == 3) ci = 0;
	ci++;
}

DLL_API BYTE getci()
{

	return ci;
}

DLL_API float getR()
{
	return R;
}
DLL_API void setR(float par)
{
	R = par;
}