#include<iostream>
#include <math.h>

using namespace std;
int main() {
	//seconds to I.Time
	int sec,hrs,min;

	cout << "Enter time in seconds\t";
	cin >> sec;

	min = sec / 60.0;
	hrs = min / 60.0;

	cout << "Elapsed Time = " << sec << "\n" << hrs << ":" << (min % 60) << ":" << (sec % 60);


	return 0;
}