class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        ListNode* p1 = list1;
        ListNode* p2 = list2;

        while(p1 != nullptr && p2 != nullptr){
            if(p1->val < p2->val){ 
                tail->next = p1; 
                p1 = p1->next;
            }
            else{
                tail->next = p2;
                p2 = p2->next;
            }
            tail = tail->next;

        }

        if(p1 != nullptr) tail->next = p1;
        if(p2 != nullptr) tail->next = p2;
        return dummy->next;

    }
};