#include <bits/stdc++.h>
using namespace std;

void permute(vector<int>& arr) {
    sort(arr.begin(), arr.end());

    do {
        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
    } while (next_permutation(arr.begin(), arr.end()));
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    permute(arr);
    return 0;
}
