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
        ListNode * temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }

        //1 → 2 → 3 → 4 → 5 before
        // 2 → 3 → 4 → 5    after
        //managing first node  supp n=5 ,count=5 aya , means apne ko piche se from end se 5th node delete krni hai jo ki pehli hogi
        if(count==n){
            ListNode * newHead = head->next;
            delete head;
            return newHead;

        }

        int del=count-n;

        ListNode * curr=head;
        ListNode * prev=NULL;
        for(int i=0;i<del;i++){
            prev=curr;
            curr=curr->next;
        }

        //now delete
        prev->next=curr->next;
        delete curr;

        return head;
    }
};
