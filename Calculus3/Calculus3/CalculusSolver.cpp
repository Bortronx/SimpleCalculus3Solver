#include "CalculusSolver.h"
#include "Functions.h"

using namespace std;

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

