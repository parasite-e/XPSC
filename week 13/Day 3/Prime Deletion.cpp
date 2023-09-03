#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;
        int x;
        for(int i = 0; i<10; i++)
        {
            if(s[i] == '1' || s[i] == '3')
            {
                x = s[i] - '0';
                break;
            }

        }

        if(x == 1)
            cout << 13 << endl;
        else
            cout << 31 << endl;
    }
}
