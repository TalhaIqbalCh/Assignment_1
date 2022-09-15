#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{	//calories
	int students, CalPerStudent, TotalCal;
	float  Nut_Cal, DryFruit_cal, Nutsfruits_needed;

	cout << "Enter the number of students in the school\t";
	cin >> students;
	cout << "Enter the number of calories required for each student from the mixture\t";
	cin >> CalPerStudent;
	cout << "Enter the number of calories in each pound of nuts\t";
	cin >> Nut_Cal;

	TotalCal = students * CalPerStudent;
	DryFruit_cal = Nut_Cal / 0.7;
	Nutsfruits_needed = TotalCal / (DryFruit_cal + Nut_Cal);

	cout << "Total Pounds of nuts and dry fruits needed: " << Nutsfruits_needed;

	return 0;
}