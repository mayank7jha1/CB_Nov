
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

//First Way : By Using a Third Linked List.
class Solution {
public:
	ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {

		//Base Case:

		if (head1 == NULL) {
			return head2;
		}

		if (head2 == NULL) {
			return head1;
		}


		ListNode* c;

		if (head1->val <= head2->val) {
			c = head1;
			//Recursion ko aage badh jaaye;

			c->next = mergeTwoLists(head1->next, head2);
		} else {


			c = head2;
			c->next = mergeTwoLists(head1, head2->next);
		}

		return c;
	}
};

//You cannot use third ll.(aapko existing ll me merge karna hain)



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
public:
	ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {

		if (head1 == NULL) {
			return head2;
		}

		if (head2 == NULL) {
			return head1;
		}


		if (head1->val <= head2->val) {
			head1->next = mergeTwoLists(head1->next, head2);
			return head1;
		} else {
			head2->next = mergeTwoLists(head1, head2->next);
			return head2;
		}
	}
};