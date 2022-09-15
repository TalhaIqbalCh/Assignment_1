#include<iostream>
#include <math.h>

using namespace std;
int main() {
	//energy drink survey
	int customers = 12467,more_than1_eng_drink,citrus_drinks;

	more_than1_eng_drink = (14.0 / 100) * customers;
	citrus_drinks = (64.0 / 100) * (more_than1_eng_drink);

	cout << "The approximate number of customers in the survey who purchase one or more\nenergy drinks per week are " << more_than1_eng_drink << endl;
	cout << "The approximate number of customers in the survey who prefer citrus-flavored\nenergy drinks are " << citrus_drinks << endl;

	return 0;
}