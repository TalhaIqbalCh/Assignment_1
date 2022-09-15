#include <iostream>
using namespace std;

int main() {
	//Calculate price with tip and tax

	float meal_charge = 44.50, tax_percent = 6.75, tip_percent = 15.0, bill, tax_amount, tip_amount;
	cout << "Sichuan Restaurant\n";
	cout << "Tax  = " << tax_percent << "%" << endl;
	cout << "Tip  = " << tip_percent << "%\n" << endl;

	cout << "Your Meal Cost = $" << meal_charge << endl;
	tax_amount = (tax_percent / 100.0) * meal_charge;
	tip_amount = (tip_percent / 100.0) * (meal_charge + tax_amount);

	cout << "Tax Deduction in your meal = $" << tax_amount << endl;
	cout << "Tip in your meal = $" << tip_amount << endl<<endl;

	bill = meal_charge + (tax_amount + tip_amount);
	cout << "Total Bill = $" << bill;


	return 0;
}