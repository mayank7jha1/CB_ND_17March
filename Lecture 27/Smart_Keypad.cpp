#include<iostream>
using  namespace std;


char keypad[][5] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

char input[101];
char output[101];

void F(int i, int j) {

	if (input[i] == '\0') {
		output[j] = '\0';
		cout << output << endl;
		return;
	}


	char ch = input[i];

	int index = ch - 48;
	// int index = ch - '0';

	for (int k = 0; keypad[index][k] != '\0'; k = k + 1) {

		output[j] = keypad[index][k];

		F(i + 1, j + 1);
	}
}

int main() {
	cin >> input;

	F(0, 0);
}





