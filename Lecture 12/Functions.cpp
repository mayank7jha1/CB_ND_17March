#include<iostream>
using  namespace std;

// template<typename T>
//Generic Programming :

//1. Default Arguments: No of Arguments

int Sum(int x, int y, int a = 0, int b = 0, int c = 0) {

	return x + y + a + b + c;
}

//2. Template: Type of Argument






int main() {

	cout << Sum(2, 3) << endl;
	cout << Sum(2, 3.7, 4) << endl;
	cout << Sum(1, 2, 3, 5, 6) << endl;
	cout << Sum(1, 24, 5, 9) << endl;


}