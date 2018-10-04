#include<iostream>
using namespace std;

void fun(int i, int j = 5, int k = 10);

int main()
{
    fun(20);               //实际参数个数少于形式参数，20与i对应,至少有一个实参,形式参数j和k分别使用默认参数值5和10
    fun(20, 30);           //形式参数k使用默认参数值10
    fun(20, 30, 40);       //实际参数个数等于形参个数，都不使用默认参数值

    return 0;
}

void fun(int i, int j, int k)
{
    cout<< i << " " << j <<" " << k << endl;
}

/*
等价于

#include<iostream>
using namespace std;

void fun(int i, int j = 10, int k = 10)
{
    cout<< i << " " << j <<" " << k << endl;
}

int main()
{
    fun(20);               //实际参数个数少于形式参数，20与i对应,至少有一个实参,形式参数j和k分别使用默认参数值5和10
    fun(20, 30);           //形式参数k使用默认参数值10
    fun(20, 30, 40);       //实际参数个数等于形参个数，都不使用默认参数值

    return 0;
}

*/
