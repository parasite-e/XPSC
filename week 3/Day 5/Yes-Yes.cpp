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

        bool yes = true;

        for(int i = 0; i<s.size() - 1; i++)
        {
            if((s[i] == 'Y' && s[i+1] == 'e') || (s[i] == 'e' && s[i+1] == 's') || (s[i] == 's' && s[i+1] == 'Y'))
                continue;
            else
            {
                yes = false;
                cout << "NO" << endl;
                break;
            }
        }

        if(yes)
        {
            if(s.size() == 1)
            {
                if(s[0] == 'Y' || s[0] == 'e' || s[0] == 's') cout << "YES" << endl;
                else cout << "NO" << endl;
            }else
            cout << "YES" << endl;
        }
    }
}
