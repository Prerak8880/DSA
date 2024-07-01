#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main()
{
    int arr[]={7,4,1,8,5,2,9,6,3};
    bubble_sort(arr,9);
    
    for(int i=0; i<9; i++){
        cout << arr[i] <<" ";
    }
    return 0;
}
