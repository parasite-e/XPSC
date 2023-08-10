#include<bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
    string s;
    cin>>s;
    int n = s.size();
    int pos =n;
    for(int i=n-1;i>=0;i--){
       if(s[i]-'0'>=5){
         int prev = i-1;
         while(prev>=0 && s[prev]=='9'){
             prev--;
         }
         if(prev==-1){
          pos =1;
          s = '1'+s;
          break;
         }
         else{
           i = prev;
           pos = prev+1;
           int x = s[i]-'0';
           x++;
           s[i] = (char)(x+'0');
           i++;
         }
       }
    }
      for(int i=pos;i<s.size();i++){
        s[i] = '0';
      }
      cout<<s<<endl;
   }
}


