#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll N = 2005;
ll a[N];


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
       ll x,y,n;
    cin>>x>>y>>n;

    a[1] = x, a[n] = y;
    for(int i=n-1; i>1; i--){
        a[i] = a[i+1]-(n-i);
    }
    if(a[2]-a[1] < n-1){
        cout<<-1<<'\n';
    }
    else{
        for(int i=1; i<=n; i++){
            cout<<a[i]<<" ";
        }
        cout<<'\n';
    }

    }
}

