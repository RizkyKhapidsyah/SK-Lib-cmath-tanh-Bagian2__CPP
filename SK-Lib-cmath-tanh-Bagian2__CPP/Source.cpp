// CPP program to demonstrate the
// tanh() function
#include <iostream>
#include <conio.h>
#include <cmath>

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

using namespace std;

int main() {
	double x = 4.1, result;

	result = tanh(x);
	cout << "tanh(4.1) = " << result << endl;

	// x in Degrees
	double xDegrees = 90;
	x = xDegrees * 3.14159 / 180;

	result = tanh(x);
	cout << "tanh(90 degrees) = " << result << endl;

	_getch();
	return 0;
}
