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
        cout << s[0] << " " << s[1] << endl;
        string f = s.substr(0, 2);
        string s1 = s.substr(3,2);

        int x = stoi(f);
        int y = stoi(s1);

        if(x > 12)
        {
            cout << "DD/MM/YYYY" << endl;
        }else if(y > 12)
        {
            cout << "MM/DD/YYYY" << endl;
        }else
            cout << "BOTH" << endl;
    }
}
