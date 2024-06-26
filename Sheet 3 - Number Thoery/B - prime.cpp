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
        vector<int> fact;
       for(int i=2; i*i<=n; i++){
           if(n%i == 0){
               cout << "Not Prime" << endl;
               return 0;
           }
       }
       cout << "Prime" << endl;

    }
        return 0;

}

