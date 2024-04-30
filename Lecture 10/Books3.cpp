#include<iostream>
using  namespace std;

int main() {
	int n, Total_Time;
	cin >> n >> Total_Time;

	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int Time_Consumed = 0;
	int BICRFTI = 0;
	int Maximum_Books = 0;

	int left = 0;
	int right = 0;

	//Window size: right-left+1

	//We always want to move in
	// desired window
	//Expand from the right and shrink from the left

	for (; right < n; right = right + 1) {

		//Expansion
		Time_Consumed = Time_Consumed + a[right];

		//If you have entered the undesired window.
		//shrink from left

		while (left <= right and Time_Consumed > Total_Time) {

			Time_Consumed = Time_Consumed - a[left];
			left = left + 1;
		}

		//Maximum Books is smaller than window size.
		if (Maximum_Books < right - left + 1) {
			Maximum_Books = right - left + 1;
		}

	}

	cout << Maximum_Books << endl;

}








