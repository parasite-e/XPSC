#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--){

        string s;
        cin>>s;

        for(long long i=0; i<s.length(); i++)
        {
            if(s[i] == 'A' && s[i+1] == 'B')
            {
                s.erase(s.begin()+i+1);
                s.erase(s.begin()+i);
                i -= 2;
            }
            else if(s[i] == 'B' && s[i+1] == 'B')
            {
                s.erase(s.begin()+i+1);
                s.erase(s.begin()+i);
                i -= 2;
            }
        }

        cout<<s.length()<<endl;
    }
}
