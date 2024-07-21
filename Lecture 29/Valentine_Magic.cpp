#include<iostream>
#include<climits>
#include<algorithm>
using  namespace std;
#define int long long
const int N = 5001;

int n, m;
int a[N], b[N];

int Solve(int i, int j) {


	if (i == n) {
		//Boys are done making pair.
		return 0;
	}

	if (j == m) {
		//Boys have not yet made pairs but girls are
		//finished.
		//This is an invalid path
		//Ignore and in order to ignore this you want
		//to return that is so large that
		//this path never becomes your answer.
		return INT_MAX;
	}



	//Option 1: Pair current boy and girl.
	int Op1 = abs(a[i] - b[j]) + Solve(i + 1, j + 1);


	//Option 2: Ignore the current Girl.
	int Op2 = Solve(i, j + 1);

	return min(Op1, Op2);

}

int32_t main() {
	cin >> n >> m;

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}


	for (int i = 0; i < m; i = i + 1) {
		cin >> b[i];
	}

	sort(a, a + n);
	sort(b, b + m);

	cout << Solve(0, 0) << endl;
}