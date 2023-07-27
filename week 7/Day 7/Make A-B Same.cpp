#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;

	while(t--)
	{
	    int n;
		cin>>n;
		int a[n],b[n];
		int f=1,z=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]!=b[i]&&a[i]==1)
			{
				f=0;
				break;
			}
		}
		if(a[0]!=b[0]||a[n-1]!=b[n-1])
			f=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]!=0)
				z=1;
		}
		if(z==0)
		{
			for(int i=0;i<n;i++)
			{
				if(b[i]==1)
					f=0;
			}
		}
		if(f)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}

