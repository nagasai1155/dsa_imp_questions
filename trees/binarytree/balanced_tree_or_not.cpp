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
int balancedtree(Node* root){//|left-rightsubstree| <=1; means -1or0,1;
    if(root==NULL) return 0;
    int left=balancedtree(root->left);
    if(left==-1) return -1;
    int right=balancedtree(root->right);
    if(right==-1) return -1;
    if(abs(left-right)>1) return -1;
    return 1+max(left,right);

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
    int ans=balancedtree(root);
     if(ans==-1){
        cout<<"it is not balanced tree";
     }else cout<<"it is balanced tree";

}