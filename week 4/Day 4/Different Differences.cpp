#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> k >> n;

        int j = 1, diff =  1;
        for(int i = 1; i<=k; i++)
        {
            cout << j << " ";

            if(n- (j+diff) >= k - (i+1))
            {
                j += diff;
                diff++;
            }else
            {
                j++;
            }
        }
        cout << endl;
    }
}
