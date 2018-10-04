#include<iostream>
using namespace std;

int x = 5, y = 10;
int &r = x;              //定义一个引用r作为变量x的别名

void print()             //定义一个专门用于输出的函数
{
    cout << "x=" << x << " y=" << y << " r=" << r << endl;  	//输出x、y、r的值
	cout << "Address of x " << &x << endl;        	          //输出变量x的内存地址
	cout << "Address of y " << &y << endl;          	      //输出变量y的内存地址
	cout << "Address of r " << &r << endl;       		      //输出引用r的内存地址
}

int main()
{
    print();

    r = y;       //相当于x=y, 将y的值赋给x, 而不是r改变为变量y的别名
    y = 100;
    print();

    x = 200;
    print();

    return 0;
}
