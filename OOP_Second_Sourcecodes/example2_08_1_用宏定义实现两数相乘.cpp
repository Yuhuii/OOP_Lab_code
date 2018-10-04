#include<iostream>
using namespace std;

#define Multiply1(x, y)  x*y
#define Multiply2(x, y)  (x)*(y)
int  main()
{
	int a1 = Multiply1(3 + 4, 2 + 3);  //展开后为:int a1=3+4*2+3

	cout << "a1=" << a1 << endl;

	int a2 = Multiply2(3 + 4, 2 + 3);  //展开后为:int a2=(3+4)*(2+3)

	cout << "a2=" << a2 << endl;

	return 0;
}
