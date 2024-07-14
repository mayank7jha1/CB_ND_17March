#include<iostream>
using  namespace std;
int n, m;
char grid[1001][1001];
bool visited[1001][1001] {0};
bool solution[1001][1001] {0};

/*
	F(0,0): Find the rightmost path from 0,0 to
	n-1, m-1.

	Yes or No.


*/

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

	/*
		F(i, j): Par rasta nahi mila and hence I am
		return false.
	*/


	//You will preassume this box will be part of
	//my solution.

	solution[i][j] = 1;
	visited[i][j] = 1;


	//Aage ka kam recursion se karvana hain.

	//Main Right me jaane ki koshish karunga
	//F(i,j+1): Find a way from i,j+1 to n-1,m-1
	//if you have found a way return true ya
	//bata do rasta mil gaya.


	if (j + 1 < m and visited[i][j + 1] == 0) {
		bool ans = F(i, j + 1);
		if (ans == 1) {
			//F(i,j): par rasta mil gaya
			return true;
		}
	}


	if (i + 1 < n and visited[i + 1][j] == 0) {
		bool ans = F(i + 1, j);
		if (ans == 1) {
			//F(i,j): par rasta mil gaya
			return true;
		}
	}

	//If you not found a way from i+1,j and i,j+1
	//hence the current state of f(i,j) does not
	// have any path going from i,j to n-1,m-1.
	//and hence this i,j box cannot be part
	//of your solution and hence change
	//your pre assumption.

	solution[i][j] = 0;//Backtracking


	//F(i,j) se koi rasta nahi hain.
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






