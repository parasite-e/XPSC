#include<bits/stdc++.h>

using namespace std;

vector<long long>v[200005];
long long leaf[200005];
bool visited[200005];

long long count_leaf(long long src)
{
    visited[src] = true;
    long long ans = 0;

    bool l = true;

    for(long long i = 0; i<v[src].size(); i++)
    {
        if(!visited[v[src][i]])
        {
            l = false;
            ans += count_leaf(v[src][i]);
        }
    }

    if(l) return leaf[src]=1;
    else return leaf[src] = ans;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        memset(visited, false, sizeof(visited));
        memset(leaf, 0, sizeof(leaf));

        long long n, e;
        cin >> n;
        e = n-1;

        while(e--)
        {
            long long a, b;
            cin >> a >> b;

            v[a].push_back(b);
            v[b].push_back(a);
        }

        long long q;
        count_leaf(1);
        cin >> q;

        while(q--)
        {
            long long x, y;
            cin >> x >> y;

            cout << leaf[x]*leaf[y] << endl;
        }

        for(long long i= 1;i<=n; i++)
        {
            v[i].clear();
        }

    }
}
