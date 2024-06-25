#include<iostream>
#include<algorithm>
using  namespace std;

bool C1(string &x, string &y) {

	string xy = x + y;
	string yx = y + x;

	if (xy > yx) {
		return true;
	} else {
		return false;
	}
}

int main() {

	int t;
	cin >> t;

	int i = 1;
	while (i <= t) {

		int n;
		cin >> n;

		string a[n];

		for (int i = 0; i < n; i = i + 1) {
			cin >> a[i];
		}

		sort(a, a + n, C1);


		for (auto x : a) {
			cout << x;
		}

		cout << endl;
		i = i + 1;

	}
}