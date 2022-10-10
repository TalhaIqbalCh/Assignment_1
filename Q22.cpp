#include<iostream>
#include<iomanip>
#include <random>
#include <conio.h>


using namespace std;
int main() {
	//tutor
	srand(time(0));
	int number1, number2;

	number1 = rand() % 100000 + 1;
	number2 = rand() % 100000 + 1;

	cout << "Welcome To The Tution\n";
	cout << setw(10) << number1 << "\n+" << setw(9) << number2 << "\n----------" << endl;
	cout << "Press any key for the answer\n\n" << endl;

	_getch();

	cout << setw(10) << number1 << "\n+" << setw(9) << number2 << "\n----------" << endl;
	cout << setw(10) << number1 + number2;

	return 0;
}
