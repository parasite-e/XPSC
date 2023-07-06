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

        int x = s[0] - 'a';
        int y;

        if(s[0] < s[1])
            y = s[1] - 'a';
        else
            y = s[1] - 96;

        cout << 25*x + y << endl;
    }
}
