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
        string s = {};
        int x = 9;
        while(n >0)
        {
            if(n - x >= 0)
            {
                s+= to_string(x);
            }else
            {
                s += to_string(n);
            }
            n -= x;
            x--;
        }
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
}
