#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    
    for (auto &ch : str) {
        if (islower(ch)) {
            ch = toupper(ch);
        } else if (isupper(ch)) {
            ch = tolower(ch);
        }
    }
    
    cout << str << endl;
    return 0;
}

