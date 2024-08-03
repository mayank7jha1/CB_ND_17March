#include<iostream>
#include"Node.h"
using  namespace std;


//Write all the functions related to Linked List here.

/*
	 We are presuming the data coming from the user is
	 integer only.
*/
// template<typename T>
// class Linked_list {
// public:
// 	void InsertAtHead(node<T>*&h, int d) {
// 		node<T>*n = new node(d);
// 		n->next = h;
// 		h = n;
// 	}
// 	void Print(node<T>*head) {
// 		//node<T>*temp = head;

// 		while (head != NULL) {
// 			cout << head->data << "-->";
// 			head = head->next;
// 		}
// 		// while (temp != NULL) {
// 		// 	cout << temp->data << "-->";
// 		// 	temp = temp->next;
// 		// }

// 		cout << "NULL" << endl;
// 	}

// 	int Length(node<T>*head) {
// 		int count = 0;
// 		while (head != NULL) {
// 			count = count + 1;
// 			head = head->next;
// 		}
// 		return count;
// 	}

// 	bool SearchInLL(node<T>*head, T key) {
// 		while (head != NULL) {
// 			if (head->data == key) {
// 				return true;
// 			}
// 			head = head->next;
// 		}
// 		return false;
// 	}

// 	bool MidPointInLL(node<T>*head) {
// 		int len = Length(head);
// 	}
// };



template<typename T>
void InsertAtHead(node<T>*&h, int d) {
	node<T>*n = new node(d);
	n->next = h;
	h = n;
}


template<typename T>
void Print(node<T>*head) {
	//node<T>*temp = head;

	while (head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
	// while (temp != NULL) {
	// 	cout << temp->data << "-->";
	// 	temp = temp->next;
	// }

	cout << "NULL" << endl;
}


template<typename T>
int Length(node<T>*head) {
	int count = 0;
	while (head != NULL) {
		count = count + 1;
		head = head->next;
	}
	return count;
}

template<typename T>
bool SearchInLL(node<T>*head, T key) {
	while (head != NULL) {
		if (head->data == key) {
			return true;
		}
		head = head->next;
	}
	return false;
}

template<typename T>
T MidPointInLL(node<T>*head) {
	int len = Length(head);
	len = len / 2;

	while (len > 0) {
		head = head->next;
		len = len - 1;
	}

	return head->data;
}

//Second Mid Point in Even Case.
template<typename T>
node<T>* MidPointInLL2(node<T>*head) {
	node<T>*slow = head;
	node<T>*fast = head;

	while (fast != NULL and fast->next != NULL) {
		slow = slow->next;
		// fast = fast->next;
		// fast = fast->next;
		fast = fast->next->next;
	}
	return slow;
}

//First Mid Point in Even Case.
template<typename T>
node<T>* MidPointInLL3(node<T>*head) {
	node<T>*slow = head;
	node<T>*fast = head->next;

	while (fast != NULL and fast->next != NULL) {
		slow = slow->next;

		fast = fast->next->next;
	}
	return slow;
}









