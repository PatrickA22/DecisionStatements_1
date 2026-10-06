#include <iostream>
using namespace std;

int main() {

	int year;
	cout << "Enter a year to calibrate the time portal : " << endl;
	cin >> year;

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		cout << year << " is a temporal year" << "\n";
	}

	else {
		cout << year << "is a leap year" << "\n";
	}
}