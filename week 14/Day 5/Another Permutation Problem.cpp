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
        int sum = 0;

        for(int i = 1; i<n; i++)
            sum += i*i;

        cout << sum << endl;
    }
}
