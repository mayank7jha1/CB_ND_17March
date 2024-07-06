#include<iostream>
using  namespace std;
int x, y;


int F(int i) {
	if (i == y) {
		return x;
	}
	int ans = x * F(i + 1);
	return ans;
}


int main() {
	cin >> x >> y;
	cout << F(1);
}