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


	//Last Index:
	int ans = -1;
	//I have initialised it with a variable that can never become a answer.


	for (int i = 0; i < n; i = i + 1) {

		if (a[i] == key) {
			ans = i;
		}

	}

	cout << ans << endl;

	//First Index :

	int ans2 = -1;
	int flag = 0;

	for (int i = 0; i < n; i = i + 1) {

		if ((flag == 0) and (a[i] == key)) {
			ans2 = i;
			flag = 1;
		}

	}

	cout << ans2 << endl;



}






