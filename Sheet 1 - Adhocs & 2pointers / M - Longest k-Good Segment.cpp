#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n,k; cin >> n >> k;
    vector<int> v(n+5);
    map<int, int> mp;
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int l=0, r=0, res = 0, maxi = 0;
    int left=0 , right=0;
    int count = 0;
    while(r<n){
        if(!mp[v[r]]){
            count++;
        }
        while(count>k){
            mp[v[l]]--;
            if(!mp[v[l]]){
                count--;
            }
            l++;
        }
        mp[v[r]]++;

        if(r-l+1>maxi){
            maxi = r-l+1;
            left = l+1;
            right = r+1;
        }
        r++;
    }

    cout << left << " " << right << endl;
}
