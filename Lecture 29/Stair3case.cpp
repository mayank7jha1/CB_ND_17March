#include<iostream>
#include<climits>
#include<cstring>
using  namespace std;
#define int long long
int t;
int n;
int a[100005] {0};
bool visited[100005] {0};

int Min_Steps = INT_MAX;

void Solve(int x, int count) {

	if (x == n) {
		Min_Steps = min(Min_Steps, count);
		return;
	}

	visited[x] = 1;

	if (x + 1 <= n and visited[x + 1] == 0) {
		Solve(x + 1, count + 1);
	}

	if (x + a[x] <= n and x + a[x] >= 0
	        and visited[x + a[x]] == 0 ) {
		Solve(x + a[x], count + 1);
	}

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
		cout << Min_Steps << endl;
		Min_Steps = INT_MAX;

		i = i + 1;
	}
}