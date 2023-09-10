#include<bits/stdc++.h>

using namespace std;

int main()
{

        int n, q;
        cin >> n >> q;
        vector<int>v(n+1);

        for(int i = 0; i<n; i++)
            {
                cin >> v[i];
            }

        for(int i = 0; i<q; i++)
        {
            int x;
            cin >> x;

            int p = find(v.begin(), v.end(),x) - v.begin();
            cout << p +1 << " ";
            rotate(v.begin(), v.begin()+p, v.begin()+p+1);
        }
        cout << endl;
}
