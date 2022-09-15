#include<iostream>
#include<iomanip>
#include <math.h>


using namespace std;
int main() {
	//pay_rate
	float week = 5.0, total_tax, income_before_tax, income_after_tax, hrs, clothes,school_supply, pay_per_hr, bonds;

	cout << "Enter the pay rate for an hour\t\t$";
	cin >> pay_per_hr;
	cout << "Enter the number of hours you worked each week\t\t";
	cin >> hrs;

	income_before_tax = pay_per_hr * hrs * week;
	total_tax = (14.0 / 100) * (income_before_tax);
	income_after_tax = (income_before_tax - total_tax);
	clothes = (10.0 / 100) * income_after_tax;
	school_supply = (1.0 / 100) * income_after_tax;
	bonds = (25.0 / 100) * (income_after_tax - clothes - school_supply);

	cout << "\n\nYour Income before tax is $" << fixed << setprecision(2) << income_before_tax << endl;
	cout << "Your Income after tax is $" << fixed << setprecision(2) << income_after_tax << endl;
	cout << "You spent $" << fixed << setprecision(2) << clothes << " on your clothes and other accessories" << endl;
	cout << "You spent $" << fixed << setprecision(2) << school_supply << " to buy your school supplies" << endl;
	cout << "You spent $" << fixed << setprecision(2) << bonds << " to buy saving bonds" << endl;
	cout << "Your parents spent $" << fixed << setprecision(2) << bonds * 0.50 << " to buy additional saving bonds for you" << endl;


	return 0;
}