#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}


	//Put the Smallest Element at the first index.
	// int min_index = 0;

	// for (int j = 0; j < n; j = j + 1) {

	// 	if (a[j] < a[min_index]) {
	// 		min_index = j;
	// 	}

	// }

	// //swap a[min_index] with a[0]

	// int temp = a[min_index];
	// a[min_index] = a[0];
	// a[0] = temp;



	for (int i = 0; i < n - 1; i = i + 1) {

		//Mujhe ith position pe ith smallest
		//element daalna hain.

		int min_index = i;

		for (int j = i; j < n; j = j + 1) {

			if (a[j] < a[min_index]) {
				min_index = j;
			}

		}

		//swap a[min_index] with a[0]

		int temp = a[min_index];
		a[min_index] = a[i];
		a[i] = temp;
	}

	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}


}