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

	    int x = 100 - a;
	    int y = 200 - 2*b;

	    int z = min(x, y);

	    if(x == z && y == z)
	    cout << "Both" << endl;
	    else if(y == z && x !=z)
	    cout << "SECOND" << endl;
	    else if(x == z && y != z)
	    cout << "FIRST" << endl;
	}
	return 0;
}

