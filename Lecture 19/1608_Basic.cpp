#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	//Basic Approach:
	int ans = -1;
	for (int x = 1; x <= n; x = x + 1) {

		int count = 0;
		/*
			Current x ke liye
			kitne number hain jo x se bade
			ya barabar hain array me
		*/

		//Iterating over array.
		for (int i = 0; i < n; i = i + 1) {

			if (a[i] >= x) {
				count = count + 1;
			}
		}

		if (count == x) {
			//We have found the answer.
			ans = x;
			break;
		}
	}

	cout << ans << endl;


}









