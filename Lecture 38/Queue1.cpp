#include<iostream>
#include"Queue.h"
using  namespace std;

int main() {
	Queue<int>q;

	int n;
	cin >> n;

	for (int i = 0; i < n; i = i + 1) {
		int x;
		cin >> x;
		q.push(x);
	}
	cout << q.size() << endl;

	while (!q.empty()) {
		cout << q.front1() << " ";
		q.pop();
	}

	cout << endl;


}