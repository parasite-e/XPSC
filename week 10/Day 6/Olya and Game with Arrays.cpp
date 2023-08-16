#include <bits/stdc++.h>

typedef long long int ll;

using namespace std;

int main(){
   ll t;cin >> t;
   while(t--){
      ll n;cin>>n;vector<vector<ll>> v(n,vector<ll> (2,INT_MAX));ll mi = INT_MAX;
      for(ll i=0;i<n;i++){
         ll m;cin >> m;

         for(ll j=0;j<m;j++){
            ll a;cin >> a;

            if(v[i][0]>=a){
               v[i][1] = v[i][0];v[i][0] = a;
            }else{
               if(v[i][1]>a){
                  v[i][1] = a;
               }
            }
            mi = min(mi,a);
         }
      }ll maa = 0,mii=INT_MAX;

      for(ll i=0;i<n;i++){
         if(max(v[i][0],v[i][1])==INT_MAX) v[i][1]=v[i][0];
         maa += max(v[i][0],v[i][1]);
         mii = min(mii,max(v[i][0],v[i][1]));
      }
     cout << maa - mii + mi<<endl;
   }
}
