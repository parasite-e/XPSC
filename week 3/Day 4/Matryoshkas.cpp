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

        multiset<int>m;

        for(int i = 0; i<n ; i++)
        {
            int x;
            cin >> x;

            m.insert(x);
        }
        int ans = 0;
        while(!m.empty())
        {
            int c = *m.begin();

            while(true)
            {
                if(m.find(c+1) == m.end())
                {
                    ans++;
                     m.erase(m.find(c));
                     break;
                }
                else
                {
                    m.erase(m.find(c));
                    c++;
                }
            }
        }
        cout << ans << endl;
    }
}
