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

        string s[n+4];

        for(int i = 0;i<n-2; i++)
            cin >> s[i];

        string ans = s[0];
        int c = 0;

        for(int i = 1; i<n-2; i++)
        {
            int x = ans.size() -1;

            if(ans[x] == s[i][0])
                ans += s[i][1];
            else
            {
                c = 1;
                ans += s[i];
            }
        }

        if(c == 0)
            ans += 'a';

        cout << ans << endl;

    }
}
