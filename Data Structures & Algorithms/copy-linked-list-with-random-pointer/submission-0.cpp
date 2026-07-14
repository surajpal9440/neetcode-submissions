/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;ww
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*>mp;

        //pehle copy kiya same list ko
        Node* dummy=new Node(0);
        Node* currdummy=dummy;

        Node* temp=head;

        while(temp){
            Node * createnode=new Node(temp->val);
            createnode->val=temp->val;
            currdummy->next=createnode;
            mp[temp]=createnode;
            currdummy = createnode;
            temp=temp->next;
        }
            temp=head;
        while(temp){
            mp[temp]->random=mp[temp->random];
             temp=temp->next;
        }

        return dummy->next;

        
    }
};
