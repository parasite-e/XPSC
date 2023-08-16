#include<bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--) {
        ll n, first = -1, second = -1, first1 = -1, second1 = -1;
        cin>>n;
        vector < ll > a(n), a1(n);
        vector < pair < ll, ll > > res;
        for(ll i = 0 ; i < n ; i++) {
            cin>>a[i];
        }
        for(ll i = 0 ; i < n ; i++) {
            cin>>a1[i];
        }
        for(ll i = 0 ; i < n ; i++) {
            if(a[i] != a1[i]) {
                first = i;
                break;
            }
        }
        for(ll i = n-1 ; i >= 0 ; i--) {
            if(a[i] != a1[i]) {
                second = i;
                break;
            }
        }
        for(ll i = first ; i > 0 ; i--) {
            if(a1[i] >= a1[i-1]) {
                first1 = i-1;
            }
            else {
                break;
            }
        }
        for(ll i = second ; i < (n-1); i++) {
            if(a1[i] <= a1[i+1]) {
                second1 = i+1;
            }
            else {
                break;
            }
        }
        if(first1!=-1) {
            cout<<first1+1;
        }
        else {
            cout<<first+1;
        }
        cout<<" ";
        if(second1!=-1) {
            cout<<second1+1;
        }
        else {
            cout<<second+1;
        }
        cout<<endl;
    }
}
