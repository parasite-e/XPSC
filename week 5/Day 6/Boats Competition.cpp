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

        vector<int>w(n);

        vector<int>ans(3000, 0);
        vector<bool>exist(3000, false);

        for(int i = 0; i<n ; i++)
            cin >> w[i];

        for(int i = 0; i<n; i++)
        {
            for(int j = i+1; j<n; j++)
            {
                if(ans[w[i]+w[j]] == 0 || (exist[i] == false && exist[j] == false))
                {
                    ans[w[i]+w[j]]++;
                    exist[i+1] = true;
                    exist[j+1] = true;
                }

            }
        }

        int a = *max_element(ans.begin(), ans.end());
        cout << a << endl;
    }
}
