#pragma once
#include "Point.h"
class Polygon
{
	Point* array;  
	int num;  //number of Vertex`s
public:
	
	Polygon(int numbers);  //constructor
	//Polygon();		  //defult constructor
	Polygon(const Polygon& pp); //copy coonstuctor
	~Polygon(); //dtor
	void addPoint(int index,int x,int y);  //function gets point and index and adds point to the array
	float circumference(); //calculates the circumference of the polygon
};

