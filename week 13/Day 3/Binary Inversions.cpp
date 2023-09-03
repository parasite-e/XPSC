#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int>v(n);
        bool flag = false;
        int idxz = 2e6;
        int idxo = 0;
        int cntz = 0, cnto = 0;
        for(int i = 0; i<n; i++)
        {
            cin >> v[i];
            if(v[i] == 0)
            {
                cntz++;
                idxz = min(idxz, i);
            }
            else
            {
                cnto++;
                idxo = max(idxo, i);
            }
        }

        if(cntz > cnto)
        {
            v[idxz] = 1;
        }
        else
        {
            v[idxo] = 0;
        }

        int x = 0;
        int ans = 0;
        for(int i = 0; i<n; i++)
        {
            if(v[i] == 1) x++;
            else
            {
                ans += x;
            }
        }

        cout << ans << endl;
    }
}
