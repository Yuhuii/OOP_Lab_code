#include<iostream>
using namespace std;

void sswap(int &x, int &y)
{
    int t = x;
    x = y;
    y = t;
}

int main()
{
    int a = 3, b = 5, c = 10, d = 20;

    cout << "a=" << a << "  b=" << b << endl; 	//输出交换前的a、b值
    sswap(a, b);
    cout << "a=" << a << "  b=" << b << endl; 	//输出交换后的a、b值

    cout << "c=" << c << "  d=" << d << endl; 	//输出交换前的c、d值
    sswap(c, d);
    cout << "c=" << c << "  d=" << d << endl; 	//输出交换后的c、d值

    return 0;
}
