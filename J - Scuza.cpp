#include <bits/stdc++.h>
#define int long long
using namespace std;

int Binary(const vector<int>& v, int target) {
    int l = 0, r = v.size() - 1;
    int result = -1;
    int cnt = 0;
    while (l <= r) {
        int mid = l + (r - l) / 2;

         if(v[mid] <= target){
             result = mid;
             l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return result;
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    int t; t=1;
    cin >> t;
    while (t--) {

        int n, q; cin >> n >> q;
        vector<int> h(n);
        vector<int> p(n);
        vector<int> maxi(n);
        for(int i=0; i<n; i++){
            cin >> h[i];
        }
        p[0] = h[0];
        maxi[0] = h[0];
        for(int i=1; i<n; i++){
            p[i] = p[i-1] + h[i];
            maxi[i] = max(maxi[i-1], h[i]);
        }
        while(q--){
            int k; cin >> k;
            int res = Binary(maxi, k);
            if(res>=0) {
                cout << p[res] << " ";
            }
            else {
                cout << 0 << " ";
            }
        }
        cout << endl;

    }

    return 0;

}