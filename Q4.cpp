
#include <iostream>

using namespace std;

int main() {
	//Word Game
	int age;
	string name, city, clg, prof, pet_name, pet;

	cout << "Welcome to The Word Game\n";
	cout << "Enter your name\t";
	cin >> name;
	cout << "Enter your age\t";
	cin >> age;
	cout << "Enter your city name\t";
	cin >> city;
	cout << "Enter your college\t";
	cin >> clg;
	cout << "Enter your profession\t";
	cin >> prof;
	cout << "Enter your pet name\t";
	cin >> pet_name;
	cout << "Enter your pet type\t";
	cin >> pet;

	cout << "There once was a person named " << name << " who lived in " << city << ".At the age of "<<age<<", "<<name<<" went\nto college at "<<clg<<". "<<name<<" graduated from "<<clg<<" and went to work as a\n"<<prof<<".Then," <<name<<" adopted a(n) "<<pet<<" named "<<pet_name<<".They both lived\nhappily ever after!";

	return 0;
}