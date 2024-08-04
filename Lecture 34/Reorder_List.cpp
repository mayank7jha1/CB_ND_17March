
#include<iostream>
using  namespace std;

class ListNode {
public:
    int val;
    ListNode *next;

    ListNode() {
        val = 0;
        next = NULL;
    }

    ListNode(int x) {
        val = x;
        next = NULL;
    }

    ListNode(int x, ListNode *next) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:

    ListNode* MidPointInLL2(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != NULL and fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    void ReverseLL(ListNode*&head) {
        ListNode*current = head;
        ListNode*prev = NULL;
        ListNode*agla;

        while (current != NULL) {
            agla = current->next;
            current->next = prev;
            prev = current;
            current = agla;
        }
        head = prev;
    }

    void reorderList(ListNode* head) {

        if (head == NULL or head->next == NULL) {
            return;
        }

        //Break the Linked List about Mid Point.
        ListNode* mid = MidPointInLL2(head);
        ListNode* h = head;
        ListNode* DusriLLhead = mid->next;

        //Break the Linked List:
        mid->next = NULL;

        //Reverset the second LL.
        ReverseLL(DusriLLhead);


        //Attachment Work:
        ListNode* x, *y;


        while (DusriLLhead != NULL) {

            x = h->next;
            y = DusriLLhead->next;

            h->next = DusriLLhead;
            h = x;

            DusriLLhead->next = h;
            DusriLLhead = y;

        }
    }
};

int main() {

}













