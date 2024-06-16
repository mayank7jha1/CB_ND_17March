#include<iostream>
#include<string>
#include<algorithm>
using  namespace std;

/*
	String:

	Container:
	s=t;

	Algorithms:

	Parameter 1: Address of the first block
	from where you want to do the task.

	Parameter 2: Address of the last block+1 upto
	which you want to do the task.
*/

int main() {

	int a[] = {11, 1, 14, 15, 4, 9};

	// // int n = sizeof();
	// cout << sizeof(int) << endl;
	// cout << sizeof(a) << endl;

	int n = sizeof(a) / sizeof(int);
	cout << n << endl;

	//STL:

	//By Default it sorts the array in asc. order
	sort(a, a + n);

	//Reverse: Topic: Rotational And Reversal
	// int i = 0;
	// int j = n - 1;

	// while (i < j) {
	// 	swap(a[i], a[j]);
	// 	i = i + 1;
	// 	j = j - 1;
	// }

	//reverse(a, a + n);


	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}
	cout << endl;
	// //Binary Search:

	// bool val = binary_search(a, a + n, 19);

	// cout << val << endl;

	//Upper and Lower Bound:
	//First element that is >= x.
	int *p = lower_bound(a, a + n, 9);
	cout << p - a << endl;

	//First element that is > x .
	cout << upper_bound(a, a + n, 9) - a << endl;




}




















