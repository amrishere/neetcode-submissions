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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr && list2 == nullptr){
            return nullptr;
        }else if(list1 && list2 == nullptr){
            return list1;
        }else if(list1 == nullptr && list2){
            return list2;
        }

        ListNode * res;
        if(list1->val <= list2->val){
            res = list1;
            list1 = list1->next;
        }else{
            res = list2;
            list2 = list2->next;
        }

        ListNode * tempHead = res;
        while(list1 || list2){
            if((list1 && (!list2 || list1->val <= list2->val))){
                tempHead->next = list1;
                tempHead = tempHead->next;
                list1 = list1->next;
            }else{
                tempHead->next = list2;
                tempHead = tempHead->next;
                list2 = list2->next;
            }
        }

        return res;
    }
};
