#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin >> n;

        int a =0, b = 0;
        int ans = 2e9;
        for(int i = 1; i<n; i++)
        {
            int x = (i*(n-i))/__gcd(i, n-i);

            if(ans > min(ans, x))
            {
                ans = min(ans, x);
                a = i;
                b = n-i;
            }
        }

        cout << a << " " << b <<endl;
    }
}
