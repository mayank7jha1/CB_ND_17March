#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int i = 1;

	while (i <= n) {

		//My Current row is i and I want to do
		//some task for this row number i.

		int j = 1;

		while (j <= i) {

			cout << "*";

			j = j + 1;
		}

		cout << endl;

		i = i + 1;
	}
}