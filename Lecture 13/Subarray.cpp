#include<iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int count = 0;

	for (int start = 0; start < n; start = start + 1) {

		for (int end = start; end < n; end = end + 1) {

			//Current Subarray is from start to end
			//index.

			for (int k = start; k <= end; k = k + 1) {
				cout << a[k] << " ";
			}

			count = count + 1;

			cout << endl;
		}

		cout << endl;
	}

	cout << endl << count << endl;

}







