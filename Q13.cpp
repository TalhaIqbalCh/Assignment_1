#include <iostream>
#include <math.h>

using namespace std;

int main() {
    //Compound Interest
    float Compound_Interest, Interest, Principal, Rate, Time;
    cout << "Enter The Principal 'P'\t";
    cin >> Principal;
    cout << "Enter The Rate of Interest'R'\t";
    cin >> Rate;
    cout << "Enter The Time (Yrs) 'T'\t" << endl;
    cin >> Time;

    Compound_Interest = Principal * (pow((1 + Rate / 100), Time));
    Interest = Compound_Interest - Principal;

    cout << "The Interest after compounded for the amount "<< Principal <<" for "<< Time << "years  @" << Rate <<" % is: " << Interest << endl;
    cout << "The Interest after compounded for the amount " << Principal << " for " << Time << "years  @" << Rate << " % is: " << Compound_Interest<< endl;

    return 0;
}