#include <bits/stdc++.h>
#define int long long
using namespace std;

int UpperBound(const vector<int>& v, int target) {
    int l = 0, r = v.size() - 1;
    int result = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (v[mid] > target) {
            result = mid + 1;
            r = mid-1;
        } else {
            l = mid + 1;
        }
    }
    return result;
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
        int result = UpperBound(v, X);
        cout << result << endl;
    }

    return 0;
}
