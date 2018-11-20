/*************************************************
** ���� : ����Ա�����ͳ�����ĵ���
** ���� : Hui Yu
** �汾 : 2018-11-18 / 22:25
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
//��Ա����
private:
	int age;
	char *name;

//��Ա����
public:

	Person(int n = 1, char *na = "Zhuli");
	~Person();
	void Print(); //���غ��������������ͨ��Ա����
	void Print() const; //���غ����������������Ա����
	void Modifyage(); //�����޸��������ͨ��Ա����
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
	const Person p1(17, "wu");//���峣��������ʼ��
	cout << "Output const object p1" << endl;
	p1.Print();     //��������ó���Ա����
	Person p2(18, "wang");    //������ͨ�Ķ���
	cout << "Output general object p2" << endl;
	p2.Modifyage(); //�����޸����ݳ�Ա
	p2.Print();     //��ͨ���������ͨ�ĳ�Ա����

	system("pause");

	return 0;
}
