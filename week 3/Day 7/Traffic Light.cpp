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
        char r;
        cin >> r;

        string s;
        cin >> s;

        s+=s;
        int maxi = 0, cnt = 0, ans = 0;

        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] == r)
            {
                cnt = 0;
                while(s[i] != 'g' && i<s.size())
                {
                    cnt++;
                    i++;
                }
                ans = max(ans, cnt);
            }
        }

        cout << ans << endl;
    }
}
