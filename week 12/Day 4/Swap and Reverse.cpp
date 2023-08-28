#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
        {
           int n;
           int k;
           cin>>n;
           cin>>k;
           string str;
           cin>>str;
           string ans;
           vector<char> even,odd;
           for(int i=0;i<str.length();i++){
                      if(i%2==0) odd.push_back(str[i]);
                      else even.push_back(str[i]);
           }
           sort(odd.begin(),odd.end());
           sort(even.begin(),even.end());

           for(int i=0,j=0;i<even.size(),j<odd.size();i++,j++){
                      if(j<odd.size()){
                                 ans.push_back(odd[i]);
                      }
                      if(i<even.size()){
                                 ans.push_back(even[i]);
                      }
           }

           if(k%2==0){
               sort(str.begin(),str.end());
               cout<<str<<endl;
           }
           else{
                      cout<<ans<<endl;
           }

           }

           return 0;
}
