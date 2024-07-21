#include<iostream>
using  namespace std;
#define int long long
int n, d;
int a[100005] {0};

void Solve() {

	//Check if my answer exist or not
	int BankBalance = 0;

	for (int i = 0; i < n; i = i + 1) {
		if (a[i] == 0) {
			if (BankBalance < 0) {
				BankBalance = 0;
			}
		} else {
			BankBalance = BankBalance + a[i];
			if (BankBalance > d) {
				cout << "-1" << endl;
				return;
			}
		}
	}

	BankBalance = 0;
	int visit = 0;
	for (int i = 0; i < n; i = i + 1) {
		if (a[i] == 0) {

			if (BankBalance < 0) {
				BankBalance = d;
				visit = visit + 1;
			}

		} else {

			BankBalance = BankBalance + a[i];
			if (BankBalance > d) {
				BankBalance = d;
			}

		}
	}

	cout << visit << endl;



}

int32_t main() {
	cin >> n >> d;

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	Solve();
}