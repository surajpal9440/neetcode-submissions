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
    ListNode* merge(ListNode* list1,ListNode* list2){
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* dummy=new ListNode(0);
        ListNode* curr=dummy;

        while(temp1 && temp2){
            if(temp1->val<temp2->val){
                curr->next=temp1;
                temp1=temp1->next;
            }
            else{
                curr->next=temp2;
                temp2=temp2->next;
            }
            curr=curr->next;
        }
        if(temp1){
            curr->next=temp1;
        }
        if(temp2){
            curr->next=temp2;
        }
        return dummy->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)
          return NULL;
        ListNode* list1=lists[0];
        for(int i=1;i<lists.size();i++){
            list1=merge(list1,lists[i]);
        }
        return list1;
    }
};
