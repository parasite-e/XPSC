#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if((b > a && d > c && c > a && d > b) ||
            (a > c && b > d && d > c && b > a) ||
            (c > d && a > b && b > d && a > c) ||
           (d > b && c > a && a > b && c > d))
           {
             cout << "YES" << endl;
           }
        else
            cout << "NO" << endl;
    }
}
