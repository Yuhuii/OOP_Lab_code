#include<iostream>
using namespace std;

void fun(int i, int j = 5, int k = 10);

int main()
{
    fun(20);               //ʵ�ʲ�������������ʽ������20��i��Ӧ,������һ��ʵ��,��ʽ����j��k�ֱ�ʹ��Ĭ�ϲ���ֵ5��10
    fun(20, 30);           //��ʽ����kʹ��Ĭ�ϲ���ֵ10
    fun(20, 30, 40);       //ʵ�ʲ������������βθ���������ʹ��Ĭ�ϲ���ֵ

    return 0;
}

void fun(int i, int j, int k)
{
    cout<< i << " " << j <<" " << k << endl;
}

/*
�ȼ���

#include<iostream>
using namespace std;

void fun(int i, int j = 10, int k = 10)
{
    cout<< i << " " << j <<" " << k << endl;
}

int main()
{
    fun(20);               //ʵ�ʲ�������������ʽ������20��i��Ӧ,������һ��ʵ��,��ʽ����j��k�ֱ�ʹ��Ĭ�ϲ���ֵ5��10
    fun(20, 30);           //��ʽ����kʹ��Ĭ�ϲ���ֵ10
    fun(20, 30, 40);       //ʵ�ʲ������������βθ���������ʹ��Ĭ�ϲ���ֵ

    return 0;
}

*/
