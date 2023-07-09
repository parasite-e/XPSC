#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        double n;
        cin >> n;

        vector<long long>v(n);

        double sum = 0;
        for(int i = 0; i<n; i++)
        {
             cin >> v[i];
             sum += v[i];
        }

        int x = ceil(sum/n);
        cout << x << endl;

    }
}
