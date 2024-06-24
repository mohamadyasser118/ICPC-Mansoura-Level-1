#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
#define endl "\n";

int main() {

    int n;
    cin>>n;
    vector<ll>v1(n+1),v2(n+1);

    for(int i=1;i<=n;i++)
        cin>>v1[i];

    v2=v1;
    sort(v2.begin(),v2.end());

    for(int i=1;i<=n;i++){
        v1[i]+=v1[i-1];
        v2[i]+=v2[i-1];
    }
    int q;
    cin>>q;
    while(q--){
        int type,l,r;
        cin>>type>>l>>r;
        if(type==1)
            cout<<v1[r]-v1[l-1]<<"\n";

        else
            cout<<v2[r]-v2[l-1]<<"\n";


    }







    return 0;
}
