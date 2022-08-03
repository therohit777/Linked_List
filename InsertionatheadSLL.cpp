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



void insertatHead(node* &head){
    node* temp=new node(5);
    temp->next=head;
    head=temp;
}




int main(){
    node* n1= new node(10);
    cout<<n1->data<<endl;
    cout<<n1->next<<endl;

    node* head=n1;
    insertatHead(head);

    cout<<head->data<<endl;
    
    return 0;
}