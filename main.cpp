#include <iostream>
using namespace std;

bool isPerfect(int n) {
    if (n <= 1) {
        return false;
    }
    int sum = 1;  
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

void findPerfectNumbers(int start, int end) {
    cout << "Perfect numbers in the interval [" << start << ", " << end << "] are: ";
    bool found = false;
    for (int i = start; i <= end; ++i) {
        if (isPerfect(i)) {
            cout << i << " ";
            found = true;
        }
    }
    if (!found) {
        cout << "None";
    }
    cout << endl;
}

int main() {
    int start, end;
    cout << "Enter the start of the interval: ";
    cin >> start;
    cout << "Enter the end of the interval: ";
    cin >> end;
    findPerfectNumbers(start, end);
    return 0;
}
