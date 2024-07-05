#include <bits/stdc++.h>
using namespace std;

const int CHAR=256;

bool isAnagram(string str1, string str2, int n ,  int m)
{
    if(n != m)
    {
        return false;
    }
    
    int count[CHAR] = {0}; 
    for(int i=0; i<n; i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }
    
    for(int i=0; i<CHAR; i++)
    {
        if(count[i] != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    
    if(isAnagram(str1, str2, str1.length(), str2.length()))
    {
        cout << "Anagram" << " ";
    }
    
    else
    {
        cout << "No Anagram" << " ";
    }
    
    return 0;
}
