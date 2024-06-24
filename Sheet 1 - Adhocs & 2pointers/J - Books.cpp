#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {

    int n, t;
     cin >> n >> t;
     int arr[n];
     int res = 0;
     for(int i=0; i<n; i++){
         cin >> arr[i];
     }
     int sum = 0, l = 0, ans = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum > t){
            sum -= arr[l];
            l++;
        }
        ans = max(ans, i-l+1);
    }

     cout << ans << endl;

}