#include<iostream>
#include<climits>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];

	int mini = INT_MAX;
	int maxi = INT_MIN;
	int freq[n + 1] = {0};

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];

		// if (a[i] > maxi) {
		// 	maxi = a[i];
		// }

		// if (a[i] < mini) {
		// 	mini = a[i];
		// }

		int index = a[i];
		if (index > n) {
			index = n;
		}
		freq[index] = freq[index] + 1;
	}

	// int freq[maxi - mini + 1] = {0};

	//Iterating x par ulta.
	int GreaterNumber = 0;
	int ans = -1;

	for (int i = n; i >= 1; i = i - 1) {

		GreaterNumber = GreaterNumber + freq[i];
		if (GreaterNumber == i) {
			ans = i;
			break;
		}

	}


	cout << ans << endl;



}









