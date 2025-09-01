#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
    
};
Node*insert(Node*root,int k){
    if(root==NULL){
        return new Node(k);
    }
    if(k<root->data)
    root->left=insert(root->left,k);

 else if(k>root->data)
    root->right=insert(root->right,k);
return root;
}
void inorder(Node*root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);

    }
}
bool search(Node*root,int key){
    if(root==NULL){
        return false;
    }
    if(root->data==key){
        return true;
    }
    if(key<root->data){
        return search(root->left,key);
    }
    else
    {
        return search(root->right,key);
    }
}
Node*deleteNode(Node*root,int key){
if(root==NULL){
    return root;
}
if(key<root->data){
    root->left= deleteNode(root->left,key);
}
else if(key>root->data){
    root->right=deleteNode(root->right,key);
}
else{
    if(root->left==NULL){
        Node*temp=root->right;
        delete root;
        return temp;
    }
    else if (root->right==NULL){
        Node*temp=root->left;
        delete root;
        return temp;
    }
    Node*temp=root->right;
    while(temp && temp->left!=NULL)
    temp=temp->left;
root->data=temp->data;
root->right=deleteNode(root->right,temp->data);
}
return root;
}



int main(){
 Node* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);
    inorder(root);
    cout<<endl;
int key=65;
cout<<(search(root,key)? "found":"Not Found")<<endl;
int k=60;
deleteNode(root,k);

inorder(root);



    
 return 0;
}