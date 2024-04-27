
// A person wants to go from origin to a
//particular location, he can move in only
//4 directions(i.e. East, West, North, South)
//but his friend gave him a long route, help a
//person to find minimum Moves so that he can
//reach to the destination.

// Input  1 – NESNWES
// Output 1 – E

// You need to print the lexicographically sorted
// word. Assume the string will have only
//‘E’ ‘N’ ‘S’ ‘W’ characters.


// Input  2 – SSSNEEEW
// Output 2 – EESS


#include<iostream>
using  namespace std;

int main() {
	char ch;
	int x = 0, y = 0;

	while (cin >> ch) {

		if (ch == 'N') {
			y = y + 1;
		} else if (ch == 'S') {
			y = y - 1;
		} else if (ch == 'E') {
			x = x + 1;
		} else {
			x = x - 1;
		}

	}

	//cout << x << " " << y << endl;

	if (x > 0) {

		//Mujhe East Print karna hain pehle
		//Kitni bar karna hain: Jitna magnitude hain
		//x ka.

		int i = 1;

		while (i <= x) {
			cout << 'E';
			i = i + 1;
		}

		if (y > 0) {

			int i = 1;

			while (i <= y) {
				cout << 'N';
				i = i + 1;
			}

		} else {

			//y is negative that means hum south ki
			//baat kar rahe hain.

			y = y * (-1);

			int i = 1;

			while (i <= y) {
				cout << 'S';
				i = i + 1;
			}

		}
	} else {

		if (y > 0) {

			int i = 1;

			while (i <= y) {
				cout << 'N';
				i = i + 1;
			}

		} else {

			//y is negative that means hum south ki
			//baat kar rahe hain.

			y = y * (-1);

			int i = 1;

			while (i <= y) {
				cout << 'S';
				i = i + 1;
			}

		}


		x = x * (-1);

		int i = 1;

		while (i <= x) {
			cout << 'W';
			i = i + 1;
		}


	}
}




























