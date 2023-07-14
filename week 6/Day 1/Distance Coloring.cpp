#include<bits/stdc++.h>

using namespace std;

const int MOD = 1e9+7;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        if(n <= k)
        {
            long long p = 1;
            for(long long i = 0; i< n; i++)
            {
                p = (p*k) %MOD;
                k--;
            }
            cout << p << endl;
        }else
        {
            long long p = 1;

            for(long long i = 1; i<=k; i++)
            {
                p = (p*i)%MOD;
            }
            cout << p << endl;
        }
    }
}
