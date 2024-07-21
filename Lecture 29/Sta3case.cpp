#include<iostream>
#include<climits>
#include<cstring>
using  namespace std;
#define int long long
int t;
int n;
int a[100005] {0};
bool visited[100005] {0};
/*

	count = Current path me kitne steps
	liye hain.

	Min_Steps: Total Across all the paths
	kitne steps min hain.

	Solve(0,0): Oth stair par khade ho
	and count is 0.

*/
int Min_Steps = INT_MAX;

void Solve(int x, int count) {

	if (x == n) {
		Min_Steps = min(Min_Steps, count);
		return;
	}


	//You are standing at the xth staircase.
	visited[x] = 1;


	//Mere pass do options hain 1 step ka jump
	//lu ya toh magnitude stair ka jump lu.

	//Option 1 : 1 step ka jump.

	if (x + 1 <= n and visited[x + 1] == 0) {

		Solve(x + 1, count + 1);

	}


	//Option 2: Magnitude jitna jump lunga.

	if (x + a[x] <= n and x + a[x] >= 0
	        and visited[x + a[x]] == 0 ) {
		Solve(x + a[x], count + 1);
	}

	//Agar main yaha khada hu toh maine
	//x se x+1 state ka answer nikal liya hain
	//and x+a[x] a answer nikal liya hain.

	//Mujhe dusra rasta follow karna hain.

	//x se return kar raha hu.

	visited[x] = 0;


}

int32_t main() {
	cin >> t;

	int i = 1;
	while (i <= t) {
		cin >> n;

		for (int i = 0; i < n; i = i + 1) {
			cin >> a[i];
		}

		memset(visited, 0, sizeof(visited));

		Solve(0, 0);

		// if (Min_Steps == INT_MAX) {
		// 	cout << "-1" << endl;
		// } else {
		// 	cout << Min_Steps << endl;
		// }

		cout << Min_Steps << endl;

		Min_Steps = INT_MAX;

		i = i + 1;
	}
}