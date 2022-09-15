#include<iostream>
#include<iomanip>
#include <math.h>

using namespace std;
int main() {
	//$ to yen & euro
	const float YEN_PER_DOLLAR = 142.50;
	const float EUROS_PER_DOLLAR = 0.98;
	float dollar,yen,euro;

	cout << "Enter currency in Dollars ($)\t";
	cin >> dollar;

	yen = dollar * YEN_PER_DOLLAR;
	euro = dollar * EUROS_PER_DOLLAR;

	cout << "$"<< dollar <<" = "<< fixed << setprecision(2) << yen << "\t(Japanese Yen)" << endl;
	cout << "$" << dollar << " = " << fixed << setprecision(2) << euro <<"\t(Euro)" << endl;


	return 0;
}