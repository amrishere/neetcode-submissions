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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head || !head->next){
            return nullptr;
        }

        ListNode * dummy = new ListNode(0, head);
        ListNode * l = dummy;
        ListNode * r = head;
        for(int i = 0; i < n ; i++){
            r = r->next;
        }

        while(r){
            r = r->next;
            l = l->next;
        }
        l->next = l->next->next;
        
        return dummy->next;
    }
};
