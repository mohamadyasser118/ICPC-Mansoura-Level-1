#include <bits/stdc++.h>
#define int long long
using namespace std;

int Binary(const vector<int>& v, int target) {
    int l = 0, r = v.size() - 1;
    int result = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (v[mid] <= target) {
            result = mid;
            l = mid + 1;
        }
        else if(v[mid] > target){
            r = mid-1;
        }
    }
    return result+1;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    cin >> N >> M;
    vector<int> a(N);
    vector<int> b(M);

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    std::sort(a.begin(), a.end());

    for (int i = 0; i < M; i++) {
        cin >> b[i];
    }
     for(int i=0; i<M; i++){
            int result = Binary(a, b[i]);
            cout << result << " ";
        }



    return 0;
}
