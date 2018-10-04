#include<iostream>
using namespace std;

int main()
{
    char c;
    int a;        //define c, a, f;
    float f;

    cin>> c >> a >> f;      // input c, a, f;

    a = a + c;
    f = f + 2 * a;

    cout<< "c = "<< c << "   a = "<< a << "   f = " << f << endl;       // output c, a, f;

    return 0;
}
