#include<iostream>
#include<climits>
using  namespace std;


int main() {
	int n;
	cin >> n;

	int a[n];

	int maxi = INT_MIN;
	int mini = INT_MAX;

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


	for (int i = 0; i < n; i = i + 1) {

		int element = a[i]; //Visualised_Index
		int Actual_Index = element - mini;

		freq[Actual_Index] = freq[Actual_Index] + 1;
	}


	for (int i = 0; i < maxi - mini + 1; i = i + 1) {

		if (freq[i] > 0) {
			cout << i + mini << " " << freq[i] << endl;
		}
	}


}







