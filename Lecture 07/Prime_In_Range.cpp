#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int i = 2;
	//This is for going to every number
	//between the range of [2->n].
	//int flag = 0;

	while (i <= n) {

		//We are currently checking if my current
		//number i.e. i is prime or not.
		int flag = 0;

		int j = 2;

		while (j <= i - 1) {

			if ((i % j) == 0) {
				flag = 1;
			}

			j = j + 1;
		}

		if (flag == 0) {
			cout << i << " ";
		}

		i = i + 1;
	}
}