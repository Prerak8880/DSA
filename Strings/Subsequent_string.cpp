#include <bits/stdc++.h>
using namespace std;

int main() {
    string str,substr;
    getline(cin,str);
    getline(cin,substr);
    
    if(str.find(substr) != string::npos){
        cout << "Yes";
    }
    
    else{
        cout << "No";
    }

    return 0;
}
