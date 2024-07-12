#include <bits/stdc++.h>
using namespace std;

void reverseString(string &str, int n) {
    int start = 0, end = n - 1;
    
    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

int main() {
    string str;
    cout << "Enter a string to reverse: ";
    getline(cin, str);  // Use getline to read the entire line including spaces
    int n = str.length();
    reverseString(str,n);
    
    cout << "Reversed string: " << str << endl;
    return 0;
}
