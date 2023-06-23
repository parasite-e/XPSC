#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;

	while(t--)
	{
	    long long n, val = 0, ans = 0;
	    cin >> n;

	    vector<long long>v(n);

	    for(long long i = 0; i<n ;i++)
	    cin >> v[i];

	    sort(v.begin(), v.end());

	    for(long long i = n-1; i>=0; i--)
	    {
	        if(val < v[i])
	        {
	            val = 0;
	            ans++;
	        }
	        val ^= v[i];
	    }
	    cout << ans << endl;
	}
	return 0;
}

