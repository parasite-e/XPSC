#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;

	while(t--)
	{
	    int n, m;
	    cin >> n>> m;

	    m = m*6*6;

	    if(m>=n)
	    cout << "YES" << endl;
	    else
	    cout << "NO" << endl;

	}
	return 0;
}

