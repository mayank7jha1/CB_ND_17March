#include<iostream>
#include<vector>
#include<algorithm>
using  namespace std;
vector<int>first, second;

/*

	ith Pair can be represented as:
	(first[i],second[i])

*/
bool C1(int x, int y) {
	//This Comparator is for S1 Sequence and Henc
	//Vector.
	//These x and y are the indices of the pair
	//that are part of sequence 1.

	//x is the index that occurs before y.

	//I have to sort/ Tell compiler to compare
	//two indices on the basis of the seconnd
	//value of the pair at index x and y.
	//Two Pair are being compared here.

	//(first[x],second[x])----> first[y],second[y]


	if (second[x] > second[y]) {
		return true;
	} else {
		return false;
	}
}

bool C2(int x, int y) {

	//(first[x],second[x])----> first[y],second[y]
	if (first[x] < first[y]) {
		return true;
	} else {
		return false;
	}
}





int main() {
	int n;
	cin >> n;
	vector<int>S1, S2;//Indices of all the pairs
	//of Sequence 1 and 2.

	for (int i = 0; i < n; i = i + 1) {

		int x, y;
		cin >> x >> y;

		/*Current Pair is (x,y);
		first[i],second[i]*/
		first.push_back(x);
		second.push_back(y);

		if (first[i] < second[i]) {
			S1.push_back(i);
		} else {
			S2.push_back(i);
		}
	}


	if (S1.size() > S2.size()) {
		//My Answer Sequence is S1.
		//I Have to Sort this S1 on the basis of
		//second value of pair in desc. order.
		sort(S1.begin(), S1.end(), C1);

		cout << S1.size() << endl;
		for (auto x : S1) {
			cout << x + 1 << " ";
		}


	} else {
		//My Answer Sequence is S2.
		//I Have to Sort this S2 on the basis of
		//first value of pair in asc. order.
		sort(S2.begin(), S2.end(), C2);

		cout << S2.size() << endl;
		for (auto x : S2) {
			cout << x + 1 << " ";
		}
	}

}











