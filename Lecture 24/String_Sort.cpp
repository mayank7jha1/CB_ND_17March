#include<iostream>
#include<algorithm>
using  namespace std;

bool C1(string &x, string &y) {

	//apple banana
	//bana

	if (x.find(y) == 0 or y.find(x) == 0) {
		if (x.length() > y.length()) {
			return true;
		} else {
			return false;
		}
	}

	if (x < y) {
		return true;
	} else {
		return false;
	}
}

int main() {

	int n;
	cin >> n;

	string a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	sort(a, a + n, C1);

	for (string x : a) {
		cout << x << endl;
	}

}