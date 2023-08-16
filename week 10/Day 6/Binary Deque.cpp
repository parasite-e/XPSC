#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--){
        int n,k;cin>>n>>k;
        int arr[n];
        int sm=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sm+=arr[i];
        }
        if(k>sm){
            cout<<-1<<endl;
        }
        else{
            int ans=0,i=0,j=0;
            sm=0;
            while (sm<k){
                sm+=arr[i];
                i+=1;
            }
            while(i<n && arr[i]==0){
                i+=1;
            }
            ans=i;
            while(i<n){
                if (arr[i]==0){
                    ans=max(ans,i-j+1);
                    i+=1;
                }
                else{
                    while(arr[j]!=1){
                        j+=1;
                    }
                    j+=1;
                    ans=max(ans,i-j+1);
                    i+=1;
                }
            }
            cout<<n-ans<<endl;

        }



    }
}

