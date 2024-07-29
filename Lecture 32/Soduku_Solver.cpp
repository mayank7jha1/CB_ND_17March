#include<iostream>
using  namespace std;



bool CanPlace(char board[][9], int x, int y, char ch) {

	//Check 1: We are checking the current row.
	for (int i = 0; i < 9; i = i + 1) {
		if (board[x][i] == ch) {
			return false;
		}
	}

	//Check 2: We are checking the current column.
	for (int i = 0; i < 9; i = i + 1) {
		if (board[i][y] == ch) {
			return false;
		}
	}

	//Check 3: We are checking the current submatix.
	int sx = (x / 3) * 3;
	int sy = (y / 3) * 3;

	for (int i = sx; i < sx + 3; i = i + 1) {
		for (int j = sy; j < sy + 3; j = j + 1) {
			if (board[i][j] == ch) {
				return false;
			}
		}
	}

	return true;
}


bool Solve(char board[][9], int x, int y) {

	if (x == 9) {
		//I have completly Solved the soduku.
		return true;
	}

	if (y == 9) {
		//Current Row me saare column fill
		//kardiye hain next row par jao.
		return Solve(board, x + 1, 0);
	}

	if (board[x][y] != '.') {
		//Skip this number.
		return Solve(board, x, y + 1);
	} else {

		//Try to place a number on  the current
		//row and column  box and ask
		//recursion if he can solve the
		//soduku using this number till the
		//end.

		for (char ch = '1'; ch <= '9'; ch = ch + 1) {
			if (CanPlace(board, x, y, ch) == 1) {
				board[x][y] = ch;
				bool small_ans = Solve(board, x, y + 1);
				if (small_ans == 1) {
					return true;
				}
			}
		}
	}


	//If I am Standing here that means recursion
	//is not able to find  the solution  even after
	//putting any number.
	//Retain the original position in the board.
	board[x][y] = '.';
	return false;
}

int main() {
	char board[9][9];
	for (int i = 0; i < 9; i = i + 1) {
		for (int j = 0; j < 9; j = j + 1) {
			cin >> board[i][j];
		}

	}

	int ans = Solve(board, 0, 0);

	for (int i = 0; i < 9; i = i + 1) {
		for (int j = 0; j < 9; j = j + 1) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}









