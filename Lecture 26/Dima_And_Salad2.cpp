#include<iostream>
#include<vector>
#include<climits>
using  namespace std;

int n, k;
vector<int>taste, calorie;

int F(int i, int sum) {

	if (i == n) {
		if (sum == 0) {
			return 0;

		} else {
			return INT_MIN;
		}
	}
	int Op1 = taste[i] + F(i + 1, sum + (taste[i] - k * calorie[i]));
	int Op2 = 0 + F(i + 1, sum);
	int ans = max(Op1, Op2);
	return ans;
}

int main() {
	cin >> n >> k;
	taste.resize(n);
	calorie.resize(n);

	for (int i = 0; i < n; i = i + 1) {
		cin >> taste[i];
	}

	for (int i = 0; i < n; i = i + 1) {
		cin >> calorie[i];
	}

	int ans = F(0, 0);

	if (ans <= 0) {
		cout << "-1" << endl;
	} else {
		cout << ans << endl;
	}
}






