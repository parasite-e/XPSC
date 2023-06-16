#include<bits/stdc++.h>

using namespace std;

int lenOfLongSubarr(int A[],  int N, int K)
    {
        // Complete the function
        int sum = 0, ans = 0;
        unordered_map<int, int>mp;

        for(int i = 0; i<N; i++)
        {
            sum += A[i];

            if(sum == K)
            {
                ans = max(ans, i+1);
            }

            if(mp.find(sum - K) != mp.end())
            {
                int idx = mp[sum - K];
                ans = max(ans, i- idx);
            }

            if(mp.find(sum) == mp.end())
            {
                mp[sum] = i;
            }
        }

        return ans;
    }

int main()
{
    int n,k;
    cin >>n >> k;

    int a[n];

    for(int i = 0; i<n; i++)
        cin >> a[i];

    cout << lenOfLongSubarr(a, n, k);


}
