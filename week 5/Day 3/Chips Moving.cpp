#include<bits/stdc++.h>

using namespace std;

int main()
{
        int n;
        cin >> n;

        vector<int>v(n);

        for(int i = 0; i<n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());
        long long ans = 1e18;
        for(int i = 0; i<n; i++)
        {
            long long sum = 0;
            for(int j= 0; j<n; j++)
            {
                if((v[i] - v[j]) %2 != 0)
                    sum ++;
            }
            ans = min(ans, sum);

        }

        cout << ans << endl;
}
