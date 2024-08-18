#include<iostream>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<vector>
#include<algorithm>
using  namespace std;

int main() {

	int n;
	cin >> n;
	vector<pair<string, int>>v;

	map<string, int>mp;
	unordered_map<string, int>ump;



	for (int i = 0; i < n; i = i + 1) {

		string s;//key
		int x;//Value
		cin >> s >> x;

		v.push_back({s, x});

		mp.insert({s, x});
		ump.insert(make_pair(s, x));

		//Updating the value of s.
		//mp[s] = x;

	}

	// cout << v["Mayank"] << endl;


	cout << mp["Mayank"] << endl;

	//Iterators  and For each

	for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++) {
		cout << (*it).first << " " << it->second << endl;
	}


	cout << endl;

	for (pair<string, int> x : ump) {
		cout << x.first << " " << x.second << endl;
	}




}










