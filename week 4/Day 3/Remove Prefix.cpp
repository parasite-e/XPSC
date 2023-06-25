#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, cnt =0, r=0;
        cin >> n;

        vector<int> v(n);
        map<int, int>mp;

        for(int i =0; i<n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        for(int i = 0; i<n; i++)
        {
            if(mp[v[i]] > 1)
            {
                cnt += r+1;
                mp[v[i]]--;
                r = 0;
            }else
            {
                r++;
            }
        }

        cout << cnt << endl;
    }
}
