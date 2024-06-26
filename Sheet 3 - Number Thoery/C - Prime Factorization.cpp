#include <bits/stdc++.h>
#define int long long
using namespace std;



signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    int t;
    t = 1;
     // cin >> t;
    while (t--) {

        int n; cin >> n;
        set<int> v;
        for(int i=2; i*i<=n; i++){
            while(n%i==0){
                n/=i;
                v.insert(i);
            }
        }
        if(n!=1){
            v.insert(n);
        }
        for(auto& i : v){
            cout << i << endl;
        }
    }


    }

