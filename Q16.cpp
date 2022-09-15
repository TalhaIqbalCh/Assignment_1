#include<iostream>
#include<iomanip>
#include <math.h>

using namespace std;
int main() {
	//sin,cos,tan
	float radian;

	cout << "Enter the angle in Radians\t";
	cin >> radian;

	cout << "Sin(" << radian << ") = " << fixed << setprecision(4) << sin(radian) << endl;
	cout << "Cos(" << int(radian) << ") = " << fixed << setprecision(4) << cos(radian) << endl;
	cout << "Tan(" << int(radian) << ") = " << fixed << setprecision(4) << tan(radian) << endl;

	return 0;
}