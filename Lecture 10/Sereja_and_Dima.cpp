#include<iostream>
using  namespace std;



int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int left = 0;//Leftmost Index
	int right = n - 1;//Rightmost Index

	int turn = 0;//Kiski Turn hain.

	int Seraja_Points = 0;
	int Dima_Points = 0;

	while (left <= right) {

		if (turn % 2 == 0) {

			//Seraja turn
			if (a[left] > a[right]) {

				Seraja_Points = Seraja_Points + a[left];

				left = left + 1;//New leftmost index
				//available to grab.

			} else {

				//a[left]<=a[right]
				Seraja_Points = Seraja_Points + a[right];
				right = right - 1;
				//This is the new right most index to grab

			}


		} else {

			//Dima Turn
			if (a[left] > a[right]) {

				Dima_Points = Dima_Points + a[left];

				left = left + 1;//New leftmost index
				//available to grab.

			} else {

				//a[left]<=a[right]
				Dima_Points = Dima_Points + a[right];
				right = right - 1;
				//This is the new right most index to grab

			}
		}

		turn = turn + 1;

	}


	cout << Seraja_Points << " " << Dima_Points << endl;

}