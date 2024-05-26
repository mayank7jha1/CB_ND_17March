#include<iostream>
#include<math.h>
#include<iomanip>
using  namespace std;
#define PI 3.14159265

//This is Ternary Search Logic.


double Function(double x, double b, double c) {
	return ((x * x + b * x + c) / sin(x));
}



double IsThisJee(double b, double c) {

	//We are doing BS on values of x.
	double s = 0;
	double e = PI / 2;

	double ans = -1;//Because Min value atleast 0 to hogi.


	while (e - s > 1e-6) {

		double m1 = (s + (e - s) / 3);
		double m2 = (e - (e - s) / 3);


		if (Function(m1, b, c) > Function(m2, b, c)) {
			s = m1;
			ans = m2;
		} else if (Function(m1, b, c) < Function(m2, b, c)) {
			e = m2;
			ans = m1;
		} else {

			s = m1, e = m2;
			ans = m1;
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