#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "CalculusSolver.h" 


using namespace std;



//-- Functions
void VectorInput(int numPoints, int other)
{
	
	Point *TotalPoints = new Point[numPoints + 1];

	for (int i = 0; i < numPoints; i++)
	{
		int x = 0, y = 0, z = 0;
		
		cout << " Input Points: " << endl;
		cout << " x: ";  cin >> x;
		cout << " y: "; cin >> y;
		cout << " z: "; cin >> z;
		

		TotalPoints[i].x = x;
		TotalPoints[i].y = y;
		TotalPoints[i].z = z;
				cout << endl;

		for (int i = 0; i < numPoints; i++) {
					cout << "  " 
						<< TotalPoints[i].x << " , "
						<< TotalPoints[i].y << " , "
						<< TotalPoints[i].z << endl;
				}
	}

	if (numPoints % 2)
	{
		TotalPoints[numPoints].x = 0;
		TotalPoints[numPoints].y = 0;
		TotalPoints[numPoints].z = 0;
	}
	cout << "****************** Main Menu ******************" << endl;
	cout << " Choose What to Do: " << endl;
	cout << " Press 2 to calculate vector distance. " << endl;
	cout << " Press 3 to find components of vector. " << endl;
	cout << " Press 4 to find norm of vector. " << endl;
	cout << " Press 5 to find the Dot product. " << endl;
	cout << " Press 6 to find the angle in between. " << endl;
	cout << " Press 7 to do all possible calculations" << endl;
	cout << "***********************************************" << endl;
	cin >> other;

	// Check if it is only one vector
	numPoints = (numPoints == 1) ? numPoints : (numPoints - 1);
	//Start loop for finding stuff
	for (int i = 0; i < numPoints ;  i++)
	{
		
		if (other == 2 )
		{
			cout << FindVectorDistance(TotalPoints[i], TotalPoints[i + 1]) << endl;
		}
		else if (other == 3)
		{
			cout << FindVectorComponents(TotalPoints[i], TotalPoints[i + 1]) << endl;
		}
		else if (other == 4)
		{
			cout << FindVectorNorm(TotalPoints[i]) << endl;
		}
		else if (other == 5)
		{
			cout << FindVectorDotProduct(TotalPoints[i], TotalPoints[i + 1]) << endl;
		}
		else if (other == 6)
		{
			cout << FindVectorAngleInBetween(TotalPoints[i], TotalPoints[i + 1]) << endl;
		}
		else if (other == 7)
		{
			cout << FindVectorDistance(TotalPoints[i], TotalPoints[i + 1]) << endl;
			cout << FindVectorComponents(TotalPoints[i], TotalPoints[i + 1]) << endl;
			cout << FindVectorNorm(TotalPoints[i]) << endl;
			cout << FindVectorDotProduct(TotalPoints[i], TotalPoints[i + 1]) << endl;
			cout << FindVectorAngleInBetween(TotalPoints[i], TotalPoints[i + 1]) << endl;
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
	}
	// Reset Stuff


	delete[] TotalPoints;

	// End of reset
}



//******************************************************
// Check the if it requires Square root.
//														
//******************************************************

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

//******************************************************
// Check the ANGLE (If it's not 0)
//														
//******************************************************

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

//******************************************************
//Find the DISTANCE between the vectors
//														
//******************************************************

float FindVectorDistance(Point Point1, Point Point2)
{
	cout << "************* FINDING DISTANCE ****************" << endl;
	float d;

	d = sqrt(pow((Point2.x - Point1.x), 2.0) + pow((Point2.y - Point1.y), 2.0) + pow((Point2.z - Point1.z), 2.0));
	Output(2, Point1, Point2);
	return d;
}

//******************************************************
//Find the COMPONENTS of the vectors
//														
//******************************************************
float FindVectorComponents(Point Point1, Point Point2)
{
	cout << "************* FINDING COMPONENTS **************" << endl;
	float  x, y, z;

	x = Point2.x - Point1.x;
	y = Point2.y - Point1.y;
	z = Point2.z - Point1.z;

	cout << " < " << x << " " << y << " " << z << " > " << endl;

	return x, y, z;
}


//******************************************************
//Find the VECTOR NORM for each vector
//														
//******************************************************

float FindVectorNorm(Point Point1)
{
	cout << "*************** FINDING NORM *****************" << endl;
	float v, norm = 0;
		
		// Finding the Norm of the vector
		norm = sqrt(pow(Point1.x, 2.0) + pow(Point1.y, 2.0) + pow(Point1.z, 2.0));
		v = pow(Point1.x, 2.0) + pow(Point1.y, 2.0) + pow(Point1.z, 2.0);
		cout << "\n --norm of <"<<Point1.x << "," << Point1.y << "," << Point1.z << "> : ";
		CheckSqrt(norm, v);
		cout << endl;

	return norm;
}

//******************************************************
//Find the  DOT PRODUCT of two vectors.
//														
//******************************************************
float FindVectorDotProduct(Point Point1, Point Point2)
{
	cout << "************ FINDING DOT PRODUCT **************" << endl;
	float dot = 0, i, j, k;
	dot = (Point1.x * Point2.x) + (Point1.y * Point2.y) + (Point1.z * Point2.z);
	i = (Point1.x * Point2.x);
	j = (Point1.y * Point2.y);
	k = (Point1.z * Point2.z);

	cout << " Dot Product of <" << Point1.x << "," << Point1.y << ", " << Point1.z
		<< "> and <" << Point2.x << "," << Point2.y << ", " << Point2.z << "> is... " << endl;
	cout << i << "i + " << j << "j + " << k << "k " << endl;
	cout << " = " << i + j + k << endl;
	return dot;

}

//******************************************************
//Find the ANGLE between the vectors (Output: "multiple 
//of each other" if angle is 0)							
//******************************************************
float FindVectorAngleInBetween(Point Point1, Point Point2)
{
	cout << "*************** FINDING ANGLE *****************" << endl;
	float v = 0, angle = 0;
	bool Undefined = false;
	v = (FindVectorDotProduct(Point1, Point2)) / ((FindVectorNorm(Point1))  *  (FindVectorNorm(Point2)));
	
	if (v != v)
	{
		cout << " \nError Undefined Angle. "
			 << " \nIf one of the vectors is the zero then"
			 << " \nthe angle between the two vectors is undefined." << endl;
		
	}
	else if (int(v) != 1) {
		cout << " \n...cos " << Point1.angle << " = " << v << " " << endl;
		angle = (acos(v)) * (180 / PI);
		CheckAngle(angle);
		Output(1,Point1, Point2);
		return angle;
	}
	else {
		cout << " \nThe vectors are multiples of each other (Angle 0)" << endl;
	}
	Output(1, Point1, Point2);
	return 0;
	
}

//******************************************************
//Other optional outputs.
//														
//******************************************************
void Output(int message, Point Point1, Point Point2)
{
		switch (message)
		{
		case 1 : // End Message
			cout << "**********************************************" << endl;
			cout << "**********************************************" << endl;
			break;
		case 2 : // Distance Message
			cout << " The distance between the vectors <" 
				<< Point1.x << ", " << Point1.y << ", " << Point1.z
				<< ">\n and <" 
				<< Point2.x << ", " << Point2.y << ", " << Point2.z 
				<<"> is:" << endl;
			break;
		case 3 : // Empty Space Message
			cout << "\n\n" << endl;
			break;
		case 4: // Large Empty Space Message
			cout << "\n\n\n\n\n" << endl;
			break;
		}
			
	
	

}

#endif