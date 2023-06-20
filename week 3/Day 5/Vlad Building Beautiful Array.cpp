#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n,ev =0;
        cin >> n;
        vector<long long>v(n);
        long long mini = 1e9+1;
        for(int i = 0 ; i<n; i++)
        {
            cin >> v[i];
            mini= min(mini, v[i]);
            if(v[i] %2 == 0) ev++;
        }

        if(mini%2 != 0)
        {
            cout << "YES" << endl;
            continue;
        }

        if(ev == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;



    }
}
