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
        string s,ans;
        cin >> s;

        n = n-1;
        while(n >=0)
        {
            if(s[n] == '0')
            {
                int x = s[n-1] - 48;
                int y = s[n-2] - 48;

                int z = 10*y + x;
                ans += (z + 96);
                n -= 3;
            }else
            {
                int x = (s[n] - 48);
                 ans += (x + 96);
                 n--;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
}
