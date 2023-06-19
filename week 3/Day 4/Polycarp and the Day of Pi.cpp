#include<bits/stdc++.h>

using namespace std;

const string pi = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        int cnt = 0;
        int i = 0;
        while(true && i <= 30)
        {
            if(pi[i] != s[i])
            {
                break;
            }
            cnt++;
            i++;
        }
        cout << cnt <<endl;
    }
}
