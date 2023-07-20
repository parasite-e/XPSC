#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;

	while(t--)
	{
	    int n;
	    cin>>n;

	    int x = n % 10;

	    if(x < 5) n = n-x;
	    else
	    n = n+ (10-x);

	    cout << 100 - n << endl;

	}
	return 0;
}

