#include <bits/stdc++.h>

using namespace std;

int main() {

	int t;
	cin >> t;
	while (t--) {
		int n;
		string s;
		cin >> n >> s;
		int ans = 0;
		int val = 0;
		for (int i = 0; i < n; ++i) {
			if (s[i] == '(') ++val;
			else {
				--val;
				if (val < 0) {
					val = 0;
					++ans;
				}
			}
		}
		cout << ans << endl;
	}

	return 0;
}
