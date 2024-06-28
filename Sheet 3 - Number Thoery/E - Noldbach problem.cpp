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

    int n, k; cin >> n >> k;
    int count = 0;
    for(int i=0; i<=prime.size(); i++){
        if(prime[i] + prime[i+1] + 1 <=n && !notprime[prime[i] + prime[i+1] + 1]){
            count++;
        }
    }
    if(count >= k){
        cout << "YES" << endl ;
    }
    else {
        cout << "NO" << endl ;
    }


}