#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n,k, mx = 0;
        cin >> n >> k;

        vector<long long>v(n);
        unordered_map<long long,bool>mp;

        for(int i = 0; i<n ;i++)
            cin >> v[i];

        for(int i = 0; i<n; i++)
        {
            cin >> v[i];
            mp[v[i]] = true;
            mx = max(mx, v[i]);
        }

        long long p = 1;

        while(k > 0)
        {
            while(mp[v[p]] == true)
            {
                p++;
            }

            k = k - p;
            mx = max(mx, p);
            mp[p] = true;
            p = p+1;
        }

        if(k== 0 && mp.size() == mx) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
}
