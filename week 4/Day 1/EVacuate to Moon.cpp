#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n,m,h,k,ans = 0;
        cin >> n >> m >> h;
        vector<long long > c(n), p(m);

        for(int i = 0; i<n; i++)
            cin >> c[i];

        for(int j = 0; j<m; j++)
            cin >> p[j];

        sort(c.begin(), c.end());
        sort(p.begin(), p.end());

        int j = 0;
        k = min(n,m);
        for(int i = 0; i<k ; i++)
        {
            ans += min(p[m-1-j]*h, c[n-1-j]);
            j++;
        }
        cout << ans << endl;
    }
}

