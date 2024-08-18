#include<iostream>
#include<queue>
using  namespace std;


int main() {
	queue<int>q;

	int n;
	cin >> n;

	for (int i = 0; i < n; i = i + 1) {
		int x;
		cin >> x;
		q.push(x);
	}


	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}

	cout << endl;

	cout << q.size() << endl;


}














