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


int main(){
    node* n1= new node(10);
    cout<<n1->data<<endl;
    cout<<n1->next<<endl;

    return 0;
}