#include <bits/stdc++.h>
using namespace std;
#define mod 10e9 + 7
int t, n,m,k;

int main() {
	// your code goes here

	cin>>t;
	while(t--){
	    cin>>n>>k;
        int a;
        int AND=-1;
        while(n--){
            cin>>a;
            if((a&k)==k)
                AND=AND&a;
        }
        if(AND==k)cout<<"yes\n";
        else cout<<"no\n";
	}
	return 0;
}
