#include<iostream>
using  namespace std;

//a[i]: [+ve][0,Infinity]



int main() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}


	//n*n = Computation:

	for (int i = 0; i < n; i = i + 1) {

		//Count no of times a[i] comes in this array.
		int count = 0;

		//Element is a[i];

		int element = a[i];

		if (element == -1) {
			continue;
		}


		for (int j = 0; j < n; j = j + 1) {

			if (a[j] == element) {
				count = count + 1;
				a[j] = -1;

			}
		}

		cout << element << " " << count << endl;

	}




}






