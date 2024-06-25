#include<iostream>
#include<vector>
#include<iterator>
using  namespace std;


int Solve(vector<int>&z) {

	int n = z.size();

	z[3] = 100;

	cout << z[3] << endl;

	int ans = 0;
	// for (int x : z) {
	// 	ans = ans + x;
	// }

	for (int i = 0; i < z.size(); i = i + 1) {
		ans = ans + z[i];
	}

	return ans;
}

//Return Data Type of this Function is vector<int>
vector<int>Solve1(int x) {

	//THis is a Vector jiska size is 5 and is initialised with zero.
	vector<int>ans(5, 0);
	// vector<int>t;
	ans.push_back(x);

	return ans;
}


int main() {

	int n;
	cin >> n;

	vector<int>v2;
	vector<int>v1(n);

	for (int i = 0; i < n; i = i + 1) {
		cin >> v1[i];
	}

	for (int i = 0; i < n; i = i + 1) {
		int x;
		cin >> x;
		v2.push_back(x);
	}

	cout << v1.size() << endl;
	cout << v1.capacity() << endl;

	cout << v1[3] << endl;
	v1.pop_back();

	cout << v1.size() << endl;
	cout << v1.capacity() << endl;

	//Traversal Over a Container.

	//For Loop:

	for (int i = 0; i < v1.size(); i = i + 1) {
		cout << v1[i] << " ";
	}
	cout << endl;

	//For Each Loop:

	/*
		For Every Element of this container/Data
		Structure (v1) that is going to be represented
		as a variable (x) do this task.

	*/


	for (auto x : v1) {
		cout << x << " ";
	}

	cout << endl;


	//Using Iterators:

	vector<int>::iterator it = v1.begin();
	cout << *it << endl;

	for (auto it = v1.begin(); it != v1.end(); it = it + 1) {
		cout << (*it) << " ";
	}

	vector<int>v3 = v1;

	//Every Container is Passed by value as parameter for a
	//Function by default.

	//Every Can be treated as a data type.
	cout << endl;
	cout << Solve(v3) << endl;
	cout << v3[3] << endl;

	vector<int>ans1 = Solve1(100);

	for (auto x : ans1) {
		cout << x << " ";
	}
}