#include <bits/stdc++.h>
using namespace std;

bool isSub(string s1, string s2, int n, int m)
{
    
    if(m == 0)
    {
        return true;
    }
    
    if(n == 0)
    {
        return false;
    }
    
    
    if(s1[n-1] == s2[m-1])
    {
        return isSub(s1,s2,n-1,m-1);
    }
    
    else
        return isSub(s1,s2,n-1,m);
        
}

int main()
{
    string s1,s2;
    int n,m;
    cin>>n>>m;
    cin >> s1 >> s2;
    cout<<boolalpha<<isSub(s1,s2,n,m);
    return 0;
}
