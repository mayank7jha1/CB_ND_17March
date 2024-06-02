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


	for (int i = 0; i < n; i = i + 1) {

		//Count no of times a[i] comes in this array.
		int count = 0;
		//Element is a[i];


		for (int j = 0; j < n; j = j + 1) {

			if (a[j] == a[i]) {
				count = count + 1;
				a[j] = -1;

			}
		}

		cout << a[i] << " " << count << endl;

	}




}






