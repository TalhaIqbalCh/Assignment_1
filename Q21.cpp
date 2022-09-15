#include<iostream>
#include<iomanip>
#include <math.h>


using namespace std;
int main() {
	//shortest distance
	float v, v1, v2, hrs, min,dist,dist1,dist2;

	cout << "Enter the Average speed of car A\t";
	cin >> v1;
	cout << "Enter the Average speed of car B\t";
	cin >> v2;
	cout << "Enter the hours\t";
	cin >> hrs;
	cout << "Enter the minutes\t";
	cin >> min;

	hrs = hrs + (min/60);
	dist1 = v1 * hrs;
	dist2 = v2 * hrs;

	dist = sqrt(pow(dist1, 2) + pow(dist2, 2));

	cout << "\n\nThe shortest distance between the cars is "<< fixed << setprecision(2) << dist <<"km";

	return 0;
}