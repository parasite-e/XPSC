#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        map<int , pair<int,int>>mp;

        for(long long i = 0; i<n; i++)
        {
            int x;
            cin >>x;

            if(!mp.count(x))
            {
                mp[x].first = i;
                mp[x].second = i;
            }
            else
                mp[x].second = i;
        }

        while(k--)
        {
            int a, b;
            cin >> a >> b;

            if(!mp.count(a) || !mp.count(b) || mp[a].first > mp[b].second)
                cout << "NO" << endl;

            else cout<< "YES" << endl;
        }

    }
}
