#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<long long>v(n+1, 0);

        for(int i = 1; i<=n; i++)
        {
            int x;
            cin >> x;
            v[i] = v[i-1]+ x;
        }

        long long ans = 0;

            for(int i = 1; i<n; i++)
        {

               long long y;
            y = v[n] - v[i];

            ans = max(ans, __gcd(v[i], y));


        }

        cout << ans << endl;

    }
}
