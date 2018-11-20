/*************************************************
** 功能 : 静态数据成员使用示例  
** 作者 : Hui Yu
** 版本 : 2018-11-16 / 22:49
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
char a[20] = "wang";
class Student
{
//成员变量
private:
	int num;
	char name[20];

//成员函数
public:
	static int total;
	Student() { total++; }
	~Student() { total--; }
	Student(int n, char *p = a);
	void Getname();
	int Getnum();

};

int Student::total = 0;   //int Student::total;

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

int main()
{
	cout << "The number of all students: " << Student::total << endl;
	                              //无对象时可用类名::静态成员名形式访问
	Student *p = new Student(13); //用指针申请动态空间并得到对象*p
	cout << "The number of all students: " << Student::total << endl;
	                              //用类名::静态成员名形式访问
	cout << "The number of all students: " << p->total << endl;
	                              //用指针所指向的对象去访问
	delete p;                     //通过指针删除动态对象，析构一次

	cout << "The number of all students : " << Student::total << endl;
	                              //用类名::静态成员名形式访问
	Student s[2];                 //定义两个对象，构造函数使用两次
	cout << "The number of all students : " << s[0].total << endl;
	cout << "The number of all students : " << s[1].total << endl;
	                              //这两行输出结果一定相同

	system("pause");
	
	return 0;
}