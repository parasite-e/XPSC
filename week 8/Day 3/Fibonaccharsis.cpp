#include<bits/stdc++.h>

using namespace std;

const long long N=2e5+10;
vector<long long int> fib;
void solve(){
    long long n,k;
    cin>>n>>k;
    if(k>fib.size()-1){cout<<0;return;}

    long long a=fib[k-2];
    long long b=fib[k-1];
    long long tmp=n,cnt=0;
    long long ab=0;
   for(long long i = 0; i<n; i++){
        tmp=n-a*cnt;
    //cout<<cnt<<" "<<tmp/b<<endl;

    if(cnt>tmp/b)break;
    if(tmp%b==0)ab++;
    cnt++;

   }

   cout<<ab;


}
int main(){

    long long t=1;
    cin>>t;

    fib.push_back(0);
    fib.push_back(1);
    while(fib[fib.size()-1]<N){
        fib.push_back(fib[fib.size()-1]+fib[fib.size()-2]);
    }
    while(t--){
        solve();
        cout<<endl;
    }
}
