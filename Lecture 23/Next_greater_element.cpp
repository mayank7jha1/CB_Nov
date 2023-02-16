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
	vector<int> nextLargerNodes(ListNode* head) {


		//Iterate over the LL and then find out the next greater
		//element for every element.
		vector<int>ans;

		while (head != NULL) {

			ListNode*temp = head;
			while (temp != NULL and temp->next <= head->val) {
				temp = temp->next;
			}

			if (temp != NULL) {
				ans.push_back(temp->val);
			} else {
				ans.push_back(0);
			}
			head = head->next;
		}

		return ans;
	}
};

//O(n^2):


// 4->3->1->6->NULL


// head = 4;

// 3: kya  3 4 se bada hain?

// temp=1:


// 4: 6

// temp=6

