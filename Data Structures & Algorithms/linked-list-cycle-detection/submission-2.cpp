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
    bool hasCycle(ListNode* head) {
        ListNode* slowNode = head;
        ListNode* fastNode = head;
       
        
        while(slowNode && fastNode){
            if(fastNode->next){
                 fastNode = fastNode->next->next;
            }else{
                return false;
            }
            slowNode = slowNode->next;
            if(fastNode == slowNode){
                return true;
            }
        }

        return false;
    }
};
