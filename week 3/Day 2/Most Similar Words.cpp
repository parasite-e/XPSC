#include<bits/stdc++.h>

using namespace std;

int cost(string a, string b)
{
    int ans = 0;

    for(int i = 0; i<a.size(); i++)
    {
        ans += abs(a[i] - b[i]);
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, ans = INT_MAX;
        cin >> n >> m;
        vector<string>s(n);

        for(int i = 0; i<n; i++)
            cin >> s[i];


        for(int i = 0; i<n-1; i++)
        {
            for(int j = i+1; j<n; j++)
            {
                ans = min(ans, cost(s[i], s[j]));
            }
        }

        cout << ans << endl;
    }
}
