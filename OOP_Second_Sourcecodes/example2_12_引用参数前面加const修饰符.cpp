#include<iostream>
using namespace std;

int Fun(const int &x, int &y, int z)
{
    // x++;此句若作为函数的语句，则报错，用const限制后只能访问x，不能修改x
    z++;     //对值形式参数的修改不会影响对应的实际参数变量
    y = x + y + z;
    return y;
}

int main()
{
    int a = 1, b = 2, c = 3, d = 0;
    cout<<"a = "<<a<<", b = "<<b<<", c = "<<c<<", d = "<<d<<endl;

    d = Fun(a, b ,c);
    cout<<"a = "<<a<<", b = "<<b<<", c = "<<c<<", d = "<<d<<endl;
    return 0;
}
