#include <bits/stdc++.h>
using namespace std;

int equilibrium(vector<int>& arr, int n){
    
    int sum = 0;
    int leftsum = 0;
    
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    
    for(int i=0; i<n; i++){
        sum -= arr[i];
        
        if(sum == leftsum){
            return i;
        }
        
        leftsum += arr[i];
    }
    
    return -1;
    
}

int main(){
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int result = equilibrium(arr,n);
    
    if(result != -1){
        cout << result;
    }
    
    else{
        cout << "Not Found!";
    }
    return 0;
}
