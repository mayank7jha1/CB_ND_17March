#include<iostream>
#include<cstring>
#include<string>
using  namespace std;

int Length(char* p) {

	int count = 0;
	for (int i = 0; p[i] != '\0'; i = i + 1) {
		count = count + 1;
	}

	return count;
}

void Solve(string &p) {

	p[2] = 'z';

	cout << p << endl;
}

int main() {

	//Char Variable
	//cin.get()

	//Character Array
	//int n;
	// cin >> n;

	// int i = 1;
	// while (i <= n) {
	// 	char x;
	// 	cin >> x;
	// 	cout << x << endl;
	// 	i = i + 1;
	// }

	// char x;
	// while (cin >> x) {
	// 	cout << x;
	// }

	// char x;
	// while (cin.get(x)) {
	// 	cout << x;
	// }

	//char ch[] = {'M', 'a', 'y', 'a', 'n', 'k', '\0'};
	// cout << ch << endl;

	// for (int i = 0; ch[i] != '\0'; i = i + 1) {
	// 	cout << ch[i];
	// }
	// cout << endl;

	//char ch1[] = {"Mayank\0"};
	// cout << ch1 << endl;

	// for (int i = 0; ch1[i] != '\0'; i = i + 1) {
	// 	cout << ch1[i];
	// }
	// cout << endl;

	// char ch2[100];
	// //cin >> ch2;

	// //cout << ch2[3] << endl;
	// //cout << ch2 << endl;

	// cin.getline(ch2, 100);
	// cout << ch2 << endl;

	// int ans = Length(ch2);
	// cout << ans << endl;
	// char ch3[100];

	// for (int i = 0; ch2[i] != '\0'; i = i + 1) {
	// 	ch3[i] = ch2[i];
	// }

	// strcpy(ch3, ch2);//this is not returning anything

	// //Returning the length
	// cout << strlen(ch2) << endl;


	// string st, st1;
	// cin >> st >> st1;


	// cout << st << endl;

	// cout << st[2] << endl;

	// cout << st.front() << endl;
	// cout << st.back() << endl;
	// cout << st.length() << endl;

	// cout << st[0] << " " << st[st.length() - 1];
	// cout << endl;
	//cout << st + st1;

	//Every Container can be copied directly
	//like this. (Except Container Adapter)
	//st1 = st;


	//By Default Every Container is passed
	//by value.

	string st = "Mayannk";

	Solve(st);

	cout << st << endl;


}

















