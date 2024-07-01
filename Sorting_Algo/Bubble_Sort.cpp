// BUBBLE SORT
#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    
    for(int j = low; j <= high - 1; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    
    swap(arr[i+1], arr[high]);
    return i+1;
}

void q_sort(int arr[], int low, int high)
{
    if(low < high)
    {
        int p = partition(arr,low,high);
        q_sort(arr,low,p-1);
        q_sort(arr,p+1,high);
    }
}

int main()
{
    int arr[]={7,4,1,86,5,2,29,6,13};
    q_sort(arr,0,8);
    
    for(int i=0; i<9; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
