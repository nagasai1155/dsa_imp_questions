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
bool searchInbst(Node* root,int key){
    while(root !=NULL){
          
        if(root->data==key){
            return true;
        }else if(root->data > key){
            root=root->left;
        }else{
            root=root->right;
        }
    }
    return false;
}

int minvalueinBST(Node* root){
    if(root==NULL) return -1;
    while(root->left !=NULL){
        root=root->left;
    }
    return root->data;
}
int maxvalueinBST(Node* root){
    if(root==NULL) return -1;
    while(root->right !=NULL){
        root=root->right;
    }
    return root->data;
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
    int key=4;
//    bool ans= searchInbst(root,key);
//    if(ans){
//     cout<<"found";
//    }else{
//     cout<<"not found";
//    }
  int val=  minvalueinBST(root);
  cout<<val<<" ";
}