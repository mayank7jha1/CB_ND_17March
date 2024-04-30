#include<iostream>
using  namespace std;

int main() {
	int n, Total_Time;
	cin >> n >> Total_Time;

	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}


	//We will go to every index and presume
	//we are reading books from this index
	//only.

	int Maximum_Books = 0;

	for (int i = 0; i < n; i = i + 1) {

		int Time_Consumed = 0;
		int BICRFTI = 0;

		for (int j = i; j < n; j = j + 1) {
			Time_Consumed = Time_Consumed + a[j];

			if (Time_Consumed > Total_Time) {
				break;
			}

			BICRFTI = BICRFTI + 1;
		}

		if (BICRFTI > Maximum_Books) {
			Maximum_Books = BICRFTI;
		}
	}

	cout << Maximum_Books << endl;
}





