#pragma once
#include <cmath>
//#include "Polygon.h"
class Point
{
	int x;
	int y; //(x,y)
public:
	//set functions
	void setx(int set_x);
	void sety(int set_y);
	//get functions
	float getx() const;
	float gety() const;
	float distance(const Point& p1) const;  //the function gets 2 points and callculatets the distance between them 
	//~Point();
};
