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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp=head;
        ListNode* future=NULL;
       

        for(int i=0;i<right-1;i++){
           
            temp=temp->next;
        }
        future=temp->next;

        temp->next=NULL;

        //reverse

        ListNode* curr=head;
         ListNode* prevleft=NULL;
        for(int i=0;i<left-1;i++ ){
             prevleft=curr;
            curr=curr->next;
        }
        ListNode* ans=curr;

        ListNode* prev=NULL;
        ListNode* next1=NULL;
        while(curr){
           next1=curr->next; 
           curr->next=prev;
           prev=curr;
           curr=next1;    
        }
       if(prevleft)
            prevleft->next = prev;
        else
            head = prev;
        ans->next = future;
        return head;
    }
};