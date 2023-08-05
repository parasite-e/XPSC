#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
         string s, t;
    cin >> s;
    t = s;
    reverse(s.begin(), s.end());
    cout << s << t << "\n";
    }
}
