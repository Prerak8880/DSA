#include <bits/stdc++.h>
using namespace std;

int josephus(int n, int k){
  if(n==0 || n==1 || k==0){
    return 0;  
  }

  return (josephus((n - 1, k) + k) % n;
}

int main(){
  int n,k;
  cin >> n>> k;

  cout << josephus(n,k)+1;
  return 0;
}
