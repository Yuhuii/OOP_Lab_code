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

    cout << "a=" << a << "  b=" << b << endl; 	//�������ǰ��a��bֵ
    sswap(a, b);
    cout << "a=" << a << "  b=" << b << endl; 	//����������a��bֵ

    cout << "c=" << c << "  d=" << d << endl; 	//�������ǰ��c��dֵ
    sswap(c, d);
    cout << "c=" << c << "  d=" << d << endl; 	//����������c��dֵ

    return 0;
}
