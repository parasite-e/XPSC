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

        string s[n];

        for(int i = 0; i< n-2; i++)
        {
            cin >> s[i];
        }


        bool found = false;
        string ans;
        for(int i = 0; i<n-3; i++)
        {
            if(s[i][1] != s2[i+1][0])
            {
                ans += s[i][1];
                ans += s1[1];
                found = true;
            }else
            {
                ans += s1[0];
            }
        }

        if(!found)
        {
            ans += v[n-3];
            ans += "a";
            cout << ans << endl;
        }else
        {
            ans += v[n-3];
            cout << ans << endl;
        }
    }
}
