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

	    if(a > 8)
	    cout << "NO" << endl;
	    else
	    {
	        if(a*b <= 500)
	        cout << "YES" << endl;
	        else
	        cout << "NO" << endl;
	    }
	}
	return 0;
}

