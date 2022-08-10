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
    void recur(ListNode* &head,ListNode* prev,ListNode* current){
        if(current==NULL){
            return ;
        }
        ListNode* forward=current->next;
        current->next=prev;
        prev=current;
        head=current;
        recur(head,prev,forward);
    }
    
    ListNode* reverseList(ListNode* head) {
      
    // ITERATIVE APPROACH  
       ListNode* prev = NULL;
       ListNode* current = head;
       while(current!=NULL){
           ListNode* forward = current->next;
           current->next=prev;
           prev = current;
           current = forward;
       }
       head=prev;
       return head;  

    // RECURSIVE APPROACH
       ListNode* prev = NULL;
       ListNode* current = head; 
       recur(head,prev,current);
       return head;
    }
};