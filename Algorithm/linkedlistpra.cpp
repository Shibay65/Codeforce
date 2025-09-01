#include<iostream>
using namespace std;
struct Node
{int data;
    Node*next;
    Node(int val){
        data=val;
        next=nullptr;}   
};
void insertion(Node*&head,int val){
    Node*newNode=new Node(val);
    if(head==nullptr){
        head=newNode;
        return ;
    }
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void display(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"NULL";

}
int main(){
    Node*head=nullptr;
    insertion(head,10);
     insertion(head,20);
      insertion(head,30);
       insertion(head,40);
       display(head);
}