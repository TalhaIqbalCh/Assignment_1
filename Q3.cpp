
#include <iostream>

using namespace std;

int main() {
	//number to digits

	int num, digit1, digit2, digit3, digit4, digit5;

	cout << "Enter a 5 digit number\n";
	cin >> num;
	digit1 = num / 10000;
	cout << "The digits are " << digit1;

	digit2 = (num / 1000) % 10;
	cout << "   " << digit2;

	digit3 = (num / 100) % 10;
	cout << "   " << digit3;

	digit4 = (num / 10) % 10;
	cout << "   " << digit4;

	digit5 = (num / 1) % 10;
	cout << "   " << digit5;


	return 0;
}