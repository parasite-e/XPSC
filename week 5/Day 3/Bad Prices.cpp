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

        vector<int>v(n), a(n);

        for(int i= 0; i<n; i++)
            cin >> v[i];

        int ans = 0;
        int rmin = INT_MAX;
        for(int i = n-1; i>=0; i--)
        {

            if(v[i] > rmin)
                ans++;

            rmin = min(rmin, v[i]);
        }
        cout << ans << endl;
    }
}
