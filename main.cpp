#include <iostream>
using namespace std;

int sumRange(int a, int b) {
	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i;
	}
	return sum;
}

int main() {
	int a, b;
	cout << "Enter the first number: ";
	cin >> a;
	cout << "Enter the second number: ";
	cin >> b;
	cout << "The sum of numbers in the range between " << a << " and " << b << " is " << sumRange(a, b) << endl;
	return 0;
}