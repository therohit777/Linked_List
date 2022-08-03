#include<iostream>
using namespace std;

class node{
    public:
       int data;
       node* next;
       node(int data){
          this->data=data;
          this->next=NULL;
       }
       ~node(){
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }

       }
};

void  Delete_at_anyposition(node* &head,node* &tail,int pos){
    if(pos==1){
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;

    }
    else{
        node* prev=NULL;
        node* current=head;
        int count=1;
        while(count<pos){
            prev=current;
            current=current->next;
            count++;
        }
        prev->next=current->next;
        current->next=NULL;
        delete current;
       
    }
}

void traversing(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<",";
        temp=temp->next;
    }

}


int main(){
    node* n1= new node(10);
    node* n2= new node(20);
    node* n3= new node(30);
    node* n4= new node(40);
    node* n5= new node(60);

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    node* tail=n5;
    node* head=n1;


    Delete_at_anyposition(head,tail,1);
    traversing(head);
       
    return 0;
}