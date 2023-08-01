#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, c= 0;
        cin >> n;

        vector<int>v(n+1);

        for(int i = 1; i<=n ; i++)
        {
            cin >> v[i];
            if(v[i] == i)
                c++;
        }

        cout << c/2 + c%2 << endl;
    }
}
