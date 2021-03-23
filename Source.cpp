#include "Point.h"
#include "Polygon.h"
#include <iostream>
using namespace std;

void main()
{

	int sides;
	cout << "enter number of sides:" << endl;
	cin >> sides;  //...side+1 is the number of vertex's
	while (sides <= 0)
		cout << "ERROR" << endl;
	Polygon polygon1(sides+1);  //sending numbers to the constructor
	cout << "enter the point values:" << endl;
	char tav;
	int x, y; //(x,y)
	for (int i = 0; i < sides + 1; i++)  //num of vertex's times 
	{
		cin >> tav;//input: (
		cin >> x;
		cin >> tav;//input: ,
		cin >> y;
		cin >> tav; //input: )
		polygon1.addPoint(i, x, y); //inputing a new point into the array
	}
	cout << "enter number of sides:" << endl;
	cin >> sides;  //...side+1 is the number of vertex's
	while (sides <= 0)
		cout << "ERROR" << endl;
	Polygon polygon2(sides + 1);  //sending numbers to the constructor
	cout << "enter the point values:" << endl;
	char tav;
	int x, y; //(x,y)
	for (int i = 0; i < sides + 1; i++)  //num of vertex's times 
	{
		cin >> tav;//input: (
		cin >> x;
		cin >> tav;//input: ,
		cin >> y;
		cin >> tav; //input: )
		polygon2.addPoint(i, x, y); //inputing a new point into the array
	}
	float perimeter1 = polygon1.circumference(polygon1);
	float perimeter2 = polygon2.circumference(polygon1);

	if (perimeter1 == perimeter2)  //if they are equal
	{
		cout << "equal.perimeter:"<< perimeter1 << endl;
	}
	else    //if they are not equal
	{
		cout << "perimeter:" << perimeter1 << endl;
		cout << "perimeter:" << perimeter2 << endl;
	}






	return;
}