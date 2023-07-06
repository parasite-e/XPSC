#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        if(a >= x && b >= y)
        {
            cout << "YES" << endl;
            continue;
        }

        int sc = max(0, x - a);
        int sd = max(0, y - b);

        if(sc+sd <= c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
