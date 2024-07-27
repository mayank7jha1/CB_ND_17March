#include<iostream>
using  namespace std;

/*

	Solve(0): I want to put queen from 0th
	row to the n-1 th row.

	Solve(1): I want to put queen from 1st row
	to n-1 th row.



	Solve(0)=   I will try                + Solve(1);
				to put queen
				in the current
				row i.e 0 from
				the current column
				to the last column
				until i find the answer.

	Solve(0)= check(Col[0])+Solve(1);
	Solve(0)= check(Col[1])+Solve(1);
	Solve(0)= check(Col[2])+Solve(1);
	Solve(0)= check(Col[3])+Solve(1);
	Solve(0)= check(Col[4])+Solve(1);
	Solve(0)= check(Col[5])+Solve(1);
	..............


*/


bool CanPlace(char board[][100], int row, int col, int n) {

	//Current Row me queen nahi honi chahiye:
	for (int i = 0; i < col; i = i + 1) {
		if (board[row][i] == 'Q') {
			return false;
		}
	}

	//Current Column me Queen nahi honi chahiye.
	for (int i = 0; i < row; i = i + 1) {
		if (board[i][col] == 'Q') {
			return false;
		}
	}

	//Diagonals:

	int i = row, j = col;

	//Left Diagonal
	while (i >= 0 and j >= 0) {

		if (board[i][j] == 'Q') {
			return false;
		}

		i = i - 1;
		j = j - 1;
	}

	//Right Diagonal

	i = row, j = col;

	while (i >= 0 and j < n) {

		if (board[i][j] == 'Q') {
			return false;
		}

		i = i - 1;
		j = j + 1;
	}

	return true;
}


//n represents matrix size which is n*n.
bool Solve(char board[][100], int row, int n) {

	if (row == n) {
		//I am done Placing n queen in
		//0 to n-1th row.

		//Just Print the board now.

		for (int i = 0; i < n; i = i + 1) {
			for (int j = 0; j < n; j = j + 1) {
				cout << board[i][j] << " ";
			}
			cout << endl;
		}
		return true;
	}


	for (int col = 0; col < n; col = col + 1) {
		//Can I place queen in the current
		//col of the current row.

		if (CanPlace(board, row, col, n) == 1) {

			board[row][col] = 'Q';
			bool Small_Problem = Solve(board, row + 1, n);
			if (Small_Problem == 1) {
				return true;
			}
			board[row][col] = '.';//backtracking
		}

	}

	return  false;
}


/*
	I am taking a board as input wherre
	every box is a '.' char and wherever i will place
	queen i will put q char.
*/
int main() {

	int n;
	cin >> n;

	char board[100][100];

	for (int i = 0; i < n; i = i + 1) {
		for (int j = 0; j < n; j = j + 1) {
			board[i][j] = '.';
		}
	}

	int ans = Solve(board, 0, n);
	if (ans == 0) {
		cout << -1 << endl;
	}

	cout << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
}
















