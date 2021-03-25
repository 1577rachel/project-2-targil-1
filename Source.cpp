/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include "Point.h"
#include "Polygon.h"
#include <iostream>
using namespace std;

int main()
{

	int sides;
	cout << "enter number of sides:" << endl;
	cin >> sides;  //...side+1 is the number of vertex's
	while (sides <= 0){
		cout << "ERROR" << endl;
		cin >> sides;
	}
	Polygon polygon1(sides);  //sending numbers to the constructor
	cout << "enter the point values:" << endl;
	char tav;
	int x, y; //(x,y)
	for (int i = 0; i < sides; i++)  //num of vertex's times 
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
	while (sides <= 0){
		cout << "ERROR" << endl;
		cin >> sides;
	}
	Polygon polygon2(sides);  //sending numbers to the constructor
	cout << "enter the point values:" << endl;
	//int x, y; //(x,y)
	for (int i = 0; i < sides; i++)  //num of vertex's times 
	{
		cin >> tav;//input: (
		cin >> x;
		cin >> tav;//input: ,
		cin >> y;
		cin >> tav; //input: )
		polygon2.addPoint(i, x, y); //inputing a new point into the array
	}
	float perimeter1 = polygon1.circumference();
	float perimeter2 = polygon2.circumference();
	if (perimeter1 == perimeter2)  //if they are equal
		cout << "equal.perimeter:"<< perimeter1 << endl;
	else    //if they are not equal
	{
		cout << "perimeter:" << perimeter1 << endl;
		cout << "perimeter:" << perimeter2 << endl;
	}
	return 0;
}
