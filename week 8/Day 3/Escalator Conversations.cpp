#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
       int n, m, k, h;
       cin >> n >> m >> k >> h;

       vector<int>v(n);
       for(int i = 0; i<n; i++)
        cin >> v[i];

       int ans = 0;
       int x = k*m;
       for(int i = 0; i<n; i++)
       {
           if(abs(v[i] - h) < x && abs(v[i] - h) >0 && abs(v[i]-h)%k == 0)
            ans++;
       }

       cout << ans << endl;

    }
}
