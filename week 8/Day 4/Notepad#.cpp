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

        string s;
        cin >> s;

        map<string, bool>mp;
        bool possible = false;
        for(int i = 0; i<n-1; i++)
        {
            string ss = s.substr(i, 2);
            if(mp[ss] == true)
            {
                if(s[i] != s[i+1])
                {
                    possible = true;
                    cout << "YES" << endl;
                    break;
                }
            }else
            {
                mp[ss] = true;
            }
        }

        if(!possible)
            cout << "NO" << endl;
    }
}
