#include<iostream>
using  namespace std;

int main() {

	int x = 10;
	cout << &x << endl;

	int *ptr = &x;
	// int ptr = &x;
	// int *ptr = x;

	cout << ptr << endl;
	cout << *ptr << endl;

	int a[] = {10, 12, 14, 15};

	cout << a << endl;
	cout << a + 1 << endl;
	cout << a + 2 << endl;
	cout << a + 3 << endl;

	cout << *a << endl;

	//Value at a address + 1.
	//10+1
	cout << *a + 1 << endl;

	//Value at a+1 address.
	//12
	cout << *(a + 1) << endl;
	cout << *(a + 2) << endl;
	cout << *(a + 3) << endl;


	// cout << *(a + 2) << a[2] << endl;

	//[x]-->value of x.

	// char *t = a;

	// cout << t << endl;
	// cout << t + 4 << endl;

	// int **xxptr = &ptr;
	// cout << **xxptr << endl;


}
















