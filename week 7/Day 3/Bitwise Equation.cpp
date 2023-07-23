#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b,c,d;
        cin>>n;
        if(n==0)
        cout<<"3 1 6 7"<<endl;
        else if(n==1)
        cout<<"1 4 3 2"<<endl;
        else if(n==2)
        cout<<"2 4 3 1"<<endl;
        else if(n==3)
        cout<<"8 3 2 1"<<endl;
        else
        {
        a=1;
        b=2;
        c=3;
        d=n^3;
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<endl;
        }
    }
}
