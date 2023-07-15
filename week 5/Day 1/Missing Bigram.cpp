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

        vector<string>v(n-1);

        for(int i = 0; i< n-2; i++)
        {
            cin >> v[i];
        }


        bool found = false;
        string ans;
        for(int i = 0; i<n-3; i++)
        {
            string s1 = v[i];
            string s2 = v[i+1];
            if(s1[1] != s2[0])
            {
                ans += s1[1];
                ans += s1[1];
                found = true;
            }else
            {
                ans += s1[0];
            }
        }

        if(!found)
        {
             ans += v[n-3];
            ans += "a";
            cout << ans << endl;
        }else
        {
            ans += v[n-3];
            cout << ans << endl;
        }
    }
}
