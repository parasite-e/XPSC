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

        string s;
        cin >> s;

        set<pair<char, char>>st;

        for(int i = 0; i<n-1; i++)
        {
           char a = s[i];
           char b = s[i+1];
           st.insert({a,b});
        }
        cout << st.size() << endl;
    }
}
