#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e5;

vector<int> notprime(1e6 + 9);
vector<int> prime;

void seive(){

    notprime[0] = 1;
    notprime[1] = 1;
    for(int i=2; i<1e6; i++){
        if(!notprime[i]){
            prime.push_back(i);
            for(int j = i*i; j<1e6; j+=i){
                notprime[j] = 1;
            }
        }
    }
}


signed main() {

    seive();

    int t; t = 1;
   //cin >> t;
    while(t--) {

        int n; cin >> n;
        int num = 0, j =1;
        vector<int> v;
        while(1){
            num = ((pow(2,j)-1) * pow(2, j-1));
            j++;
            if(num<100005){
                v.push_back(num);
            }
            else {
                break;
            }
        }
        int ans = 0;
        for(int i=0; i< v.size(); i++){
            if(v[i]<=n){
                if(n%v[i]==0){
                    ans = v[i];
                }
            }
            else {
                break;
            }
        }
        cout << ans << endl;


    }
}