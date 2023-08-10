#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int i=0;
        cin>>n;
        int k=n*(n-1)/2;
        vector<int> b(k);
        for(int i=0;i<k;i++)
        {
            cin>>b[i];
        }
        sort(b.begin(),b.end());
        int ind=0;
        int add=n-1;
        vector<int> ans;
        while(add>0)
        {
            ans.push_back(b[ind]);
            ind=ind+add;
            add--;
        }
        ans.push_back(1e9);
        for(auto i:ans)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}

