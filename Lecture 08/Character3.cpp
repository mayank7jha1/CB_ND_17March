#include<iostream>
using  namespace std;

int main() {
	char ch;

	int Upper = 0;
	int lower = 0;
	int Extra = 0;

	while (cin.get(ch)) {

		if ((ch >= 65) and (ch <= 'Z')) {

			Upper = Upper + 1;

		} else if ((ch >= 'a') and (ch <= 122)) {

			lower = lower + 1;

		} else {

			Extra = Extra + 1;
		}
	}

	cout << Upper << " " << lower << " " << Extra << endl;
}












