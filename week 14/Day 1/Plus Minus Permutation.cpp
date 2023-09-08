#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    long long a,b,c;
    cin>>a>>b>>c;
        long long x=a/b,y=a/c;
        long long p=(b*c)/(__gcd(b,c));
        long long z=a/p;
        x-=z;y-=z;
        cout<<(x*(2*a+1-x))/2-(y*(1+y))/2<<endl;
    }
}
