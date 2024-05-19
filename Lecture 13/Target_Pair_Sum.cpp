#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int target;
	cin >> target;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}


	/*
		Print me all the pairs even dublicate whose
		sum is equal to target.
	*/

	//Since All the elements of the array
	//can be considered as the start of the pair
	//elements we will go to every index of the array
	//and will try to find the second element
	//of the pair that is equal to target.

	//Outer Loop is for the first element
	//of the pair.
	for (int i = 0; i < n - 1; i = i + 1) {

		//Inner Loop is for the second element of the
		//pair.
		for (int j = i + 1; j < n; j = j + 1) {

			// if (i != j) {

			if (a[i] + a[j] == target) {

				//Current Pair is: (a[i],a[j])

				cout << a[i] << " " << a[j] << endl;
			}

			//}

		}

	}
}