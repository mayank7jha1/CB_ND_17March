#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}


	//Bubble Sort:
	// [l,r]--->r-l+1
	// n-2---->0 loop : (n-2-0+1)=n-1

	for (int i = 0; i < n - 1; i = i + 1) {

		//Task i: You are performing task i
		//You want to put the ith largest at the
		//ith largest position from end.

		for (int j = 0; j < n - i - 1; j = j + 1) {

			if (a[j] > a[j + 1]) {
				//Swap:
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}


		}
	}


	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}
}