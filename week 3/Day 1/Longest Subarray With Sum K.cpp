#include<bits/stdc++.h>

using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int n = a.size();
    long long sum = 0;
    int i = 0, j = 0, ans = 0;

    while(j<n)
    {
        sum += a[j];

        if(sum > k)
        {
            while(sum > k)
            {
                sum -= a[i];
                i++;
            }
        }

        if(sum == k)
        {
            ans = max(ans, j-i+1);
        }

        j++;
    }

    return ans;
}

int main()
{
    int n,k;
    cin >> n >> k;

    vector<int>v(n);

    for(int i = 0; i<n; i++)
        cin >> v[i];

    cout << longestSubarrayWithSumK(v, k);
}
