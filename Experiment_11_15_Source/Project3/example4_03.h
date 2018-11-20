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
//成员变量
private:

	double Radius;   //定义圆的半径
	const double PI; //定义一个常数据类型PI代表圆周率

//成员函数
public:
	
	Circle(double r = 0):PI(3.1415926)
	{
		Radius = r;
	}
	double Area();           //求圆的面积
	double Circumference();  //求圆的周长
	
};
	

#endif
