#include <bits/stdc++.h>

using namespace std;

void solve() {

}

int main() {
    int t;
    cin >> t;

    while(t--)
        {
            long long a, b;
    cin >> a >> b;

    cout << min(min(a, b), (a + b) / 4) << endl;;
        }
}
