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

        vector<int>a(n), b(n);

        for(int i= 0; i<n; i++)
            cin >> a[i];

        for(int j = 0; j<n; j++)
            cin >> b[j];

        cout << b[0] - a[0] << " ";

        for(int i = 1; i<n; i++)
        {
            if(a[i] < b[i-1])
            {
                cout << b[i] - b[i-1] << " ";
            }else
            {
                cout << b[i] - a[i] << " ";
            }
        }
        cout << endl;
    }
}
