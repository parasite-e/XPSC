#include<bits/stdc++.h>

using namespace std;

const int inf = 1e9 + 7;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<long long>a(n), b(n);

        for(int i = 0; i<n; i++)
            cin >> a[i];

        for(int i = 0; i<n; i++)
            cin >> b[i];

        int z = inf;

        for(int i = 0; i<n; i++)
        {
            if(b[i] != 0)
                z = min((long long)z, a[i] - b[i]);
        }

        if(z < 0)
        {
            cout << "No" << endl;
            continue;
        }

        if(z == inf)
        {
            cout << "Yes" << endl;
            continue;
        }
        bool possible = true;

        for(int i = 0; i<n; i++)
        {
            if((a[i] - b[i] < z && b[i] != 0) || (a[i] - b[i] > z))
            {
                cout << "No" <<endl;
                possible = false;
                break;
            }
        }

        if(possible)
           cout << "Yes" << endl;
    }
}
