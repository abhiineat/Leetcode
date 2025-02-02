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
        ListNode* fast=head;
        ListNode* slow=head;
        if(head->next==NULL ){
            return nullptr;
        }
        // if()
        while(n>0){
            if(fast->next!=nullptr)fast=fast->next;
            else{
                head=head->next;
                return head;
            }
            n--;
        }
        while(fast->next !=nullptr){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* del=slow->next;
        slow->next=slow->next->next;
        delete(del);
        return head;
    }
};