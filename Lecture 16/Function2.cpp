#include<iostream>
using  namespace std;

//Generic Programming in Functions
//1. Function Overloading : Two Functions having same name but
// Type of Arguments
// No of Arguments
//2. Default Arguments

//Template

// template<typename T>


// int sum(int x, int y) {

// 	int ans = x + y;

// 	return ans;
// }


// double sum(double x, double y) {

// 	return x + y;
// }

// int sum(int x, int y, int z) {

// 	return x + y + z;
// }


// double Sum(double x, double y, int z) {

// 	return x + y + z;
// }


double sum(double x, double y, double t = 0, double m = 0) {

	return x + y + t + m;
}



int main() {


	cout << sum(10, 15) << endl;
	cout << sum(10.6, 19.7) << endl;

	cout << sum(10, 14, 15) << endl;

}

















