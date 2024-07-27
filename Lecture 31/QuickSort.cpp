#include<iostream>
using  namespace std;
const int N = 100001;
int a[N] {0};

int Partition(int s, int e) {

	int i = s - 1;
	int j = s;

	int Pivot = a[e];

	//Find the Correct Position of the Pivot

	for (; j < e; j = j + 1) {

		if (a[j] > Pivot) {
			continue;
		} else {

			i = i + 1;
			swap(a[i], a[j]);
		}
	}

	//Put the Pivot at the correct
	//i+1 Position.

	swap(a[i + 1], a[e]);
	return i + 1;
}


void QuickSort(int s, int e) {

	if (s >= e) {
		return;
	}

	int Correct_Pivot_Index = Partition(s, e);

	//Do this Process in a smaller range.
	QuickSort(s, Correct_Pivot_Index - 1);
	QuickSort(Correct_Pivot_Index + 1, e);
}

int main() {
	int  n;
	cin >> n;
	for (int  i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	QuickSort(0, n - 1);

	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}
}


