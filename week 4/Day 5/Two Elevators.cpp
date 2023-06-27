#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b, c;
        cin >> a >> b >>c;

        if(b<c)
        {

            int x = 2*c-b;

            if(x==a) cout << 3 << endl;
            else if(x>a) cout << 1 << endl;
            else cout << 2 << endl;

        }else {
            if(a == b) cout << 3 << endl;
            else if(a < b) cout << 1 << endl;
            else cout << 2 << endl;

        }
    }
}
