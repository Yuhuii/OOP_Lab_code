#include<stdio.h>

int n = 10;   //ȫ�ֱ���

/*******�Ӻ���********/
void func1()
{
    int n = 20; //�ֲ�����
    printf("func1 n : %d\n", n);
}
void func2(int n)
{
    printf("func2 n : %d\n", n);
}
void func3()
{
    printf("func3 n : %d\n", n);
}

/********main����*********/

int main()
{
    int n = 30; //�ֲ�����

    func1();         /****func1�оֲ�����n������****/
    func2(n);        /****main�оֲ�����n������****/
    func3();         /****ȫ�ֱ���n������****/
    //�������{}��Χ
    {
        int n = 40; //�ֲ�����
        printf("block n : %d\n", n);
    }
    printf("main n : %d\n", n);

    return 0;
}

