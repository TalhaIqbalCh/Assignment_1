#include <iostream>
#include <math.h>

using namespace std;
int main() {
	//table
	int a = 0, b = 1, c = 2, d = 3, e = 4, f = 5;

	cout << "integer\tsquare\t\tcube" << endl;
	cout << a << "  \t" << pow(a, 2) << " \t\t" << pow(a, 3) << endl;
	cout << b << "  \t" << pow(b, 2) << "  \t\t" << pow(b, 3) << endl;
	cout << c << "  \t" << pow(c, 2) << "  \t\t" << pow(c, 3) << endl;
	cout << d << "  \t" << pow(d, 2) << "  \t\t" << pow(d, 3) << endl;
	cout << e << "  \t" << pow(e, 2) << "  \t\t" << pow(e, 3) << endl;
	cout << f << "  \t" << pow(f, 2) << "  \t\t" << pow(f, 3) << endl;

	return 0;
}