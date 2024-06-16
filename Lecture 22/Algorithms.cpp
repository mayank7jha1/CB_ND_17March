#include<iostream>
#include<string>
#include<algorithm>
using  namespace std;

// namespace mayank {
// cin() {

// }
// };

//

// cout--->output stream.


// namespace rahul {
// void cout() {

// }

// }



// namespace samyak {
// void sum() {
// 	int x = 10, y = 20;
// 	cout << x + y << endl;
// }

// }

// namespace mayank {
// void sum() {
// 	int x = 10, y = 20;
// 	cout << x - y << endl;
// }
// }


// mayank::sum
// mayank::cin

// cout,cin,strlen

/*
	String:

	Container:
	s=t;

	Algorithms:

	Parameter 1: Address of the first block
	from where you want to do the task.

	Parameter 2: Address of the last block+1 upto
	which you want to do the task.

	cin,cout:keywords meaning?
*/

int main() {

	rahul::cout << "Mayank";
	std::cout << "Yjb";
	int a[] = {11, 1, 14, 15, 4, 9};

	// // int n = sizeof();
	// cout << sizeof(int) << endl;
	// cout << sizeof(a) << endl;

	int n = sizeof(a) / sizeof(int);
	cout << n << endl;

	//STL:

	//By Default it sorts the array in asc. order
	//sort(a, a + n);

	//Reverse: Topic: Rotational And Reversal
	// int i = 0;
	// int j = n - 1;

	// while (i < j) {
	// 	swap(a[i], a[j]);
	// 	i = i + 1;
	// 	j = j - 1;
	// }

	reverse(a, a + n);


	// for (int i = 0; i < n; i = i + 1) {
	// 	cout << a[i] << " ";
	// }
	// cout << endl;
	// //Binary Search:

	// bool val = binary_search(a, a + n, 19);

	// cout << val << endl;

	// //Upper and Lower Bound:

	// lower_bound(a, a + n,);



}




















