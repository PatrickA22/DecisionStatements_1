#include <iostream>
using namespace std;

int main() {

	int ing_num;
	cout << "Enter a ingrident number to brew a potion: " << endl;	
	cin >> ing_num;


	switch (ing_num) {
	case 1: cout << "You brewed a healing potion! " << "\n"; break;
	case 2: cout << "You brewed a invisability potion! " << "\n"; break;
	case 3: cout << "You brewed a strength potion! " << "\n"; break;
	case 4: cout << "You brewed a speed potion! " << "\n"; break;
	default: cout << "Unknown potion" << endl;
	}

}