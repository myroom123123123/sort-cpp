#include <iostream>
using namespace std;

bool isPositive(int value) {
	if (value > 0) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int value;
	cout << "Enter a value: ";
	cin >> value;
	if (isPositive(value)) {
		cout << "The value is positive." << endl;
	}
	else {
		cout << "The value is negative." << endl;
	}
	return 0;
}