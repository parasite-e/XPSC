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

        vector<long long>a(n);
        long long one = 0, zero = 0;

        for(long long i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i] == 1) one++;
            else if(a[i] == 0) zero++;

        }


        long long ans = pow(2,zero);

        cout<<(one*ans)<<"\n";
    }

    return 0;
}




