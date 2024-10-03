#include <bits/stdc++.h>
using namespace std;

void shiftZerosToLeft(int arr[], int n){
    sort(arr,arr+n,[](int a, int b){
      //For right shift
        return (a != 0 && b == 0); //For left return (a == 0 && b != 0);
    });
}



int main() {
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    shiftZerosToLeft(arr, n);

    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}
