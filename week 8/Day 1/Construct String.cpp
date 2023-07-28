#include<bits/stdc++.h>
using namespace std;
#define ll         long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
	 ll n,i;
	 cin>>n;
	 string s;
	 cin>>s;
	 stack<char>st;
	 for(i=0;i<n;i++)
	 {
	     st.push(s[i]);
	     if(st.size()>=3)
	     {
	         char x=st.top();
	         st.pop();
	         char y=st.top();
	         st.pop();
	         char z=st.top();
	         st.pop();
	         if(x==y && x==z){
	             st.push(x);
	      }
	         else
	         {
	             st.push(z);
	             st.push(y);
	             st.push(x);
	         }
	     }
	 }
	 string s1="";
	 while(st.size())
	 {
	     s1+=st.top();
	     st.pop();
	 }
	 reverse(s1.begin(),s1.end());
	 cout<<s1<<endl;
	}
	return 0;
}
