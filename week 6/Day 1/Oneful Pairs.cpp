#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a, b;
	cin >> a >> b;

	int x = a+ b + (a*b);

	if(x == 111)
	cout << "Yes" << endl;
	else
	cout << "NO" << endl;
	return 0;
}
