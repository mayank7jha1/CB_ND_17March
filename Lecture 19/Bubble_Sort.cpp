#include<iostream>
using  namespace std;

int main() {

	int x = 10;
	int y = 20;

	// x = y;//x=20 and y=20


	// y = x;//y=20 and x=20

	int temp = x;//temp=10 x=10  y=20

	x = y;//x=20 and y=20

	y = temp; //y=10 and x=20

	cout << x << " " << y << endl;

}