#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n, ans = 0;
        cin >> n;
        vector<long long int>v(n);
        priority_queue<long long int>pq;

        for(long long i = 0 ; i<n; i++)
            cin >> v[i];



        for(long long i = 0;i<n; i++)
        {
            if(v[i] > 0)
            {
                pq.push(v[i]);
            }
            if(v[i] == 0)
            {
                if(!pq.empty())
                {
                    ans += pq.top();
                    pq.pop();
                }
            }
        }

        cout << ans << endl;

    }
}

