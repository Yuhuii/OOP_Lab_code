/*************************************************
** 功能 : 静态成员函数  
** 作者 : Hui Yu
** 版本 : 2018-11-17 / 22:39
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
char a[10] = "wang";
class Student
{
//成员变量
private:
	static int total;
	int num;
	char name[20];

//成员函数
public:
	
	Student() { total++; }   //每定义一个新对象，total+1；
	~Student() { total--; }  //每一个对象生命期结束，则total-1；
	Student(int n, char *p = a);
	void Getname();
	int  Getnum();
	static void Print();     //静态成员函数

};

int Student::total = 0;

/*----------------------------------*
          Main Function
*-----------------------------------*/
Student::Student(int n, char *p)
{
	num = n;
	strcpy(name, p);
	total++;
}
void Student::Getname()
{
	cout << name << endl;
}
int Student::Getnum()
{
	return num;
}
void Student::Print()
{
	cout << "The number of all students: " << total << endl;
}

int main()
{
	Student::Print();
	Student *p = new Student(13);
	Student::Print();
	p->Print();
	delete p;
	Student::Print(); //p->Print();
	Student s[2];
	s[0].Print();//Student::Print();
	s[1].Print();//Student::Print();

	system("pause");
	
	return 0;
}