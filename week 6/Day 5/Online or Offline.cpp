#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;

	while(t--)
	{
	    double a, b;
	    cin >> a >> b;

	    a = a - a/10.0;

	    if( a > b)
	    cout << "DINING" << endl;
	    else if(b > a)
	    cout << "ONLINE" << endl;
	    else
	    cout << "EITHER" << endl;
	}
	return 0;
}

