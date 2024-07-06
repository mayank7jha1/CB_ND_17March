#include<iostream>
#include<algorithm>
#include<math.h>
using  namespace std;
#define int long long


//x^y:x*x*x*-------
int Power(int x, int y) {
	int ans = 1;
	for (int i = 1; i <= y; i = i + 1) {
		ans = ans * x;
	}
	return ans;
}

int32_t main() {
	int n;
	cin >> n;

	int Part1 = 9 * pow(10, n - 1);
	int Part2 = pow(9, n);
	int Part3 = (n - 1) * Power(9, n - 1);

	cout << Part1 - Part2 - Part3 << endl;

}