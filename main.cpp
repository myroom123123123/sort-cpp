#include <iostream>
using namespace std;

bool isLucky(int n) {
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i < 6; i++) {
		if (i < 3) {
			sum1 += n % 10;
		}
		else {
			sum2 += n % 10;
		}
		n /= 10;
	}
	return sum1 == sum2;
}

int main() {
	int n;
	cout << "Enter a six-digit number: ";
	cin >> n;
	if (isLucky(n)) {
		cout << "Lucky number!" << endl;
	}
	else {
		cout << "Not a lucky number." << endl;
	}
	return 0;
}
