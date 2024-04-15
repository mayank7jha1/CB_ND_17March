#include<iostream>
using  namespace std;

int main() {

	int a, b;
	cin >> a >> b;

	int small = a;

	if (small > b) {
		small = b;
	}

	int i = 1;
	int gcd = 1;//Any positive Number will always have gcd atleast 1.

	while (i <= small) {

		if (((a % i) == 0) and ((b % i) == 0)) {
			gcd = i;
		}

		i = i + 1;
	}


	cout << gcd << endl;

	int lcm = (a * b) / gcd;

	//lcm(a,b)*gcd(a,b)=Product of (a,b);

	cout << lcm << endl;

}









