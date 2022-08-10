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

void deletion(node* &tail ,int element){
  if(tail==NULL){
    cout<<"tail is empty bro!";
    return;
  }
  else{
   node* prev=tail;
   node* current=prev->next;
   while(current->data!=element){
    prev=current;
    current=current->next;
   }
   prev->next=current->next;
   if(current==prev){
    tail=NULL;
   }
   if(tail==current){
    tail=prev;
   }
   current->next=NULL;
   delete current;
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
    deletion(tail,50);
     traverse(tail);

    return 0;
}