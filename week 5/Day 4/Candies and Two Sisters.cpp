#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int r[n],k=0,m;

	for(int i=0;i<n;i++){
		cin >> a[i];

		if(a[i]%2==0){

			 m=a[i]/2 -1;
			 r[k]=m;
			 k++;

			    }else {
			    	m=a[i]/2;
			    	r[k]=m;
			    	k++;

			    	}


		}
		for (int i=0;i<n;i++){
			cout << r[i] << endl;
			}



	}
