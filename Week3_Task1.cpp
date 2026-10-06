#include <iostream>
using namespace std;

int main() {

	int num_user;
	cout << "Please enter a number: " << endl;
	cin >> num_user;
	
	if (num_user % 2 == 0) {
		cout << "Your number is EVEN" << "\n";
	}
	else
	{
		cout << "Your number is ODD" << "\n";
	}
}