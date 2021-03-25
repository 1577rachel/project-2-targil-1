#include "Polygon.h"
#include"Point.h"
#include <iostream>
using namespace std;

Polygon::Polygon(int number)
{
	num = number;
	array = new Point[num]; //array of vertex`s
	cout << "in constructor" << endl;
}

//Polygon::Polygon()
//{
//}

Polygon::Polygon(const Polygon& pp)
{
	Point* pointer1 = pp.array;
	num = pp.num;
	array = new Point[num];
	Point* pointer2 = array;
	for (int i = 0; i < num; i++)
	{
		*pointer2 = *pointer1;  //copying the values
		pointer1++;  //next index to copy
		pointer2++;   //next index 

	}
	cout << "in copy-constructor" << endl;
}

Polygon::~Polygon()
{
	if(array)
		delete array;
	array = NULL;
	cout << "in destructor" << endl;
}

void Polygon::addPoint(int index, int x,int y)
{

	(*(array + index)).setx(x);  //arry+index is from type Point in the array
	(*(array + index)).sety(y);
}

float Polygon::circumference() const
{
	//Point call;  //for calling the function from class point
	//Point* pointer_f = array; //pointer to the first point in the arry
	Point* pointer1 = array;  //this pointer will carry the first point for the distamce calculation                
	//Point* pointer2 = array;
	//pointer2++;   //this pointer will carry the second point for the distamce calculation
	float sum = 0; //the summery of the circumference
	for (int i = 0; i < num - 1; i++)  //calculating every 2 points in the arry
	{
		
		sum += (*(pointer1 + i)).distance(*(pointer1 + i + 1));
		//pointer1++;
		//pointer2++;

	}
	sum += (*pointer1).distance(*(pointer1 + num - 1));  //The distance between the last index and first index.
	return sum;
}
