#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;

	while(t--)
	{
	     int n,m,k;
        cin>>n>>m>>k;

        n -= k;
        int a = (n/m);
        if(n%m) a++;
        cout<<a+1<<endl;
	}
	return 0;
}

