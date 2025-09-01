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
static int i=-1;
Node*buildtree(vector<int>pre){
    i++;
    if(pre[i]==-1) 
    return NULL;
    Node*root=new Node(pre[i]);
    root->left=buildtree(pre);
    root->right=buildtree(pre);
    return root;
}


int main(){
vector<int>preOrder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
Node*root=buildtree(preOrder);
cout<<root->data;
cout<<root->left->data;







    
 return 0;
}