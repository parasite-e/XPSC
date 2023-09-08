#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int cnt = 0;
        int x = max(a, b);
        int y = min(a, b);

        while(x > y)
        {
            x = x- c;
            y = y + c;
            cnt++;
        }

        cout << cnt << endl;
    }
}
