#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;

	while(t--)
	{
	    int a, b, c;
	    cin >> a >> b >> c;

	    int cz = 0;
	    int co = 0;

	    if(a == 0)
	    cz++;
	    else
	    co++;

	    if(b == 0)
	    cz++;
	    else
	    co++;

	    if(c == 0)
	    cz++;
	    else
	    co++;

	    if(cz >= 2)
	    {
	        cout << "Water filling time" << endl;
	    }else
	    {
	        cout << "Not now" << endl;
	    }

	}
	return 0;
}

