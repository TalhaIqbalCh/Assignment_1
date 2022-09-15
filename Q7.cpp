#include<iostream>
#include <math.h>

using namespace std;
int main() {
	//Gravitational Force
	float m1, m2, d, k = (6.67 * pow(10, -8)), F;

	cout << "Enter Mass of 1st body\t";
	cin >> m1;
	cout << "Enter Mass of 2nd body\t";
	cin >> m2;
	cout << "Enter distance between 2 bodies\t";
	cin >> d;

	F = k * (m1 * m2 / (d * d));

	cout << "The Gravitational Force b/w the bodies will be " << F;

	return 0;
}