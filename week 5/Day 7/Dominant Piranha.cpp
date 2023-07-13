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

        for(int i= 0; i<n; i++)
        {
            cin >> v[i];
        }

        int x = *max_element(v.begin(), v.end());
        int ans = -1;
        for(int i = 0; i<n; i++)
        {
            if(v[i] != x) continue;

            if(i>0 && v[i-1] != x) ans = i+1;

            if(i<n-1 && v[i+1] != x) ans = i+1;
        }

        cout << ans << endl;
    }
}
