#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long

int a[1001][1001]={0};

signed main() {


    int n; cin >> n;
    int q; cin >> q;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            char x; cin >> x;
            a[i][j] = a[i-1][j]+a[i][j-1]-a[i-1][j-1];
            if(x == '*')    a[i][j]++;
        }
    }
    while(q--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << a[x2][y2]-a[x2][y1-1]-a[x1-1][y2]+a[x1-1][y1-1] << endl;
    }

}
