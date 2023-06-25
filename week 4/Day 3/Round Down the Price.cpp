#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;

        string s = to_string(n);
        long long x = n - pow(10, s.size()-1);

        cout << x << endl;
    }
}

