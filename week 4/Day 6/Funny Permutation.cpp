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

        if(n == 3)
        {
            cout << -1 << endl;
            continue;
        }

        if(n%2 == 0)
        {
            for(int i = n; i>0; i--)
            cout << i << " " ;
        }else
        {
            int x = n/2 + 1;

            for(int i = x; i<=n; i++)
                cout << i << " ";

            for(int i = x-1; i>0; i--)
                cout << i << " ";
        }

        cout << endl;
    }
}
