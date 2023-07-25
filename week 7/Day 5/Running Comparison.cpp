#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n), v1(n);
        for(int i = 0; i<n; i++)
            cin >> v[i];

        for(int i = 0; i<n; i++)
            cin >> v1[i];

        int c = 0;
        for(int i = 0; i<n; i++)
        {
            int a = v[i]*2, b = v1[i]*2;
            if(v1[i]<=a && v[i]<=b) c++;
        }
        cout<<c<<endl;
    }
}
