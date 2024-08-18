#include<iostream>
#include"Stack1.h"
#include<stack>
#include<vector>
using  namespace std;

int main() {
	// Stack1<int>st;
	stack<int>st;
	vector<int>v;

	int n;
	cin >> n;

	for (int i = 0; i < n; i = i + 1) {
		int x;
		cin >> x;
		//cout << x << " ";
		st.push(x);
		v.push_back(x);
	}


	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}

	cout << endl;

	while (!v.empty()) {
		cout << v.back() << " ";
		v.pop_back();
	}

	//cout << "Yo";



}











