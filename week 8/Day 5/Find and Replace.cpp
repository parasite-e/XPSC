#include<bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;

    while(t--)
    {
        int n, f = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            // char ch=s[i];
            for (int j = i + 1; j < n; j++)
            {
                if (s[i] == s[j])
                {
                    if ((j - i) & 1)
                    {
                        f = 1;
                        break;
                    }
                }
            }
        }
        if (f == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
