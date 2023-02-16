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
	int numComponents(ListNode* head, vector<int>& nums) {
		int n = nums.size();
		int freq[10001] = {0};

		for (int i = 0; i < n; i++) {
			int x = nums[i];
			freq[x]++;
		}

		//Iterating over the LinkedList.
		int ans = 0;

		while (head != NULL) {
			if ((freq[head->val] == 1) and (head->next == NULL or
			                                freq[head->next->val] == 0)) {
				ans++;
			}
			head = head->next;
		}
		return ans;
	}
};


//COmplete nahi hua?


// 1->2->3->10->4->5->NULL;

// 1 2 3 5


// component1: 1->2->3
// component2: 5