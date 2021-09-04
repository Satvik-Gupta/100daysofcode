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
    ListNode* middleNode(ListNode* head) {
        
        ListNode* n = head;
        ListNode* n_2 =head;
        
        while(n_2 -> next !=NULL)
        {
            n = n->next;
            n_2 = n_2->next;
            if(n_2 == NULL) break;
            n_2 = n_2->next;
            if(n_2 == NULL) break;
        }
        return n;
    }
};