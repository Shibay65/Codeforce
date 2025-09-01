#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
int main(){
        int a[5]={2,3,4,5,6};
    Node*head=NULL;
    for(int i=0;i<5;i++){
    if(head==NULL){
        head=new Node(a[i]);
    }else{
        Node*t=new Node(a[i]);
        t->next=head;
        head=t;

    }
    }
   if(head !=nullptr){
    if(head->next==NULL){
        Node*temp=head;
        delete temp;
        head=nullptr;
    }else{
        Node*curr=head;
        Node*prev=NULL;
        while(curr->next!=NULL){
            prev=curr;
            curr=curr->next;
        }
        delete curr;
        prev->next=NULL;
    }
 while(head!=NULL){
    Node*temp=head;
     head=head->next;
    delete temp;
   
   }
   }
  




Node*temp=head;
while(temp){
    cout<<temp->data<<"  ";
    temp=temp->next;
}   
 return 0;
}