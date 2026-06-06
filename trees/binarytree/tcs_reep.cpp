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
    Node* newNode= new Node(val);
    if(root==NULL) return newNode;
    queue<Node*>  q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp->left==NULL){
            temp->left=newNode;
            break;
        }else{
          q.push(temp->left);
        }

        if(temp->right==NULL){
            temp->right=newNode;
            break;
        }else{
            q.push(temp->right);
        }
    }
    return root;
}
void inorder(Node* root){

    if(root == NULL) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
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
    inorder(root);
    
}