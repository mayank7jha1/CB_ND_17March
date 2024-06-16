#include<iostream>
#include<algorithm>
using  namespace std;


bool C1(int x, int y) {

	if (x < y) {
		return true;
	} else {

		//Swap the element
		return false;
	}

	// return (x < y);
}

bool C2(char x, char y) {
	if (x > y) {
		return true;
	} else {
		return false;
	}
}


int main() {

	int n = 5;
	int a[] = {12, 1, 3, 14, 19};

	//Comparator
	sort(a, a + n, C1);

	string st = "Mayank";

	sort(st.begin(), st.end(), C2);

	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}

	cout << endl << st << endl;

}