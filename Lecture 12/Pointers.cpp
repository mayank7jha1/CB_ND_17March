#include<iostream>
using  namespace std;



int main() {

	int x = 10;
	cout << &x << endl;
	int *ptr = &x;
	cout << ptr << endl;
	cout << *ptr << endl;
	cout << "----------- " << endl;

	cout << &ptr << endl;
	int** xptr = &ptr;
	cout << xptr << endl;


	cout << *xptr << endl;
	cout << "----------- " << endl;



}