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

        vector<pair<int, int>>v(n);
        vector<bool>b(n, false);

        for(int i = 0; i<n; i++)
        {
            cin >> v[i].second;
        }

        for(int i = 0; i<n; i++)
        {
            cin >> v[i].first;
        }

        sort(v.begin(), v.end(), greater<pair<int, int>>());
        int i = 0;
        while(i< n)
        {
            if(k >= v[i].first && b[i] == false)
            {
                k+= v[i].first;
                b[i] = true;
                i = 0;
            }else
            {
                i++;
            }
        }
        cout << k << endl;

    }
}
