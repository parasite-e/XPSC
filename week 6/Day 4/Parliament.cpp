#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;

	while(t--)
	{
	    int n, x;
	    cin >> n >> x;
	    int y = n/2 + n%2;

	    if(x >= y)
	    cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}

