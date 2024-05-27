#include <iostream>
using namespace std;

int max(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

int main() {
	int a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	cout << "The maximum of " << a << " and " << b << " is " << max(a, b) << endl;
	return 0;
}