#include "CalculusSolver.h"
#include "Functions.h"

using namespace std;

int main()
{
	int other = 0;
	int numPoints = 0;

	
	

	do {

		cout << " Number of Points: " << endl;
		cin >> numPoints;
		Point *TotalPoints = new Point[numPoints+1];

		for (int i = 0; i < numPoints; i++)
		{
			int x = 0, y = 0, z = 0;
			cout << " Input Point: " << endl;
			cout << " x: ";  cin >> x;
			cout << " y: "; cin >> y;
			cout << " z: "; cin >> z;
			cout << "  " << x << " , " << y << " , " << z << endl;

			TotalPoints[i].x = x;
			TotalPoints[i].y = y;
			TotalPoints[i].z = z;

			cout << endl;
			cout << "  " << x << " , " << y << " , " << z << endl;
			
		}

		if (numPoints % 2)	
		{	
			TotalPoints[numPoints].x = 0;
			TotalPoints[numPoints].y = 0;
			TotalPoints[numPoints].z = 0;
		}
		cout << " Choose What to Do: " << endl;
		cout << " Press 2 to calculate vector distance. " << endl;
		cout << " Press 3 to find components of vector. " << endl;
		cout << " Press 4 to find norm of vector. " << endl;
		cout << " Press 5 to find the Dot product. " << endl;
		cout << " Press 6 to find the angle in between. " << endl;
		cin >> other;
		
		for (int i = 0; i < numPoints; i++)
		{
			if (other == 2)
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

		cin >> other;
		delete[] TotalPoints;

		// End of reset
		cout << " Press 1 to continue ";
		cin >> other;

	} while (other == 1);

	

	cout << " Exit.." << endl;
	cin >> other;

		return 0;
	

}

