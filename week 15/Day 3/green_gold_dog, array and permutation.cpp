#include <bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
       int n;
       cin >> n;

       vector<pair<int, int>>v(n), ans(n);

       for(int i = 0; i<n; i++)
       {
           cin >> v[i].first;
           v[i].second = i;

       }

    sort(v.begin(), v.end());

    for(int i = 0; i<n; i++)
    {
        ans[i].first = n-i;
        ans[i].second = v[i].second;
    }

     sort(ans.begin(), ans.end(), sortbysec);

     for(int i = 0; i<n; i++)
        cout << ans[i].first << " ";



       cout << endl;

    }
}
