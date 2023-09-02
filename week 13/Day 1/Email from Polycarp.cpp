#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        vector<pair<char, long long>> s, t;

        long long cnt = 1;
        for(long long i =0; i<s1.size(); i++)
        {
            if(s1[i] == s1[i+1]) cnt++;
            else
            {
                s.push_back(make_pair(s1[i] , cnt));
                cnt = 1;
            }
        }
        cnt = 1;
        for(long long i =0; i<s2.size(); i++)
        {
            if(s2[i] == s2[i+1]) cnt++;
            else
            {
                t.push_back(make_pair(s2[i] , cnt));
                cnt = 1;
            }
        }

        if(s.size() != t.size())
        {
            cout << "NO" << endl;
            continue;
        }

        bool flag = true;

        for(long long i = 0; i<s.size(); i++)
        {
            if(s[i].first == t[i].first && s[i].second <= t[i].second)
            {
                continue;
            }else
            {
                cout << "NO" << endl;
                flag = false;
                break;
            }
        }

        if(flag)
        {
            cout << "YES" << endl;
        }
    }
}
