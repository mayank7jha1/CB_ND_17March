#include<iostream>
#include<queue>
using  namespace std;

int main() {

	priority_queue<int>maxi;//Max Heap
	priority_queue<int, vector<int>, greater<int>>mini;//Min Heap

	int n;
	cin >> n;

	for (int i = 0; i < n; i = i + 1) {
		int x;
		cin >> x;

		maxi.push(x);
		mini.push(x);
	}


	while (!maxi.empty()) {
		cout << maxi.top() << " ";
		maxi.pop();
	}

	cout << endl;

	while (!mini.empty()) {
		cout << mini.top() << " ";
		mini.pop();
	}







}