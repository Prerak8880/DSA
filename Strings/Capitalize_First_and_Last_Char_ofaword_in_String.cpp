#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin,str);
    
    int n = str.length();
    
    for(int i=0; i<n; i++){
        if(isalpha(str[i]) && (i == 0 || str[i-1] == ' ')){
            str[i] = toupper(str[i]);
        }
        
        else if(isalpha(str[i]) && (i == n-1 || str[i+1] == ' ')){
            str[i] = toupper(str[i]);
        }
    }
    
    cout << str;

    return 0;
}
