#include<iostream>
using  namespace std;

int main() {

	int a, b;
	cin >> a >> b;

	int i = 1;

	int ans = 1;

	//I want to initialise it with a value can will
	//not impact my multiplication.

	while (i <= b) {

		ans = ans * a;

		i = i + 1;
	}

	cout << ans << endl;
}