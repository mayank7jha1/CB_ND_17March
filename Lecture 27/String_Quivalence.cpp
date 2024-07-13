#include<iostream>
using  namespace std;
int n;
char output[11];
int count = 0;

void F(int i, char mxc) {

	if (i == n) {
		output[i] = '\0';
		//count = count + 1;
		cout << output << endl;
		return;
	}

	//i=3,mxc='d'
	for (char ch = 'a'; ch <= mxc; ch = ch + 1) {

		output[i] = ch;

		if (ch == mxc) {

			F(i + 1, mxc + 1);//f(4,'e');

		} else {

			F(i + 1, mxc);//f(4,'d');

		}
	}
}


int main() {
	cin >> n;
	F(0, 'a');

	//cout << count << endl;
}



/*

		- - - - - -

		Pehle 3 boxes me aapne maximum character
		c rakha hain.


		f(3,'d')= 'a'+f(4,'d');
				  'b'+f(4,'d');
				  'c'+f(4,'d');
				  'd'+f(4,'e');



*/