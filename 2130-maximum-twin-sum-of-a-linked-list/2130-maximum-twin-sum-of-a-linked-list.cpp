/*
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
    ListNode* reverseList(ListNode* head){
        ListNode *temp = head, *nextnode = nullptr, *prevnode = nullptr;
        while(temp){
            nextnode = temp->next;
            temp->next = prevnode;
            prevnode = temp;
            temp = nextnode;
        }
        return prevnode;
    }

    int pairSum(ListNode* head) {

        if(head == nullptr || head->next == nullptr){ return head->val; }
        if(head->next->next == nullptr) { return head->val + head->next->val; }

        ListNode *slow = head, *fast = head, *prev=nullptr;
        while(fast && fast->next){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *second = reverseList(slow);
        prev->next = nullptr;

        int sum = 0;
        int max_sum = 0;
        ListNode *first = head;
        while(first && second){
            sum = first->val + second->val;
            max_sum = max(sum, max_sum);
            first = first->next;
            second = second->next;
        }
        return max_sum;
    }
};