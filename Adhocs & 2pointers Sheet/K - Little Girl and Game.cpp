#include <bits/stdc++.h>
#define ll long long
using namespace std;

int  main(){
    string s;
    cin >> s;

    int n = s.size();

    unordered_map<char, int> m;
    for(int i=0; i<s.size(); i++){
        m[s[i]]++;
    }

    int oddCount = 0;
    for(auto i:m){
        if(i.second & 1)
            oddCount++;
    }

    if(oddCount < 2){
        cout << "First" << endl;
    }
    else{
        if((n-1) % 2 == 0)
            cout << "First" << endl;

        else
            cout << "Second" << endl;
    }
}