#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x=0,y=0,f=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='U')
            { y++;}
            if(s[i]=='D')
            { y--;}
            if(s[i]=='R')
            { x++;}
            if(s[i]=='L')
            { x--;}
            if(x==1 && y==1)
            {f=1;
            break;}
        }
        if(f==1)
        {cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}

    }
    return 0;
}
