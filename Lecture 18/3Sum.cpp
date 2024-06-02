#include<iostream>
using  namespace std;

int main() {

	int t;
	cin >> t;

	for (int i = 1; i <= t; i = i + 1) {

		int n;
		cin >> n;

		int a[n];

		int freq[10] = {0};//For Digits.

		for (int i = 0; i < n; i = i + 1) {

			cin >> a[i];
			a[i] = a[i] % 10;
			int digit = a[i];

			if (freq[digit] < 3) {
				freq[digit] = freq[digit] + 1;
			}

		}

		// for (int i = 0; i < 10; i = i + 1) {

		// 	if (freq[i] > 0) {
		// 		cout << i << " " << freq[i] << endl;
		// 	}
		// }


		int final[31] = {0};
		int k = 0;

		for (int i = 0; i < 10; i = i + 1) {

			//i--->digit

			while (freq[i] > 0) {

				final[k] = i;

				k = k + 1;
				freq[i] = freq[i] - 1;

			}
		}

		// for (int i = 0; i < k; i = i + 1) {
		// 	cout << final[i] << " ";
		// }
		// cout << endl;
		// cout << endl;


		int flag = 0;

		for (int i = 0; i < k - 2; i = i + 1) {

			for (int j = i + 1; j < k - 1; j = j + 1) {

				for (int m = j + 1; m < k; m = m + 1) {

					if ((final[i] + final[j] + final[m]) % 10 == 3) {

						flag = 1;
						cout << "Yes" << endl;
						break;
					}

				}

				if (flag == 1) {
					break;
				}

			}

			if (flag == 1) {
				break;
			}
		}


		if (flag == 0) {
			cout << "No" << endl;
		}

	}

}