#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* left;
    Node* right;
    public:
      Node(int data1){
         data = data1;
         left = right= NULL;
      }
};
//travesals dfs 
void preorder(Node* root){
    if(root== NULL) return;
    cout<<root->data<<"->";
    preorder(root->left);
    preorder(root->right);

}

void postorder(Node*  root){
    if(root== NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"->";
    
}

void inorder(Node* root){
    if(root== NULL) return;
    inorder(root->left);
    cout<<root->data<<"->";
    inorder(root->right);
}
    
//level order traversal bfs
void levelOrder(Node* root){
    if(root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout << temp->data << "->";

        if(temp->left != NULL)
            q.push(temp->left);

        if(temp->right != NULL)
            q.push(temp->right);
    }
}

void level_order(Node* root){
    
    if(root== NULL) return;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<temp->data<<"->";
        if(temp->left != NULL){
            q.push(temp->left);
        }

        if(temp->right != NULL){
            q.push(temp->right);
        }

    }
}


int main(){
    Node* root = new Node(1);
    root->left= new Node(2);
    root->right = new Node(3);
    root->left->left= new Node(4);
    root->left->right=new Node(5);
    root->right->left= new Node(8);
    root->right->left->left= new Node(6);

    level_order(root);
}