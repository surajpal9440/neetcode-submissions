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
    void reorderList(ListNode* head) {
        //split krenge pehle slow and fast ptr se
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;

        }
        ListNode* temp=slow->next;
        slow->next=NULL;

        //reverse krenge sec half
        ListNode* prev=NULL;
        ListNode* future=NULL;
        while(temp){
            future=temp->next;
            temp->next=prev;
            prev=temp;
            temp=future;
        }
    //merge alternately ek ek node 
        ListNode* curr=head;
        while(prev){
            ListNode* next1=curr->next;
            ListNode* next2=prev->next;
            curr->next=prev;
            prev->next=next1;
        

            curr=next1;
            prev=next2;
           
            
        }
        
    }
};