#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, ans = 0, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int>big(26, 0), small(26, 0);

        for(int i =0; i<n; i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z') big[s[i]- 'A']++;
            else
                small[s[i]-'a']++;
        }

        for(int i= 0; i<26; i++)
        {
           int pais = min(small[i], big[i]);
           ans += pais;

           small[i] -= pais; big[i] -= pais;

           int add = min(k, max(small[i], big[i])/2);
           k -= add; ans += add;
        }

        cout << ans << endl;
    }
}
