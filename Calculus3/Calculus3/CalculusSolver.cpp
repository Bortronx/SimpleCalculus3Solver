#include "CalculusSolver.h"
#include "Functions.h"

using namespace std;

int main()
{
	// Main values
	int other = 0;
	int numPoints = 0;
	
	// Main Program loop
	do {

		//Take Point Input
		cout << " Number of Points: " << endl;
		cin >> numPoints;
		VectorInput(numPoints, other); // Take Input and Process
				
		//Continue		
		cout << " Press 1 to continue ";
		cin >> other;

	} while (other == 1);

	
	// Exit Program
	cout << " Exit.." << endl;
	cin >> other;

		return 0;
	

}

