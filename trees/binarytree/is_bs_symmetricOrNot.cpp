#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node*left;
    Node*right;
    public:
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
bool isHelp(Node*left,Node* right){
    if(left==NULL || right==NULL) return left==right;
    if(left->data != right->data) return false;
    return isHelp(left->left,right->right) && isHelp(left->right,right->left);
}
bool isSymmetric(Node* root)
{
    return root==NULL || isHelp(root->left,root->right);
}
int main(){
     Node* root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left= new Node(4);
    root->left->left->left=new Node(66);
    root->left->right= new Node(5);
    root->right->left=new Node(6);
    root->right->left->left=new Node(36);
    root->right->left->left->left=new Node(336);
    root->right->right=new Node(7);
    bool ans=isSymmetric(root);
    if(ans==true){
        cout<<"symmetric";
    }else{
        cout<<"not symmetrix";
    }
    
}