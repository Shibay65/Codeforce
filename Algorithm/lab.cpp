#include<iostream>
using namespace std;

struct Node{
int data;
Node* left;
Node* right;
Node(int val){
data=val;
left = right = nullptr;

}
};
Node*insert(Node*root, int val){
if(root==nullptr)
    return new Node(val);
if(val<root->data){
    root->left=insert(root->left,val);
}
else
root->right=insert(root->right,val);
return root;
}
Node*findmin(Node*root){
    while(root->right!=nullptr){
        root=root->right;
    }
    return root;
}
Node*deleteNode(Node*root,int val){
if(root==nullptr)
return nullptr;
if(val<root->data){
  root->left=  deleteNode(root->left,val);
}
else if (val>root->data)
{
root->right  deleteNode(root->right);  
}
else
{if(root->right==nullptr && root->left==nullptr){
    delete root;
    return nullptr;
}
else if(root->right ==nullptr){
    Node*temp=root->left;
    delete root;
    return temp;
}
else if (root ->left==nullptr)
{
  Node*temp=root->right;
  delete root;
  return temp;
  
}
else{
    Node*temp=findmin(root->right);
    root->data=temp->data;
    root->right=deleteNode(root->right,temp->data);
}}


}



void inorder(Node*root){
if(root==nullptr)
    return ;

    inorder(root->left);
    cout<<root->data;
    cout<<"->";
    inorder(root->right);
   }




int main(){
Node*root=nullptr;
root=insert(root,10);
root=insert(root,20);
root=insert(root,5);
root=insert(root,30);
root=insert(root,15);
root=insert(root,40);
root=insert(root,35);

inorder(root);
deleteNode(root,10);
inorder(root);
}




