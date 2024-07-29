#include<iostream>
#include"Vector.h"
#include<vector>
using  namespace std;

int main() {

	Vector<char>v;
	vector<char>v1;

	int n;
	cin >> n;

	for (int i = 0; i < n; i = i + 1) {
		char x;
		cin >> x;
		v.push_back(x);
		v1.push_back(x);
	}

	for (int i = 0; i < n; i = i + 1) {
		cout << v[i] << " ";
	}

	cout << endl;

	cout << v.size() << endl;
	cout << v.capacity() << endl;
	cout << v.front() << endl;
	v.pop_back();
	cout << v.back() << endl;

}









