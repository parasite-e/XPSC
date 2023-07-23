#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;

	while(t--)
	{
	    int a, b;
	    cin >> a >> b;

	    if(b > a)
	    {
	        cout << a+2*(b-a) << endl;
	    }else
	    cout << b << endl;
	}
	return 0;
}

