#include <iostream>

using namespace std;
#define metric_ton 2205

int main() {
	//no of bags to store rice
	int rice,bags;

	cout << "Enter amount of rice to be stored in a bag.\t";
	cin >> rice;

	bags = (1.0 / rice) * metric_ton;
	cout << "We need " << bags << "bags to store one metric ton of rice.";

	return 0;
}