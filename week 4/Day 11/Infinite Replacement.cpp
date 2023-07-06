#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s, t;
        cin >> s >> t;

        if(t == "a")
            cout << 1 << endl;
        else if(count(t.begin(), t.end(), 'a') != 0)
            cout << -1 << endl;
        else
        {
            long long x = pow(2, s.size());
            cout << x << endl;
        }

    }

}
