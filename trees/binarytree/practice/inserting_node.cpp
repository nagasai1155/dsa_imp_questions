#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data,Node* left1,Node* right1){
        this->data=data;
        left=left1;
        right=right1;
    }
    Node(int data){
        this->data=data;
        left=right=NULL;
    }


};
Node* insert(Node* root,int val){
    if(root==NULL) return new Node(val);
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* node=q.front();
        q.pop();
       
        
        if(node->left != NULL){
            q.push(node->left);
            
        }else{
            node->left=new Node(val);
            break;  
        }
        if(node->right != NULL){
            q.push(node->right);
        }else{
            node->right=new Node(val);
            break;
        }

    
    }
    return root;
}

void inorder(Node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){

    Node* root=NULL;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        root=insert(root,x);
    }
    inorder(root);

}