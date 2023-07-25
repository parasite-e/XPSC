#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
       cin>>n;
       int a[n];
       for (int i = 0; i < n; i++)
       {
        cin>>a[i];
       }
       sort(a,a+n);
       int temp=1,max=1;
       for (int i = 0; i < n-1; i++)
       {
        if (a[i]==a[i+1])
        {
            temp++;
            if (max<temp)
            {
                max=temp;
            }
        }
        else{
            temp=1;
        }
       }
       cout<<n-max<<endl;

    }
}
