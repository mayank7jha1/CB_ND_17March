#include<iostream>
using  namespace std;

int Sum(int ptr[], int x) {

	cout << ptr << endl;
	cout << ptr + 1 << endl;

	cout << *ptr << endl;
	cout << *(ptr + 1) << endl;
	cout << ptr[1] << endl;

	ptr[1] = 10000;

	return 0;

}

int main() {
	int a[] = {11, 12, 13, 14};

	// for (int i = 0; i < 4; i = i + 1) {
	// 	cout << a[i];
	// }

	cout << a << endl;
	cout << *(a + 1) << endl;
	cout << a[1] << endl;
	// Base[1]----> *(a+1)

	int ans = Sum(a, 4);

	cout << a[1] << endl;

	// cout << ans << endl;

	// for (int i = 0; i < 4; i = i + 1) {
	// 	cout << a[i];
	// }

	// int[] ptr;
}





