#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> res;
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v[i] = x;
            res[v[i]]++;
            maxi = max(maxi, v[i]);
        }

        if (maxi != n) {
            cout << "NO" << endl;
            continue;
        }

        int flag = 1;

        for(int i=n-2;i>=0;i--)
        {
            int dif=v[i]-v[i+1];
            int dig=(i+1);
            if(res[dig]!=dif){
                flag=false;
            }

        }
        if(flag){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
