#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long

signed main() {

    int n; cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int s=0,d=0;
    int flag=1;
    int l=0, r=n-1;
    while(l<=r){
        if(flag){
            if(arr[l]>arr[r]){
                s+=arr[l];
                l++;
            }
            else {
                s+=arr[r];
                r--;
            }
            flag=0;
            continue;
        }
        else if(!flag){
            if(arr[l]>arr[r]){
                d+=arr[l];
                l++;
            }
            else {
                d+=arr[r];
                r--;
            }
            flag=1;
            continue;
        }

    }
    cout << s << " " << d << endl;

}
