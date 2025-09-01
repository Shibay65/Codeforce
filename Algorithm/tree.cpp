#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
static int idx=-1;
Node*buildTree(vector<int>preOrder){
idx++;
if(preOrder[idx]==-1) return NULL;
Node*root=new Node(preOrder[idx]);
root->left=buildTree(preOrder);
root->right=buildTree(preOrder);
return root;

}
void preOrder(Node*root){
    if(root==NULL)
    return;
cout<<root->data<<" ";
preOrder(root->left);
preOrder(root->right);

}
void inOrder(Node*root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void postOrder(Node*root){
    if(root==NULL)
    return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
//ek line ek line print kora
void levelOrder(Node*root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while (q.size()>0){
        Node*curr=q.front();
        q.pop();
        if(curr==NULL){
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            }else{
            break;
        }
        }
        cout<<curr->data<<" ";
        if(curr->left!=NULL)
        q.push(curr->left);
    if(curr->right!=NULL)
    q.push(curr->right);
    }
   
}
//searching 
bool search(Node*root,int key){
    if(root==NULL)
    return false;
if(root->data==key)
return true;
if(key<root->data){
    return search(root->left,key);
}else
    return search(root->right,key);

}
Node* findMin(Node* root) {
    while (root->left != nullptr) root = root->left;
    return root;
}

Node* deleteNode(Node* root, int key) {
    if (root == nullptr) return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        // Node with only one child or no child
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Node with two children
        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}


int main(){
vector<int>pre={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
Node*root=buildTree(pre);
preOrder(root);
cout<<endl;
inOrder(root);
cout<<endl;
postOrder(root);
cout<<endl;
cout<<endl;
levelOrder(root);
cout<<endl;
int key=5;
if(search(root, key))
cout<<"paisi";
else
{
    cout<<"paisi na";
}
  
 return 0;
}