//�������Ϲ�ϵʵ��������
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Dice
{
public:
	int run()
	{
		return (rand() % 6 + 1);
	}
};
class Gambler
{
public:
	void play()
	{
		int num1, num2, num3;
		num1 = a.run();
		num2 = b.run();
		num3 = c.run();
		if(num1 == num2 && num1 == num3)
			cout << num1 << " " << num2 << " " << num3 << " ����" << endl;
		else if(num1 + num2 + num3 > 10)
			cout << num1 << " " << num2 << " " << num3 << " ��" << endl;
		else
			cout << num1 << " " << num2 << " " << num3 << " С" << endl;

	}
private:
	Dice a, b, c;
};
int main()
{
	Gambler Jack;
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		Jack.play();
	}

	system("PAUSE");

	return 0;
}