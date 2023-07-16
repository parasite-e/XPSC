#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    string s;
	    cin>>s;

	    unordered_map<char,int>m;

	    int c2=0,c1=0;
	    for(long long i=0;i<n;i++)
	    {
	        m[s[i]]++;
	    }
	    for(auto l:m)
	    {
	        if(l.second%2==1)
	        {
	            c1++;
	        }
	        else
	        {
	            c2++;
	        }
	    }
	    if(c1>1)
	    {
	        cout<<0<<endl;
	    }
	    else if(c1==1)
	    {
	        if(c2==0)
	        {
	            cout<<2<<endl;
	        }
	        else
	        {
	            cout<<1<<endl;
	        }
	    }
	    else
	    {
	        cout<<1<<endl;
	    }
	}
	return 0;
}
