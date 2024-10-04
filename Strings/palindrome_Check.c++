#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin,str);
    
    string str1 = str;
    
    reverse(str1.begin(),str1.end());
    
    if(str == str1)
        cout << "Yes";
        
    else
        cout << "No";

    return 0;
}
