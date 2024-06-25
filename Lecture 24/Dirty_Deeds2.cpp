#include<iostream>
#include<vector>
#include<algorithm>
using  namespace std;
vector<int>first, second;

bool C1(int x, int y) {
	if (second[x] > second[y]) {
		return true;
	} else {
		return false;
	}
}

bool C2(int x, int y) {
	if (first[x] < first[y]) {
		return true;
	} else {
		return false;
	}
}

int main() {
	int n;
	cin >> n;
	vector<int>S1, S2;

	for (int i = 0; i < n; i = i + 1) {

		int x, y;
		cin >> x >> y;

		first.push_back(x);
		second.push_back(y);

		if (first[i] < second[i]) {
			S1.push_back(i);
		} else {
			S2.push_back(i);
		}
	}


	if (S1.size() > S2.size()) {
		sort(S1.begin(), S1.end(), C1);

		cout << S1.size() << endl;
		for (auto x : S1) {
			cout << x + 1 << " ";
		}
	} else {
		sort(S2.begin(), S2.end(), C2);

		cout << S2.size() << endl;
		for (auto x : S2) {
			cout << x + 1 << " ";
		}
	}
}











