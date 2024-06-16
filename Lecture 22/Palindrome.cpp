#include<iostream>
#include<algorithm>
using  namespace std;

/*
	A palindrome is a word, sentence, verse,
	or even number that reads the same backward or
	forward.

	madam: madam

	Q: Given a String check if it is a palindrome
	or not?
*/

//Iterators: Containers ke address ko fetch karne
//me help karta hain.
//begin()-->Address of the first bucket
//end()---->Address of the last bucket+1.

/*
	anagram. noun. ana·gram. ˈan-ə-ˌgram. :
	a word or phrase made out of another by
	changing the order of the letters.

	lauren : unreal

	Q: Given two strings check if they are anagram
	of each other or not?

*/

bool Palindrome(string &s) {

	//Reverse the string and check it with the original
	//string.


	int i = 0;
	int j = s.length() - 1;


	while (i < j) {
		if (s[i] != s[j]) {
			return false;
		}

		i = i + 1;
		j = j - 1;
	}

	return true;

	// string t = s;

	// reverse(t.begin(), t.end());

	// if (s == t) {
	// 	return true;
	// } else {
	// 	return false;
	// }

	//s>t or s<t:

}


bool Anagram(string &s, string &t) {

	sort(s.begin(), s.end());
	sort(t.begin(), t.end());
//	cout << s << " " << t << endl;
	if (s == t) {
		return true;
	} else {
		return false;
	}
}


int main() {
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;

	cout << Palindrome(s1) << endl;
	cout << Anagram(s2, s3) << endl;
}