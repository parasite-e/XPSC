#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
       long long a,b,c;
        cin>>a>>b>>c;

       long long sum = a+2*b+3*c;

       if(sum%2) cout<<1<<"\n";
       else cout<<0<<"\n";



    }
}
