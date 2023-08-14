#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,i=0;cin>>t;
    while(i<t){
        int n;cin>>n;
        string s;cin>>s;
        int cnt0=0,cnt1=0,j=0;
        while(j<n){
            if(s[j]=='0') cnt0++;
            else cnt1++;
            j++;
        }
        string g="";
        j=0;
        while(j<cnt0){
            g+='0';
            j++;
        }
        j=0;
        while(j<cnt1){
            g+='1';
            j++;
        }
        vector<int> v;
        j=0;
        while(j<n){
            if(s[j]!=g[j]) v.push_back(j+1);
            j++;
        }
        if(v.size()==0){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
            cout<<v.size()<<" ";
            j=0;
            while(j<v.size()){
                cout<<v[j]<<" ";
                j++;
            }
            cout<<endl;
        }
        i++;
    }
}
