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
        string s,ans;

        for(int i = 0; i<n; i++)
            cin >> v[i];

        cin >> s;

        map<int, char>mp;

        for(int i = 0; i<n; i++)
        {
            if(mp.find(v[i]) == mp.end())
            {
                mp[v[i]] = s[i];
                ans += s[i];
            }else
            {
                ans+= mp[v[i]];
            }
        }

        if(ans == s) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
