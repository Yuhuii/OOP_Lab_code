/*************************************************
** ���� : ��̬���ݳ�Աʹ��ʾ��  
** ���� : Hui Yu
** �汾 : 2018-11-16 / 22:49
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
//��Ա����
private:
	int num;
	char name[20];

//��Ա����
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
	                              //�޶���ʱ��������::��̬��Ա����ʽ����
	Student *p = new Student(13); //��ָ�����붯̬�ռ䲢�õ�����*p
	cout << "The number of all students: " << Student::total << endl;
	                              //������::��̬��Ա����ʽ����
	cout << "The number of all students: " << p->total << endl;
	                              //��ָ����ָ��Ķ���ȥ����
	delete p;                     //ͨ��ָ��ɾ����̬��������һ��

	cout << "The number of all students : " << Student::total << endl;
	                              //������::��̬��Ա����ʽ����
	Student s[2];                 //�����������󣬹��캯��ʹ������
	cout << "The number of all students : " << s[0].total << endl;
	cout << "The number of all students : " << s[1].total << endl;
	                              //������������һ����ͬ

	system("pause");
	
	return 0;
}