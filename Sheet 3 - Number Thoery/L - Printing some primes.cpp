#include <bits/stdc++.h>
#define int long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int32_t main() {
    fast;
    cout.tie(0);
    freopen("task.in","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int>st;
        for(int i=0;i<n;++i){
            int x;
            cin>>x;
            st.insert(x);
        }
        int mn = n+1;
        int idx = 1;
        for(auto &me : st){
            int removed = n - idx;
            int add = me - idx;
            ++idx;
            mn = min(mn,removed+add);
        }
        cout<<mn<<"\n";
    }
    return 0;
}