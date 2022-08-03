#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node* prev;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};




void traverse(node* head){
    node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<",";
        temp=temp->next;
    }
}




void insertatHead(node* &head,int data){
    node* temp = new node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}





void insertatTail(node* &tail,int data){
    node*temp = new node(data);
    temp->prev = tail;
    tail->next=temp;
    tail=temp;
}





int main(){
    node* n1=new node(10);
    node* head=n1;

    node* n2=new node(20);
    node* n3=new node(30);
    
    n1->next=n2;
    n2->prev=n1;
    n2->next=n3;
    n3->prev=n2;

    node* tail=n3;



    insertatHead(head,0);
    insertatTail(tail,40);
    traverse(head);

  

    return 0;
}