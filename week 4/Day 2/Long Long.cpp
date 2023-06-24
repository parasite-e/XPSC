#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;
        vector<long long>a(n);
        long long cnt = 0, sum = 0;

        for(long long i= 0; i<n ;i++)
        {
            cin >> a[i];
        }
        bool st = true;
        for(int i = 0;i < n ;i++)
        {
            sum += abs(a[i]);

            if(a[i] < 0)
            {
                if(st) cnt++;
                st = false;
            }

            if(a[i] > 0) st = true;
        }

        cout << sum << " " << cnt << endl;
    }
}
