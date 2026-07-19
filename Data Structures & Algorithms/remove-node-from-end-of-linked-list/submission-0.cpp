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

        ListNode * prev = new ListNode(0);
        ListNode * l = head;
        ListNode * r = head;
        int size = 1;

        while(true){
            if(r->next){
                size++;
                r = r->next;
            }else{
                break;
            }
        }

        int L_to_move = size - n;
        int incre_l = 0;

        while(true){
            if(L_to_move != incre_l){
                prev = l;
                l = l->next;
                incre_l++;
            }else{
                if(L_to_move != 0){
                    prev->next = l->next;
                    l->next = nullptr;
                    break;
                }else{
                    head = head->next;
                    break;
                }
               

            }
        }

        return head;

    }
};
