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
    ListNode* partition(ListNode* head, int x) {

        ListNode* n = NULL, *le = NULL, *se = NULL;
        ListNode* seh = NULL, *leh = NULL;

        //Break LL into two parts such that
        //one part containes all the element that are
        //smaller than x and other part contains element
        //that are greater than x.

        while (head != NULL) {

            n = head->next;
            if (head->val < x) {
                if (se == NULL) {
                    //Abhi tak smaller ll empty hain.
                    se = seh = head;
                    head->next = NULL;
                    head = n;
                } else {
                    //Smaller ll empty nahi thi and
                    //aap se par khade ho.(se = last node
                    //abhi ka)

                    se->next = head;
                    se = head;//se has to the last element always
                    head->next = NULL;

                    head = n;
                }
            } else {
                if (le == NULL) {
                    le = leh = head;
                    head->next = NULL;
                    head = n;
                } else {


                    le->next = head;
                    le = head;
                    head->next = NULL;

                    head = n;
                }
            }
        }

        if (se != NULL) {
            se->next = leh;
            return seh;
        } else {
            return leh;
        }
    }
};