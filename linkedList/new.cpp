#include<iostream>
using namespace std;
class Node{
    public:
    int data ;
    Node*next;
    Node(int val){
        data=val;
        next=NULL;
    }
}
int main(){
    
Node*head=NULL;

if(head!=NULL){
    Node*temp=new Node(val);
}else{
    Node*temp=new Node(val);
    temp->next=head;
    head=temp;
}

Node*temp=head;
while(temp){
    cout<<temp->data;
    temp=temp->next;
}






    
 return 0;
}