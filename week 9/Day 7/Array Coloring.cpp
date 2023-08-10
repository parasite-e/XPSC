#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int x;
        cin>>x;
        int a[x],c=0;
        for(int i=0; i<x; i++){
            cin >> a[i];
            if(a[i]%2 != 0){
                c++;
            }
        }
        if(c%2 == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
