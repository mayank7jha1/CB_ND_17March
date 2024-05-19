#include<iostream>
using  namespace std;

int main() {
	long long n, m;
	cin >> n >> m;

	long long s = 0, e = 10000000000;
	long long ans = 0;

	if (m >= n) {
		cout << n << endl;
		return 0;
	}

	while (s <= e) {
		long long mid = (s + e) / 2;

		long long LHS = n - m;
		long long RHS = (mid * (mid + 1)) / 2;

		if (LHS <= RHS) {
			ans = mid;
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}

	cout << ans + m << endl;

}







