#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s, rs;
        cin >> s;

        rs = s;
        reverse(rs.begin(), rs.end());

        int p = 0, np= 0;

        for(int i = 0; i<n/2; i++)
        {
            if(s[i] == rs[i])
                np += 2;
            else
                p++;
        }


        if(n%2 != 0) np++;

        string ans = {};

        if(p== 0)
            {
                for(int i = 0; i<=n; i++)
                {
                    if(n %2 ==0 && i%2 != 0) ans += '0';
                    else ans+= '1';
                }
                cout << ans << endl;
                continue;
            }

        for(int i = 0; i<=n; i++)
        {
            if(i <p)
            {
                 ans+='0';
            }
            else
            {
                if(n%2 == 0)
                {
                    if(i-p <= np && (i-p)%2 == 0) ans += '1';
                    else ans += '0';
                }else
                {
                    if(i-p <=np) ans+= '1';
                    else ans+= '0';
                }
            }
        }
        cout << ans << endl;
    }
}
