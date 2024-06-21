#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;


signed main() {
    fast;

    int n,q;
    cin >> n >> q;
    int arr[n];
    int prefix[n];
    prefix[0] = 0;
    for(int i=1; i<=n; i++){
        cin >> arr[i];
        prefix[i] = prefix[i-1] + arr[i];
    }

   while(q--){
        int a,b;
        cin >> a >> b;
        cout << prefix[b] - prefix[a-1] << endl;
    }

   
}
