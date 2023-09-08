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

        int ans = 1e6;

        for(int i = 0; i<n; i++)
        {
            int d, s;
            cin >> d >> s;

            int x = s/2 -1 + s%2 + d;

            ans = min(ans, x);
        }

        cout << ans << endl;

    }
}
