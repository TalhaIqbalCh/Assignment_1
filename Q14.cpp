#include<iostream>
#include<iomanip>
#include <math.h>

using namespace std;
int main() {
	//Payment and Interest Rate
	float rate, N, L, Interest,Monthly_Payment,Total_Amount;
	rate = (1.0 / 100);

	cout << "Enter amount of Loan\n";
	cin >> L;
	cout << "Enter the Number of Payments\n";
	cin >> N;

	Monthly_Payment = (rate * (pow(1 + rate, N)) / (pow(1 + rate, N) - 1) ) * L;
	cout << "Loan Amount:  "<<setw(15)<<"$" << L << endl;
	cout << "Monthly Interest Rate:"<<setw(12)<<"1%"<< endl;
	cout << "Number of Payments:"<<setw(15) << N << endl;
	cout << "Monthly Payments:" <<setw(11) <<"$" << setprecision(5) << Monthly_Payment << endl;
	Total_Amount = Monthly_Payment * N;

	cout << "Amount Paid Back:"<<setw(9) << "$" <<setprecision(7) << Total_Amount << endl;
	Interest = Total_Amount - L;

	cout << "Interest Paid:" <<setw(13) << "$" << setprecision(6) << Interest << endl;



	return 0;
}