#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;

	while(t--)
	{
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;

	    bool serve_a = true;
	    int a = 0, b = 0;
	    for(int i = 0; i<n; i++)
	    {
	        if(serve_a == true && s[i] == 'A')
	        {
	            a++;
	            continue;
	        }

	        if(serve_a == true && s[i] != 'A')
	        {
	            serve_a = false;
	            continue;
	        }

	        if(serve_a == false && s[i] == 'B')
	        {
	            b++;
	            continue;
	        }


	        if(serve_a == false && s[i] != 'B')
	        {
	            serve_a = true;
	            continue;
	        }

	    }

	    cout << a << " " << b << endl;
	}
	return 0;
}
