#pragma once
#include <cmath>
#include "Polygon.h"
class Point
{
	int x;
	int y; //(x,y)
public:
	//set functions
	void setx(int set_x);
	void sety(int set_y);
	//get functions
	float getx();
	float gety();
	float distance(Point p1);  //the function gets 2 points and callculatets the distance between them 
	//~Point();




};

