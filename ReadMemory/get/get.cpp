// get.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "windows.h"
#include "readm.h"
#include "iostream"
using namespace std;
#pragma comment(lib,"ReadMemory.lib") 

int _tmain(int argc, _TCHAR* argv[])
{
	while (true)
	{
		if (getci() == 3)
		{
			//system("cls");
			addCount();
		}
		else
		{
			if (getcontinue() == 1)
			{
				float R = getR();
				cout << "X:" << getdanmuX() << "\tY:" << getdanmuY() << "\tR:" <<R << endl;
				setcontinue(0);
			}
		}
	
	}

	system("pause");
}
