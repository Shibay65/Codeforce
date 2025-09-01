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
Node*temp=head;
while(temp){
    cout<<temp->data<<"  ";
    temp=temp->next;
}   
 return 0;
}