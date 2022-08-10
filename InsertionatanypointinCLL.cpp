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

void insertion(node* tail ,int element,int data){
  if(tail==NULL){
    node* newnode=new node(data);
    tail = newnode;
    newnode->next=newnode;
    return;
  }
  else{
    node* temp= tail;
    while(temp->data!=element){
        temp=temp->next;
    }
    node* newnode=new node(data);
    newnode->next=temp->next;
    temp->next=newnode;
  }
}

void traverse(node* tail){
    node* temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
}


int main(){
    node* n1=new node(10);
    node* n2=new node(20);
    node* n3=new node(30);
    node* n4=new node(40);
    node* n5=new node(50);

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=n1;
    
    node* tail=n5;
    insertion(tail,10,5);
     traverse(tail);

    return 0;
}