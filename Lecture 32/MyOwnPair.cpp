#include<iostream>
#include"Pair.h"
#include<utility>
using  namespace std;

int main() {
	Pair<string, int>p;
	pair<string, int>p1;

	p1.first = "Mayank";
	p1.second = 250;

	cout << p1.first << " " << p1.second << endl;
}