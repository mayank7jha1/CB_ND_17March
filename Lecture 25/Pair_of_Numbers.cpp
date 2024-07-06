#include<iostream>
using  namespace std;
int target;

int F(int x, int y) {

	if (x > target or y > target) {
		return 1e8;
	}
	if (x == target or y == target) {
		return 0;
	}
	int Op1 = 1 + F(x + y, y);
	int Op2 = 1 + F(x, x + y);

	int ans = min(Op1, Op2);
	return ans;

}

int main() {

	cin >> target;
	cout << F(1, 1);
}