#include<iostream>
using  namespace std;

int main() {

	//Static Variable
	int n = 90;

	//Static Array.
	int a[3] = {1, 2, 4};

	// cout << *(a + 98) << endl;

	// cout << a[98] << endl;

	// a[98] = 103;//Compiler

	// cout << a[98] << endl;

	// a[5] = {0};

	// int x = 98;

	//Dynamic Variable.
	int *ptr = new int{19};

	cout << ptr << endl;
	cout << *ptr << endl;

	delete ptr;//Variable

	// delete[]ptr; Arrays

	cout << ptr << endl;
	cout << *ptr << endl;

	int *ptr2 = new int[10] {1, 2, 3, 4};
	cout << ptr2[3] << endl;
	delete[]ptr2;





}