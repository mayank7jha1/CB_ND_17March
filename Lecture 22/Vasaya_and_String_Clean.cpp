#include<iostream>
#include<algorithm>
using  namespace std;

int Solve(string &s, int n, int k, char ch) {
	int start = 0;
	int end = 0;
	int count = 0;
	int ans = 0;

	for (end = 0; end < n; end = end + 1) {

		if (s[end] != ch) {
			count = count + 1;
		}

		while (count > k and start <= end) {

			if (s[start] != ch) {
				count = count - 1;
			}

			start = start + 1;
		}

		ans = max(end - start + 1, ans);
	}
	return ans;
}



int main() {
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;

	//b->a
	int ans1 = Solve(s, n, k, 'a');

	//a->b
	int ans2 = Solve(s, n, k, 'b');

	cout << max(ans1, ans2) << endl;
}










