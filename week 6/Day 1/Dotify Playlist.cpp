#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

	int t;
	cin >> t;

	while(t--)
	{
	    int n, k, l;
	    cin >> n >> k >> l;

	    vector<int>v;
	    int i = 0;
	    while(n--)
	    {
	        int m, la;
	        cin >> m >> la;

	        if(la == l)
	        {
	            v.push_back(m);
	            i++;
	        }
	    }

	    if(i < k)
	    cout << -1 << endl;
	    else
	    {
	        sort(v.begin(), v.end(), greater<int>());
	        int j = 0;
	        int sum = 0;

	        while(j < k)
	        {
	            sum += v[j];
	            j++;
	        }

	        cout << sum << endl;
	    }
	}
	return 0;
}
