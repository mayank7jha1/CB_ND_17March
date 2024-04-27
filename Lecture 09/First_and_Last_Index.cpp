#include<iostream>
using  namespace std;


//Linear Search

int main() {

	int n;
	cin >> n;

	int key;
	cin >> key;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	// for (int i = 0; i < n; i = i + 1) {

	// 	if (a[i] == key) {
	// 		cout << "Yes" << endl;
	// 		//Stop The Program.
	// 		return 0;
	// 	}
	// }

	// cout << "No" << endl;

	int flag = 0;

	for (int i = 0; i < n; i = i + 1) {

		if (a[i] == key) {
			flag = 1;
		}
	}

	if (flag == 1) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}


}






