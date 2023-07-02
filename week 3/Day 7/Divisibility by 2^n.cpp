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

        int arr[n];

        for(int i = 0; i<n; i++)
            cin >> arr[i];

        int cnt = 0;

        for(int i= 0; i<n; i++)
        {
            while(arr[i] %2 == 0)
            {
                arr[i] = arr[i]/2;
                cnt++;
            }
        }

        vector<int>v;
        int ans = 0;

        for(int i = 1; i<=n; i++)
        {
            int x = i;
            int temp = 0;

            while(x % 2 == 0)
            {
                x = x/2;
                temp++;
            }
            v.push_back(temp);
        }

        sort(v.begin(), v.end(), greater<int>());

        if(cnt >= n)
        {
             cout << 0 << endl;
             continue;
        }
        else
        {
            for(int i = 0; i<v.size(); i++)
            {
                if(cnt + v[i] >= n)
                {
                    cnt = n;
                    ans ++;
                    break;
                }
                cnt += v[i];
                ans ++;
            }
        }

        if(cnt < n)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
}
