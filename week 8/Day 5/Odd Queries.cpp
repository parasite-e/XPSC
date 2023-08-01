#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long n,q;
        cin>>n>>q;

        long long a[n+1],sum[n+1];
         memset(sum,0,sizeof(sum));

        for(long long i=1;i<=n;i++)
        {
            cin>>a[i];
        }

        for(long long i=1;i<=n;i++)
        {
            sum[i] = sum[i-1] + a[i];

        }
        while(q--)
        {
           long long l,r,k;
            cin>>l>>r>>k;

            long long sum1 = sum[n] - sum[r] + sum[l-1];
            sum1 = sum1 +((r-l+1)*k);

            //cout<<sum1<<endl;

            if(sum1&1) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
    }
    return 0;
}
