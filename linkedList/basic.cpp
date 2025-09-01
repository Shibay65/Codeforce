#include<iostream>
using namespace std;
 struct Node
 {int data;
    Node* next;
    Node(int val){
    data=val;
    next=nullptr;    
 }};
 class linkedlist{
    private:
   Node* head;
    public:
    linkedlist(){
         head=nullptr;
    }
    void begin(int val){
        Node*newNode=new Node(val);
        newNode->next=head;
        head=newNode;
    }
    void end(int val){
        Node*newNode=new Node(val);
        if(head==nullptr){
            newNode->next=head;
            return;
        }
        Node*temp=head;
        while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newNode;

    }
    void pos(int val,int p){
        if(p==0){
            begin(val);
            return;
        }
        Node*newNode=new Node(val);
        Node*temp=head;
        for(int i=0;i<p-1;i++){
            if(temp==nullptr){
                cout<<"Out of range";
                return;
            }
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    void display(){
        Node*temp=head;
        while(temp->next!=nullptr){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL.";
    }
    int search(int key){
        Node*temp=head;
        while(temp!=nullptr){
            if(temp->data==key)
            return 1;
           temp=temp->next;
           
        }return 0;
    }
    
    void deletefirst(){
        if(head==nullptr) return;
        Node*temp=head;
        head=head->next;
        delete temp;
    }
void deletelast(){
    if(head==nullptr) return;
    if(head->next==nullptr){
        delete head;
        head=nullptr;
        return;
    }
    Node*temp=head;
    while(temp->next->next!=nullptr)
    temp=temp->next;
    delete temp->next;
    temp->next=nullptr;
}
void atPosition(int pos){
    if(pos==0)
   { deletefirst();
    return;}
    Node*temp=head;
    for(int i=0;i<pos-1;i++){
        temp=temp->next;
    }
    Node*todelete=temp->next;
    temp->next=todelete->next; 
    delete todelete;
   
}



 };
int main(){
        linkedlist ll;
        ll.begin(50);
        ll.begin(40); 
        ll.begin(30);
        ll.begin(10);
        ll.end(60);
        ll.end(70);
        ll.pos(20,1);
        ll.display();

    cout<<endl;
    if(ll.search(70))
    cout<<"found"<<endl;
else  
  cout<<"NOt FOund"<<endl;
ll.atPosition(3);
  ll.display();
}





    
