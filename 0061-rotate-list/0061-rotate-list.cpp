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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* tail = head;
        int len = 1;
        while(tail->next != nullptr){
            tail = tail->next;
            len++;
        }
        if(k % len == 0) return head;
        k = k % len;
        tail->next = head;

        ListNode* temp = head;
        int stop = len - k - 1;
        while(stop--){
            temp = temp->next;
        }
        head = temp->next;
        temp->next = nullptr;
        return head;
    }
};