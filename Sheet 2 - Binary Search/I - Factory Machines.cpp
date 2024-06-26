#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {

    int n; cin >> n;
    ll t; cin >> t;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i] ;
    }
    sort(v.begin(), v.end());

    ll result = 0;
    ll start = 1;
    ll end = 1e18;

    while(start<=end){
        ll mid = start + (end - start) / 2 ;
        ll totalproducts = 0;
        for(int i=0; i<n; i++){
            totalproducts += mid / v[i];
            if(totalproducts >= t){
                break;
            }
        }
        if(totalproducts >= t){
            result = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    cout << result << endl;
}
