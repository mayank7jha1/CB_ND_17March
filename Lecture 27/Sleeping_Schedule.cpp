#include<iostream>
using  namespace std;
int n, h, l, r;
int a[200005] {0};

int F(int i, int wt) {


	if (i == n) {
		return 0;
	}

	//Next sleep is going to be at a[i];
	int wtop1 = (wt + a[i]) % h;

	//Next Sleep is going to be at a[i]-1.
	int wtop2 = (wt + a[i] - 1) % h;

	/*

		Agar aap next sleep a[i] par karte
		toh vo good hoti ki nahi?

		Agar aap next sleep a[i]-1 par karte
		toh vo good hoti ki nahi?

	*/

	//Ans1 mujhe batata hain ki current sleep
	//good hain ki nahi that means value can only be 0 or 1.
	//when you go to  sleep at a[i].
	int ans1 = 0;

	if (wtop1 >= l and wtop1 <= r) {
		ans1 = 1;
	}

	//Ans2 mujhe batata hain ki current sleep
	//good hain ki nahi that means value can only be 0 or 1.
	//when you go to  sleep at a[i]-1.
	int ans2 = 0;
	if (wtop2 >= l and wtop2 <= r) {
		ans2 = 1;
	}

	int op1 = ans1 + F(i + 1, wtop1);
	int op2 = ans2 + F(i + 1, wtop2);

	return max(op1, op2);

}

int main() {
	cin >> n >> h >> l >> r;

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}
	int ans = F(0, 0);
	cout << ans << endl;
}




