#include <bits/stdc++.h>
using namespace std;

 int main()
 {
	 int t;
	 cin >> t;
	 while(t--){
		 int n, sum = 0;
		 cin >> n;

		 for (int i = 0;i < n; i++){
			 int a;
			 cin >> a;
			 sum += a;
		 }

   if(sum < n)cout << "1\n";
   else cout << sum - n << "\n";
	 }
 }
