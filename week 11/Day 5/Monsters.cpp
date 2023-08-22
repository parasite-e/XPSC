#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>>t;

    while(t--){
        int n, k; cin >> n >> k;
    vector<int> v(n);

    vector<int> ans;
    map<int, vector<int>, greater<int> > mp;

    for(int i=0; i<n; i++){
        cin >> v[i];

        if(v[i]%k == 0){
            ans.push_back(i+1);
        }else{
            mp[v[i]%k].push_back(i+1);
        }
    }

    for(auto x:mp){
        for(auto y : x.second) ans.push_back(y);
    }

    for(auto x: ans) cout << x << " ";
    cout << endl;
    }
}
