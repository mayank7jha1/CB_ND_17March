#include<iostream>
#include"Linked_List.h"
using  namespace std;

int main() {
	int tt;
	cin >> tt;

	node<int>* head = NULL;
	// Linked_list<int>l;

	for (int i = 0; i < tt; i = i + 1) {
		int x;
		cin >> x;
		InsertAtHead(head, x);
	}

	Print(head);
	cout << Length(head) << endl;
	int key;
	cin >> key;
	cout << SearchInLL(head, key) << endl;
	cout << MidPointInLL(head) << endl;

	cout << MidPointInLL2(head)->data << endl;
	cout << MidPointInLL3(head)->data << endl;

}



