/*************************************************
** ���� : ����Ա����  
** ���� : Hui Yu
** �汾 : 2018-11-18 / 01:17
/**************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "example4_04_Circle.h"

using namespace std;

int main()
{

	Circle c1(3.5), c2;
	cout << "radius of c1= " << c1.Getradius(); //���ó���Ա������
	cout << ", area of c1 = " << c1.Area() << ", circumference of c1 = " << c1.Circumference() << endl;
	cout << "radius of c2= " << c2.Getradius(); //���ó���Ա������
	cout << ", area of c2 = " << c2.Area() << ", circumference of c2 = " << c2.Circumference() << endl;

	system("pause");
	
	return 0;
}