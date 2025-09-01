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
    int a[6]={1,2,3,4,5,6};
NOde*head=NULL;
Node*tail=NULL;
for (int i = 0; i < 6; i++)
{
    


if(head==NULL){
    head=new Node(a[i]);
    tail=head;
}else{
    tail->next=new Node(a[i]);
    tail=tail->next;
}}

Node*t=head;
cout<<t->data<<" ";
t=t->next;




}