#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;

	while(t--)
	{
	    int n, x;
	    cin >> n >> x;

	    vector<int>v(n);

	    for(int i = 0; i<n; i++)
	    cin>> v[i];

	    sort(v.rbegin(), v.rend());

	     cout << v[x-1] - 1 << endl;

	}
	return 0;
}

