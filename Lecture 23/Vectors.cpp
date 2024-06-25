#include<iostream>
#include<vector>
#include<iterator>
using  namespace std;



int main() {

	//Vector Definition:

	vector<int>v1;
	vector<int>v2(10);//A vector of size 10.
	vector<int>v3(5, 9);//A Vector of size 5 and all the
	// elements arre intialised with value 9.

	//A Vector whose size is specified is like your
	//Dynamic Array only.

	vector<int>v4{1, 2, 2, 3, 5, 6};

	//Vector: Functions: push_back

	int n;
	cin >> n;
	for (int i = 0; i < n; i = i + 1) {
		int x;
		cin >> x;
		v2.push_back(x);
		//cin >> v1[i];
	}

	cout << v2.size() << endl;
	cout << v2.capacity() << endl;
	//v2.resize(13);

	for (int i = 0; i < v2.size(); i = i + 1) {
		cout << v2[i] << " ";
	}

	//Functions:
	v2.pop_back();//Last ka element remove kar deta hai.


	// vector<int>v6;

	// int x;
	// while (cin >> x) {
	// 	v6.push_back(x);
	// }
}