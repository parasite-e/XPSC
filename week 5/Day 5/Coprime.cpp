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

        vector<int>v(1001, 0);

        for(int i = 1; i<= n; i++)
        {
            int temp;
            cin >> temp;

            v[temp] = i;
        }


        int ans = -1;

        for(int i = 1; i<=1000; i++)
        {
            for(int j = 1; j<= 1000; j++)
            {
                if(int(__gcd(i,j)) == 1 && v[i] && v[j])
                    ans = max(ans, v[i]+v[j]);

            }
        }

        cout << ans << endl;
    }
}
