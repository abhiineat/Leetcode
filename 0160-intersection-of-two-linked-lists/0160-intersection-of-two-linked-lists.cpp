/**
 * Definition for singly-linked list.
 * struct ListNode {temp
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*, int>map;
        ListNode* temp=headA;
        while(temp){
            map[temp]+=1;
            temp=temp->next;
        }
        temp=headB;
        while(temp){
            map[temp]+=1;
            if(map[temp]==2)return temp;
            temp=temp->next;
        }
        return nullptr;
    }
};