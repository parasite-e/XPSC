#include <iostream>
using namespace std;

int main() {
	// your code goes here

	int t;
	cin >> t;

	while(t--)
	{
	    int n;
	    cin >> n;

	    if(n%2==0)
	    {
	        for(int i = n; i>=1; i--)
	        cout << i << " ";

	        cout << endl;
	    }else
	    cout << -1 << endl;
	}
	return 0;
}
