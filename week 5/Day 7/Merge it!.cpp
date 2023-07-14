#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int arr[5] = {0};

        for(int i = 0; i<n; i++)
        {
            int x;
            cin >> x;

            arr[x%3]++;
        }

        int m = min(arr[1], arr[2]);

        cout << arr[0] + m + (arr[1] - m)/3 + (arr[2]-m)/3 << endl;

    }
}
