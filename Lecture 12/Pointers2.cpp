#include<iostream>
using  namespace std;

int main() {

	//Static Variable:
	int x = 17;
	cout << x << endl;

	//Static Arrays:
	int a[4] = {0};

	a[2] = 156;

	for (int i = 0; i < 4; i = i + 1) {
		cout << a[i] << " ";
	}

	cout << endl;
	cout << "----------------" << endl;


	//Dynamic Variable : Single Variable
	//The value of variable is 19. It is not an array
	int*b = new int(19);
	int *c = new int{24};


	//Deleting/Freeing a Dynamic variable:

	delete c;

	cout << *c << endl;


	// //Address of the block in heap memory.
	// cout << b << endl;

	// //Value of the block stored in heap memory.
	// cout << *b << endl;

	// int p = (*b);
	// cout << p << endl;

	// //Dynamic Array:
	// int n;
	// cin >> n;

	// int* ptr = new int[n];

	// //You are not allowed to take input
	// //as cin>>*(ptr+i);

	// for (int i = 0; i < n ; i = i + 1) {
	// 	cin >> ptr[i];
	// }

	// for (int i = 0; i < n; i = i + 1) {
	// 	// cout << ptr[i] << " ";

	// 	cout << *(ptr + i) << " ";
	// }

	// cout << endl;

	// int* ptr2 = new int[] {21, 3, 4, 6, 8, 9};

	// ptr2[3] = 999999;

	// for (int i = 0; i < 6; i = i + 1) {
	// 	// cout << ptr[i] << " ";

	// 	cout << *(ptr2 + i) << " ";
	// }


	//Pointer Definition.
	int *xptr = new int[3] {0};

	// delete[]xptr;

	//Now you should not use *xptr.
	xptr = new int[5] {0};

	//You are changing the size of the array
	//from line number 83 to 84 and Hence it
	//is known as Run Time Allocation.

	//Since you have not
	//deleted/Freed(Past tense of Free) the array
	//before creating a new array this will result
	//in Memory Leak to avoid this use this line
	//between 83 line and 84 line.

	delete[]xptr;


}