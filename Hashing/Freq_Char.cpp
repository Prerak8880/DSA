#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    
    map<char, int> mpp;
    for(char c : str){
        mpp[c]++;
    }
    
    int q;
    cin >> q;
    
    while(q--){
        char num;
        cin >> num;
        
        cout << mpp[num] << " ";
        
    }
    
    return 0;
}
