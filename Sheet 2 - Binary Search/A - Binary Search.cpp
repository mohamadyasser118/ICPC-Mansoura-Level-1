#include <bits/stdc++.h>
#define int long long
using namespace std;

int binarySearch(const vector<int>& v, int target) {
    int l = 0, r = v.size() - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (v[mid] == target) {
            return mid + 1;
        } else if (v[mid] > target) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return -1;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, Q;
    cin >> N >> Q;
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    while (Q--) {
        int X;
        cin >> X;
        int result = binarySearch(v, X);
        cout << result << endl;
    }

    return 0;
}
