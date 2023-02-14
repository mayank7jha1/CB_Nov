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
    bool isPalindrome(ListNode* head) {
        //Break LL into two parts:

        ListNode* m = mid(head);//Middle point nikalega

        ListNode* h1 = head;
        ListNode* h2 = m->next;
        ReverseLL(h2);

        m->next = NULL;

        while (h1 != NULL and h2 != NULL) {
            if (h1->val != h2->val) {
                return false;
            }

            h1 = h1->next;
            h2 = h2->next;
        }
        return true;
    }
};




