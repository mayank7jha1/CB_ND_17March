#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int flag = 0;

	int i = 2;
	while (i <= n - 1) {

		if ((n % i) == 0) {
			//cout << "Not Prime" << endl;
			//return 0;
			flag = 1;
		}


		i = i + 1;
	}

	if (flag == 1) {
		cout << "Not Prime" << endl;
	} else {
		cout << "Prime" << endl;
	}

	//cout << "Prime" << endl;

}