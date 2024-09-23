#include <bits/stdc++.h>
using namespace std;

int fac(int n){
    if(n <= 1){
        return 0;
    }
    
    for(int i=2; i*i<=n; i++){
        while(n % i == 0){
            cout << i << " ";
            n = n / i;
        }
    }
    
    if(n > 1){
        cout << n << " ";
    }
}

int main(){
    int n;
    cin >> n;
    fac(n);
    return 0;
}
