#include<bits/stdc++.h>

using namespace std;

max_min(int n)
{
    string s = to_string(n);
    int a = 0;
    int b = INT_MAX;
    for(int i = 0; i<s.size(); i++)
    {
        a = max(a, (int)s[i]);
        b = min(b, (int)s[i]);
    }
    return (a, b);
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int l, r;
        cin >> l >> r;

        for(int i = l ; i<=r; i++)
        {

        }
    }
}
