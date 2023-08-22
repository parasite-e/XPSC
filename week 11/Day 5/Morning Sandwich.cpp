#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int ttcases;
    cin >> ttcases;
    while(ttcases--)
    {
    ll b, c, h;
    cin >> b >> c >> h;
    ll lagane = c+h;
    ll layer = 1;
    b--;
    while(b>0 && lagane>0)
    {
        lagane--;
        b--;
        layer+=2;
    }
    cout << layer << endl;
    }
}
