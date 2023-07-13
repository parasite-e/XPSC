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
        map<int, int>mp;

        for(int i = 0; i<n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        int x = -1;
        int ans = 2e6;

        for(int i = 0; i<n; i++)
        {
            if(mp[v[i]] == 1)
            {
                ans = min(ans, v[i]);

                if(v[i] == ans)
                {
                    x = i+1;
                }

            }
        }
        mp.clear();
        cout << x << endl;

    }
}
