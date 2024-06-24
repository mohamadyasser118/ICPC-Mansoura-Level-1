#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long


signed main() {
    fast;

    string s; cin >> s;
    int maxi = 0, res = 1;
    for(int i=0; i<s.size(); i++) {
        if (s[i] == s[i + 1]) {
            res++;
        } else {
            maxi = max(maxi, res);
            res = 1;
        }
    }
    cout << maxi;


}
