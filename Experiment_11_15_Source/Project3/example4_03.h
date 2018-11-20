#pragma once
/*************************************************
* Head File   : example4_03.h
* Create Time : 2018-11-17/13:00
/**************************************************/

#ifndef __EXAMPLE4_03_H__
#define __EXAMPLE4_03_H__

/*----------------------------------*
    Function Declaration
*-----------------------------------*/
class Circle
{
//��Ա����
private:

	double Radius;   //����Բ�İ뾶
	const double PI; //����һ������������PI����Բ����

//��Ա����
public:
	
	Circle(double r = 0):PI(3.1415926)
	{
		Radius = r;
	}
	double Area();           //��Բ�����
	double Circumference();  //��Բ���ܳ�
	
};
	

#endif
