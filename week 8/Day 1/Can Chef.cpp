#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;

	while(t--)
	{
	    int x, y;
	    cin >> x >> y;

	    x = x*15;
	    y = y*2;

	    if(x >=y)
	    cout << "YES" << endl;
	    else
	    cout << "NO" << endl;
	}
	return 0;
}

