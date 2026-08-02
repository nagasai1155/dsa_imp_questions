#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data=x;
        left=nullptr;
        right=nullptr;
    }
};
//bfs using queue(level order);
void levelOrder(Node* root){
    if(root== NULL) return;
    queue<Node*> q;
    q.push(root);
    bool first=true;
    while(!q.empty()){
    Node* curr=   q.front();
    q.pop();
    
    if(!first){
        cout<<"->";
    }
    cout<<curr->data;
    first=false;
   
    if(curr->left != NULL){
        q.push(curr->left);
        
    }
    if(curr->right != NULL){
        q.push(curr->right);
    }
    }

}
//dfs traversals
void preorder(Node* root){
    if(root== NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(Node* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){

    Node* root= new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    //levelOrder(root);
    preorder(root);
}