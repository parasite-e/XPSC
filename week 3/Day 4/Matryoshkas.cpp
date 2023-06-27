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
        map<int, int> mp;
        set<int>s;

        for(int i = 0; i<n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            s.insert(v[i]);
            s.insert(v[i]+1);
        }
        int track = 0;
        int res = 0;

        for(auto x : s)
        {
            int c = mp[x];
            res += max(0, c - track);
            track = c;
        }
        cout << res << endl;
    }
}
