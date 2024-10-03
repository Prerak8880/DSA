#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    sort(arr, arr+n, [](int a, int b){
        return a>b;
    });
    
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}
