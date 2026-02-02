/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n1 = 0, n2 = 0;

        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        
        while(temp1){
            temp1 = temp1->next;
            n1++;
        }
        while(temp2){
            temp2 = temp2->next;
            n2++;
        }
        temp1 = headA;
        temp2 = headB;

        int res = abs(n1 - n2);
        if(n1 < n2){            
            while(res--){
                temp2 = temp2->next;
            }
        }else if(n1 > n2){
            while(res--){
                temp1 = temp1->next;
            }
        }
        while(temp1 && temp2){
            if(temp1 == temp2){
                return temp1;
            }else{
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
        }
        return nullptr;
    }
};