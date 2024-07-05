#include <bits/stdc++.h>
using namespace std;

int isPalindrome(string str)
{
    int left =0;
    int right = str.length() - 1;
    
    while(left < right)
    {
        if(str[left] != str[right])
        {
            return false;
            
        }
        
        left++;
        right--;
        
    }
        return true;
    
}

int main()
{
    string str;
    cin >> str;
    
    if(isPalindrome(str))
    {
        cout << "Yes!";
    }
    
    else
    {
        cout << "No!";
    }
    return 0;
}
