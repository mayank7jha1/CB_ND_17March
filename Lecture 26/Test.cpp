#include<iostream>
#include<climits>

using  namespace std;
int Min_Steps = INT_MAX;//This Stores the min steps to reach target
//across all paths.
int target;

//Count: Current Path me kitne steps lage hain.

void Function(int a, int b, int count) {
	if (a == 1 and b == 1) {
		Min_Steps = min(Min_Steps, count);
		return;
	}

	if (a - b > 0) {
		Function(a - b, b, count + 1);
	}

	if (b - a > 0) {
		Function(a, b - a, count + 1);
	}
}

void Pair() {

	if (target == 1) {
		Min_Steps = 0;
		return;
	}

	//Main ye Target konse konse pair se bana sakta hu?
	for (int x = 1; x < target; x = x + 1) {
		//Current Pair: (x,target-x)
		Function(x, target - x, 1);
	}
}

int main() {

	cin >> target;
	Pair();

	cout << Min_Steps << endl;

}