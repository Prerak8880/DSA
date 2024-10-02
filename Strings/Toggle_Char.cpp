#include <bits/stdc++.h>
using namespace std;

void toggleString(wstring &str) {
    for (auto &ch : str) {
    
        if (iswlower(ch)) {
            ch = towupper(ch);
        } 
        else if (iswupper(ch)) {
            ch = towlower(ch);
        }
    }
}

int main() {
    wstring str;
    getline(wcin, str);

    toggleString(str);

    wcout << str << endl;

    return 0;
}
