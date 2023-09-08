#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<stack>
#include<queue>
#include<map>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--){
	bool res = 0;
	int l, r;
	cin >> l >> r;
	for (int i = max(l, 4); i <= r; i++){
		for (int j = 2; j * j <= i; j++){
			if (i % j == 0){
				cout << j << " " << i - j << endl;
				res = 1;
				break;
		}	}
		if (res == 1)
			break;
	}
	if (res == 0)
		cout << -1 << endl;
	}
	return 0;
}
