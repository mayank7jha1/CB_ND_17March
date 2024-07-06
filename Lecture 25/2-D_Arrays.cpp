#include<iostream>
using  namespace std;
const int row = 100, col = 100;

// array of arrray: 2 - D Array.
// Vector of Array: vector<int>a[29];
// vector of vector: vector<vector<int>>v;


// void Solve(int a[][col]) {

// }

// void Solve(int col, int a[][col]) {

// }

// void Solve(int (*a)[col]) {

// }





int main() {

	int b[][3] = {{2, 4, 6}, {9, 8, 12}, {14, 17, 19}, {32, 11, 14}};


	cout << b << endl;
	cout << *(b[1] + 2) << endl;

	// value of(Address):

	// (b[1]+2)

	// (b[1]+2)

	// Value of:


	cout << *(*(b + 1) + 2) << endl;

	int a[] {12, 3, 4, 5};
	cout << *(a + 0) << " " << a[0] << endl;


	for (int i = 0; i < 4; i = i + 1) {

		for (int j = 0; j < 3; j = j + 1) {
			cout << b[i][j] << " ";
		}

		cout << endl;
	}


	int n, m;
	cin >> n >> m;

	int d[row][col];

	for (int i = 0; i < n; i = i + 1) {

		for (int j = 0; j < m; j = j + 1) {
			cin >> d[i][j];
		}

		//cout << endl;
	}


	// for (int i = 0; i < n; i = i + 1) {

	// 	for (int j = 0; j < m; j = j + 1) {
	// 		cout << d[i][j] << " ";
	// 	}

	// 	cout << endl;
	// }

	// int max_row_sum = 0;


	// for (int i = 0; i < n; i = i + 1) {
	// 	int ans = 0;

	// 	for (int j = 0; j < m; j = j + 1) {
	// 		ans = ans + d[i][j];
	// 	}

	// 	cout << ans << endl;
	// 	max_row_sum = max(max_row_sum, ans);
	// }

	// cout << max_row_sum << endl;

	int max_col_sum = 0;

	for (int i = 0; i < m; i = i + 1) {

		int ans = 0;

		for (int j = 0; j < n; j = j + 1) {
			ans = ans + d[j][i];
		}

		cout << ans << endl;
		max_col_sum = max(max_col_sum, ans);
	}

	cout << max_col_sum << endl;



	Solve(d);


}