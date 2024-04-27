#include<iostream>
using  namespace std;




int main() {

	/*

	//Defining a Variable:

	// 1. Copy Assignment
	int x = 10;

	//2. Direct List Initialisation
	int y{14};

	//3. Copy List Initialisation
	int z = {15};

	//4. Object and Functions
	int t(19);


	cout << x << " " << y << " " << z << " " << t << endl;

	//Narrow Conversion

	int p = 19.789897963926;
	cout << p << endl;

	int d{19.789897963926};

	cout << d << endl;

	*/

	//Define a Array

	//int a[5] {9, 2, 1, 7, 3};

	// int a[5] = {9, 2, 1, 7, 3};

	// int a[] = {9, 2, 1, 7, 3};

	int a[] = {9, 2, 1};

	// int a[5] = {};
	//int a[5] = {0};


	int x{10};
	cout << x << endl;

	cout << a << endl;
	cout << a + 1 << endl;
	cout << a + 2 << endl;
	cout << a + 3 << endl;
	cout << a + 4 << endl;

	cout << " ------------- " << endl;

	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;
	cout << a[3] << endl;
	cout << a[4] << endl;


	//You cannot change the size of static
	//arrays.

	int b[5] = {1, 2, 3, 4, 5};

	//Avoid using this.

	//b[7];

	//b[6] = 98;

	//cout << b[6] << endl;

}


//140701897328656
//140701897328660