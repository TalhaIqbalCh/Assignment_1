#include<iostream>
#include <math.h>

using namespace std;
int main() {
	//lowercase to uppercase
	char alp;

	cout << "Enter a lowercase alphabet\n";
	cin >> alp;

	alp = alp - 32;
	cout << alp;


	return 0;
}