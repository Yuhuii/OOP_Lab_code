/*************************************************
* Head File   : example4_04_Circle.h
* Create Time : 2018-11-18/01:05
/**************************************************/

#ifndef __EXAMPLE4_04_CIRCLE_H__
#define __EXAMPLE4_04_CIRCLE_H__

/*----------------------------------*
    Function Declaration
*-----------------------------------*/
class Circle
{
//��Ա����
private:
	double Radius;
	const double PI;

//��Ա����
public:
	
	Circle(double r = 0) :PI(3.1415926)
	{
		Radius = r;
	}
	double Area();
	double Circumference();
	double Getradius()const;   //����Ա������ֻ�������ʶ����ܽ���ֱ�ӻ��ӵ��޸�,��������
	
};

#endif

