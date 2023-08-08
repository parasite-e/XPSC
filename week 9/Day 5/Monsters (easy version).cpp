#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n),b(n);

        for(int i =0;i<n;i++) cin>>a[i];

        sort(a.begin(),a.end());

        b[0] = 1;
        for(int i = 1;i<n;i++)
        {
            b[i] = min(a[i],b[i-1]+1);
        }

        long long sum = 0;
        for(int i = 0;i<n;i++)sum+=(a[i]-b[i]);

        cout<<sum<<endl;
    }
}
