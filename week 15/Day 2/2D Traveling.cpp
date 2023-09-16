#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
       int n, k, s, f;
       cin >> n >> k >> s >> f;

       vector<pair<long long, long long>>v(n);

       for(int i = 0; i<n; i++)
       {
           cin >> v[i].first >> v[i].second;

       }

       if(s<= k && f <= k)
       {
           cout << 0 << endl;
           continue;
       }

       long long ans = abs(v[s-1].first - v[f-1].first) + abs(v[s-1].second - v[f-1].second);

        long long init = 1e15, des = 1e15;
       for(int i=0; i<k; i++)
       {
           if(s <= k)
            init = 0;
           else
           init = min(init, (abs(v[s-1].first - v[i].first) + abs(v[s-1].second - v[i].second)));

           if(f <= k)
            des = 0;
           else
           des = min(des, (abs(v[f-1].first - v[i].first) + abs(v[f-1].second - v[i].second)));
       }
       ans = min(ans, (init+des));

       for(int i = k; i<n; i++)
       {
            ans = min(ans, ((abs(v[s-1].first - v[i].first) + abs(v[s-1].second - v[i].second)) +
                      (abs(v[f-1].first - v[i].first) + abs(v[f-1].second - v[i].second))));
       }

       cout << ans << endl;


    }
}
