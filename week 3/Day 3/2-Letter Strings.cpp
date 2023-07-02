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
        vector<string>v(n);

        map<char, long long>start, second;
        map<string, long long>s;

        for(long long i = 0; i<n; i++) cin >> v[i];

        long long ans = 0;

        for(long long i = 0; i<n; i++)
        {
            ans += (start[v[i][0]] + second[v[i][1]] - 2*s[v[i]]);
            start[v[i][0]]++;
            second[v[i][1]]++;
            s[v[i]]++;
        }
        cout << ans << endl;

    }
}
