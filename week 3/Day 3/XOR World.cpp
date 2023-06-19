#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;

    if(n%2 == 0)
    {
        long long x =(m-n)+1;
        if(x%2 == 0)
        {
            if((x/2)%2 == 0) cout << 0 << endl;
            else cout << 1 << endl;
        }
        else
        {
            if((x/2)%2 == 0) cout << m << endl;
            else cout << m+1 << endl;
        }
    }
    else
    {
       long long x =(m-n);

       if(x%2 == 0)
        {
            if((x/2)%2 == 0) cout << n << endl;
            else cout << 1+n << endl;
        }
        else
        {
            if((x/2)%2 == 0) cout << m-n + 1 << endl;
            else cout << m+n << endl;
        }

    }
}
