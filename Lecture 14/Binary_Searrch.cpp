#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int target;
	cin >> target;


	//Define the Search Space

	int s = 0, e = n - 1;
	bool ans = 0;//We assumed ki element is
	//not present.
	int index = -1;//We assumed ki element is
	//not present.


	while (s <= e) {

		int mid = (s + e) / 2;
		// int mid = (s + (e - s) / 2);

		if (a[mid] == target) {
			ans = 1;
			index = mid;
			break;
		} else if (a[mid] < target) {
			s = mid + 1;
		} else {
			e = mid - 1;
		}
	}

	cout << ans << endl;
	cout << index << endl;


}










