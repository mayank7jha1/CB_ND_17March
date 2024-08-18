#include<iostream>
using  namespace std;
#define MAX 10

//Circular Queue
template <typename T >
class Queue {
public:

	T*a = new int[MAX];
	// T* a;
	int front;
	int back;
	int cs;
	int ts;

	//Constructor

	Queue() {
		front = back = -1;
		cs = 0;
		ts = MAX;
	}

	Queue(int size) {
		a = new T[size];
		front = back = -1;
		cs = 0;
		ts = MAX;
	}


	void push(int data) {

		if (cs == ts) {
			return;
		}

		if (cs == 0) {
			front = 0;
		}

		back = (back + 1) % ts;
		a[back] = data;
		cs = cs + 1;
	}

	void pop() {

		if (cs == 0) {
			return;
		}

		if (cs == 1) {
			front = back = -1;
		} else {
			front = (front + 1) % ts;
		}

		cs = cs - 1;
	}


	T front1() {

		if (cs == 0) {
			return -1;
		} else {
			return a[front];
		}

	}

	bool empty() {
		if (cs == 0) {
			return 1;
		} else {
			return 0;
		}
	}

	int size() {
		return cs;
	}

};













