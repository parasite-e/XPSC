#include<bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin>>n;
        int temp=1;
        int ans=1;
        for(int i=2;i<=10001;i++){
            if(n%i==0)
            temp++;
            else
            temp=0;
            ans=max(ans,temp);
        }
        cout<<ans<<endl;
    }
}

