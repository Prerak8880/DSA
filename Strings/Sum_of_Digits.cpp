#include <bits/stdc++.h>
using namespace std;

int findSum(string str) {
    int sum = 0;
    int currentNumber = 0;

    for (char ch : str) {
        if (isdigit(ch)) {
            currentNumber = currentNumber * 10 + (ch - '0');
        } else {
            sum += currentNumber;
            currentNumber = 0;
        }
    }
    sum += currentNumber;

    return sum;
}

int main() {
    string str;
    cin >> str;

    int result = findSum(str);

    cout << result << endl;

    return 0;
}
