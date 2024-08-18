#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n, k;

int solver(vector<int>d, int c) {


	for (int i = 0; i <= (n / k); i++) {
		d[c + (i * k)] = 0;
	}

	int s = 0;
	int e = 0;

	for (int i = 0; i < n; i++) {
		if (d[i] == 1) e = e + 1;
		else if (d[i] == -1) s = s + 1;
	}
	int ans = abs(e - s);
	return ans;
}

int main() {

	cin >> n >> k;
	vector<int>a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int max = -1;


	for (int j = 0; j < k; j++) {
		vector<int>b = a;
		int sol = solver(b, j);
		if (max < sol) {
			max = sol;
		}
	}

	cout << max << endl;

}