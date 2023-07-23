#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(int n, int x)
{
    int count = 0;
    if (x == 0)
    {
        cout << '-';
        for (int i = 0; i < n - 1; i++)
        {
            cout << '*';
        }
        cout << endl;
        return;
    }
    else if (x > 0)
    {
        for (int i = 1; i <= n - x + 1; i++)
        {
            cout << '*';
        }
        for (int i = 1; i <= x - 1; i++)
        {
            cout << '+';
        }
        cout << endl;
        return;
    }
    else if (x < 0)
    {
        for (int i = 1; i <= n - abs(x) - 1; i++)
        {
            cout << '*';
        }
        for (int i = 1; i <= abs(x)+1; i++)
        {
            cout << '-';
        }
        cout << endl;
        return;
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        if (x < (1 - n) || x > (n + 1))
        {
            cout << -1 << endl;
        }
        else
        {
            solve(n, x);
        }
    }
    return 0;
}
