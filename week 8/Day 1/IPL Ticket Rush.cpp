#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;

	while(t--)
	{
	    int a, b;
	    cin >> a >> b;

	    if(b>=a)
	    cout << 0 << endl;
	    else
	    cout << a-b << endl;
	}
	return 0;
}

