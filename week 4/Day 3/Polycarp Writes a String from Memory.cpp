#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        int x = s.size();
        int ans = 0;
        map <char , bool>mp;
        for(int i = 0; i<x; i++)
        {
            int cnt = 0;
            while(true)
            {
                if(mp.find(s[i]) == mp.end())
                {
                    cnt++;
                    mp[s[i]] = true;
                }
                i++;

                if((cnt >= 3 && mp.find(s[i]) == mp.end()) || i>x)
                    break;
            }
            i--;
            mp.clear();
            ans++;
        }
        cout << ans << endl;
    }
}
