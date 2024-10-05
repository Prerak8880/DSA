#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    int n, value;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> value;
        q.push(value);
    }
    
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}
