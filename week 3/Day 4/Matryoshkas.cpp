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
        vector<long long>v(n);

        for(int i = 0; i<n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());

        vector<pair<long long, long long>>b;
        int j;
        for(int i = 0; i<n; )
        {
            j = i;
            while(i < n && v[i] == v[j])
            {
                i++;
            }
            b.push_back({v[j], i-j});
        }

        long long ans = b[0].second;

        for(int i = 1; i<b.size(); i++)
        {
            if(b[i].first+1 == b[i-1].first)
            {
                ans += max((long long)0, b[i-1].second - b[i].second);

            }else
            {
                ans += b[i].second;
            }
        }
        cout << ans << endl;
    }
}
