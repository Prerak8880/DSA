#include <bits/stdc++.h>
using namespace std;

bool myCmp(pair<int, int> a, pair<int, int> b) {
    return (a.second < b.second);
}

int maxActivities(pair<int, int> arr[], int n) {
    sort(arr, arr + n, myCmp);

    int prev = 0;
    int res = 1;

    for (int curr = 1; curr < n; curr++) {
        if (arr[curr].first >= arr[prev].second) {
            res++;
            prev = curr;}
    }
    return res;
}

int main() {
    int n;
    cin >> n;

    pair<int, int> arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }

    cout << maxActivities(arr, n) << endl;
    return 0;
}

//when two different arrays are given 
// As start time array -> s[] = {x1, x2, x3, ...}
// As finish time array -> f[] = {y1, y2, y3, ...}

#include <iostream>
using namespace std;

void printMaxActivities(int s[], int f[], int n) {
    int i = 0;
    cout << "Following activities are selected: " << i << " ";

    for (int j = 1; j < n; j++) {
        if (s[j] >= f[i]) {
            cout << j << " ";
            i = j;
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of activities: ";
    cin >> n;

    int s[n], f[n];
    cout << "Enter the start times of the activities: ";
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    cout << "Enter the finish times of the activities: ";
    for (int i = 0; i < n; i++) {
        cin >> f[i];
    }

    printMaxActivities(s, f, n);
    return 0;
}
