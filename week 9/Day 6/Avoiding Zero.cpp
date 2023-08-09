
#include <bits/stdc++.h>
using namespace std;

 int main()
 {
	 int t;
	 cin >> t;
	 while(t--)
    {
        int N;
        cin >> N;
        vector<int> a(N);
        int sum = 0;

        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
             sum += a[i];
        }

        if (sum == 0) {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES\n";

        if (is_sample(a)) continue;

        sort(a.begin(), a.end());
        if (sum > 0) reverse(a.begin(), a.end());
        for (int x: a) cout << x << " ";
        cout << endl;

    }
 }
