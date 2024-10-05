#include <bits/stdc++.h>
using namespace std;

int factorial(int num) {
    if (num == 0) {
        return 1;
    }
    return num * factorial(num - 1);
}

bool isStrongNumber(int num) {
    if (num == 0) {
        return false;
    }

    int original = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return (sum == original);
}

int main() {
    queue<int> q;
    int n, value;
    
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> value;
        q.push(value);
    }

    bool foundStrongNumber = false;

    cout << "\nStrong numbers in the queue are: ";
    while (!q.empty()) {
        value = q.front();
        q.pop();

        if (isStrongNumber(value)) {
            cout << value << " ";
            foundStrongNumber = true;
        }
    }

    if (!foundStrongNumber) {
        cout << "None";
    }

    cout << endl;
    return 0;
}
