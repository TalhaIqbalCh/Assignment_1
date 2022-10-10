#include<iostream>
#include<iomanip>
#include <math.h>


using namespace std;
int main() {
	//shortest distance
	float Average_Speed1, Average_Speed2, hrs, min, shortest_dist, dist1, dist2;

	cout << "Enter the Average speed of car A\t";
	cin >> Average_Speed1;
	cout << "Enter the Average speed of car B\t";
	cin >> Average_Speed2;
	cout << "Enter the hours\t";
	cin >> hrs;
	cout << "Enter the minutes\t";
	cin >> min;

	hrs = hrs + (min / 60);
	dist1 = Average_Speed1 * hrs;
	dist2 = Average_Speed2 * hrs;

	shortest_dist = sqrt(pow(dist1, 2) + pow(dist2, 2));

	cout << "\n\nThe shortest distance between the cars is " << fixed << setprecision(2) << shortest_dist << " km";

	return 0;
}
