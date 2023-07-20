#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;

	while(t--)
	{
	    int x, y;
	    cin >> x >> y;

	    int n = x*5;
	    int m = y*2 + x;

	    cout << min(n,m) << endl;
	}
	return 0;
}

