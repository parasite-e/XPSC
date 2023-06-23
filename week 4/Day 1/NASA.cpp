#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

	vector<long long>palindrome;

	for(int i = 0; i<32768; i++)
	{
	    string s = to_string(i);
	    string rev = s;
	    reverse(rev.begin(), rev.end());

	    if(rev == s)
	    palindrome.push_back(i);

	}

	int t;
	cin >> t;

	while(t--)
	{
	    long long n;
	    cin >> n;
	    long long ans = 0+n;

	    vector<long long>v(n);
	    unordered_map<long long, long> mp;


	    for(long long i = 0; i<n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;

        }

        for(long long i = 0; i<n; i++)
        {
            for(long long j = 0; j<palindrome.size(); j++)
            {
                long long result = v[i] ^ palindrome[j];
                ans+= mp[result];
            }
        }

        cout << (ans)/2 << endl;

	}
	return 0;
}
