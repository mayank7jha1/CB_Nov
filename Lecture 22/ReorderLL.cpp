/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    ListNode* mid(ListNode* head) {
        if (head == NULL or head->next == NULL) {
            return head;
        }

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != NULL and fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }

    void ReverseLL(ListNode* &head) {
        ListNode* current = head;
        ListNode* prev = NULL;
        ListNode* n;

        while (current != NULL) {
            n = current->next;
            current->next = prev;
            prev = current;
            current = n;
        }
        head = prev;
    }
public:
    void reorderList(ListNode* head) {

        if (head == NULL or head->next == NULL) {
            return;
        }

        ListNode* m = mid(head);
        ListNode* h1 = head;
        ListNode* h2 = m->next;
        m->next = NULL;

        ReverseLL(h2);

        //Merging :

        ListNode *x, *y;

        while (h2) {
            x = h1->next;
            y = h2->next;

            h1->next = h2;
            h1 = x;
            h2->next = h1;
            h2 = y;
        }
    }
};