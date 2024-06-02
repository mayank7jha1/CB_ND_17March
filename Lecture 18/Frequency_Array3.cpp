#include<iostream>
#include<climits>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];

	int maxi = INT_MIN; //(Minimum Value of Int -Infinity)
	int mini = INT_MAX; //(Maximum Value of Int +Infinity)

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];

		if (a[i] > maxi) {
			maxi = a[i];
		}

		if (a[i] < mini) {
			mini = a[i];
		}
	}

	int freq[maxi - mini + 1] = {0};

	//Build the Shifted Frequency Array from the original array

	for (int i = 0; i < n; i = i + 1) {

		int element = a[i];//Visualised_Index
		int Actual_Index = element - mini;

		freq[Actual_Index] = freq[Actual_Index] + 1;
	}

	//Print the Frequency Array.

	//Iterate over the Frequency Array and Print
	//element and its frequency.
	//This frequency Array has a mapping of
	//Index and value at that index for us
	//we have visualised it as element of the array(index)
	//and its frequency (Value at that index).

	for (int i = 0; i < maxi - mini + 1; i = i + 1) {

		if (freq[i] > 0) {

			//this i is the index of the frequency array
			//Actual_Index w.r.t to element
			//hence element kya hoga?
			//i+mini;

			cout << i + mini << " " << freq[i] << endl;


		}

	}





}







