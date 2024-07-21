#include<iostream>
using  namespace std;

string s, t;


int LCS(int i, int j) {

	if (i >= s.length() or j >= t.length()) {
		return 0;
	}


	if (s[i] == t[j]) {
		return 1 + LCS(i + 1, j + 1);

	} else {

		int Op1 = LCS(i + 1, j);
		int Op2 = LCS(i, j + 1);

		return max(Op1, Op2);
	}

}


int main() {
	cin >> s >> t;

	cout << LCS(0, 0);
}