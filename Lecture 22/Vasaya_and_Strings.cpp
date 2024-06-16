#include<iostream>
#include<algorithm>
using  namespace std;

/*
	Solve Function returns the
	maximum length substring
	by making of the change either
	a->b or b->a.
*/
//a: b->a

int Solve(string &s, int n, int k, char ch) {

	//Window ko determine karne ke liye hain.
	int start = 0;
	int end = 0;

	//Current Window me kitni bar tumne
	//required change kar rakha hain.
	int count = 0;

	//Maximum Length Substring.
	int ans = 0;


	//If the current character is not ch
	//then i have to change it.

	//I will always expand till i reach the
	//undesired window.
	for (end = 0; end < n; end = end + 1) {

		if (s[end] != ch) {
			count = count + 1;
		}

		//If you encounter a undesired window
		//shrink the window from the start.

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

	//cout << max(1, 2, 3) << end;

	//cout << max(max(1, 2), 3) << endl;

	// cout << max({1, 2, 4}) << endl;


}










