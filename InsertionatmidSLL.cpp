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



void traversing(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<",";
        temp=temp->next;
    }

}
void insertatTail(node* &tail){
    node* temp=new node(20);
    temp->next=tail->next;
    tail->next=temp;
    
}
void insertatHead(node* &head){
    node* temp=new node(5);
    temp->next=head;
    head=temp;
}

void insertatmid(node* &head,int position,int data){
    node* temp=head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    node* newnode =  new node(data);
    newnode->next=temp->next;
    temp->next=newnode;


}


int main(){
    node* n1= new node(10);
    node* n2=new node(20);
    node* n3=new node(30);
    node* n4=new node(40);
    node* n5=new node(50);
    node* head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    insertatmid(head,3,45);
    traversing(head);
    return 0;
}