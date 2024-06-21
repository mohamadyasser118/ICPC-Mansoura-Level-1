#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;


signed main() {
    fast;

    int n, res=0;
    cin >> n;
    vector<int> v(n);
    // int freq[200009];
    for(int i=1; i<=n-1; i++){
        cin >> v[i];
    }

    std::sort(v.begin(), v.end());

    for(int i=1; i<=n; i++){
        if(v[i]!=i){
            cout << i << endl;
            return 0;
        }
    }


}
