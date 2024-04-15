#include<iostream>
using  namespace std;


int main() {

	int n;
	cin >> n;


	int i = 1;

	int sum = 0;

	while (i <= n) {
		// sum = 0;
		int x;
		cin >> x;

		cout << x << " ";
		sum = sum + x;

		i = i + 1;
	}

	// cout << endl;
	// cout << sum << endl;

	cout << endl << sum << endl;

	cout << (sum / n) << endl;
}




