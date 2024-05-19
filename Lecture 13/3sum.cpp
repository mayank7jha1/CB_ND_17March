#include<iostream>
using  namespace std;

int main() {
	int t;
	cin >> t;

	int i = 1;
	while (i <= t) {

		int n;
		cin >> n;
		int a[n];

		for (int i = 0; i < n; i = i + 1) {
			cin >> a[i];

			//THIS IS OPTIONAL
			//This is because we are asked to find triplets
			//of the last digit.
			// a[i] = a[i] % 10;
		}

		int flag = 0;//This tells you for the current TC you have found the
		//triplet or not.


		//Logic For the Current TC:
		//Find the Triplet sum = target.
		//(a[i],a[j],a[k]):


		//First Element of the triplet
		for (int i = 0; i < n - 2; i = i + 1) {

			//Second Element of the Triplet
			for (int j = i + 1; j < n - 1; j = j + 1) {

				//Third Element of the Triplet
				for (int k = j + 1; k < n; k = k + 1) {

					if (((a[i] + a[j] + a[k]) % 10) == 3) {

						//Don't use return 0 as
						//there are multiple test cases.

						// cout << "YES" << endl;
						// return 0;
						flag = 1;
						//You are using flag to get out of k loop
						break;

					}

				}
				//After Break You are standing here.
				if (flag == 1) {
					//You are using flag to get out of j loop
					break;
				}

			}

			//After Break You will be standing here.

			if (flag == 1) {
				//You are using flag to get out of i loop
				break;
			}

		}




		if (flag == 1) {
			cout << "YES" << endl;
		} else {
			cout << "No" << endl;
		}

		i = i + 1;
	}
}