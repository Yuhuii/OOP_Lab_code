/*************************************************
** ���� : ��̬��Ա����  
** ���� : Hui Yu
** �汾 : 2018-11-17 / 22:39
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
//��Ա����
private:
	static int total;
	int num;
	char name[20];

//��Ա����
public:
	
	Student() { total++; }   //ÿ����һ���¶���total+1��
	~Student() { total--; }  //ÿһ�����������ڽ�������total-1��
	Student(int n, char *p = a);
	void Getname();
	int  Getnum();
	static void Print();     //��̬��Ա����

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