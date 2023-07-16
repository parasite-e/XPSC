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

        map<int, bool>mp;

        for(int i =0; i<n;i++)
        {
            cin>> v[i];
            mp[v[i]] = true;
        }
        bool ans = false;
        for(int i= 0; ans == false && i<n-1; i++)
        {
            for(int j = i+1; j<n; j++)
            {
                int x = 2*v[j] - v[i];
                if(mp[x] == true)
                {
                    ans = true;
                    break;
                }
            }
        }

        if(ans)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;

    }
}
