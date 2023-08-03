#include<bits\stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
    string s;
    cin >> n >> s;
    vector<int> pref(n), suf(n);
    set<char> x;
    for(int i = 0; i < s.size(); i++)
    {
        x.insert(s[i]);
        pref[i] = x.size();
    }
    x.clear();
    for(int i = s.size() - 1; i >= 0; i--)
    {
        x.insert(s[i]);
        suf[i] = x.size();
    }
    int ans = 0;
    for(int i = 0; i < n - 1; i++)
    {
        ans = max(ans, pref[i] + suf[i + 1]);
    }
    cout << ans << endl;
    }
}
