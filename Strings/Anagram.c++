#include <bits/stdc++.h>
using namespace std;

int main() {

    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    
    if(str1.length() != str2.length()){
        cout << "No";
        return 0;
    }
    
    if(str1==str2){
        cout << "Yes";
    }
    
    else if(str1 != str2){
        cout << "No";
    }
    
    return 0;
}
