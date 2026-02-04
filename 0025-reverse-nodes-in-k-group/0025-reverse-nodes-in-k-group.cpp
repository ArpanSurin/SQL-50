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
        ListNode* prev = nullptr;
        while(temp){
            ListNode* mover = temp->next;
            temp->next = prev;
            prev = temp;
            temp = mover;
        }
        return prev;
    }
    ListNode* KthNode(ListNode* head, int k){
        ListNode* temp = head;
        k--;
        while(temp && k > 0){
            k--;
            temp = temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevNode = nullptr;
        while(temp){
            ListNode* kNode = KthNode(temp, k);
            if(kNode == nullptr){
                if(prevNode) prevNode->next = temp;
                break;
            }

            ListNode* nextNode = kNode->next;
            kNode->next = nullptr;

            reverseList(temp);

            if(temp == head){ head = kNode; }
            else{
                prevNode->next = kNode; 
            }
            prevNode = temp;
            temp = nextNode;
        }
        return head;
    }
};