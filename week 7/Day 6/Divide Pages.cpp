#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

	int t;
	cin >> t;

	while(t--)
	{
	    int n;
	    cin >>n;
	    vector<int>v(n);
	    int e = 0, o =0;

	    for(int i = 0; i<n; i++)
	    {
	        cin >> v[i];
	        if(v[i] %2 == 0)
	        e++;
	        else
	        o++;
	    }

	    if(e == n)
	    cout << "YES" << endl;
	    else if(o == n && (n%2 == 0))
	    cout << "YES" << endl;
	    else if(o%2 == 0)
	    cout << "YES" << endl;
	    else
	    cout << "NO" << endl;



	}

	return 0;
}

