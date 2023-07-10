#include <iostream>

using namespace std;
int main()
{
	int t;
	cin >> t;

	for (int i=0;i<t;i++){
		int n;
		cin >> n;
		int a[n];
		int d=n/2;
		int sume=0,sumo=0;
		if (n%4==0){
			cout << "YES" << endl;
			for (int j=1;j<=d;j++){
				a[j]=j*2;
				 sume =sume+a[j];
				 	 a[j+d]=2*j-1;
				 sumo=sumo+a[j+d];

			}
			int b= sume-sumo;
			a[n]=a[n]+b;
			for (int k=1;k<=n;k++){
				cout << a[k]<< " ";

			}
			cout << endl;
		}else {
			cout << "NO" << endl;
		}
	}

}
