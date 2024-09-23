#include <bits/stdc++.h>
using namespace std;

int zeros(int n){
    if(n < 5){
        return 0;
    }
    int res=0;
    for(int i=5; i<=n; i*=5){
        res = res + (n/i);
    }
    
    return res;
}

int main(){
    int n;
    cin >> n;
    
    cout << zeros(n);
    return 0;
}
