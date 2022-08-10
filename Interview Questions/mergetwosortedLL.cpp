class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        
        ListNode* newl=NULL;
        
        
        
        if(temp1==NULL && temp2==NULL){
            return newl;
        }
        else if(temp1==NULL && temp2!=NULL){
            return temp2;
        }
        else if(temp1!=NULL && temp2==NULL){
            return temp1;
        }
        
        
        
        if(temp1->val >= temp2->val ){
           newl=temp2;
           temp2=temp2->next;
        }
        else{
           newl=temp1;
           temp1=temp1->next;  
        }
        
        ListNode* temp3=newl;
        
        while(temp1!=NULL && temp2!=NULL){
            cout<<temp1->val<<","<<temp2->val<<endl;
            if(temp1->val >= temp2->val ){
                newl->next=temp2;
                newl=temp2;
                temp2=temp2->next;
            }
            else if(temp1->val < temp2->val ){
                newl->next=temp1;
                newl=temp1;
                temp1=temp1->next;
            }
        }
        while(temp2!=NULL){
              newl->next=temp2;
              newl=temp2;
              temp2=temp2->next;
        }
        while(temp1!=NULL){
             newl->next=temp1;
             newl=temp1;
             temp1=temp1->next;
        }
        
        
        return temp3;
        
    }
};