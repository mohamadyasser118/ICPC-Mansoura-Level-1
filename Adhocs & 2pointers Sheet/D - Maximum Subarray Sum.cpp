#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long

signed main() {

    int n; cin >> n;
    int a[n];
    int mx, sum;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sum = a[0], mx = a[0];
    
    for(int i=1; i<n; i++){
        sum = max(sum+a[i], a[i]);
        mx = max(mx, sum);
    }
    cout << mx << endl;

}
