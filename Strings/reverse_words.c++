#include <bits/stdc++.h>
using namespace std;

void reverseString(string &str, int start, int end) {
    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

void reverseWords(string &str) {
    int n = str.length();
    int start = 0;

    // Reverse each word in the string
    for (int end = 0; end <= n; end++) {
        if (end == n || str[end] == ' ') {
            reverseString(str, start, end - 1);
            start = end + 1;
        }
    }

    // Reverse the entire string
    reverseString(str, 0, n - 1);
}

int main() {
    string str;
    cout << "Enter a string to reverse its words: ";
    getline(cin, str);  // Use getline to read the entire line including spaces
    
    reverseWords(str);
    
    cout << "String with reversed words: " << str << endl;
    return 0;
}
