#include<iostream>
using  namespace std;

int main() {

	//This is a array of String Data Type.
	string a[] = {"Mayank", "Rahul", "Aman"};

	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;

	cout << a + 0 << endl;
	cout << a + 1 << endl;
	cout << a + 2 << endl;

	//Value at an Address.

	cout << *(a + 0) << endl;
	cout << *(a + 1) << endl;
	cout << *(a + 2) << endl;

	char ch[] = {'M', 'a', 'y', '\0'};
	cout << ch << endl;

	char ch2[] = {"Mayank"};
	cout << ch2 << endl;



	string st = "Nishant";
	cout << st << endl;

	//a[0]: is a String.


	string p[] = {"Atul", "Nishant", "Sarthak"};

	// a[0]--->Is a String.

	cout << a + 0 << endl;
	cout << *(a + 0) << endl;

	string ans = a[0];

	cout << ans[2] << endl;
	cout << a[0][2] << endl;

	// []--->Define :

	//cout << *(a + 0)[2] << endl;


	//String is Made from Character Array.

	string st1 = "XYZ";

	// (st1 + 0): This is not an Address.


}


// .begin()
// .end()








