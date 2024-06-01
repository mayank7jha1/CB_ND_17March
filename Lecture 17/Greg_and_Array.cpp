#include<iostream>
using  namespace std;




int main() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}


	int pre[n + 1] = {0};//Size is n+1 and intialise it zero.

	pre[0] = a[0];

	for (int i = 1; i < n; i = i + 1) {
		pre[i] = pre[i - 1] + a[i];
	}

	for (int i = 0; i < n; i = i + 1) {
		cout << pre[i] << " ";
	}
}