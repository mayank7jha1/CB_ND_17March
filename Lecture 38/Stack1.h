#include<iostream>
using  namespace std;
#define MAX 1001


template<typename T>
class Stack1 {
public:

	T a[MAX];
	int Index;


	//Constructor
	Stack1() {
		Index = -1;
	}


	// //Destructor
	~Stack1() {

	}


	void push(T data) {

		if (Index >= (MAX - 1)) {
			return;
		}
		Index = Index + 1;
		a[Index] = data;
		return;
	}

	void pop() {

		if (Index < 0) {
			return;
		}

		Index = Index - 1;
		return;
	}


	bool empty() {
		if (Index == -1) {
			return 1;
		} else {
			return 0;
		}
	}


	T top() {

		if (Index < 0) {
			return -1;
		}

		return a[Index];
	}
};








