#include <iostream>
using namespace std;

int main() {
	int magic_p;
	cout << "Welcome to the magic school" << endl;
	cout << "Please enter your magic power level (1-100):" << "\n";
	cin >> magic_p;

	while (magic_p < 1 || magic_p > 100) {
		cout << "Invalid input. Please enter a number between 1 and 100: " << "\n";
		cin >> magic_p;
	}
		if (magic_p < 60) {
			cout << "Muggle" << "\n";
		}
		if (magic_p >= 60 && magic_p <= 69) {
			cout << "Apprentice" << "\n";
		}
		if (magic_p >= 70 && magic_p <= 79) {
			cout << "Enchanter" << "\n";
		}
		if (magic_p >= 80 && magic_p <= 89) {
			cout << "Spellbinder" << "\n";
		}
		if (magic_p >= 90 && magic_p <= 100) {
			cout << "archmage" << "\n";
		}

return 0;
	


}