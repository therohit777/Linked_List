class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        temp=head;
        count=count/2+1;
        
        while(count>1){
            temp=temp->next;
            count--;
        }
        return temp;
        
        
    }
};