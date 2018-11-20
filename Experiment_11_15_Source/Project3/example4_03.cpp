/*************************************************
** 功能 : 常数据成员 
** 作者 : Hui Yu
** 版本 : 2018-11-17 / 12:58
/**************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "example4_03.h"

using namespace std;

int main()
{
	Circle c1(3.5), c2;
	cout << "area of c1= " << c1.Area() << ", circumference of c1= " << c1.Circumference() << endl;
	
	cout << "area of c2= " << c2.Area() << ", circumference of c2= " << c2.Circumference() << endl;

	system("pause");
	
	return 0;
}