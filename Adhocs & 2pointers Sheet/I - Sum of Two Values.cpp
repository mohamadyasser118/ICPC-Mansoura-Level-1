#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {

    int n, s;
    cin >> n >> s;
    vector<pair<ll, ll>>arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i].first;
        arr[i].second=i+1;
    }
    int l=0, r=n-1;
    sort(arr.begin(), arr.end());
    int flag=1;

    while(l<r){
        if(arr[l].first+arr[r].first==s){
            cout << arr[l].second << " " << arr[r].second << endl;
            return 0;
        }
        else if(arr[l].first+arr[r].first>s){
            r--;
        }
        else if(arr[l].first+arr[r].first<s){
            l++;
        }
    }
    if(flag){
        cout << "IMPOSSIBLE" << endl;
    }


}