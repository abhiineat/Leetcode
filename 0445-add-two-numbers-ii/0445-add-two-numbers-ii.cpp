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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3=reverse(l1);
        ListNode* l4=reverse(l2);
        ListNode* a=new ListNode();
        ListNode* temp=a;
        int c=0,b=0;
        while(l3 || l4){
            if(l3!=nullptr){
                b+=l3->val;
                l3=l3->next;
            }
            if(l4!=nullptr){
                b+=l4->val;
                l4=l4->next;
            }
            c=b/10;
            temp->next=new ListNode(b%10);
            temp=temp->next;
            b=c;
        }
        ListNode* ans=a->next;
        delete(a);
        ListNode* ans1=reverse(ans);
        if(c){
            c=b/10;
            ListNode* answer=new ListNode(b%10);
            answer->next=ans1;
            return answer;
        }
        else{
            return ans1;
        }
        
        
        

    }

    ListNode* reverse(ListNode* head) {
        ListNode* temp=head;
        ListNode* back=nullptr;
        ListNode* front;
        while(temp!=nullptr){
            front=temp->next;
            temp->next=back;
            back=temp;
            temp=front;
        }
        return back;
    }
};