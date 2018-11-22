#include <iostream>
using namespace std;

class A
{
public:
	A(int a)
	{
		x = a;
		cout << "A: x = " << a << endl;
	}

private:
	int x;
};

class B
{
public:
	B(int a, int b, int c) :a2(b), a1(a)
		//注意：初始化列表中是成员对象名a1、a2，而不是类名A
	{
		y = c;
		cout << "B: y = " << c << endl;
	}
private:
	A a1, a2;  //有两个对象成员，B类包含了A类
	int y;
};

int main()
{
	B obj(10, 20, 30);

	system("PAUSE");

	return 0;
}
/*根据结果可以看出，对象成员构造函数的调用次序与初始化列表中出现的次序无关，
始终与对象成员在类中定义的次序一致*/