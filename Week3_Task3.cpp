#include <iostream>
using namespace std;

int main() {

	int energy_r1;
	int energy_r2;
	char op_choice;
	cout << "Welcome to the energy level checker" << endl;
	cout << "Please enter your first energy reading: " << "\n";
	cin >> energy_r1;
	cout << "Please enter your choice of operation (+ , - , *, /): " << "\n";
	cin >> op_choice;
	cout << "Please enter your second energy reading: " << "\n";
	cin >> energy_r2;

	int result_plus;
	int result_minus;
	int result_multiply;
	int result_divide;

	switch (op_choice) {
	case '+': cout << (result_plus = energy_r1 + energy_r2) << "\n"; break;
	case '-': cout << (result_minus = energy_r1 - energy_r2) << "\n"; break;
	case '*': cout << (result_multiply = energy_r1 * energy_r2) << "\n"; break;
	case '/': cout << (result_divide = energy_r1 / energy_r2) << "\n"; break;
	default: cout << "invalid operation" << "\n"; break;


	}
}