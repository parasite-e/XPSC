#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;

	while(t--)
	{
	    int n;
	    cin >> n;

	    vector<int>v(n), s(n);

	    for(int i = 0; i<n; i++)
	    cin >> v[i];

	    s = v;
	    sort(s.begin(), s.end());
	    int ans = 0;
	    for(int i = 0; i<n; i++)
	    {
	        if(v[i] > s[0])
	        ans++;
	    }
	    cout << ans << endl;
	}
	return 0;
}

