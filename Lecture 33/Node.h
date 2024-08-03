#include<iostream>
using  namespace std;


template<typename T>

class node {
public:
	T data;
	node* next;

	//Default Constructor
	node() {

	}

	//Parameterised Constructor
	node(T inputdata) {
		data = inputdata;
		next = NULL;

	}
};


