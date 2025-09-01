#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
int main(){
Node*head=NULL;
Node*tail=NULL;
int arr[5]={6,5,4,3,2};
for(int i=0;i<5;i++){
if(head==NULL){
   head=new Node(arr[i]);
   tail=head;
}else{
   tail->next=new Node(arr[i]);
   tail=tail->next;
    }
   
}
Node*temp=head;
while(temp!=NULL){
    cout<<temp->data;
    temp=temp->next;
}


 

}








    

