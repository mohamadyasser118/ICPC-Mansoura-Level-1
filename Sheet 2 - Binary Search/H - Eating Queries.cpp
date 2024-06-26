#include <bits/stdc++.h>
#define int long long
using namespace std;

int Binary(const vector<int>& v, int target) {
    int l = 0, r = v.size() - 1;
    int result = -1;
    int cnt = v.size();
    while (l <= r) {
        int mid = l + (r - l) / 2;

         if(v[mid] >= target){
             cnt = min(cnt, mid);
             r = mid-1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return cnt;
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    int t;
    cin >> t;
    while (t--) {

        int n,q;
        cin >> n >> q;
        vector<int> v(n+5);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        std::sort(v.rbegin(), v.rend());
        vector<int> pre(n);
        pre[0] = v[0];
        for(int i=1; i<n; i++){
            pre[i] = pre[i-1] + v[i];
        }
        while(q--){

            int x; cin >> x;
            if(pre[n-1] < x){
                cout << -1 << endl;
                continue;
            }
            int res = Binary(pre, x);
            cout << res+1 << endl;
        }


    }

    return 0;

}
// 4 3 3 1 1 4 5 9
// 9  5  4  4  3  3  1  1
// 9 14 18  22 25 28 29 30