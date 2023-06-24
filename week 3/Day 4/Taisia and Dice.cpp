#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, s, r, sum = 0;
        cin >> n >> s >> r;

        for(int i = 0; i<n-2;i++)
        {
            cout << 1 << " ";
            sum ++;
        }

        int x = s - r;
        int y = s- x - sum;

        cout << x << " " << y << endl;



    }
}
