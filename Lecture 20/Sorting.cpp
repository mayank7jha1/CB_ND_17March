#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	int b[n];
	int c[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i = i + 1) {
		cin >> b[i];
	}

	for (int i = 0; i < n; i = i + 1) {
		cin >> c[i];
	}


	int countB = 0;

	for (int i = 0; i < n - 1; i = i + 1) {

		int flag = 0;
		countB = countB + 1;

		for (int j = 0; j < n - i - 1; j = j + 1) {

			countB = countB + 1;

			if (a[j] > a[j + 1]) {

				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				flag = 1;

				countB = countB + 2;
			}
		}

		if (flag == 0) {
			break;
		}

	}

	int countS = 0;

	for (int i = 0; i < n - 1; i = i + 1) {

		countS = countS + 1;
		int min_index = i;

		for (int j = i; j < n; j = j + 1) {

			countS = countS + 1;
			if (b[j] < b[min_index]) {

				countS = countS + 1;
				min_index = j;
			}

		}

		countS = countS + 1;
		int temp = b[min_index];
		b[min_index] = b[i];
		b[i] = temp;
	}

	int countI = 0;

	for (int i = 1; i < n; i = i + 1) {

		countI = countI + 1;
		int temp = c[i];

		int j = i - 1;

		//Shifting
		countI = countI + 1;
		while (j >= 0 and c[j] > temp) {

			// cout << "Yo" << endl;
			countI = countI + 1;
			c[j + 1] = c[j];


			j = j - 1;
		}

		countI = countI + 1;
		c[j + 1] = temp;
	}



	cout << countB << endl;
	cout << countS << endl;
	cout << countI << endl;
}