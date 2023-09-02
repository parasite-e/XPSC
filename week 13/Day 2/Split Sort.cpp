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
        int arr[n];
        map<int, int>mp;
        for(int i = 0; i<n; i++)
        {
            cin >> arr[i];

            mp[arr[i]] = i;
        }
        int cnt = 0;

        for(int i = 2; i<=n; i++)
        {
            if(mp[i] < mp[i-1])cnt++;
        }

        cout << cnt << endl;
    }
}
