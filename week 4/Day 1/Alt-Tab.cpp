#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string>v(t);
    unordered_set<string>un;

    for(int i = 0; i<t; i++)
    {
        cin >> v[i];
    }
    reverse(v.begin(),v.end());

    for(int i = 0; i<t; i++)
    {
        if(un.count(v[i]) > 0)
            continue;
        else
        {
            string s = v[i];
            un.insert(s);
            cout << s[s.size()-2] << s[s.size()-1];
        }
    }
}
