/*************************************************
** 功能 : 常成员函数和常对象的调用
** 作者 : Hui Yu
** 版本 : 2018-11-18 / 22:25
/**************************************************/
#pragma warning(disable:4996)
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <cstring>
using namespace std;

/*----------------------------------*
         Class Defination
*-----------------------------------*/

class Person
{
//成员变量
private:
	int age;
	char *name;

//成员函数
public:

	Person(int n = 1, char *na = "Zhuli");
	~Person();
	void Print(); //重载函数，用于输出普通成员函数
	void Print() const; //重载函数，用于输出常成员函数
	void Modifyage(); //用于修改年龄的普通成员函数
};

/*----------------------------------*
          Main Function
*-----------------------------------*/
Person::Person(int n, char *na)
{
	age = n;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
}
Person::~Person()
{
	delete[]name;
}
void Person::Print()
{
	cout << "age: " << age << ", name: " << name << endl;
	cout << "This is general Print()." << endl;

}
void Person::Print() const
{
	cout << "age: " << age << ", name: " << name << endl;
	cout << "This is const Print()." << endl;
}
void Person::Modifyage()
{
	age++;
}
int main()
{
	const Person p1(17, "wu");//定义常对象必须初始化
	cout << "Output const object p1" << endl;
	p1.Print();     //常对象调用常成员函数
	Person p2(18, "wang");    //定义普通的对象
	cout << "Output general object p2" << endl;
	p2.Modifyage(); //可以修改数据成员
	p2.Print();     //普通对象调用普通的成员函数

	system("pause");

	return 0;
}
