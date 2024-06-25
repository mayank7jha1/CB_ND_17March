#include<iostream>
#include<string>
#include<algorithm>
#define int long long


using  namespace std;

int N(string &st) {

	int CountS = 0;
	int Noise = 0;

	for (int i = 0; i < st.length(); i = i + 1) {
		if (st[i] == 's') {
			CountS = CountS + 1;
		} else {
			Noise = Noise + CountS;
		}
	}

	return Noise;
}

bool C1(string &x, string &y) {

	//x="May"
	//y="Rah"
	//x+y: MayRah

	string xy = x + y;
	string yx = y + x;

	if (N(xy) > N(yx)) {
		return true;
	} else {
		return false;
	}

	//return N(xy) > N(yx);
}


int32_t main() {
	int n;
	cin >> n;

	string a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	//Arrange this Array on the Basis of Noise
	//in Desc. Order.
	sort(a, a + n, C1);

	string final = "";
	// cout << N("ssshssh") << endl;

	for (int i = 0; i < n; i = i + 1) {
		final = final + a[i];
	}

	cout << N(final) << endl;
}



// a b c:

// ab
// cab ya abc


// Interger Value:
// a b c:


// Bubble Sort: Desc.

// if(a[j]<a[j+1]){
// 	swap
// }

// String:
// a b c

// a and b:

// ab ya ba:

// ab>ba: Yes:

// a and c:


// ac ya ca:  ca>ac:

// c b a:


// a and b compare hota:
// ab>ba:

// c a b====Noise(cab)












































