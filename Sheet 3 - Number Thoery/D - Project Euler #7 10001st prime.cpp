#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> notPrime(1e6 + 6);
vector<int> prime;

void seive(){

    notPrime[0] = 1;
    notPrime[1] = 1;
    for(int i=2; i<1e6; i++){
        if(!notPrime[i]){
            prime.push_back(i);
            for(int j=i*i; j<1e6; j+=i){
                notPrime[j] = 1;
            }
        }
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    seive();

    int t;
    t = 1;
    cin >> t;
    while (t--) {
        int n ; cin >> n;
        cout << prime[n-1] << endl;
    }
}