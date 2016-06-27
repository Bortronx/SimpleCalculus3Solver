#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "CalculusSolver.h" 


using namespace std;



//-- Functions
void CheckSqrt(float value, float v)
{

	if (value - (int)value > 0.0)
	{
		cout << " sqrt(" << v << ") " << endl;
	}
	else
	{
		cout << value << endl;
	}

}

void CheckAngle(float angle)
{
	if (angle < 90)
	{
		cout << "\n Acute Angle " << endl;
	}
	else if (angle == 90)
	{
		cout << "\n Orthogonal " << endl;
	}
	else if (angle > 90)
	{
		cout << "\n Obtuse Angle " << endl;
	}

}

float FindVectorDistance(Point Point1, Point Point2)
{
	float d;

	d = sqrt(pow((Point2.x - Point1.x), 2.0) + pow((Point2.y - Point1.y), 2.0) + pow((Point2.z - Point1.z), 2.0));
	return d;
}

float FindVectorComponents(Point Point1, Point Point2)
{
	float  x, y, z;

	x = Point2.x - Point1.x;
	y = Point2.y - Point1.y;
	z = Point2.z - Point1.z;

	cout << " < " << x << " " << y << " " << z << " > " << endl;

	return x, y, z;
}

// Vector Norm
float FindVectorNorm(Point Point1)
{
	float v, norm;

	if (Point1.z != 0)
	{
		norm = sqrt(pow(Point1.x, 2.0) + pow(Point1.y, 2.0) + pow(Point1.z, 2.0));
		v = pow(Point1.x, 2.0) + pow(Point1.y, 2.0) + pow(Point1.z, 2.0);
		cout << "\n --norm : ";
		CheckSqrt(norm, v);
		cout << endl;

	}
	else
	{
		norm = sqrt(pow(Point1.x, 2.0) + pow(Point1.y, 2.0));
		v = pow(Point1.x, 2.0) + pow(Point1.y, 2.0);
		cout << "\n --norm : ";
		CheckSqrt(norm, v);
		cout << endl;

	}
	return norm;
}

float FindVectorDotProduct(Point Point1, Point Point2)
{
	float dot, i, j, k;
	dot = (Point1.x * Point2.x) + (Point1.y * Point2.y) + (Point1.z * Point2.z);
	i = (Point1.x * Point2.x);
	j = (Point1.y * Point2.y);
	k = (Point1.z * Point2.z);

	cout << " Dot Product of <" << Point1.x << "," << Point1.y << ", " << Point1.z
		<< "> and <" << Point2.x << "," << Point2.y << ", " << Point2.z << "> is... " << endl;
	cout << i << "i + " << j << "j + " << k << "k " << endl;
	cout << " = " << i + j + k << endl;
	cout << " which is...\n ";
	return dot;

}

float FindVectorAngleInBetween(Point Point1, Point Point2)
{
	float v, angle;

	v = (FindVectorDotProduct(Point1, Point2)) / ((FindVectorNorm(Point1))  *  (FindVectorNorm(Point2)));
	cout << endl;
	cout << " \n...cos O = " << v << " " << endl;
	angle = (acos(v)) * (180 / PI);
	CheckAngle(angle);
	return angle;
}


void Output()
{
	//VectorComponenets

}

#endif