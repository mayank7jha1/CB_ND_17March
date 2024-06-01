#include<iostream>
using  namespace std;

int a[100001] = {0};
int l[100001] = {0};
int r[100001] = {0};
int d[100001] = {0};

//Tells me which operation is performed,how many number of times.
int OpCount[100001] = {0};

//After Perfroming every operation mera array kaisa dikh raha hain
int difference[100001] = {0};

int main() {

	int n, m, k;
	cin >> n >> m >> k;

	//Input for Initial Array
	for (int i = 1; i <= n; i = i + 1) {
		cin >> a[i];
	}

	//Input for m Operations (li,ri,di)
	for (int i = 1; i <= m; i = i + 1) {
		cin >> l[i] >> r[i] >> d[i];
	}

	//Input for k Queries:

	for (int i = 1; i <= k; i = i + 1) {

		int x, y;
		cin >> x >> y;

		OpCount[x] = OpCount[x] + 1;
		OpCount[y + 1] = OpCount[y + 1] - 1;
	}

	/*			        0  1  2  3  4
		Query->1		0  1  0 -1  0
		Query->2        0  1  0  0 -1
		Query->3        0  0  1  0 -1

		OpCount[]       0  2  1 -1 -2
		prefix:			0  2  3  2  0

		OpCount[2]=OpCount[1]+OpCount[2];
	*/

	//Take Prefix Sum of the Opcount.

	for (int i = 1; i <= m; i = i + 1) {
		OpCount[i] = OpCount[i - 1] + OpCount[i];
	}

	// for (int i = 1; i <= m; i = i + 1) {
	// 	cout << OpCount[i] << " ";
	// }
	// cout << endl;


	for (int i = 1; i <= n; i = i + 1) {

		int x = l[i];
		int y = r[i];

		//cout << x << " " << y << endl;

		difference[x] = difference[x] + (d[i] * OpCount[i]);
		difference[y + 1] = difference[y + 1] - (d[i] * OpCount[i]);

	}



	//Now takee the prefix sum of the difference array.

	for (int i = 1; i <= m + 1; i = i + 1) {
		difference[i] = difference[i - 1] + difference[i];
	}

	// for (int i = 1; i <= n; i = i + 1) {
	// 	cout << difference[i] << " ";
	// }

	//Add the Original Array in Difference array.

	for (int i = 1; i <= n; i = i + 1) {
		a[i] = a[i] + difference[i];
	}
	//cout << endl;

	for (int i = 1; i <= n; i = i + 1) {
		cout << a[i] << " ";
	}

}









