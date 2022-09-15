#include<iostream>
#include <math.h>
#define PI 3.14
using namespace std;
int main() {
	//Current formula
	float I, E, R, L, C, f,other_R;

	cout << "Enter value of Voltage 'E'\t";
	cin >> E;
	cout << "Enter value of Resistance 'R'\t";
	cin >> R;
	cout << "Enter value of Frequency 'f'\t";
	cin >> f;
	cout << "Enter value of Inductance 'L'\t";
	cin >> L;
	cout << "Enter value of Capacitance 'C'\t";
	cin >> C;

	other_R = (2.0 * PI * f * L - (1 / (2.0 * PI * f * C)));
	I = E / (sqrt(pow(R, 2) + pow(other_R,2)));

	cout << "The value of Current 'I' is " << I;
	return 0;
}