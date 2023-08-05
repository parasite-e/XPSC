#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
		int l = 1, r = n, x= 1;
		while (l <= r)
            cout << ((x ^= 1) ? l++ : r--) << ' ';

		cout << endl;
    }
}
