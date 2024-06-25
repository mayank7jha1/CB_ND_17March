#include<iostream>
using  namespace std;



/*
	Every Container can be treated as a
	data type.

	Data Type: String:

	2-D Arrays.

*/

int main() {

	int a1[] = {1, 2, 3, 5};
	char a2[] = {'M', 'a', 'y', '\0'};
	char a3[] = {"May"};

	string st = "Rahul";


	//This is an Array of data type string.
	//Every bucket of an array will be of string
	//data.
	string a4[3] = {"M", "a", "y"};
	string a5[] = {"Mayank\0", "Rahul", "Aman"};
	cout << a5[2] << endl;

	string ans = a5[2];
	cout << ans[2] << endl;

	//Two Dimentional Arrays:
	cout << a5[2][2] << endl;

	cout << st[2] << " ";
}









