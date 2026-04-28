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
    ListNode* reverseList(ListNode* head){
        ListNode* temp = head;
        ListNode* nextNode = nullptr;
        ListNode* prevNode = nullptr;
        while(temp != nullptr){
            nextNode = temp->next;
            temp->next = prevNode;
            prevNode = temp;
            temp = nextNode;
        }
        return prevNode;
    }

    void reorderList(ListNode* head) {
        ListNode* temp = head;
        ListNode* slow = temp;
        ListNode* fast = temp;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* first = head;
        ListNode* second = reverseList(slow->next);
        slow->next = nullptr;
        while(second){
            ListNode *tmp1 = first->next, *tmp2 = second->next;
            first->next = second;
            second->next = tmp1;

            first = tmp1;
            second = tmp2;
        }
    }
};