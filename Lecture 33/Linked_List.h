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

template<typename T>
void ReverseLL(node<T>*&head) {

	node<T>*current = head;
	node<T>*prev = NULL;
	node<T>*agla;

	while (current != NULL) {
		agla = current->next;
		current->next = prev;
		prev = current;
		current = agla;
	}
	head = prev;
	//return prev;
}

template<typename T>
node<T>* ReverseLL1(node<T>*&head) {

	node<T>*current = head;
	node<T>*prev = NULL;
	node<T>*agla;

	while (current != NULL) {
		agla = current->next;
		current->next = prev;
		prev = current;
		current = agla;
	}

	head = prev;
	return prev;
}



template<typename T>
node<T>* ReverseLL2(node<T>*&head) {

	//Base Condition
	if (head == NULL or head->next == NULL) {
		return head;
	}

	//Recursion
	node<T>*new_head = ReverseLL2(head->next);

	//Work
	node<T>*current = head;
	current->next->next = current;
	current->next = NULL;

	//Return the Reversed Linked List Head.
	return new_head;
}

template<typename T>
void CycleCreation(node<T>*head, int k) {

	//Create a Cyle from end to k from start.
	node<T>*temp = head;

	//I want to reach the kth node.
	while (k > 1) {
		head = head->next;
		k = k - 1;
	}

	//cout << head->data << " ";

	//I want to reach at the tail/last node.
	while (temp->next != NULL) {
		temp = temp->next;
	}

	//cout << temp->data << " ";
	temp->next = head;
}


template<typename T>
bool IsCycle(node<T>*head) {

	node<T>*slow = head;
	node<T>*fast = head;

	while (fast != NULL and fast->next != NULL) {

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast) {
			return true;
		}
	}
	return false;
}

template<typename T>
void BreakCycle(node<T>*head) {

	if (IsCycle(head) == 0) {
		return;
	}

	node<T>*slow = head;
	node<T>*fast = head;

	while (fast != NULL and fast->next != NULL) {

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast) {
			break;
		}
	}

	//I  have two pointers slow and fast at the
	//same meeting point.

	node<T>*prev = head;//I want this node before
	//Meeting Point.

	while (prev->next != fast) {
		prev = prev->next;
	}

	//Now My Prev is before the meeting point.

	slow = head;

	while (slow != fast) {
		slow = slow->next;
		fast = fast->next;
		prev = prev->next;
	}


	//Slow and Fast are the origin of the cycle
	//and my prev is at the last node.

	prev->next = NULL;
	return;
}












