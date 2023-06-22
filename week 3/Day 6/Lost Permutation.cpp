#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n,k, mx;
        cin >> n >> k;
        vector<int> b(n);
        vector<bool> taken(1001, false);

        for(int i= 0; i<n; i++)
            cin >> b[i];

        for(int i = 0; i<n; i++)
            taken[b[i]] = true;

        mx = *max_element(b.begin(), b.end());

        int sum = 0;
        bool ok = false;

        int cur = 1;
        while(true)
        {
            if(taken[cur])
            {
                cur++;
                continue;
            }
            sum+=cur;
            taken[cur] = true;

            if(sum == k)
            {
                bool imp = false;
                for(int i = cur; i<=mx; i++)
                {
                    if(!taken[i])
                    {
                        imp = true;
                        break;
                    }
                }
                if(!imp) ok = true;

                break;
            }
            cur++;

            if(sum > k) break;
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
}
