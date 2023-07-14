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

        vector<int>v(n);

        for(int i = 0; i<n; i++)
            cin >> v[i];

        int ans = 1e9;

        for(int i = 0; i<n; i++)
        {
            int m = 0;

            if(i+1 < n)
                m = max(m, abs(v[i]- v[i+1]));

            if(i-1 >= 0)
                m = max(m, abs(v[i] - v[i-1]));

            ans = min(ans, m);
        }

        cout << ans << endl;
    }
}
