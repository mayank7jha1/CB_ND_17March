#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}


	for (int i = 1; i < n; i = i + 1) {
		int temp = a[i];

		int j = i - 1;

		//Shifting
		while (j >= 0 and a[j] > temp) {

			a[j + 1] = a[j];
			j = j - 1;
		}

		a[j + 1] = temp;
	}


	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}
}