#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int left = 0;
	int right = n - 1;

	while (left <= right) {

		//We want to swap the leftmost element
		//with rightmost element.

		int temp = a[left];
		a[left] = a[right];
		a[right] = temp;

		//Update my New leftmost and rightmost index
		//for elements.
		left = left + 1;
		right = right - 1;

	}

	//Print the reversed array.

	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}


}