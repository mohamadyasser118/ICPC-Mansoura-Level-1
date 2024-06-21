#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long

signed main() {

    int n,k; cin >> n >> k;
    int q; cin >> q;

    vector<int> pre(2e6+5);

    while(n--){
        int l, r;
        cin >> l >> r;
        pre[l]++;
        pre[r+1]--;
    }
    for(int i=1; i<pre.size(); i++){
        pre[i]+=pre[i-1];
    }
    for(int i=0; i<pre.size(); i++){
        if(pre[i]>=k){
            pre[i] = 1;
        }
        else {
            pre[i] = 0;
        }
        if(i!=0){
            pre[i]+=pre[i-1];
        }
    }

    while(q--){
        int a,b;
        cin >> a >> b;
        if(a>0){
            cout << pre[b] - pre[a-1] << endl;
        }
        else {
            cout << pre[b] << endl;
        }
    }

}
