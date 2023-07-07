#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        int x;
        cin  >> s >> x;
        string w(s);

        sort(w.begin(), w.end(), greater<char>());

        int n = 0;
        int sum = 0;

        for(int i = 0; i<s.size(); i++)
        {
            sum += (s[i] - 'a' +1);
        }

        map<char, int>mp;

        for(int i = 0 ; i<w.size(); i++)
        {
            if(sum > x)
            {
                mp[w[i]]++;
                sum -= w[i] - 'a' +1;
            }
        }

        for(int i = 0; i<s.size(); i++)
        {
            if(mp[s[i]] > 0)
            {
                mp[s[i]]--;
                continue;
            }
            cout << s[i];
        }
        cout << endl;

    }
}
