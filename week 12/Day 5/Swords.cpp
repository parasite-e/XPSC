#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
        ll n;    cin>>n;
    ll a[n];
    ll mx = 0;
    ll sum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum = sum+a[i];
        mx = max(mx,a[i]);
    }
    ll g = mx - a[0];
    for(int i=1;i<n;i++){
        g = __gcd(g,mx-a[i]);
    }
    ll ans = ((mx * n)-sum)/g;
    cout<<ans<<" "<<g<<endl;
    return 0;
}
