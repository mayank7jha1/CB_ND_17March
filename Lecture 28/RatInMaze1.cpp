#include<iostream>
using  namespace std;
int n, m;
char grid[1001][1001];
bool visited[1001][1001] {0};
bool solution[1001][1001] {0};

bool F(int i, int j) {
	if (i == n - 1 and j == m - 1) {
		solution[i][j] = 1;
		for (int x = 0; x < n; x = x + 1) {
			for (int y = 0; y < m; y = y + 1) {
				cout << solution[x][y] << " ";
			}
			cout << endl;
		}
		return true;
	}

	if (visited[i][j] == 1) {
		return false;
	}

	solution[i][j] = 1;
	visited[i][j] = 1;

	if (j + 1 < m and visited[i][j + 1] == 0) {
		bool ans = F(i, j + 1);
		if (ans == 1) {
			return true;
		}
	}

	if (i + 1 < n and visited[i + 1][j] == 0) {
		bool ans = F(i + 1, j);
		if (ans == 1) {
			return true;
		}
	}

	solution[i][j] = 0;//Backtracking

	return false;
}


int main() {

	cin >> n >> m;
	for (int i = 0; i < n; i = i + 1) {
		for (int j = 0; j < m; j = j + 1) {
			cin >> grid[i][j];
			if (grid[i][j] == 'X') {
				visited[i][j] = 1;
			}
		}
	}

	bool ans = F(0, 0);

	if (ans == 0) {
		cout << "-1" << endl;
	}
}






