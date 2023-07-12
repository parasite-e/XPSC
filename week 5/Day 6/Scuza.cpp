#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, q;
        cin >> n >> q;

        vector<long long>preq;
        preq.push_back(0);

        vector<int>preqmax;

        for(int i = 0; i<n; i++)
        {
            int x;
            cin >> x;

            preq.push_back(preq.back()+x);

            if(i == 0)
            {
                preqmax.push_back(x);
            }else
            {
                preqmax.push_back(max(preqmax.back(), x));
            }
        }

        for(int i = 0; i<q; i++)
        {
            int k;
            cin >> k;

            int ind = upper_bound(preqmax.begin(), preqmax.end(), k)-preqmax.begin();
        cout << preq[ind] << " ";
        }
        cout << endl;
    }
}
