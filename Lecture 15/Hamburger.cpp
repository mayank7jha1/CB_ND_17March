#include<iostream>
#include<cstring>
using  namespace std;

int main() {
	char ch[101];
	cin >> ch;

	int n = strlen(ch);

	//This gives us ek receipe me kitne bread,
	//sausage and cheese chahiye.

	int sb = 0, ss = 0, sc = 0;

	for (int i = 0; i < n; i = i + 1) {
		if (ch[i] == 'B') {
			sb = sb + 1;
		} else if (ch[i] == 'S') {
			ss = ss + 1;
		} else {
			sc = sc + 1;
		}
	}

	//cout << sb << " " << ss << " " << sc << endl;

	int nb, ns, nc;
	cin >> nb >> ns >> nc;

	int pb, ps, pc;
	cin >> pb >> ps >> pc;

	long long r;
	cin >> r;

	cout << sb << " " << ss << " " << sc << endl;


	long long s = 0;
	long long e = 1e13;


	long long ans = 0;

	while (s <= e) {

		long long mid = (s + e) / 2;

		//Mid Amount of Hamburger ko banane me kitna
		//paisa chahiye.
		long long Bread = (sb * mid - nb) * pb;

		if (Bread < 0) {
			Bread = 0;
		}

		long long Sausage = (ss * mid - ns) * ps;
		if (Sausage < 0) {
			Sausage = 0;
		}

		long long Cheese = (sc * mid - nc) * pc;
		if (Cheese < 0) {
			Cheese = 0;
		}


		long long Total_Paisa = Bread + Sausage + Cheese;

		if (Total_Paisa <= r) {
			ans = mid;
			s = mid + 1;
		} else {
			e = mid - 1;
		}

	}

	cout << ans << endl;
}