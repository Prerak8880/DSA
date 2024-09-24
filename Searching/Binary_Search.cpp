#include <bits/stdc++.h>
using namespace std;

int compare(const void *a, const void *b){
    return (*(int*)a , *(int*)b);
}

int binary_search(int arr[], int n, int key){
    int s = 0;
    int e = n;
    
    while(s<=e){
        int mid = s+e/2;
        
        if(arr[mid] == key){
            return mid+1;
        }
        
        else if(arr[mid] > key){
            e = mid - 1;
        }
        
        else{
            s = mid + 1;
        }
    }
    
    return -1;
}

int main(){
    
    int n,key;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl << "Enter Key : ";
    cin >> key;
    
    qsort(arr,n,sizeof(int),compare);
    
    cout << binary_search(arr,n,key);
    return 0;
}
