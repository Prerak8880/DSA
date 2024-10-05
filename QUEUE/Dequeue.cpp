#include <bits/stdc++.h>
using namespace std;

void dequeueElement(queue<int>& q) {
    if (!q.empty()) {
        cout << "Dequeued: " << q.front() << endl;
        q.pop();
    } else {
        cout << "Queue is empty, cannot dequeue." << endl;
    }
}

int main() {
    queue<int> q;
    int n, value;

    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        cin >> value;
        q.push(value);
    }

    while (!q.empty()) {
        dequeueElement(q);
    }

    return 0;
}
