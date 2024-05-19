#include<iostream>
using  namespace std;

//Whatever Work you are doing right
//now is on values.

//Template: Generic Programming
// template<typename T>

//Default Arguments.

//Function Overloading:


// //Function Definition
// int Sum(int x, int y) {
// 	int ans = x + y;
// 	return ans;
// }

// //Avoid this.
// // double Sum(int x, int y) {

// // 	return 5.9;
// // }

// //Type 1: With the type of argument.
// double Sum(int x, double y) {

// 	double ans = x + y;
// 	return ans;
// }

// double Sum(int x, int y, double z) {
// 	double ans = x + y + z;
// 	return ans;
// }


// //Type 2: With Number of Argument
// int Sum(int x, int y, int z) {
// 	int ans = x + y + z;
// 	return ans;
// }


//Default Arguments Should always be at the end.
int Sum(int x = 0, int y, int z = 0, int t = 0, int m = 0) {

	return x + y + z + t + m;
}



int main() {

	int a = 13, b = 34;
	cout << Sum(10, 51, 89, 14) << endl;

	// cout << Sum(12, 14, 19) << endl;
	// cout << Sum(14, 10, 19.7, 21) << endl;
	// cout << Sum(24, 19, 25, 28, 30) << endl;


	//int ans = Sum(13, 34);
	// int ans1 = Sum(a, b);//Function Call

	// double ans2 = Sum(2, 14.6);

	// cout << Sum(3, 4.6) << endl;

	// cout << ans1 << endl;
	// cout << ans2 << endl;

	// // int z = 14.8;
	// // cout << z << endl;
	// int ans3 = Sum(3, 4, 7);

	// cout << ans3 << endl;
	// cout << Sum(3, 5, 6.7) << endl;
}










