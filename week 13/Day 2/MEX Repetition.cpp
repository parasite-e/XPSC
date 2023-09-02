#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n, k;
        cin >> n >> k;

        long long tolsum = n*(n+1)/2;
        long long currsum = 0;

        vector<long long>v;

        for(int i = 0; i<n; i++)
        {
            long long curr;
            cin >> curr;

            v.push_back(curr);
            currsum += curr;

        }

        v.push_back(tolsum - currsum);
        k = k%(n+1);

        for(int i = 0; i<n; i++)
            cout << v[(i-k +n + 1)%(n+1)] << " ";

        cout << endl;
    }
}
