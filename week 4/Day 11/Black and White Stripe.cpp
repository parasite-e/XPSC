#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;
        int b = 0, w = 0 ,i = 0;
        int ans = 1e9;
        for(int j = 0; j<s.size(); j++)
        {
            if(s[j] == 'B')
                    b++;
                else
                    w++;
            if(j +1 < k)
            {
                continue;
            }else
            {
                ans = min(ans, w);

                if(s[i] == 'B')
                    b--;
                else
                    w--;

                i++;
            }
        }

        cout << ans << endl;
    }
}
