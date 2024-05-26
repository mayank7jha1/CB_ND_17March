#include<iostream>
#include<math.h>
#include<iomanip>
using  namespace std;
#define PI 3.14159265

//This is Binary Search Logic.

double Derivative(double x, double b, double c) {
	double ans = (((2 * x + b) * sin(x)) - ((x * x + b * x + c) * cos(x)));
	return ans;
}

double Function(double x, double b, double c) {
	return ((x * x + b * x + c) / sin(x));
}



double IsThisJee(double b, double c) {

	//We are doing BS on values of x.
	double s = 0;
	double e = PI / 2;
	int count = 0;
	double ans = -1;//Because Min value atleast 0 to hogi.

	while (s <= e) {

		double mid = (s + e) / 2;

		//We want to find f'(mid) and check ki vo positive ki negative hain.

		double val = Derivative(mid, b, c);

		if (val < 0) {
			ans = mid;
			s = mid;
		} else {
			ans = mid;
			e = mid;
		}
		count = count + 1;
		if (count > 150) {
			break;
		}
	}

	return ans;//Value of x where min f(x) occurs.
}



int main() {

	int t;
	cin >> t;
	int i = 1;

	while (i <= t) {

		double b, c;
		cin >> b >> c;

		double ans = IsThisJee(b, c);

		cout << fixed << setprecision(7) << Function(ans, b, c) << endl;

		i = i + 1;
	}

}