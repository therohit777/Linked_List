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
};



void insertatTail(node* &tail){
    node* temp=new node(20);
    temp->next=tail->next;
    tail->next=temp;
    
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
    node* head=n1;
    node* tail=n1;

    insertatTail(tail);   
    traversing(head); 
    return 0;
}