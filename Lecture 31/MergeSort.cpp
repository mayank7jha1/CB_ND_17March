#include<iostream>
using  namespace std;
int c[100004] {0};

void Merge(int* a, int s, int e) {

	int i = s;

	int mid = (s + e) / 2;
	int j = mid + 1;

	int k = s;
	while (i <= mid and j <= e) {

		if (a[i] <= a[j]) {
			c[k] = a[i];
			i = i + 1;
			k = k + 1;
		} else {
			c[k] = a[j];
			j = j + 1;
			k = k + 1;
		}
	}

	//What if mera i has not reached mid;
	while (i <= mid) {
		c[k] = a[i];
		i = i + 1;
		k = k + 1;
	}


	//What if mera j has not reached e.
	while (j <= e) {
		c[k] = a[j];
		j = j + 1;
		k = k + 1;
	}

	//Copy All the elements of c in a.
	for (int i = s; i <= e; i = i + 1) {
		a[i] = c[i];
	}
}

void MergeSort(int a[], int s, int e) {

	if (s == e) {
		//Jab sirf ek element bachega.
		return;
	}

	//Divide
	int mid = (s + e) / 2;
	MergeSort(a, s, mid);
	MergeSort(a, mid + 1, e);


	//Conquer: Merge
	Merge(a, s, e);
}



int main() {
	int  n;
	cin >> n;

	int a[n];

	for (int  i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	MergeSort(a, 0, n - 1);

	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}

}












