#include <bits/stdc++.h>
using namespace std;

string rem_vowel(string str){
    
    regex r("\\[|\\]|\\{|\\}|\\(|\\)");
    
    return regex_replace(str,r,"");
}

int main(){
    string str;
    getline(cin,str);
    
    cout << rem_vowel(str);
    
    return 0;
}
