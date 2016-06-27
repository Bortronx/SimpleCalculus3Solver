
#ifndef CALCULUSSOLVER_H
#define CALCULUSSOLVER_H
#include <iostream>	
#include <cmath>
#include <string.h>
#define PI 3.14159265


class Point
{

public:
	Point();
	float x = 0, y = 0, z = 0;

};



Point::Point()
{
	x = 0;
	y = 0;
	z = 0;
}


void CheckSqrt(float, float);
void CheckAngle(float);
float FindVectorDistance(Point, Point);
float FindVectorComponents(Point, Point);
float FindVectorNorm(Point);
float FindVectorDotProduct(Point, Point);
float FindVectorAngleInBetween(Point, Point);

void Output();


#endif