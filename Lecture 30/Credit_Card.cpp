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
				//Minimum possible amount in order
				//to  have a negli. impact on the
				//overall bankbalance
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

	//If I am Standing here I am sure ki answer exist karta hain
	//that means there is a amount jisko bank me daalke
	//tumhara bank balance d se jada nahi  jaaraha tumhare
	//karan.

	//You also want to minimise the trips that means
	//you have to make bankbalance maximum
	//possible such that it never exceeds d.

	BankBalance = 0;
	int visit = 0;


	for (int i = 0; i < n; i = i + 1) {
		if (a[i] == 0) {

			if (BankBalance < 0) {
				//Minimum possible amount in order
				//to  have a negli. impact on the
				//overall bankbalance
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