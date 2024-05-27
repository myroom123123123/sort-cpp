#include <iostream>
using namespace std;

void printRectangle(int N, int K) {
	if (N <= 0 || K <= 0) {
		cout << "Invalid input values" << endl;
		return;
	}
	for (int i = 0; i < K; i++) {
		for (int j = 0; j < N; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

int main() {
	int N, K;
	cout << "Enter the number of rows: ";
	cin >> N;
	cout << "Enter the number of columns: ";
	cin >> K;
	printRectangle(N, K);
	return 0;
}
