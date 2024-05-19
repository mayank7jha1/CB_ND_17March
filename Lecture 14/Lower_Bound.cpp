#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int target;
	cin >> target;

	/*
		//Lower Bound Code
		int s = 0;
		int e = n - 1;
		int ans = -1;//This store the Lower
		//bound Index of the x element.

		while (s <= e) {

			int mid = (s + e) / 2;

			if (a[mid] >= target) {
				e = mid - 1;
				ans = mid;
			} else {
				s = mid + 1;
			}
		}

		cout << ans << endl;


	*/

	int s = 0;
	int e = n - 1;
	int ans = n;//This store the Upper
	//bound Index of the x element.

	while (s <= e) {

		int mid = (s + e) / 2;

		if (a[mid] > target) {
			e = mid - 1;
			ans = mid;
		} else {
			s = mid + 1;
		}
	}

	cout << ans << endl;
}