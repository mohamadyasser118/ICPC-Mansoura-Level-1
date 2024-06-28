#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <algorithm>
#include <deque>
#define fast  ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;

using namespace std;

const int N = 1e5;

vector<ll> notprime(1e6 + 9);
vector<ll> prime;

void seive(){

    notprime[0] = 1;
    notprime[1] = 1;
    for(ll i=2; i<1e6; i++){
        if(!notprime[i]){
            prime.push_back(i);
            for(ll j = i*i; j<1e6; j+=i){
                notprime[j] = 1;
            }
        }
    }
}


int  main() {

    seive();


    int n;
    cin >> n;
    int cnt = 0;
    vector<bool> seive(n+9, true);
    vector<int> almost(n+9, 0);
    for(ll i=2; i<=n; i++){

        if(seive[i]){
            for(int j = i+i; j<=n; j+=i){
                seive[j] = false;
                almost[j]++;
            }
        }

        if(almost[i]==2){
            cnt++;
        }
    }
    cout << cnt << endl ;

}



