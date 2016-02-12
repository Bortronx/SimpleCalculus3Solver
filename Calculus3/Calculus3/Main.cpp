#include <iostream>	
#include <cmath>
#include <string.h>
#define PI 3.14159265

using namespace std;

//-- Header
class Point
{

public:
	Point(float, float, float);
	float x = 0, y = 0, z = 0;

};



Point::Point(float, float, float)
{
	float x = 0, y = 0, z = 0;
}


void CheckSqrt(float, float);
void CheckAngle(float);
float FindVectorDistance(Point, Point);
float FindVectorComponents(Point, Point);
float FindVectorNorm(Point);
float FindVectorDotProduct(Point, Point);
float FindVectorAngleInBetween(Point, Point);

void Output();

//-- End Header


int main()
{
	Point Point1(0,0,0);
	Point Point2(0,0,0);

	int x = 0, y = 0, z = 0;
	int other;


	do {

		cout << " Input Point: " << endl;
		cout << " x: ";  cin >> x;
		cout << " y: "; cin >> y;
		cout << " z: "; cin >> z;
		cout << "  " << x << " , " << y << " , " << z << endl;

		Point1.x = x;
		Point1.y = y;
		Point1.z = z;
		
		cout <<  endl;
		cout << Point2.x << endl;
		cout << "Second point ? Press 1 for yes or 0 for no." << endl;
		cout << endl;
		cin >> other;
		if (other == 1)
		{
			cout << " Input Point: " << endl;
			cout << " x: ";  cin >> x;
			cout << " y: "; cin >> y;
			cout << " z: "; cin >> z;;
			cout << "  " << x << " , " << y << " , " << z << endl;

			Point2.x = x;
			Point2.y = y;
			Point2.z = z;
		}
		else

		cout << " Choose What to Do: " << endl;
		cout << " Press 2 to calculate vector distance. " << endl;
		cout << " Press 3 to find components of vector. " << endl;
		cout << " Press 4 to find norm of vector. " << endl;
		cout << " Press 5 to find the Dot product. " << endl;
		cout << " Press 6 to find the angle in between. " << endl;
		cin >> other;


		if (other == 2)
		{
			cout << FindVectorDistance(Point1, Point2) << endl;
		}
		else if (other == 3)
		{
			cout << FindVectorComponents(Point1, Point2) << endl;
		}
		else if (other == 4)
		{
			cout << FindVectorNorm(Point1) << endl;
		}
		else if (other == 5)
		{
			cout << FindVectorDotProduct(Point1, Point2) << endl;
		} 
		else if (other == 6)
		{
			cout << FindVectorAngleInBetween(Point1, Point2) << endl;
		}
		else
		{
			cout << "Press any number to continue. Enter 1 to exit." << endl;
			cin >> other;
			if (other == 1)
			{
				break;
			}
		}

		
		cout << " Press 1 to continue ";
		cin >> other;

	} while (other == 1);

	cout << " Exit.." << endl;
	cin >> other;

		return 0;
	

}


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

	d = sqrt(pow((Point2.x - Point1.x), 2.0)+ pow((Point2.y - Point1.y), 2.0)+ pow((Point2.z - Point1.z), 2.0));
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

	v = (  FindVectorDotProduct(Point1, Point2)  ) / (   ( FindVectorNorm(Point1) )  *  ( FindVectorNorm(Point2) )  );
	cout << endl;
	cout << " \n...cos O = " << v << " " << endl;
	angle = (acos(v)) * (180/PI); 
	CheckAngle(angle);
	return angle;
}


void Output()
{
	//VectorComponenets
	
}