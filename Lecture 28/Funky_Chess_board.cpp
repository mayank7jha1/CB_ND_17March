#include<iostream>
using  namespace std;
const int N = 10;
int n;
int grid[N][N] = {0};
int TotalBoxes = 0;




/*
	ans: Maximum no of boxes you can
	visit across all the paths.

	count: Boxes you have visited
	in the current path.

	F(0,0,1):Maximum boxes knight can
	visit from 0,0, and count of the current path is 1.

*/
int ans = -1;
int dx[] {1, 1, -1, -1, 2, 2, -2, -2};
int dy[] {2, -2, 2, -2, 1, -1, 1, -1};

void input() {
	for (int i = 0; i < n; i = i + 1) {
		for (int j = 0; j < n; j = j + 1) {
			cin >> grid[i][j];
			if (grid[i][j] == 1) {
				TotalBoxes = TotalBoxes + 1;
			}
		}
	}
}


/*
	grid[i][j]=0 i am not going to travel at this box.
	grid[i][j]=1 i am going to travel at this box.

*/

void F(int x, int y, int count) {

	ans = max(ans, count);

	//Currently We are standing at x,y co-ordinates.

	for (int i = 0; i < 8; i = i + 1) {

		int next_x = x + dx[i];
		int next_y = y + dy[i];

		if (next_x >= 0 and next_x<N and next_y >= 0 and next_y < N
		        and grid[next_x][next_y] == 1) {

			grid[next_x][next_y] = 0;
			F(next_x, next_y, count + 1);

			grid[next_x][next_y] = 1;//Backtracking

		}
	}
}


int main() {
	cin >> n;
	input();

	grid[0][0] = 0;
	F(0, 0, 1);

	cout << TotalBoxes - ans << endl;

}