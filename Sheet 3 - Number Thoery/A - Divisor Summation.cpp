#include <bits/stdc++.h>
#define int long long
using namespace std;


    signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    int t;
    t = 1;
     cin >> t;
    while (t--) {

        int n; cin >> n;
        vector<int> fact;
        for(int i=1; i*i<n; i++){
            if(n%i==0){
                fact.push_back(i);
                if(i*i!=n && i!=1){
                    fact.push_back(n/i);
                }
            }
        }
        int sum = 0;
        for (int i = 0; i <fact.size(); ++i) {
            sum+= fact[i];
        }
        cout << sum << endl;

    }
        return 0;

}

