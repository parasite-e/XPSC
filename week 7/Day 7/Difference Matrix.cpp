#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n; cin>>n;
        int cnt = 0;
        for(int i=1;i<=n*n;i=i+2){
            cout<<i<<" ";
            cnt++;
            if(cnt == n){
                cout<<endl;
                cnt = 0;
            }
        }
        for(int i=2;i<=n*n;i=i+2){
            cout<<i<<" ";
            cnt++;
            if(cnt == n){
                cout<<endl;
                cnt = 0;
            }
        }
        cout<<endl;
    }
}
