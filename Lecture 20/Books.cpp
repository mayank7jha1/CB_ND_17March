#include<iostream>
using  namespace std;

int Upper_Bound(int a[], int s, int e, int target) {

	int ans = e + 1;//Because this array has n index as e+1;
	int starting_point = s;

	while (s <= e) {

		int mid = (s + e) / 2;

		if (a[mid] > target) {
			e = mid - 1;
			ans = mid;
		} else {
			s = mid + 1;
		}
	}

	//cout << ans - starting_point << endl;
	return ans - starting_point;
}


int main() {
	int n, t;
	cin >> n >> t;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int pre[n + 1] = {0};

	pre[0] = a[0];

	for (int i = 1; i < n; i = i + 1) {
		pre[i] = pre[i - 1] + a[i];
	}

	// for (int i = 0; i < n; i = i + 1) {
	// 	cout << pre[i] << " ";
	// }
	// cout << endl;

	int maxi = 0;

	for (int i = 0; i < n; i = i + 1) {

		int x;

		if (i == 0) {
			x = t;
		} else {
			x = t + pre[i - 1];
		}

		//cout << x << endl;
		int val = Upper_Bound(pre, i, n - 1, x);

		if (maxi < val) {
			maxi = val;
		}
	}

	cout << maxi << endl;



}










