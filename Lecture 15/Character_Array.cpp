#include<iostream>
#include<cstring>
using  namespace std;

int main() {
	// int n;
	// cin >> n;

	// int a[n];

	// for (int i = 0; i < n; i = i + 1) {
	// 	cin >> a[i];
	// }


	// for (int i = 0; i < n; i = i + 1) {
	// 	cout << a[i] << " ";
	// }

	// cout << endl;

	// char b[n];

	// for (int i = 0; i < n; i = i + 1) {
	// 	cin >> b[i];
	// }


	// for (int i = 0; i < n; i = i + 1) {
	// 	cout << b[i] << " ";
	// }

	// char ch;

	// while (cin >> ch) {
	// 	cout << ch;
	// }

	// char ch;
	// while (cin.get(ch)) {
	// 	cout << ch;
	// }


	char ch[100];
	cin >> ch;
	cout << ch << endl;

	int n = strlen(ch);//This gives you the size of the character array.

	for (int i = 0; i < n; i = i + 1) {
		cout << ch[i];
	}

	cout << endl << ch[3] << endl;

	int a[] = {1, 2, 3, 4, 5, 6};
	int b[] {2, 3, 4, 5, 6};

	char ch1[] = {'M', 'a', 'y', 'a', 'n', 'k', '\0'};

	cout << ch1 << endl;

	char ch2[] = {"Mayank"};//Words
	cout << ch2 << endl;

	for (int i = 0; ch2[i] != '\0'; i = i + 1) {
		cout << ch2[i];
	}
	cout << endl;
	int count = 0;
	// "": Collection of Character/words/strings
	for (int i = 0; ch2[i] != '\0'; i = i + 1) {

		if (ch2[i] == 'a') {
			count = count + 1;
		}
	}

	cout << count << endl;


}











