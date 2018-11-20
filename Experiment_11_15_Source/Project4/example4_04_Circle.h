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
//成员变量
private:
	double Radius;
	const double PI;

//成员函数
public:
	
	Circle(double r = 0) :PI(3.1415926)
	{
		Radius = r;
	}
	double Area();
	double Circumference();
	double Getradius()const;   //常成员函数，只能做访问而不能进行直接或间接的修改,可以重载
	
};

#endif

