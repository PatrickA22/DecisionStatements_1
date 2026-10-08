#include <iostream>
using namespace std;

int main() {

	int num1;
	int num2;
	int num3;

	cout << "Enter side 1 of a traingle: " << "\n";
	cin >> num1;
	cout << "Enter side 2 of a traingle: " << "\n";
	cin >> num2;
	cout << "Enter side 3 of a traingle: " << "\n";
	cin >> num3;
	
	
	while (num1 > 0 && num2 > 0 && num3 > 0) {

		

		if (num1 == num2 && num1 == num3) {
			cout << "The traingle is an equilateral triangle." << "\n";
		}

		else if (num1 == num2 || num1 == num3||num2 == num3) {
			cout << "the traingle is an isosceles triangle." << "\n";
		}

		if (num1 != num2 && num1 != num3 && num2 != num3) {
			cout << "The traingle is a scalene triangle." << "\n";
		}
		return 0;
	}


}