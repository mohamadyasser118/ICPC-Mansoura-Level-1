#include <bits/stdc++.h>
#define int long long
using namespace std;


int n, k;
const int N = 1e5;
int a[N], b[N];

bool find(int x) {
    int tempk = k;
    for (int i = 0; i < n; i++) {
        int need = a[i] * x;
        if (need > b[i]) {
            tempk -= (need - b[i]);
        }
        if (tempk < 0) {
            return false;
        }
    }
    return true;
}

    signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    int t;
    t = 1;
    // cin >> t;
    while (t--) {

        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int l = 0, r =  2e9;
        int result = -1;
        int cnt = 0;
        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (find(mid)) {
                result = mid;
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
        cout << result << endl;
    }
        return 0;

}

