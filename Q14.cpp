#include<iostream>
#include<iomanip>
#include <math.h>

using namespace std;
int main() {
	//Payment and Interest Rate
	float rate, Num_of_Payments, Amount_of_Loan, Interest, Monthly_Payment, Total_Amount;

	cout << "Enter amount of Loan\n";
	cin >> Amount_of_Loan;
	cout << "Enter the Number of Payments\n";
	cin >> Num_of_Payments;
	cout << "Enter the Monthly Interest Rate %\n";
	cin >> rate;

	rate /= 100;

	Monthly_Payment = (rate * (pow(1 + rate, Num_of_Payments)) / (pow(1 + rate, Num_of_Payments) - 1)) * Amount_of_Loan;
	cout << "Loan Amount:  " << setw(15) << "$" << Amount_of_Loan << endl;
	cout << "Monthly Interest Rate:" << setw(11) << rate * 100 << "% " << endl;
	cout << "Number of Payments:" << setw(15) << Num_of_Payments << endl;
	cout << "Monthly Payments:" << setw(11) << "$" << setprecision(5) << Monthly_Payment << endl;
	Total_Amount = Monthly_Payment * Num_of_Payments;

	cout << "Amount Paid Back:" << setw(9) << "$" << setprecision(7) << Total_Amount << endl;
	Interest = Total_Amount - Amount_of_Loan;

	cout << "Interest Paid:" << setw(13) << "$" << setprecision(6) << Interest << endl;



	return 0;
}
