#include<iostream>
#include<vector>
#include<climits>
using  namespace std;

int n;
vector<int>height;
// int *height;

int Solve(int x) {

	if (x == n) {
		return 0;
	}

	//I can take a Jump of 1 Step.
	int Op1 = abs(height[x] - height[x + 1]) + Solve(x + 1);

	//I can take a jump of 2 Step.
	int Op2 = INT_MAX;
	if (x + 2 <= n) {
		Op2 = abs(height[x] - height[x + 2]) + Solve(x + 2);
	}

	int ans = min(Op2, Op1);
	return ans;
}


int main() {

	cin >> n;

	//I am Following 1 based Indexing.
	height.resize(n + 1);
	// height = new int[n + 1];

	for (int i = 1; i <= n; i = i + 1) {
		cin >> height[i];
	}

	cout << Solve(1) << endl;


}