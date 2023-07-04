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

        if(n%3 == 0)
        {
            int x = n/3;
            cout << x << " " << x+1 << " " << x-1 << endl;
        }else
        {
            int x = n/3;
            int y = n%3;

            if(y == 1)
                cout << x << " " << x+2 << " " << x-1 << endl;
            else
                cout << x+1 << " " << x+2 << " " << x-1 << endl;
        }
    }
}
