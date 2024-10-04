#include <bits/stdc++.h>
using namespace std;

int main() {

    string str;
    getline(cin,str);

    regex re("[^a-zA-Z]");

    cout << regex_replace(str, re, "");
    
    return 0;
}
