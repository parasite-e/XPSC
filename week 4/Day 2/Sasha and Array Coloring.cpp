#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,x;
        cin >> n;

        x = n/2;
        vector<int>a(n);

        for(int i = 0; i<n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());
        int sum = 0;
        for(int i= 0; i<x; i++)
        {
            sum += (a[n-1-i] - a[i]);
        }

        cout << sum << endl;
    }
}
