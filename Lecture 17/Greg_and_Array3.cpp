#include<iostream>
using  namespace std;



long long a[100002] = {0};
long long l[100002] = {0};
long long r[100002] = {0};
long long d[100002] = {0};

long long OpCount[100002] = {0};
long long difference[100002] = {0};




int main() {

	int n, m, k;
	cin >> n >> m >> k;

	for (int i = 1; i <= n; i = i + 1) {
		cin >> a[i];
	}

	for (int i = 1; i <= m; i = i + 1) {
		cin >> l[i] >> r[i] >> d[i];
	}

	for (int i = 1; i <= k; i = i + 1) {

		int x, y;
		cin >> x >> y;

		OpCount[x] = OpCount[x] + 1;
		OpCount[y + 1] = OpCount[y + 1] - 1;
	}

	for (int i = 1; i <= m; i = i + 1) {
		OpCount[i] = OpCount[i - 1] + OpCount[i];
	}

	for (int i = 1; i <= 100002; i = i + 1) {

		long long x = l[i];
		long long y = r[i];

		difference[x] = difference[x] + (d[i] * OpCount[i]);
		difference[y + 1] = difference[y + 1] - (d[i] * OpCount[i]);

	}

	for (int i = 1; i <= 100002; i = i + 1) {
		difference[i] = difference[i - 1] + difference[i];
	}

	for (int i = 1; i <= n; i = i + 1) {
		a[i] = a[i] + difference[i];
	}


	for (int i = 1; i <= n; i = i + 1) {
		cout << a[i] << " ";
	}

}









