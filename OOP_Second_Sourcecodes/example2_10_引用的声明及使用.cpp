#include<iostream>
using namespace std;

int x = 5, y = 10;
int &r = x;              //����һ������r��Ϊ����x�ı���

void print()             //����һ��ר����������ĺ���
{
    cout << "x=" << x << " y=" << y << " r=" << r << endl;  	//���x��y��r��ֵ
	cout << "Address of x " << &x << endl;        	          //�������x���ڴ��ַ
	cout << "Address of y " << &y << endl;          	      //�������y���ڴ��ַ
	cout << "Address of r " << &r << endl;       		      //�������r���ڴ��ַ
}

int main()
{
    print();

    r = y;       //�൱��x=y, ��y��ֵ����x, ������r�ı�Ϊ����y�ı���
    y = 100;
    print();

    x = 200;
    print();

    return 0;
}
