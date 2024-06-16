#include<iostream>
using  namespace std;

//Function Definition
void Sum(int x, int y) {

	x = x + 10;
	y = y + 20;

	cout << x << " " << y << endl;
	return;
}

// int Sum(int x, int y) {

// 	return 0;
// }

void Sum(int* x, int* y) {

	*x = *x + 10;
	*y = *y + 20;

	cout << *x << " " << *y << endl;
	return;
}

void Sum1(int &x, int &y) {
	x = x + 10;
	y = y + 20;

	cout << x << " " << y << endl;
	return;
}


int main() {

	int a = 10, b = 20;
	cout << a << " " << b << endl;

	Sum(a, b); //Function Call//Pass By value
	Sum(&a, &b);//Pass By Address
	Sum1(a, b);//Pass By Reference.
	cout << a << " " << b << endl;

}




