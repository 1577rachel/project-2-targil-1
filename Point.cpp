#include "Point.h"

void Point::setx(int set_x)
{
    x = set_x;

}

void Point::sety(int set_y)
{
    y = set_y;
}

float Point::getx()
{
    return x;
}

float Point::gety()
{
    return y;
}

float Point::distance(Point p1, Point p2)  //the function gets 2 points and callculatets the distance between them 
{
    int x_d = pow((p1.x - p2.x),2);  //(x1-x2)(x1-x2)
    int y_d = pow((p1.y - p2.y), 2); //(y1-y2)(y1-y2)
    float distance = sqrt(x_d + y_d);   //final calculation for the distance


    return distance;
}

Point::~Point()
{
}
