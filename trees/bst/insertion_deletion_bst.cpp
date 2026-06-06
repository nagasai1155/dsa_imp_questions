#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

Node* insert(Node* root,int val){
    if(root==NULL) return new Node(val);
    if(val <root->data){
        root->left=insert(root->left,val);

    }else {
        root->right=insert(root->right,val);
    }
    return root;
}

void inorder(Node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<"->";
    inorder(root->right);
}
Node* deleteNode(Node* root,int key){
    if(root==NULL) return NULL;
    if(key < root->data){
        root->left=deleteNode(root->left,key);
    }else if(key > root->data){
        root->right = deleteNode(root->right,key);
    }else{
        //case1:no left child
        //case2:no right child
        //case3:having two nodes delte left most node in right substree
        if(root->left==NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        if(root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        Node* succ=root->right;
        while(succ->left){
            succ=succ->left;
        }
        root->data=succ->data;
        root->right=deleteNode(root->right,succ->data);
    }
    return root;
}
int main(){
    int n;
    cin>>n;
    Node* root=NULL;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        root=insert(root,x);
    }
    deleteNode(root,6);
    inorder(root);

}