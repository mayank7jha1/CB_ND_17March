#include<iostream>
#include<vector>
using  namespace std;

int F(vector<int>&v, int x) {


	if (x >= v.size()) {
		return 0;
	}

	//Now I am Standing at the xth stair.

	int Op1 = F(v, x + 1);
	int Op2 = F(v, x + 2);

	return v[x] + min(Op1, Op2);
}



int minCostClimbingStairs(vector<int>& cost) {

	/*
		I Have two Points to stand
		at the starting.

		0th Stair
		1st Stair
	*/

	//I am At the 0th Stair.

	int Option1 = F(cost, 0);
	int Option2 = F(cost, 1);

	return min(Option1, Option2);
}





int main() {
	int n;
	cin >> n;

	vector<int>v(n);

	for (int i = 0; i < n; i = i + 1) {
		cin >> v[i];
	}

	cout << minCostClimbingStairs(v) << endl;
}