#include<iostream>
#include"../Lecture 33/Linked_List.h"
using  namespace std;

int main() {

	int tt;
	cin >> tt;

	node<int>* head = NULL;

	for (int i = 0; i < tt; i = i + 1) {
		int x;
		cin >> x;
		InsertAtHead(head, x);
	}

	Print(head);
	// cout << Length(head) << endl;
	// int key;
	// cin >> key;
	// cout << SearchInLL(head, key) << endl;
	// cout << MidPointInLL(head) << endl;

	// cout << MidPointInLL2(head)->data << endl;
	// cout << MidPointInLL3(head)->data << endl;

	// ReverseLL(head);
	// Print(head);

	//You are creating a new Linked List.
	// node<int>*head1 = ReverseLL1(head);
	// Print(head1);
	// Print(head);

	// node<int>*head2 = ReverseLL2(head);
	// Print(head2);

	//Print(head);

	int k;
	cin >> k;

	cout << IsCycle(head) << endl;
	CycleCreation(head, k);

	cout << IsCycle(head) << endl;
	BreakCycle(head);

	cout << IsCycle(head) << endl;


}









