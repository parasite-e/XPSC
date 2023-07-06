#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x, y;
        cin >> x >> y;

        if(x > y || y%x != 0)
            cout << 0 << " " << 0 << endl;
        else
        {
            int b = y/x;

            cout << 1 <<" " << b << endl;
        }
    }
}
