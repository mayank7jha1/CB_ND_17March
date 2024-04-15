#include<iostream>
using  namespace std;

int main() {

	int n;
	cin >> n;

	int total = (n * (n + 1)) / 2;

	int i = 1;
	int sum = 0;

	while (i <= n - 1) {

		int x;
		cin >> x;

		//cout << x << " ";
		sum = sum + x;

		i = i + 1;
	}

	cout << total - sum << endl;
}







