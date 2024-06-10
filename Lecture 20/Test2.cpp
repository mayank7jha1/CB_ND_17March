#include<iostream>
#include<bits/stdc++.h>
using  namespace std;

int main() {
	srand(time(0));

	int n = 100000 + rand() % 1000002;

	//cout << n << endl;

	set<int>s;

	for (int i = 0; i < n; i = i + 1) {
		s.insert(1000 + rand() % 5001);
	}

	cout << s.size() << endl;
	for (auto x : s) {
		cout << x << " ";
	}

}