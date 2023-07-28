#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;

	while(t--)
	{
	    int n, a, b;
	    cin >> n >> a >> b;

	    int x = n/2;

	    cout << x*a + (n-x)*b << endl;
	}
	return 0;
}
