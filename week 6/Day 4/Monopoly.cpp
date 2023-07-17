#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        vector<int>v(4);
        int sum = 0;

        for(int i = 0; i<4; i++)
        {
            cin >> v[i];
            sum+= v[i];
        }
        int m = *max_element(v.begin(), v.end());
        sum -= m;
        if(m > sum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
