#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* left;
    Node* right;

    public:
    Node(int x){
        data =x;
        left=right=NULL;
    }
   
};
//find minimum
Node* findMin(Node* root){
    if(root == NULL) return NULL;

    while(root->left != NULL){
        root = root->left;
    }

    return root;
}
//find maximum element val
Node* findMax(Node* root){
    if(root == NULL) return NULL;

    while(root->right != NULL){
        root = root->right;
    }

    return root;
}
Node*  insert(Node*root,int val){
    if(root== NULL) return new Node(val);
    if(root->data <val){
        root->right = insert(root->right,val);
    }
    else {
        root->left = insert(root->left,val);
    }
    return root;

}
void inorder(Node* root){
    if(root== NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
int main(){
    int n;
    cin>>n;
    Node* root= NULL;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        root=insert(root,x);
    }
  inorder(root);
}