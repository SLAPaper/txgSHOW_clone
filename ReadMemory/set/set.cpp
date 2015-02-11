// set.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "windows.h"
#include "readm.h"
#pragma comment(lib,"ReadMemory.lib") 
int _tmain(int argc, _TCHAR* argv[])
{
	while (1)
	{
		addCount();
		m:
		if (getci() == 3)
			goto m;
		setdanmuX(1.3333);
	}
	system("pause");
	return 0;
}

