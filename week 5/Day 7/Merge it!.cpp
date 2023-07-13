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

        vector<int>v(n);

        for(int i = 0; i<n; i++)
            cin >> v[i];

        map<int, bool>mp;

        int ans = 0;
        for(int i = 0; i<n; i++)
        {
            if(v[i] % 3 == 0)
            {
                ans++;
                continue;
            }

            for(int j = i+1; j<n; j++)
            {
                long long sum = v[i];
                if(mp[j] == false)
                {
                    sum += v[j];
                    mp[j] = true;
                }
                if(sum % 3 == 0 )
                {
                    ans++;
                    mp[i] = true;
                    mp[j] = true;
                }

                if(sum > 3)
                    break;
            }
        }
        cout << ans << endl;
    }
}
