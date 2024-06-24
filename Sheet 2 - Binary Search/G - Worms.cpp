#include <bits/stdc++.h>
#define int long long
using namespace std;

int Binary(const vector<int>& v, int target) {
    int l = 0, r = v.size() - 1;
    int result = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;

         if(v[mid] >= target){
             result = mid;
             r = mid-1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return result+1;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=1; i<n; i++){
        arr[i]+=arr[i-1];
    }
    int m; cin >> m;
    while(m--){
        int q; cin >> q;
        int res = Binary(arr, q);
        cout << res << endl;
    }

}
