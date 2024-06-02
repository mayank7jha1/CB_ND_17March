#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}


	//Shifted Prefix Sum
	int pre[n + 1] = {0};
	pre[0] = 1;

	for (int i = 1; i < n; i = i + 1) {
		pre[i] = pre[i - 1] * a[i - 1];
	}

	//Normal Suffix Array

	// int suffix[n + 1] = {0};
	// suffix[n - 1] = a[n - 1];

	// for (int i = n - 2; i >= 0; i = i - 1) {
	// 	suffix[i] = suffix[i + 1] * a[i];
	// }


	//Shifted Suffix Array
	int suffix[n + 1] = {0};
	suffix[n - 1] = 1;

	for (int i = n - 2; i >= 0; i = i - 1) {
		suffix[i] = suffix[i + 1] * a[i + 1];
	}


	int Product[n];

	for (int i = 0; i < n; i = i + 1) {
		Product[i] = pre[i] * suffix[i];
	}

	for (int i = 0; i < n; i = i + 1) {
		cout << Product[i] << " ";
	}


}







