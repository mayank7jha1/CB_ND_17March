#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int i = 2;
	while (i <= n - 1) {

		if ((n % i) == 0) {
			cout << "Not Prime" << endl;
			return 0;//Stoping The Program
		}

		i = i + 1;
	}

	cout << "Prime" << endl;
	return 0;
}





