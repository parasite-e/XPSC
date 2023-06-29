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

        int v[n];

        for(int i= 0;i<n;i++)
            cin >> v[i];

        int pre[n];
        pre[0] = v[0];

        for(int i = 1; i<n; i++)
        {
            pre[i] = pre[i-1] + v[i];
        }

        int ans = n;

        for(int i = 0; i<n; i++)
        {
            int sum = pre[i];
            sum += sum;

            int curr = i+1;
            int last = i;

            int idx;

            while(binary_search(pre, pre+n, sum))
            {
                idx = lower_bound(pre, pre+n, sum) - pre;
                sum += pre[i];

                curr = max(curr, idx- last);
                last = idx;
            }

            if(last == n-1)
                ans = min(ans, curr);

        }
        cout << ans << endl;
    }
}
