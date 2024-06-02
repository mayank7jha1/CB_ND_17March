#include<iostream>
using  namespace std;

/*
Assumption: First Array is Sorted.

*/
int n, m;
int a[200001], b[200001];

int Upper(int x) {
	int s = 0;
	int e = n - 1;
	int ans = n;//This can never become your answer.

	while (s <= e) {
		int mid = (s + e) / 2;

		if (a[mid] > x) {
			ans = mid;
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}

	return ans;
}


int main() {

	cin >> n >> m;

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	for (int i = 0; i < m; i = i + 1) {
		cin >> b[i];
	}

	//I will iterate over b and har ek element ka upper bound nikal raha hu.
	for (int i = 0; i < m; i = i + 1) {

		int ans = Upper(b[i]);

		cout << ans << " ";
	}


}