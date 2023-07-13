#include<bits/stdc++.h>

using namespace std;

vector<int>id(200010);

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        for(int i = 1; i<=n; i++)
        {
            int x;
            cin >> x;

            id[x] = i;
        }

        if(id[n] < min(id[1], id[2])) {
            cout << id[n] << ' ' << min(id[1], id[2]) << endl;
        } else if(id[n] > max(id[1], id[2])) {
            cout << id[n] << ' ' << max(id[1], id[2]) << endl;
        } else {
            cout << id[1] << ' ' << id[2] << endl;
        }

    }
}
