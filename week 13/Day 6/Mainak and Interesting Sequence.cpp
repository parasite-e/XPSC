#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n,m;
        cin >> n >> m;

        if(n%2 == 0 && m&2 !=0 || n > m)
        {
            cout << "NO" << endl;
            continue;
        }

        if(n%2==0)
        {
            cout << "YES" << endl;
            for(long long i = 0; i<n-2; i++)
                cout << 1 << " ";

            long long x = (m-n+2)/2;
            cout << x << " " << x << endl;
         }else if(n%2 != 0)
         {
             cout << "YES" << endl;
             for(long long i = 0; i<n-1;i++)
                cout << 1 << " ";

            long long y = m-n+1;
            cout << y << endl;
         }
    }
}
